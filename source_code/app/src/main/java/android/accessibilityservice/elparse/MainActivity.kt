package android.accessibilityservice.elparse
import android.accessibilityservice.AccessibilityService
import android.accessibilityservice.AccessibilityServiceInfo
import android.accessibilityservice.elparse.ui.theme.ElparseTheme
import android.os.Bundle
import android.util.Log
import android.view.accessibility.AccessibilityEvent
import android.view.accessibility.AccessibilityNodeInfo
import androidx.activity.ComponentActivity
import androidx.activity.compose.setContent
import androidx.activity.enableEdgeToEdge
import androidx.compose.foundation.layout.fillMaxSize
import androidx.compose.foundation.layout.padding
import androidx.compose.material3.Scaffold
import androidx.compose.material3.Text
import androidx.compose.runtime.Composable
import androidx.compose.ui.Modifier
import androidx.compose.ui.tooling.preview.Preview

class MyAccessibilityService : AccessibilityService() {
    override fun onAccessibilityEvent(event: AccessibilityEvent?) {

        if (event == null) return

        try {
            if (event.source?.parent!=null){
                event.source?.let { printNodeInfo(it.parent) }
            }
            else {
                event.source?.let { printNodeInfo(it) }
            }
        } catch (ignored: Exception)  {
            return
        }
    }
    override fun onInterrupt() {
        Log.e("IMPORTANT", "onInterrupt: Service is interrupted")
    }


    override fun onServiceConnected() {

        val info = AccessibilityServiceInfo()

        info.apply {
            eventTypes = AccessibilityEvent.TYPES_ALL_MASK
        }

        this.serviceInfo = info
        Log.i("INFO", "onServiceConnected: Service is connected")

    }
}

private fun printNodeInfo(nodeInfo: AccessibilityNodeInfo) {
    Log.d("t", "Q; AccessNodeInfo: $nodeInfo")
    for (i in 0 until nodeInfo.childCount) {
        try {
            nodeInfo.getChild(i)?.let { printNodeInfo(it) };
        } catch (ignored: Exception) {
            continue
        }
    }
}

class MainActivity : ComponentActivity() {
    override fun onCreate(savedInstanceState: Bundle?) {
        super.onCreate(savedInstanceState)
        enableEdgeToEdge()
        setContent {
            ElparseTheme {
                Scaffold(modifier = Modifier.fillMaxSize()) { innerPadding ->
                    Greeting(
                        name = "Android",
                        modifier = Modifier.padding(innerPadding)
                    )
                }
            }
        }
    }
}

@Composable
fun Greeting(name: String, modifier: Modifier = Modifier) {
    Text(
        text = "Hello $name!",
        modifier = modifier
    )
}

@Preview(showBackground = true)
@Composable
fun GreetingPreview() {
    ElparseTheme {
        Greeting("Android")
    }
}