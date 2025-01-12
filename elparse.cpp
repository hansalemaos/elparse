#define _CRT_SECURE_NO_WARNINGS

#include <algorithm>
#include <any>
#include <array>
#include <atomic>
#include <barrier>
#include <bit>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfenv>
#include <cfloat>
#include <charconv>
#include <chrono>
#include <cinttypes>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <concepts>
#include <condition_variable>
#include <coroutine>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdint>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <execution>
#include <filesystem>
#if __has_include(<format>)
#include <format>
#define HAS_STD_FORMAT 1
#else
#define HAS_STD_FORMAT 0
#endif
#include <csignal> // For signal handling
#include <forward_list>
#include <fstream>
#include <functional>
#include <future>
#include <initializer_list>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <latch>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <memory_resource>
#include <mutex>
#include <new>
#include <numbers>
#include <numeric>
#include <optional>
#include <ostream>
#include <queue>
#include <random>
#include <ranges>
#include <ratio>
#include <regex>
#include <scoped_allocator>
#include <set>
#include <shared_mutex>
#include <signal.h>
#include <source_location>
#include <span>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <stdio.h>
#include <stdlib.h>
#include <stop_token>
#include <streambuf>
#include <string>
#include <string_view>
#include <syncstream>
#include <system_error>
#include <thread>
#include <tuple>
#include <type_traits>
#include <typeindex>
#include <typeinfo>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <variant>
#include <vector>

#ifdef _WIN32
#include <windows.h>

#define EXEC_CMD(command, mode) _popen(command, mode)
#define CLOSE_CMD(pipe) _pclose(pipe)
#else
#include <unistd.h>
#define EXEC_CMD(command, mode) popen(command, mode)
#define CLOSE_CMD(pipe) pclose(pipe)
#endif
void sleepcp(int32_t milliseconds);

void sleepcp(int32_t milliseconds)
{
#ifdef _WIN32
    Sleep(milliseconds);
#else
    usleep(milliseconds * 1000);
#endif
}
void sleepcp(int32_t milliseconds);

typedef struct final_struct
{
    std::string Text;
    std::string ContentDescription;
    std::string StateDescription;
    std::string ClassName;
    std::string PackageName;
    std::string Error;
    std::string AccessNodeInfo;
    std::string WindowId;
    std::string WindowChanges;
    std::string WindowChangeTypes;
    std::string VirtualDescendantId;
    std::string ViewIdResName;
    std::string UniqueId;
    std::string TraversalBefore;
    std::string TraversalAfter;
    std::string TooltipText;
    std::string TimeStamp;
    std::string TimeNow;
    std::string SpeechStateChangeTypes;
    std::string SourceWindowId;
    std::string SourceNodeId;
    std::string SourceDisplayId;
    std::string Source;
    std::string Sealed;
    std::string Records;
    std::string ParentNodeId;
    std::string ParcelableData;
    std::string MovementGranularities;
    std::string HashCode;
    std::string EventType;
    std::string Actions;
    std::string ContentChangeTypes;
    std::string ConnectionId;
    std::string ChildAccessibilityIds;
    std::string BooleanProperties;
    std::string BeforeText;
    std::string Active;
    std::string AccessibilityViewId;
    std::string AccessibilityTool;
    std::string BoundsInScreen;
    std::string BoundsInParent;
    std::string UnixTimeText;
    int32_t aa_start_x_real;
    int32_t aa_start_y_real;
    int32_t aa_end_x_real;
    int32_t aa_end_y_real;
    int32_t aa_start_x;
    int32_t aa_start_y;
    int32_t aa_end_x;
    int32_t aa_end_y;
    int32_t aa_center_x;
    int32_t aa_center_y;
    int32_t aa_width;
    int32_t aa_height;
    double_t aa_w_h_relation;
    int32_t aa_area;
    int32_t aa_parent_start_x_real;
    int32_t aa_parent_start_y_real;
    int32_t aa_parent_end_x_real;
    int32_t aa_parent_end_y_real;
    int32_t aa_parent_start_x;
    int32_t aa_parent_start_y;
    int32_t aa_parent_end_x;
    int32_t aa_parent_end_y;
    int32_t aa_parent_center_x;
    int32_t aa_parent_center_y;
    int32_t aa_parent_width;
    int32_t aa_parent_height;
    double_t aa_parent_w_h_relation;
    int32_t aa_parent_area;
    int64_t UnixTime;
    size_t distance_from_start;
    size_t size;
    int Visible;
    int Password;
    int Selected;
    int Scrollable;
    int LongClickable;
    int Loggable;
    int IsTextSelectable;
    int ImportantForAccessibility;
    int Enabled;
    int Empty;
    int ContextClickable;
    int ContentInvalid;
    int FullScreen;
    int Focused;
    int Focusable;
    int AccessibilityFocused;
    int AccessibilityDataSensitive;
    int Clickable;
    int Checked;
    int Checkable;
} fstru;

static constexpr std::string_view delim_csv{"\",\""};

template <typename T> static void dump_struct_vector_as_csv(T &it, std::string &outputstring)
{

    // outputstring.reserve(sizeof(it) * 2);
    outputstring.clear();

#if HAS_STD_FORMAT
    outputstring.append(std::format(
        "\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\","
        "\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\","
        "\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\","
        "\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\","
        "\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\","
        "\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\",\"{}\","
        "\"{}\",\"{}\",\"{}\"\n",
        it.Text, it.ContentDescription, it.StateDescription, it.ClassName, it.PackageName, it.Error, it.AccessNodeInfo,
        it.WindowId, it.WindowChanges, it.WindowChangeTypes, it.VirtualDescendantId, it.ViewIdResName, it.UniqueId,
        it.TraversalBefore, it.TraversalAfter, it.TooltipText, it.TimeStamp, it.TimeNow, it.SpeechStateChangeTypes,
        it.SourceWindowId, it.SourceNodeId, it.SourceDisplayId, it.Source, it.Sealed, it.Records, it.ParentNodeId,
        it.ParcelableData, it.MovementGranularities, it.HashCode, it.EventType, it.Actions, it.ContentChangeTypes,
        it.ConnectionId, it.ChildAccessibilityIds, it.BooleanProperties, it.BeforeText, it.Active,
        it.AccessibilityViewId, it.AccessibilityTool, it.BoundsInScreen, it.BoundsInParent, it.UnixTimeText,
        it.aa_start_x_real, it.aa_start_y_real, it.aa_end_x_real, it.aa_end_y_real, it.aa_start_x, it.aa_start_y,
        it.aa_end_x, it.aa_end_y, it.aa_center_x, it.aa_center_y, it.aa_width, it.aa_height, it.aa_w_h_relation,
        it.aa_area, it.aa_parent_start_x_real, it.aa_parent_start_y_real, it.aa_parent_end_x_real,
        it.aa_parent_end_y_real, it.aa_parent_start_x, it.aa_parent_start_y, it.aa_parent_end_x, it.aa_parent_end_y,
        it.aa_parent_center_x, it.aa_parent_center_y, it.aa_parent_width, it.aa_parent_height,
        it.aa_parent_w_h_relation, it.aa_parent_area, it.UnixTime, it.distance_from_start, it.size, it.Visible,
        it.Password, it.Selected, it.Scrollable, it.LongClickable, it.Loggable, it.IsTextSelectable,
        it.ImportantForAccessibility, it.Enabled, it.Empty, it.ContextClickable, it.ContentInvalid, it.FullScreen,
        it.Focused, it.Focusable, it.AccessibilityFocused, it.AccessibilityDataSensitive, it.Clickable, it.Checked,
        it.Checkable));
#else
    outputstring += '"';
    outputstring.append((it.Text));
    outputstring.append(delim_csv);
    outputstring.append((it.ContentDescription));
    outputstring.append(delim_csv);
    outputstring.append((it.StateDescription));
    outputstring.append(delim_csv);
    outputstring.append((it.ClassName));
    outputstring.append(delim_csv);
    outputstring.append((it.PackageName));
    outputstring.append(delim_csv);
    outputstring.append((it.Error));
    outputstring.append(delim_csv);
    outputstring.append((it.AccessNodeInfo));
    outputstring.append(delim_csv);
    outputstring.append((it.WindowId));
    outputstring.append(delim_csv);
    outputstring.append((it.WindowChanges));
    outputstring.append(delim_csv);
    outputstring.append((it.WindowChangeTypes));
    outputstring.append(delim_csv);
    outputstring.append((it.VirtualDescendantId));
    outputstring.append(delim_csv);
    outputstring.append((it.ViewIdResName));
    outputstring.append(delim_csv);
    outputstring.append((it.UniqueId));
    outputstring.append(delim_csv);
    outputstring.append((it.TraversalBefore));
    outputstring.append(delim_csv);
    outputstring.append((it.TraversalAfter));
    outputstring.append(delim_csv);
    outputstring.append((it.TooltipText));
    outputstring.append(delim_csv);
    outputstring.append((it.TimeStamp));
    outputstring.append(delim_csv);
    outputstring.append((it.TimeNow));
    outputstring.append(delim_csv);
    outputstring.append((it.SpeechStateChangeTypes));
    outputstring.append(delim_csv);
    outputstring.append((it.SourceWindowId));
    outputstring.append(delim_csv);
    outputstring.append((it.SourceNodeId));
    outputstring.append(delim_csv);
    outputstring.append((it.SourceDisplayId));
    outputstring.append(delim_csv);
    outputstring.append((it.Source));
    outputstring.append(delim_csv);
    outputstring.append((it.Sealed));
    outputstring.append(delim_csv);
    outputstring.append((it.Records));
    outputstring.append(delim_csv);
    outputstring.append((it.ParentNodeId));
    outputstring.append(delim_csv);
    outputstring.append((it.ParcelableData));
    outputstring.append(delim_csv);
    outputstring.append((it.MovementGranularities));
    outputstring.append(delim_csv);
    outputstring.append((it.HashCode));
    outputstring.append(delim_csv);
    outputstring.append((it.EventType));
    outputstring.append(delim_csv);
    outputstring.append((it.Actions));
    outputstring.append(delim_csv);
    outputstring.append((it.ContentChangeTypes));
    outputstring.append(delim_csv);
    outputstring.append((it.ConnectionId));
    outputstring.append(delim_csv);
    outputstring.append((it.ChildAccessibilityIds));
    outputstring.append(delim_csv);
    outputstring.append((it.BooleanProperties));
    outputstring.append(delim_csv);
    outputstring.append((it.BeforeText));
    outputstring.append(delim_csv);
    outputstring.append((it.Active));
    outputstring.append(delim_csv);
    outputstring.append((it.AccessibilityViewId));
    outputstring.append(delim_csv);
    outputstring.append((it.AccessibilityTool));
    outputstring.append(delim_csv);
    outputstring.append((it.BoundsInScreen));
    outputstring.append(delim_csv);
    outputstring.append((it.BoundsInParent));
    outputstring.append(delim_csv);
    outputstring.append((it.UnixTimeText));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_start_x_real));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_start_y_real));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_end_x_real));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_end_y_real));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_start_x));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_start_y));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_end_x));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_end_y));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_center_x));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_center_y));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_width));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_height));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_w_h_relation));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_area));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_start_x_real));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_start_y_real));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_end_x_real));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_end_y_real));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_start_x));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_start_y));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_end_x));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_end_y));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_center_x));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_center_y));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_width));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_height));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_w_h_relation));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.aa_parent_area));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.UnixTime));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.distance_from_start));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.size));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Visible));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Password));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Selected));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Scrollable));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.LongClickable));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Loggable));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.IsTextSelectable));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.ImportantForAccessibility));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Enabled));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Empty));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.ContextClickable));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.ContentInvalid));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.FullScreen));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Focused));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Focusable));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.AccessibilityFocused));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.AccessibilityDataSensitive));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Clickable));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Checked));
    outputstring.append(delim_csv);
    outputstring.append(std::to_string(it.Checkable));
    outputstring.append(delim_csv);
    outputstring += '"';
    outputstring += '\n';

#endif

    // return outputstring;
}

static constexpr std::string_view sv_Text{"Text"};
static constexpr std::string_view sv_ContentDescription{"ContentDescription"};
static constexpr std::string_view sv_StateDescription{"StateDescription"};
static constexpr std::string_view sv_ClassName{"ClassName"};
static constexpr std::string_view sv_PackageName{"PackageName"};
static constexpr std::string_view sv_Error{"Error"};
static constexpr std::string_view sv_AccessNodeInfo{"AccessNodeInfo"};
static constexpr std::string_view sv_WindowId{"WindowId"};
static constexpr std::string_view sv_WindowChanges{"WindowChanges"};
static constexpr std::string_view sv_WindowChangeTypes{"WindowChangeTypes"};
static constexpr std::string_view sv_VirtualDescendantId{"VirtualDescendantId"};
static constexpr std::string_view sv_ViewIdResName{"ViewIdResName"};
static constexpr std::string_view sv_UniqueId{"UniqueId"};
static constexpr std::string_view sv_TraversalBefore{"TraversalBefore"};
static constexpr std::string_view sv_TraversalAfter{"TraversalAfter"};
static constexpr std::string_view sv_TooltipText{"TooltipText"};
static constexpr std::string_view sv_TimeStamp{"TimeStamp"};
static constexpr std::string_view sv_TimeNow{"TimeNow"};
static constexpr std::string_view sv_SpeechStateChangeTypes{"SpeechStateChangeTypes"};
static constexpr std::string_view sv_SourceWindowId{"SourceWindowId"};
static constexpr std::string_view sv_SourceNodeId{"SourceNodeId"};
static constexpr std::string_view sv_SourceDisplayId{"SourceDisplayId"};
static constexpr std::string_view sv_Source{"Source"};
static constexpr std::string_view sv_Sealed{"Sealed"};
static constexpr std::string_view sv_Records{"Records"};
static constexpr std::string_view sv_ParentNodeId{"ParentNodeId"};
static constexpr std::string_view sv_ParcelableData{"ParcelableData"};
static constexpr std::string_view sv_MovementGranularities{"MovementGranularities"};
static constexpr std::string_view sv_HashCode{"HashCode"};
static constexpr std::string_view sv_EventType{"EventType"};
static constexpr std::string_view sv_Actions{"Actions"};
static constexpr std::string_view sv_ContentChangeTypes{"ContentChangeTypes"};
static constexpr std::string_view sv_ConnectionId{"ConnectionId"};
static constexpr std::string_view sv_ChildAccessibilityIds{"ChildAccessibilityIds"};
static constexpr std::string_view sv_BooleanProperties{"BooleanProperties"};
static constexpr std::string_view sv_BeforeText{"BeforeText"};
static constexpr std::string_view sv_Active{"Active"};
static constexpr std::string_view sv_AccessibilityViewId{"AccessibilityViewId"};
static constexpr std::string_view sv_AccessibilityTool{"AccessibilityTool"};
static constexpr std::string_view sv_BoundsInScreen{"BoundsInScreen"};
static constexpr std::string_view sv_BoundsInParent{"BoundsInParent"};
static constexpr std::string_view sv_UnixTimeText{"UnixTimeText"};
static constexpr std::string_view sv_UnixTime{"UnixTime"};
static constexpr std::string_view sv_Visible{"Visible"};
static constexpr std::string_view sv_Password{"Password"};
static constexpr std::string_view sv_Selected{"Selected"};
static constexpr std::string_view sv_Scrollable{"Scrollable"};
static constexpr std::string_view sv_LongClickable{"LongClickable"};
static constexpr std::string_view sv_Loggable{"Loggable"};
static constexpr std::string_view sv_IsTextSelectable{"IsTextSelectable"};
static constexpr std::string_view sv_ImportantForAccessibility{"ImportantForAccessibility"};
static constexpr std::string_view sv_Enabled{"Enabled"};
static constexpr std::string_view sv_Empty{"Empty"};
static constexpr std::string_view sv_ContextClickable{"ContextClickable"};
static constexpr std::string_view sv_ContentInvalid{"ContentInvalid"};
static constexpr std::string_view sv_FullScreen{"FullScreen"};
static constexpr std::string_view sv_Focused{"Focused"};
static constexpr std::string_view sv_Focusable{"Focusable"};
static constexpr std::string_view sv_AccessibilityFocused{"AccessibilityFocused"};
static constexpr std::string_view sv_AccessibilityDataSensitive{"AccessibilityDataSensitive"};
static constexpr std::string_view sv_Clickable{"Clickable"};
static constexpr std::string_view sv_Checked{"Checked"};
static constexpr std::string_view sv_Checkable{"Checkable"};

static constexpr std::array<std::string_view, 123> compare_vector = {

    "; text: ",
    "; contentDescription: ",
    "; stateDescription: ",
    "; className: ",
    "; packageName: ",
    "; error: ",
    "; accessNodeInfo: ",
    "; windowId: ",
    "; windowChanges: ",
    "; windowChangeTypes: ",
    "; virtualDescendantId: ",
    "; viewIdResName: ",
    "; uniqueId: ",
    "; traversalBefore: ",
    "; traversalAfter: ",
    "; tooltipText: ",
    "; timeStamp: ",
    "; timeNow: ",
    "; speechStateChangeTypes: ",
    "; sourceWindowId: ",
    "; sourceNodeId: ",
    "; sourceDisplayId: ",
    "; source: ",
    "; sealed: ",
    "; records: ",
    "; parentNodeId: ",
    "; parcelableData: ",
    "; movementGranularities: ",
    "; hashCode: ",
    "; eventType: ",
    "; actions: ",
    "; contentChangeTypes: ",
    "; connectionId: ",
    "; childAccessibilityIds: ",
    "; booleanProperties: ",
    "; beforeText: ",
    "; active: ",
    "; accessibilityViewId: ",
    "; accessibilityTool: ",
    "; boundsInScreen: ",
    "; boundsInParent: ",
    "; visible: ",
    "; password: ",
    "; selected: ",
    "; scrollable: ",
    "; longClickable: ",
    "; loggable: ",
    "; isTextSelectable: ",
    "; importantForAccessibility: ",
    "; enabled: ",
    "; empty: ",
    "; contextClickable: ",
    "; contentInvalid: ",
    "; fullScreen: ",
    "; focused: ",
    "; focusable: ",
    "; accessibilityFocused: ",
    "; accessibilityDataSensitive: ",
    "; clickable: ",
    "; checked: ",
    "; checkable: ",
    "; Text: ",
    "; ContentDescription: ",
    "; StateDescription: ",
    "; ClassName: ",
    "; PackageName: ",
    "; Error: ",
    "; AccessNodeInfo: ",
    "; WindowId: ",
    "; WindowChanges: ",
    "; WindowChangeTypes: ",
    "; VirtualDescendantId: ",
    "; ViewIdResName: ",
    "; UniqueId: ",
    "; TraversalBefore: ",
    "; TraversalAfter: ",
    "; TooltipText: ",
    "; TimeStamp: ",
    "; TimeNow: ",
    "; SpeechStateChangeTypes: ",
    "; SourceWindowId: ",
    "; SourceNodeId: ",
    "; SourceDisplayId: ",
    "; Source: ",
    "; Sealed: ",
    "; Records: ",
    "; ParentNodeId: ",
    "; ParcelableData: ",
    "; MovementGranularities: ",
    "; HashCode: ",
    "; EventType: ",
    "; Actions: ",
    "; ContentChangeTypes: ",
    "; ConnectionId: ",
    "; ChildAccessibilityIds: ",
    "; BooleanProperties: ",
    "; BeforeText: ",
    "; Active: ",
    "; AccessibilityViewId: ",
    "; AccessibilityTool: ",
    "; BoundsInScreen: ",
    "; BoundsInParent: ",
    "; Visible: ",
    "; Password: ",
    "; Selected: ",
    "; Scrollable: ",
    "; LongClickable: ",
    "; Loggable: ",
    "; IsTextSelectable: ",
    "; ImportantForAccessibility: ",
    "; Enabled: ",
    "; Empty: ",
    "; ContextClickable: ",
    "; ContentInvalid: ",
    "; FullScreen: ",
    "; Focused: ",
    "; Focusable: ",
    "; AccessibilityFocused: ",
    "; AccessibilityDataSensitive: ",
    "; Clickable: ",
    "; Checked: ",
    "; Checkable: ",
    "; maxTextLength: "
    //"; MaxTextLength: ",

};

static constexpr std::array<std::string_view, 123> compare_vector2 = {"text: ",
                                                                      "contentDescription: ",
                                                                      "stateDescription: ",
                                                                      "className: ",
                                                                      "packageName: ",
                                                                      "error: ",
                                                                      "accessNodeInfo: ",
                                                                      "windowId: ",
                                                                      "windowChanges: ",
                                                                      "windowChangeTypes: ",
                                                                      "virtualDescendantId: ",
                                                                      "viewIdResName: ",
                                                                      "uniqueId: ",
                                                                      "traversalBefore: ",
                                                                      "traversalAfter: ",
                                                                      "tooltipText: ",
                                                                      "timeStamp: ",
                                                                      "timeNow: ",
                                                                      "speechStateChangeTypes: ",
                                                                      "sourceWindowId: ",
                                                                      "sourceNodeId: ",
                                                                      "sourceDisplayId: ",
                                                                      "source: ",
                                                                      "sealed: ",
                                                                      "records: ",
                                                                      "parentNodeId: ",
                                                                      "parcelableData: ",
                                                                      "movementGranularities: ",
                                                                      "hashCode: ",
                                                                      "eventType: ",
                                                                      "actions: ",
                                                                      "contentChangeTypes: ",
                                                                      "connectionId: ",
                                                                      "childAccessibilityIds: ",
                                                                      "booleanProperties: ",
                                                                      "beforeText: ",
                                                                      "active: ",
                                                                      "accessibilityViewId: ",
                                                                      "accessibilityTool: ",
                                                                      "boundsInScreen: ",
                                                                      "boundsInParent: ",
                                                                      "visible: ",
                                                                      "password: ",
                                                                      "selected: ",
                                                                      "scrollable: ",
                                                                      "longClickable: ",
                                                                      "loggable: ",
                                                                      "isTextSelectable: ",
                                                                      "importantForAccessibility: ",
                                                                      "enabled: ",
                                                                      "empty: ",
                                                                      "contextClickable: ",
                                                                      "contentInvalid: ",
                                                                      "fullScreen: ",
                                                                      "focused: ",
                                                                      "focusable: ",
                                                                      "accessibilityFocused: ",
                                                                      "accessibilityDataSensitive: ",
                                                                      "clickable: ",
                                                                      "checked: ",
                                                                      "checkable: ",
                                                                      "Text: ",
                                                                      "ContentDescription: ",
                                                                      "StateDescription: ",
                                                                      "ClassName: ",
                                                                      "PackageName: ",
                                                                      "Error: ",
                                                                      "AccessNodeInfo: ",
                                                                      "WindowId: ",
                                                                      "WindowChanges: ",
                                                                      "WindowChangeTypes: ",
                                                                      "VirtualDescendantId: ",
                                                                      "ViewIdResName: ",
                                                                      "UniqueId: ",
                                                                      "TraversalBefore: ",
                                                                      "TraversalAfter: ",
                                                                      "TooltipText: ",
                                                                      "TimeStamp: ",
                                                                      "TimeNow: ",
                                                                      "SpeechStateChangeTypes: ",
                                                                      "SourceWindowId: ",
                                                                      "SourceNodeId: ",
                                                                      "SourceDisplayId: ",
                                                                      "Source: ",
                                                                      "Sealed: ",
                                                                      "Records: ",
                                                                      "ParentNodeId: ",
                                                                      "ParcelableData: ",
                                                                      "MovementGranularities: ",
                                                                      "HashCode: ",
                                                                      "EventType: ",
                                                                      "Actions: ",
                                                                      "ContentChangeTypes: ",
                                                                      "ConnectionId: ",
                                                                      "ChildAccessibilityIds: ",
                                                                      "BooleanProperties: ",
                                                                      "BeforeText: ",
                                                                      "Active: ",
                                                                      "AccessibilityViewId: ",
                                                                      "AccessibilityTool: ",
                                                                      "BoundsInScreen: ",
                                                                      "BoundsInParent: ",
                                                                      "Visible: ",
                                                                      "Password: ",
                                                                      "Selected: ",
                                                                      "Scrollable: ",
                                                                      "LongClickable: ",
                                                                      "Loggable: ",
                                                                      "IsTextSelectable: ",
                                                                      "ImportantForAccessibility: ",
                                                                      "Enabled: ",
                                                                      "Empty: ",
                                                                      "ContextClickable: ",
                                                                      "ContentInvalid: ",
                                                                      "FullScreen: ",
                                                                      "Focused: ",
                                                                      "Focusable: ",
                                                                      "AccessibilityFocused: ",
                                                                      "AccessibilityDataSensitive: ",
                                                                      "Clickable: ",
                                                                      "Checked: ",
                                                                      "Checkable: ",
                                                                      "maxTextLength: "};

static constexpr uint8_t get_os()
{
#ifdef __ANDROID__
    return 0;
#elif _WIN32
    return 1;
#elif _WIN64
    return 1;
#elif __APPLE__ || __MACH__
    return 2;
#elif __linux__
    return 3;
#elif __FreeBSD__
    return 4;
#elif __unix || __unix__
    return 5;
#else
    return 6;
#endif
}
static constexpr bool is_android{get_os() == 0};

constexpr static bool is_digit(char c)
{
    return c <= '9' && c >= '0';
}

static constexpr size_t find_time_stamp(const std::string_view line)
{
    if (line.size() < 20)
    {
        return std::string::npos;
    }
    for (size_t i{}; i < line.size() - 20; i++)
    {
        if (is_digit(line[i]) && is_digit(line[i + 1]) && (line[i + 2] == '-') && is_digit(line[i + 3]) &&
            is_digit(line[i + 4]) && (line[i + 5] == ' ') && is_digit(line[i + 6]) && is_digit(line[i + 7]) &&
            (line[i + 8] == ':') && is_digit(line[i + 9]) && is_digit(line[i + 10]) && (line[i + 11] == ':') &&
            is_digit(line[i + 12]) && is_digit(line[i + 13]) && (line[i + 14] == '.') && is_digit(line[i + 15]) &&
            is_digit(line[i + 16]) && is_digit(line[i + 17]))
        {
            return i;
        }
    }
    return std::string::npos;
}
static constexpr std::string_view accessaction_sv{"AccessibilityAction: "};

static void constexpr mymemset(uint8_t *startptr, uint8_t *endptr)
{
    for (; startptr != endptr; startptr++)
    {
        *startptr = 0;
    }
}
constexpr static int64_t satoll_impl(const char *str, int64_t value = 0)
{
    return *str ? is_digit(*str) ? satoll_impl(str + 1, (*str - '0') + value * 10) : 0 : value;
}

int64_t static constexpr myatoll(const std::string &str)
{
    return satoll_impl(str.c_str());
}
int64_t static convert_to_unix_timestamp(const std::string_view date_string, tm *current_tm, tm &tm,
                                         uint8_t *endptrtime)
{

    mymemset((uint8_t *)&tm, endptrtime);
    tm.tm_mon = myatoll(std::string(date_string.substr(0, 2))) - 1;
    tm.tm_mday = myatoll(std::string(date_string.substr(3, 2)));
    tm.tm_hour = myatoll(std::string(date_string.substr(6, 2)));
    tm.tm_min = myatoll(std::string(date_string.substr(9, 2)));
    tm.tm_sec = myatoll(std::string(date_string.substr(12, 2)));
    int64_t milliseconds{myatoll(std::string(date_string.substr(15, 3)))};
    tm.tm_isdst = -1;
    time_t current_time{time(NULL)};
    current_tm = localtime(&current_time);
    tm.tm_year = current_tm->tm_year;
    int64_t unix_time{mktime(&tm)};
    int64_t timestamp_with_milliseconds{unix_time * 1000 + milliseconds};
    return timestamp_with_milliseconds;
}
bool static constexpr isspace_or_empty(const std::string_view &s)
{
    if (s.empty())
    {
        return true;
    }
    return std::all_of(s.begin(), s.end(), isspace);
}

static constexpr std::string_view truesv{"true"};
static constexpr bool istrue(const std::string_view &s)
{
    if (s.size() != 4)
    {
        return false;
    }
    return s == truesv;
}
static bool constexpr compare2strings(const std::string_view s1, const std::string_view s2)
{
    if (s1.size() != s2.size())
    {
        return false;
    }
    auto it1 = s1.begin();
    auto it2 = s2.begin();
    while (it1 != s1.end())
    {
        if (*it1 != *it2)
        {
            return false;
        }
        it1++;
        it2++;
    }
    return true;
}

static constexpr void set_bounds_array_to_0(std::array<std::string, 4> &boundsarray)
{

    for (int i = 0; i < 4; i++)
    {
        boundsarray[i].clear();
        boundsarray[i] += '0';
    }
}
static constexpr std::string_view sv_rectstart{"Rect("};
static constexpr std::array<char, 10> all_numbers_as_chars{'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
static void constexpr parse_my_coords(const std::string_view s, std::array<std::string, 4> &resultstringarray)
{

    if (s.find(sv_rectstart) == std::string::npos)
    {
        set_bounds_array_to_0(resultstringarray);

        return;
    }
    resultstringarray[0].clear();
    resultstringarray[1].clear();
    resultstringarray[2].clear();
    resultstringarray[3].clear();
    size_t current_idx{};
    bool foundgood{false};
    bool lastkeywasnumber{false};
    bool beforelastkeywasnumber{false};

    for (size_t i{5}; i < s.size(); i++)
    {
        lastkeywasnumber = false;
        foundgood = false;
        for (size_t j{0}; j < 10; j++)
        {
            if (s[i] == all_numbers_as_chars[j])
            {
                resultstringarray[current_idx] += s[i];
                foundgood = true;
                lastkeywasnumber = true;
                break;
            }
        }
        if (!foundgood)
        {
            if ((s[i] == '-') && (i + 1 < s.size()))
            {
                for (size_t j{0}; j < 10; j++)
                {
                    if (s[i + 1] == all_numbers_as_chars[j])
                    {
                        resultstringarray[current_idx] += s[i];
                        foundgood = true;
                        lastkeywasnumber = true;
                        break;
                    }
                }
            }
        }
        if (!foundgood)
        {
            if ((!lastkeywasnumber) && (beforelastkeywasnumber))
            {
                current_idx++;
            }
        }
        beforelastkeywasnumber = lastkeywasnumber;
    }
}
static void constexpr calculate_bounds_parent(final_struct *mystruct, std::array<std::string, 4> &resultcoords)
{
    mystruct->aa_parent_start_x_real = myatoll(resultcoords[0]);
    mystruct->aa_parent_start_y_real = myatoll(resultcoords[1]);
    mystruct->aa_parent_end_x_real = myatoll(resultcoords[2]);
    mystruct->aa_parent_end_y_real = myatoll(resultcoords[3]);
    mystruct->aa_parent_start_x = mystruct->aa_parent_start_x_real;
    mystruct->aa_parent_start_y = mystruct->aa_parent_start_y_real;
    mystruct->aa_parent_end_x = mystruct->aa_parent_end_x_real;
    mystruct->aa_parent_end_y = mystruct->aa_parent_end_y_real;
    mystruct->aa_parent_center_x = (mystruct->aa_parent_end_x + mystruct->aa_parent_start_x) / 2;
    mystruct->aa_parent_center_y = (mystruct->aa_parent_end_y + mystruct->aa_parent_start_y) / 2;
    mystruct->aa_parent_width = (mystruct->aa_parent_end_x - mystruct->aa_parent_start_x);
    mystruct->aa_parent_height = (mystruct->aa_parent_end_y - mystruct->aa_parent_start_y);
    mystruct->aa_parent_area = mystruct->aa_parent_width * mystruct->aa_parent_height;
    if (!mystruct->aa_parent_height)
    {
        return;
    }
    mystruct->aa_parent_w_h_relation = (double_t)(mystruct->aa_parent_width) / double_t(mystruct->aa_parent_height);
}

void static constexpr calculate_bounds(final_struct *mystruct, std::array<std::string, 4> &resultcoords)
{
    mystruct->aa_start_x_real = myatoll(resultcoords[0]);
    mystruct->aa_start_y_real = myatoll(resultcoords[1]);
    mystruct->aa_end_x_real = myatoll(resultcoords[2]);
    mystruct->aa_end_y_real = myatoll(resultcoords[3]);
    mystruct->aa_start_x = mystruct->aa_start_x_real;
    mystruct->aa_start_y = mystruct->aa_start_y_real;
    mystruct->aa_end_x = mystruct->aa_end_x_real;
    mystruct->aa_end_y = mystruct->aa_end_y_real;
    mystruct->aa_center_x = (mystruct->aa_end_x + mystruct->aa_start_x) / 2;
    mystruct->aa_center_y = (mystruct->aa_end_y + mystruct->aa_start_y) / 2;
    mystruct->aa_width = (mystruct->aa_end_x - mystruct->aa_start_x);
    mystruct->aa_height = (mystruct->aa_end_y - mystruct->aa_start_y);
    mystruct->aa_area = mystruct->aa_width * mystruct->aa_height;
    if (!mystruct->aa_height)
    {
        return;
    }
    mystruct->aa_w_h_relation = (double_t)(mystruct->aa_width) / (double_t)(mystruct->aa_height);
}
void static add_to_struct(final_struct &fs, const std::string_view &key, const std::string_view &item,
                          std::array<std::string, 4> &boundsarray)
{
    if (compare2strings(key, sv_Text))
    {
        fs.Text += item;
    }
    else if (compare2strings(key, sv_ContentDescription))
    {
        fs.ContentDescription += item;
    }
    else if (compare2strings(key, sv_StateDescription))
    {
        fs.StateDescription += item;
    }
    else if (compare2strings(key, sv_ClassName))
    {
        fs.ClassName += item;
    }
    else if (compare2strings(key, sv_PackageName))
    {
        fs.PackageName += item;
    }
    else if (compare2strings(key, sv_Error))
    {
        fs.Error += item;
    }
    else if (compare2strings(key, sv_AccessNodeInfo))
    {
        fs.AccessNodeInfo += item;
    }
    else if (compare2strings(key, sv_WindowId))
    {
        fs.WindowId += item;
    }
    else if (compare2strings(key, sv_WindowChanges))
    {
        fs.WindowChanges += item;
    }
    else if (compare2strings(key, sv_WindowChangeTypes))
    {
        fs.WindowChangeTypes += item;
    }
    else if (compare2strings(key, sv_VirtualDescendantId))
    {
        fs.VirtualDescendantId += item;
    }
    else if (compare2strings(key, sv_ViewIdResName))
    {
        fs.ViewIdResName += item;
    }
    else if (compare2strings(key, sv_UniqueId))
    {
        fs.UniqueId += item;
    }
    else if (compare2strings(key, sv_TraversalBefore))
    {
        fs.TraversalBefore += item;
    }
    else if (compare2strings(key, sv_TraversalAfter))
    {
        fs.TraversalAfter += item;
    }
    else if (compare2strings(key, sv_TooltipText))
    {
        fs.TooltipText += item;
    }
    else if (compare2strings(key, sv_TimeStamp))
    {
        fs.TimeStamp += item;
    }
    else if (compare2strings(key, sv_TimeNow))
    {
        fs.TimeNow += item;
    }
    else if (compare2strings(key, sv_SpeechStateChangeTypes))
    {
        fs.SpeechStateChangeTypes += item;
    }
    else if (compare2strings(key, sv_SourceWindowId))
    {
        fs.SourceWindowId += item;
    }
    else if (compare2strings(key, sv_SourceNodeId))
    {
        fs.SourceNodeId += item;
    }
    else if (compare2strings(key, sv_SourceDisplayId))
    {
        fs.SourceDisplayId += item;
    }
    else if (compare2strings(key, sv_Source))
    {
        fs.Source += item;
    }
    else if (compare2strings(key, sv_Sealed))
    {
        fs.Sealed += item;
    }
    else if (compare2strings(key, sv_Records))
    {
        fs.Records += item;
    }
    else if (compare2strings(key, sv_ParentNodeId))
    {
        fs.ParentNodeId += item;
    }
    else if (compare2strings(key, sv_ParcelableData))
    {
        fs.ParcelableData += item;
    }
    else if (compare2strings(key, sv_MovementGranularities))
    {
        fs.MovementGranularities += item;
    }
    else if (compare2strings(key, sv_HashCode))
    {
        fs.HashCode += item;
    }
    else if (compare2strings(key, sv_EventType))
    {
        fs.EventType += item;
    }
    else if (compare2strings(key, sv_Actions))
    {
        fs.Actions += item;
    }
    else if (compare2strings(key, sv_ContentChangeTypes))
    {
        fs.ContentChangeTypes += item;
    }
    else if (compare2strings(key, sv_ConnectionId))
    {
        fs.ConnectionId += item;
    }
    else if (compare2strings(key, sv_ChildAccessibilityIds))
    {
        fs.ChildAccessibilityIds += item;
    }
    else if (compare2strings(key, sv_BooleanProperties))
    {
        fs.BooleanProperties += item;
    }
    else if (compare2strings(key, sv_BeforeText))
    {
        fs.BeforeText += item;
    }
    else if (compare2strings(key, sv_Active))
    {
        fs.Active += item;
    }
    else if (compare2strings(key, sv_AccessibilityViewId))
    {
        fs.AccessibilityViewId += item;
    }
    else if (compare2strings(key, sv_AccessibilityTool))
    {
        fs.AccessibilityTool += item;
    }
    else if (compare2strings(key, sv_BoundsInScreen))
    {
        parse_my_coords(item, boundsarray);
        fs.BoundsInScreen += item;
        calculate_bounds(&fs, boundsarray);
    }
    else if (compare2strings(key, sv_BoundsInParent))
    {
        parse_my_coords(item, boundsarray);
        fs.BoundsInParent += item;
        calculate_bounds_parent(&fs, boundsarray);
    }
    else if (compare2strings(key, sv_UnixTimeText))
    {
        fs.UnixTimeText += item;
    }
    else if (compare2strings(key, sv_UnixTime))
    {
        fs.UnixTime = istrue(item);
    }
    else if (compare2strings(key, sv_Visible))
    {
        fs.Visible = istrue(item);
    }
    else if (compare2strings(key, sv_Password))
    {
        fs.Password = istrue(item);
    }
    else if (compare2strings(key, sv_Selected))
    {
        fs.Selected = istrue(item);
    }
    else if (compare2strings(key, sv_Scrollable))
    {
        fs.Scrollable = istrue(item);
    }
    else if (compare2strings(key, sv_LongClickable))
    {
        fs.LongClickable = istrue(item);
    }
    else if (compare2strings(key, sv_Loggable))
    {
        fs.Loggable = istrue(item);
    }
    else if (compare2strings(key, sv_IsTextSelectable))
    {
        fs.IsTextSelectable = istrue(item);
    }
    else if (compare2strings(key, sv_ImportantForAccessibility))
    {
        fs.ImportantForAccessibility = istrue(item);
    }
    else if (compare2strings(key, sv_Enabled))
    {
        fs.Enabled = istrue(item);
    }
    else if (compare2strings(key, sv_Empty))
    {
        fs.Empty = istrue(item);
    }
    else if (compare2strings(key, sv_ContextClickable))
    {
        fs.ContextClickable = istrue(item);
    }
    else if (compare2strings(key, sv_ContentInvalid))
    {
        fs.ContentInvalid = istrue(item);
    }
    else if (compare2strings(key, sv_FullScreen))
    {
        fs.FullScreen = istrue(item);
    }
    else if (compare2strings(key, sv_Focused))
    {
        fs.Focused = istrue(item);
    }
    else if (compare2strings(key, sv_Focusable))
    {
        fs.Focusable = istrue(item);
    }
    else if (compare2strings(key, sv_AccessibilityFocused))
    {
        fs.AccessibilityFocused = istrue(item);
    }
    else if (compare2strings(key, sv_AccessibilityDataSensitive))
    {
        fs.AccessibilityDataSensitive = istrue(item);
    }
    else if (compare2strings(key, sv_Clickable))
    {
        fs.Clickable = istrue(item);
    }
    else if (compare2strings(key, sv_Checked))
    {
        fs.Checked = istrue(item);
    }
    else if (compare2strings(key, sv_Checkable))
    {
        fs.Checkable = istrue(item);
    }
}
void static constexpr clear_struct(final_struct &s)
{
    s.Text.clear();
    s.ContentDescription.clear();
    s.StateDescription.clear();
    s.ClassName.clear();
    s.PackageName.clear();
    s.Error.clear();
    s.AccessNodeInfo.clear();
    s.WindowId.clear();
    s.WindowChanges.clear();
    s.WindowChangeTypes.clear();
    s.VirtualDescendantId.clear();
    s.ViewIdResName.clear();
    s.UniqueId.clear();
    s.TraversalBefore.clear();
    s.TraversalAfter.clear();
    s.TooltipText.clear();
    s.TimeStamp.clear();
    s.TimeNow.clear();
    s.SpeechStateChangeTypes.clear();
    s.SourceWindowId.clear();
    s.SourceNodeId.clear();
    s.SourceDisplayId.clear();
    s.Source.clear();
    s.Sealed.clear();
    s.Records.clear();
    s.ParentNodeId.clear();
    s.ParcelableData.clear();
    s.MovementGranularities.clear();
    s.HashCode.clear();
    s.EventType.clear();
    s.Actions.clear();
    s.ContentChangeTypes.clear();
    s.ConnectionId.clear();
    s.ChildAccessibilityIds.clear();
    s.BooleanProperties.clear();
    s.BeforeText.clear();
    s.Active.clear();
    s.AccessibilityViewId.clear();
    s.AccessibilityTool.clear();
    s.BoundsInScreen.clear();
    s.BoundsInParent.clear();
    s.UnixTimeText.clear();
    s.aa_start_x_real = 0;
    s.aa_start_y_real = 0;
    s.aa_end_x_real = 0;
    s.aa_end_y_real = 0;
    s.aa_start_x = 0;
    s.aa_start_y = 0;
    s.aa_end_x = 0;
    s.aa_end_y = 0;
    s.aa_center_x = 0;
    s.aa_center_y = 0;
    s.aa_width = 0;
    s.aa_height = 0;
    s.aa_w_h_relation = 0;
    s.aa_area = 0;
    s.aa_parent_start_x_real = 0;
    s.aa_parent_start_y_real = 0;
    s.aa_parent_end_x_real = 0;
    s.aa_parent_end_y_real = 0;
    s.aa_parent_start_x = 0;
    s.aa_parent_start_y = 0;
    s.aa_parent_end_x = 0;
    s.aa_parent_end_y = 0;
    s.aa_parent_center_x = 0;
    s.aa_parent_center_y = 0;
    s.aa_parent_width = 0;
    s.aa_parent_height = 0;
    s.aa_parent_w_h_relation = 0;
    s.aa_parent_area = 0;
    s.UnixTime = 0;
    s.distance_from_start = 0;
    s.size = 0;
    s.Visible = 0;
    s.Password = 0;
    s.Selected = 0;
    s.Scrollable = 0;
    s.LongClickable = 0;
    s.Loggable = 0;
    s.IsTextSelectable = 0;
    s.ImportantForAccessibility = 0;
    s.Enabled = 0;
    s.Empty = 0;
    s.ContextClickable = 0;
    s.ContentInvalid = 0;
    s.FullScreen = 0;
    s.Focused = 0;
    s.Focusable = 0;
    s.AccessibilityFocused = 0;
    s.AccessibilityDataSensitive = 0;
    s.Clickable = 0;
    s.Checked = 0;
    s.Checkable = 0;
}
int main(int argc, char *argv[])
{
    static constexpr size_t size_my_buffer{32};
    std::string adb_clean_cmd;
    std::string adb_run_parser_cmd;
    if (is_android)
    {
        adb_clean_cmd = "/system/bin/logcat -b all -c";
        adb_run_parser_cmd =
            "stty raw;while true;do sleep 1;/system/bin/logcat --pid=\"$( curru=\"u$(/system/bin/am "
            "get-current-user)_\";top -b "
            "-n1 | grep -E \"$curru.*[[:digit:]][[:digit:]][[:space:]]+android[.a-z]+elparse[[:space:]]*$\" | grep "
            "-v \"grep\" | awk '{print $1}')\" --dividers;done";
    }
    else if (argc < 3)
    {
        std::cerr << "Since you are not running on Android, you must pass the path to the adb executable and the "
                     "serial\nExample:\n "
                     "logcatparser.exe C:\\Users\\hansc\\AppData\\Local\\Android\\Sdk\\platform-tools\\adb.exe "
                     "127.0.0.1:5556\n";
        return EXIT_FAILURE;
    }
    else
    {

        std::string adb_executable{argv[1]};
        std::string serial{argv[2]};
        adb_run_parser_cmd =
            adb_executable + " -s " + serial + " shell " +
            "stty raw;while true;do sleep 1;/system/bin/logcat --pid=\"$( curru=\"u$(/system/bin/am "
            "get-current-user)_\";top -b "
            "-n1 | grep -E \"$curru.*[[:digit:]][[:digit:]][[:space:]]+android[.a-z]+elparse[[:space:]]*$\" | grep "
            "-v \"grep\" | awk '{print $1}')\" --dividers;done";
        adb_clean_cmd = adb_executable + " -s " + serial + " shell logcat -b all -c";
    }
    system(adb_clean_cmd.c_str());
    system("qx=\"$(/system/bin/settings get secure "
           "enabled_accessibility_services)\";rr=\"android.accessibilityservice.elparse/"
           "android.accessibilityservice.elparse.MyAccessibilityService\";if [ \"$qx\" != \"$rr\" ]; then "
           "/system/bin/settings put secure enabled_accessibility_services "
           "android.accessibilityservice.elparse/android.accessibilityservice.elparse.MyAccessibilityService;fi");
    char buffer[size_my_buffer]{};
    FILE *pipe{EXEC_CMD(adb_run_parser_cmd.c_str(), "r")};
    if (!pipe)
    {
        std::cerr << "Failed to execute command: " << adb_run_parser_cmd << std::endl;
        return EXIT_FAILURE;
    }
    std::string tempstring;

    tempstring.reserve(8192);
    static constexpr size_t max_size_tmpstring{8192 * 2};
    tm struct_tm{};
    time_t current_time = time(NULL);
    tm *current_tm = localtime(&current_time);
    struct_tm.tm_year = current_tm->tm_year;
    uint8_t *endptrtime = (((uint8_t *)((&struct_tm))) + sizeof(tm));
    static constexpr size_t offset_first_element{44};
    std::string ref3;
    ref3.reserve(1024);
    std::string struct_value;
    struct_value.reserve(512);
    std::string struct_key;
    struct_key.reserve(64);
    std::array<std::string, 4> boundsarray{};
    boundsarray[0].reserve(6);
    boundsarray[1].reserve(6);
    boundsarray[2].reserve(6);
    boundsarray[3].reserve(6);
    final_struct parsed_results_cpp_struct{};

    while (1)
    {
        if (tempstring.size() > max_size_tmpstring)
        {
            tempstring.clear();
        }
        fgets(buffer, size_my_buffer, pipe);
        for (size_t i{}; i < size_my_buffer; i++)
        {
            if (buffer[i] == '\0')
            {
                continue;
            }
            else if (buffer[i] == '\n')
            {
                buffer[i] = '\0';
#ifdef _WIN32
                if (!tempstring.empty() && tempstring.back() == '\r')
                {
                    tempstring.pop_back();
                }
#endif

                size_t posoftstamp = find_time_stamp(tempstring);
                if ((posoftstamp != std::string::npos) && (posoftstamp > 0))
                {
                    tempstring.erase(tempstring.begin(), tempstring.begin() + posoftstamp - 1);
                }
                if ((posoftstamp != std::string::npos) && ((tempstring.find(accessaction_sv) != std::string::npos)))
                {
                    clear_struct(parsed_results_cpp_struct);
                    parsed_results_cpp_struct.UnixTimeText += tempstring.substr(0, 18);
                    parsed_results_cpp_struct.UnixTime = convert_to_unix_timestamp(
                        parsed_results_cpp_struct.UnixTimeText, current_tm, struct_tm, endptrtime);
                    tempstring.erase(tempstring.begin(), tempstring.begin() + offset_first_element);
                    for (const std::string_view &s : compare_vector)
                    {
                        size_t foundstring{tempstring.find(s)};
                        if (foundstring != std::string::npos)
                        {
                            tempstring[foundstring] = '\n';
                            tempstring[foundstring + 1] = '\n';
                        }
                    }
                    auto strs2 = tempstring | std::views::split('\n');
                    for (const auto &ref2 : strs2)
                    {
                        ref3.clear();
                        ref3.append({ref2.begin(), ref2.end()});
                        ref3.erase(ref3.begin(), std::find_if(ref3.begin(), ref3.end(),
                                                              [](unsigned char ch) { return !std::isspace(ch); }));
                        ref3.erase(
                            std::find_if(ref3.rbegin(), ref3.rend(), [](unsigned char ch) { return !std::isspace(ch); })
                                .base(),
                            ref3.end());
                        if (isspace_or_empty(ref3))
                        {

                            continue;
                        }
                        if (islower(ref3[0]))
                        {
                            ref3[0] += 'A' - 'a';
                        }
                        auto key_value = ref3 | std::views::split(':');
                        for (const auto &key : key_value)
                        {
                            struct_key.clear();
                            struct_key.append({key.begin(), key.end()});
                            break;
                        }

                        struct_value.clear();
                        struct_value.append(ref3);
                        struct_value.erase(struct_value.begin(), struct_value.begin() + struct_key.size() + 1);
                        struct_value.erase(struct_value.begin(),
                                           std::find_if(struct_value.begin(), struct_value.end(),
                                                        [](unsigned char ch) { return !std::isspace(ch); }));
                        add_to_struct(parsed_results_cpp_struct, struct_key, struct_value, boundsarray);
                    }
                    tempstring.clear();
                    tempstring.clear();
                    dump_struct_vector_as_csv(parsed_results_cpp_struct, tempstring);
                    std::cout << tempstring;
                    tempstring.clear();
                }
                else
                {
                    tempstring += ' ';
                }
            }
            else
            {
                tempstring += buffer[i];
                buffer[i] = '\0';
            }
        }
    }
    return EXIT_SUCCESS;
}
