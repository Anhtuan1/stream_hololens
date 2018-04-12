#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <cstring>
#include <string.h>
#include <stdio.h>
#include <cmath>
#include <limits>
#include <assert.h>
#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

template <typename T1, typename T2>
struct VirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct VirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericVirtActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericVirtActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct InterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename T1, typename T2>
struct GenericInterfaceActionInvoker2
{
	typedef void (*Action)(void*, T1, T2, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1, T2 p2)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};
template <typename T1>
struct GenericInterfaceActionInvoker1
{
	typedef void (*Action)(void*, T1, const RuntimeMethod*);

	static inline void Invoke (const RuntimeMethod* method, RuntimeObject* obj, T1 p1)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_interface_invoke_data(method, obj, &invokeData);
		((Action)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};

// System.Double[]
struct DoubleU5BU5D_t3413330114;
// System.Exception
struct Exception_t;
// System.Exception[]
struct ExceptionU5BU5D_t2535001212;
// System.Guid[]
struct GuidU5BU5D_t545550574;
// System.IDisposable
struct IDisposable_t3640265483;
// System.IDisposable[]
struct IDisposableU5BU5D_t3584190570;
// System.Int16[]
struct Int16U5BU5D_t3686840178;
// System.Int32[]
struct Int32U5BU5D_t385246372;
// System.Int64[]
struct Int64U5BU5D_t2559172825;
// System.Object[]
struct ObjectU5BU5D_t2843939325;
// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken[]
struct EventRegistrationTokenU5BU5D_t897718221;
// System.Single[]
struct SingleU5BU5D_t1444911251;
// System.String
struct String_t;
// System.String[]
struct StringU5BU5D_t1281789340;
// System.TimeSpan[]
struct TimeSpanU5BU5D_t4291357516;
// System.Type
struct Type_t;
// System.Type[]
struct TypeU5BU5D_t3940880105;
// System.UInt16[]
struct UInt16U5BU5D_t3326319531;
// System.UInt32[]
struct UInt32U5BU5D_t2770800703;
// System.UInt64[]
struct UInt64U5BU5D_t1659327989;
// System.Uri
struct Uri_t100236324;
// System.Uri[]
struct UriU5BU5D_t673446605;
// Windows.Devices.Haptics.ISimpleHapticsControllerFeedback
struct ISimpleHapticsControllerFeedback_t2199416581;
// Windows.Devices.Haptics.ISimpleHapticsControllerFeedback[]
struct ISimpleHapticsControllerFeedbackU5BU5D_t2466915144;
// Windows.Devices.Haptics.SimpleHapticsControllerFeedback
struct SimpleHapticsControllerFeedback_t913461083;
// Windows.Devices.Haptics.SimpleHapticsControllerFeedback[]
struct SimpleHapticsControllerFeedbackU5BU5D_t1558149338;
// Windows.Foundation.IStringable
struct IStringable_t1634798504;
// Windows.Foundation.IStringable[]
struct IStringableU5BU5D_t2804238521;
// Windows.Foundation.IWwwFormUrlDecoderEntry
struct IWwwFormUrlDecoderEntry_t2943299970;
// Windows.Foundation.IWwwFormUrlDecoderEntry[]
struct IWwwFormUrlDecoderEntryU5BU5D_t40345143;
// Windows.Foundation.Point[]
struct PointU5BU5D_t724808658;
// Windows.Foundation.Rect[]
struct RectU5BU5D_t5657558;
// Windows.Foundation.Size[]
struct SizeU5BU5D_t1671914275;
// Windows.Media.SpeechSynthesis.IVoiceInformation
struct IVoiceInformation_t3111056019;
// Windows.Media.SpeechSynthesis.IVoiceInformation[]
struct IVoiceInformationU5BU5D_t3472394690;
// Windows.Media.SpeechSynthesis.VoiceInformation
struct VoiceInformation_t4266404632;
// Windows.Media.SpeechSynthesis.VoiceInformation[]
struct VoiceInformationU5BU5D_t1943932297;
// Windows.Networking.HostName
struct HostName_t2890034819;
// Windows.Networking.HostName[]
struct HostNameU5BU5D_t2796646418;
// Windows.Networking.IHostName
struct IHostName_t3179521082;
// Windows.Networking.IHostName[]
struct IHostNameU5BU5D_t640561567;
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState
struct ISpatialInteractionSourceState_t1358829803;
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState[]
struct ISpatialInteractionSourceStateU5BU5D_t513935114;
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
struct ISpatialInteractionSourceState2_t2977437931;
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState2[]
struct ISpatialInteractionSourceState2U5BU5D_t3674212106;
// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct SpatialInteractionSourceState_t1215688063;
// Windows.UI.Input.Spatial.SpatialInteractionSourceState[]
struct SpatialInteractionSourceStateU5BU5D_t1865583014;
// Windows.Foundation.EventHandler`1<System.Object>
struct EventHandler_1_t39852124;
// System.Delegate
struct Delegate_t1188392813;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct AsyncOperationCompletedHandler_1_t1437760040;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct AsyncOperationCompletedHandler_1_t125610943;
// Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>
struct AsyncOperationCompletedHandler_1_t3900534053;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct AsyncOperationCompletedHandler_1_t3662811833;
// Windows.Media.SpeechSynthesis.SpeechSynthesisStream
struct SpeechSynthesisStream_t2322339758;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
struct AsyncOperationCompletedHandler_1_t3092276191;
// Windows.Storage.StorageFile
struct StorageFile_t1751804116;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFolder>
struct AsyncOperationCompletedHandler_1_t2325952763;
// Windows.Storage.StorageFolder
struct StorageFolder_t985480688;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStream>
struct AsyncOperationCompletedHandler_1_t3440468126;
// Windows.Storage.Streams.IRandomAccessStream
struct IRandomAccessStream_t2099996051;
// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct AsyncOperationCompletedHandler_1_t342432431;
// Windows.Storage.Streams.IRandomAccessStreamWithContentType
struct IRandomAccessStreamWithContentType_t3296927652;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>
struct AsyncOperationProgressHandler_2_t385660461;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>
struct AsyncOperationWithProgressCompletedHandler_2_t3173780358;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
struct AsyncOperationProgressHandler_2_t4160583571;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t2653736172;
// Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationProgressHandler_2_t4087444949;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t2580597550;
// Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationProgressHandler_2_t821837630;
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct AsyncOperationWithProgressCompletedHandler_2_t3609957527;
// Windows.Storage.Streams.IBuffer
struct IBuffer_t541192229;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// Windows.UI.Xaml.Interop.TypeName
struct TypeName_t4208425108;
// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct TypedEventHandler_2_t2186740966;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Char[]
struct CharU5BU5D_t3528271667;
// System.Byte[]
struct ByteU5BU5D_t4116647657;
// Windows.Foundation.IUriRuntimeClassFactory
struct IUriRuntimeClassFactory_t1786313621;
// Windows.Foundation.IUriEscapeStatics
struct IUriEscapeStatics_t1418340874;
// System.Void
struct Void_t1185182177;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// System.DelegateData
struct DelegateData_t1677132599;
// System.Delegate[]
struct DelegateU5BU5D_t1703627840;
// System.UriParser
struct UriParser_t3890150400;
// System.Uri/UriInfo
struct UriInfo_t1092684687;
// System.Reflection.MemberFilter
struct MemberFilter_t426314064;
// System.Reflection.Binder
struct Binder_t2999457153;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct IAsyncOperation_1_t1918115372;
// Windows.Storage.IStorageFolderStatics
struct IStorageFolderStatics_t333412554;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgress_2_t593214123;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStream>
struct IAsyncOperation_1_t721183771;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.Object>
struct IAsyncOperationWithProgress_2_t1186396931;
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>
struct IAsyncOperationWithProgress_2_t666352745;
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgress_2_t1622574100;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFolder>
struct IAsyncOperation_1_t3901635704;
// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct IAsyncOperation_1_t3013442981;
// Windows.Networking.IHostNameFactory
struct IHostNameFactory_t2985905689;
// Windows.Networking.IHostNameStatics
struct IHostNameStatics_t664333692;
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>
struct IAsyncOperation_1_t372991836;
// Windows.Storage.IStorageFileStatics
struct IStorageFileStatics_t4131808966;
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct IAsyncOperation_1_t1701293884;
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct IAsyncOperation_1_t1181249698;
// Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct IAsyncOperation_1_t943527478;

extern RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
extern const uint32_t IVectorView_1_GetAt_m3461880810_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m1458693733_MetadataUsageId;
extern const uint32_t IVectorView_1_GetAt_m726655415_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m4226896717_MetadataUsageId;
extern RuntimeClass* Uri_t100236324_il2cpp_TypeInfo_var;
extern const uint32_t IVectorView_1_GetAt_m454402293_MetadataUsageId;
extern RuntimeClass* Uri_t952691556_il2cpp_TypeInfo_var;
extern const uint32_t IVectorView_1_IndexOf_m56161609_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m3086367392_MetadataUsageId;
extern const uint32_t IVectorView_1_GetAt_m3846975120_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m1297880195_MetadataUsageId;
extern RuntimeClass* SimpleHapticsControllerFeedback_t913461083_il2cpp_TypeInfo_var;
extern const uint32_t IVectorView_1_GetAt_m306269307_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m1398936297_MetadataUsageId;
extern const uint32_t IVectorView_1_GetAt_m794332739_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m304364855_MetadataUsageId;
extern const uint32_t IVectorView_1_GetAt_m2035733383_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m66302439_MetadataUsageId;
extern const uint32_t IVectorView_1_GetAt_m413498356_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m2635114557_MetadataUsageId;
extern RuntimeClass* VoiceInformation_t4266404632_il2cpp_TypeInfo_var;
extern const uint32_t IVectorView_1_GetAt_m2454591675_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m3987600692_MetadataUsageId;
extern RuntimeClass* HostName_t2890034819_il2cpp_TypeInfo_var;
extern const uint32_t IVectorView_1_GetAt_m1545579875_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m3839290201_MetadataUsageId;
extern const uint32_t IVectorView_1_GetAt_m4134496452_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m1013536940_MetadataUsageId;
extern const uint32_t IVectorView_1_GetAt_m849474102_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m4030857929_MetadataUsageId;
extern const uint32_t IVectorView_1_GetAt_m481647535_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m3125443688_MetadataUsageId;
extern RuntimeClass* SpatialInteractionSourceState_t1215688063_il2cpp_TypeInfo_var;
extern const uint32_t IVectorView_1_GetAt_m3403983141_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m557233082_MetadataUsageId;
extern RuntimeClass* __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var;
extern const uint32_t IAsyncOperation_1_put_Completed_m1783482745_MetadataUsageId;
extern RuntimeClass* AsyncOperationCompletedHandler_1_t1437760040_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m1728644989_RuntimeMethod_var;
extern const uint32_t IAsyncOperation_1_get_Completed_m2903702275_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_put_Completed_m2440562410_MetadataUsageId;
extern RuntimeClass* AsyncOperationCompletedHandler_1_t125610943_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m4027491544_RuntimeMethod_var;
extern const uint32_t IAsyncOperation_1_get_Completed_m1801998692_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_GetResults_m313133751_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_put_Completed_m1437779878_MetadataUsageId;
extern RuntimeClass* AsyncOperationCompletedHandler_1_t3900534053_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m274646961_RuntimeMethod_var;
extern const uint32_t IAsyncOperation_1_get_Completed_m2736054029_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_put_Completed_m2708255201_MetadataUsageId;
extern RuntimeClass* AsyncOperationCompletedHandler_1_t3662811833_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m990580978_RuntimeMethod_var;
extern const uint32_t IAsyncOperation_1_get_Completed_m1799896646_MetadataUsageId;
extern RuntimeClass* SpeechSynthesisStream_t2322339758_il2cpp_TypeInfo_var;
extern const uint32_t IAsyncOperation_1_GetResults_m1078041023_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_put_Completed_m1174308971_MetadataUsageId;
extern RuntimeClass* AsyncOperationCompletedHandler_1_t3092276191_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m122450152_RuntimeMethod_var;
extern const uint32_t IAsyncOperation_1_get_Completed_m2669246745_MetadataUsageId;
extern RuntimeClass* StorageFile_t1751804116_il2cpp_TypeInfo_var;
extern const uint32_t IAsyncOperation_1_GetResults_m4007442614_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_put_Completed_m2910006857_MetadataUsageId;
extern RuntimeClass* AsyncOperationCompletedHandler_1_t2325952763_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m510864878_RuntimeMethod_var;
extern const uint32_t IAsyncOperation_1_get_Completed_m2270643935_MetadataUsageId;
extern RuntimeClass* StorageFolder_t985480688_il2cpp_TypeInfo_var;
extern const uint32_t IAsyncOperation_1_GetResults_m2895527307_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_put_Completed_m1751653406_MetadataUsageId;
extern RuntimeClass* AsyncOperationCompletedHandler_1_t3440468126_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m2733685339_RuntimeMethod_var;
extern const uint32_t IAsyncOperation_1_get_Completed_m3598311264_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_GetResults_m2960108873_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_put_Completed_m677968592_MetadataUsageId;
extern RuntimeClass* AsyncOperationCompletedHandler_1_t342432431_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AsyncOperationCompletedHandler_1_Invoke_m388471121_RuntimeMethod_var;
extern const uint32_t IAsyncOperation_1_get_Completed_m1527642250_MetadataUsageId;
extern const uint32_t IAsyncOperation_1_GetResults_m4077769623_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_put_Progress_m2941309595_MetadataUsageId;
extern RuntimeClass* AsyncOperationProgressHandler_2_t385660461_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_m3152257273_RuntimeMethod_var;
extern const uint32_t IAsyncOperationWithProgress_2_get_Progress_m42638027_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_put_Completed_m796962860_MetadataUsageId;
extern RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_t3173780358_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_m1272920396_RuntimeMethod_var;
extern const uint32_t IAsyncOperationWithProgress_2_get_Completed_m2596256679_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_GetResults_m4125002903_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_put_Progress_m1879259012_MetadataUsageId;
extern RuntimeClass* AsyncOperationProgressHandler_2_t4160583571_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_m3878254636_RuntimeMethod_var;
extern const uint32_t IAsyncOperationWithProgress_2_get_Progress_m1058255273_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_put_Completed_m2338839716_MetadataUsageId;
extern RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_t2653736172_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_m2996415322_RuntimeMethod_var;
extern const uint32_t IAsyncOperationWithProgress_2_get_Completed_m2626479363_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_GetResults_m2250808291_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_put_Progress_m1633053105_MetadataUsageId;
extern RuntimeClass* AsyncOperationProgressHandler_2_t4087444949_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_m1906555057_RuntimeMethod_var;
extern const uint32_t IAsyncOperationWithProgress_2_get_Progress_m165963889_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_put_Completed_m483007812_MetadataUsageId;
extern RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_t2580597550_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_m369172062_RuntimeMethod_var;
extern const uint32_t IAsyncOperationWithProgress_2_get_Completed_m655232302_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_put_Progress_m809910966_MetadataUsageId;
extern RuntimeClass* AsyncOperationProgressHandler_2_t821837630_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AsyncOperationProgressHandler_2_Invoke_m6457722_RuntimeMethod_var;
extern const uint32_t IAsyncOperationWithProgress_2_get_Progress_m489652616_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_put_Completed_m3126232629_MetadataUsageId;
extern RuntimeClass* AsyncOperationWithProgressCompletedHandler_2_t3609957527_il2cpp_TypeInfo_var;
extern const RuntimeMethod* AsyncOperationWithProgressCompletedHandler_2_Invoke_m2483366708_RuntimeMethod_var;
extern const uint32_t IAsyncOperationWithProgress_2_get_Completed_m4203981877_MetadataUsageId;
extern const uint32_t IAsyncOperationWithProgress_2_GetResults_m3465034556_MetadataUsageId;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4286223022;
extern String_t* _stringLiteral311452336;
extern const uint32_t IReference_1_get_Value_m2049683846_MetadataUsageId;
extern const uint32_t IReference_1_get_Value_m3229386239_MetadataUsageId;
struct TypeName_t4208425108_marshaled_windows_runtime;
struct TypeName_t4208425108;;
struct TypeName_t4208425108_marshaled_windows_runtime;;
struct IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper;
struct ISpatialInteractionSourceState_t1358829803;
struct ISpatialInteractionSourceState2_t2977437931;
struct IAsyncOperationCompletedHandler_1_t3662811833_ComCallableWrapper;
struct ISpeechSynthesisStream_t764091608;
struct IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t125610943_ComCallableWrapper;
struct IWwwFormUrlDecoderRuntimeClass_t497020701;
struct IUriRuntimeClass_t921050115;;
struct IVoiceInformation_t3111056019;
struct ISpatialInteractionSource_t2185314266;
struct IHostName_t3179521082;
struct IAsyncOperationProgressHandler_2_t385660461_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t3173780358_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t342432431_ComCallableWrapper;
struct IRandomAccessStreamWithContentType_t3296927652;
struct IAsyncOperationCompletedHandler_1_t3440468126_ComCallableWrapper;
struct IRandomAccessStream_t2099996051;
struct IInputStream_t2821136229;
struct IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper;
struct IBuffer_t541192229;
struct IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper;
struct IAsyncOperationProgressHandler_2_t4160583571_ComCallableWrapper;
struct IAsyncOperationWithProgressCompletedHandler_2_t2653736172_ComCallableWrapper;
struct IAsyncOperationCompletedHandler_1_t3092276191_ComCallableWrapper;
struct IStorageFile_t455187485;
struct IAsyncOperationCompletedHandler_1_t2325952763_ComCallableWrapper;
struct IStorageFolder_t2414910357;
struct IAsyncOperation_1_t1918115372;
struct IClosable_t326290202;
struct ISimpleHapticsControllerFeedback_t2199416581;
struct IAsyncOperation_1_t3901635704;
struct IWwwFormUrlDecoderEntry_t2943299970;
struct IStringable_t1634798504;
struct IAsyncOperationWithProgress_2_t593214123;
struct IAsyncOperation_1_t3013442981;
struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Size_t550917638 ;
struct Point_t4164953539 ;
struct Guid_t ;
struct EventRegistrationToken_t318890788 ;
struct Rect_t2695113487 ;
struct IAsyncOperationWithProgress_2_t1622574100;
struct TimeSpan_t881159249 ;
struct IAsyncOperation_1_t372991836;
struct IAsyncOperation_1_t721183771;
struct IAsyncOperationWithProgress_2_t1186396931;
struct IAsyncOperationWithProgress_2_t666352745;
struct IAsyncOperation_1_t1701293884;
struct IAsyncOperation_1_t1181249698;
struct IAsyncOperation_1_t943527478;

struct DoubleU5BU5D_t3413330114;
struct ExceptionU5BU5D_t2535001212;
struct GuidU5BU5D_t545550574;
struct IDisposableU5BU5D_t3584190570;
struct Int16U5BU5D_t3686840178;
struct Int32U5BU5D_t385246372;
struct Int64U5BU5D_t2559172825;
struct ObjectU5BU5D_t2843939325;
struct EventRegistrationTokenU5BU5D_t897718221;
struct SingleU5BU5D_t1444911251;
struct StringU5BU5D_t1281789340;
struct TimeSpanU5BU5D_t4291357516;
struct TypeU5BU5D_t3940880105;
struct UInt16U5BU5D_t3326319531;
struct UInt32U5BU5D_t2770800703;
struct UInt64U5BU5D_t1659327989;
struct UriU5BU5D_t673446605;
struct ISimpleHapticsControllerFeedbackU5BU5D_t2466915144;
struct SimpleHapticsControllerFeedbackU5BU5D_t1558149338;
struct IStringableU5BU5D_t2804238521;
struct IWwwFormUrlDecoderEntryU5BU5D_t40345143;
struct PointU5BU5D_t724808658;
struct RectU5BU5D_t5657558;
struct SizeU5BU5D_t1671914275;
struct IVoiceInformationU5BU5D_t3472394690;
struct VoiceInformationU5BU5D_t1943932297;
struct HostNameU5BU5D_t2796646418;
struct IHostNameU5BU5D_t640561567;
struct ISpatialInteractionSourceStateU5BU5D_t513935114;
struct ISpatialInteractionSourceState2U5BU5D_t3674212106;
struct SpatialInteractionSourceStateU5BU5D_t1865583014;
struct DelegateU5BU5D_t1703627840;


// Windows.Foundation.IAsyncOperation`1<System.Boolean>
struct NOVTABLE IAsyncOperation_1_t3013442981 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m1783482745(IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m2903702275(IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m183360251(bool* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.UInt64>
struct NOVTABLE IReference_1_t3387208517 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2294903021(uint64_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>
struct NOVTABLE IVectorView_1_t554553325 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3403983141(uint32_t ___index0, ISpatialInteractionSourceState_t1358829803** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2305435658(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1144283072(ISpatialInteractionSourceState_t1358829803* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m557233082(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISpatialInteractionSourceState_t1358829803** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>
struct NOVTABLE IVectorView_1_t2316303193 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m481647535(uint32_t ___index0, ISpatialInteractionSourceState2_t2977437931** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3235029412(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3786545505(ISpatialInteractionSourceState2_t2977437931* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m3125443688(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISpatialInteractionSourceState2_t2977437931** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
struct NOVTABLE ISpatialInteractionSourceState2_t2977437931 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped0_get_IsSelectPressed_m1462024929() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped1_get_IsMenuPressed_m2884506468() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped2_get_IsGrasped_m2033866613() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped3_get_SelectPressedValue_m3876541456() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState2_U24__Stripped4_get_ControllerProperties_m1166340460() = 0;
};
// Windows.Foundation.IReference`1<System.UInt32>
struct NOVTABLE IReference_1_t1813230403 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1308423508(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Type>
struct NOVTABLE IReference_1_t1737113185 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2081172832(Type_t ** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct NOVTABLE IAsyncOperation_1_t943527478 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m2708255201(IAsyncOperationCompletedHandler_1_t3662811833_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m1799896646(IAsyncOperationCompletedHandler_1_t3662811833_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m1078041023(ISpeechSynthesisStream_t764091608** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.UInt32>
struct NOVTABLE IAsyncOperation_1_t1181249698 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m1437779878(IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m2736054029(IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m2010780058(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<System.Object>
struct NOVTABLE IAsyncOperation_1_t1701293884 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m2440562410(IAsyncOperationCompletedHandler_1_t125610943_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m1801998692(IAsyncOperationCompletedHandler_1_t125610943_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m313133751(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.UInt16>
struct NOVTABLE IReference_1_t1430893383 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1209658772(uint16_t* comReturnValue) = 0;
};
// Windows.Foundation.IUriRuntimeClass
struct NOVTABLE IUriRuntimeClass_t921050115 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_AbsoluteUri_m24555840(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_DisplayUri_m1911302195(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Domain_m3775838853(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Extension_m2380123(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Fragment_m2866416593(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Host_m781094962(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Password_m478846179(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Path_m3724347053(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Query_m621658451(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_QueryParsed_m1747618489(IWwwFormUrlDecoderRuntimeClass_t497020701** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_RawUri_m1303737506(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_SchemeName_m368768956(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_UserName_m4126713170(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Port_m3527560009(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_get_Suspicious_m850333333(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_Equals_m846289381(IUriRuntimeClass_t921050115* ___pUri0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClass_CombineUri_m3748903678(Il2CppHString ___relativeUri0, IUriRuntimeClass_t921050115** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Media.SpeechSynthesis.IVoiceInformation>
struct NOVTABLE IVectorView_1_t2449921281 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m413498356(uint32_t ___index0, IVoiceInformation_t3111056019** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m15361801(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3832803476(IVoiceInformation_t3111056019* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m2635114557(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IVoiceInformation_t3111056019** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IUriRuntimeClassWithAbsoluteCanonicalUri
struct NOVTABLE IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassWithAbsoluteCanonicalUri_get_AbsoluteCanonicalUri_m4057547880(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassWithAbsoluteCanonicalUri_get_DisplayIri_m4067013853(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IWwwFormUrlDecoderEntry
struct NOVTABLE IWwwFormUrlDecoderEntry_t2943299970 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderEntry_U24__Stripped0_get_Name_m1841419405() = 0;
	virtual il2cpp_hresult_t STDCALL IWwwFormUrlDecoderEntry_U24__Stripped1_get_Value_m2688400907() = 0;
};
// Windows.Foundation.IUriRuntimeClassFactory
struct NOVTABLE IUriRuntimeClassFactory_t1786313621 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassFactory_CreateUri_m1347622952(Il2CppHString ___uri0, IUriRuntimeClass_t921050115** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriRuntimeClassFactory_CreateWithRelativeUri_m922460588(Il2CppHString ___baseUri0, Il2CppHString ___relativeUri1, IUriRuntimeClass_t921050115** comReturnValue) = 0;
};
// Windows.Storage.Streams.IBuffer
struct NOVTABLE IBuffer_t541192229 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Capacity_m406059298(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_get_Length_m2796848087(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IBuffer_put_Length_m1827843137(uint32_t ___value0) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>
struct NOVTABLE IVectorView_1_t697695065 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m849474102(uint32_t ___index0, ISpatialInteractionSourceState_t1358829803** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m1912501272(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1154184863(ISpatialInteractionSourceState_t1358829803* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4030857929(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISpatialInteractionSourceState_t1358829803** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState
struct NOVTABLE ISpatialInteractionSourceState_t1358829803 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_get_Source_m497120721(ISpatialInteractionSource_t2185314266** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped0_get_Properties_m1189053370() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped1_get_IsPressed_m546887925() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped2_get_Timestamp_m1483989895() = 0;
	virtual il2cpp_hresult_t STDCALL ISpatialInteractionSourceState_U24__Stripped3_TryGetPointerPose_m837462904() = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Networking.IHostName>
struct NOVTABLE IVectorView_1_t2518386344 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m4134496452(uint32_t ___index0, IHostName_t3179521082** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m1697958776(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2926431078(IHostName_t3179521082* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m1013536940(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IHostName_t3179521082** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Media.SpeechSynthesis.VoiceInformation>
struct NOVTABLE IVectorView_1_t3605269894 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2454591675(uint32_t ___index0, IVoiceInformation_t3111056019** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m4055464204(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2751515202(IVoiceInformation_t3111056019* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m3987600692(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IVoiceInformation_t3111056019** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Networking.HostName>
struct NOVTABLE IVectorView_1_t2228900081 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m1545579875(uint32_t ___index0, IHostName_t3179521082** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m1139562657(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1058966889(IHostName_t3179521082* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m3839290201(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IHostName_t3179521082** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStreamWithContentType
struct NOVTABLE IRandomAccessStreamWithContentType_t3296927652 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.Object>
struct NOVTABLE IAsyncOperationWithProgress_2_t1186396931 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m2941309595(IAsyncOperationProgressHandler_2_t385660461_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m42638027(IAsyncOperationProgressHandler_2_t385660461_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m796962860(IAsyncOperationWithProgressCompletedHandler_2_t3173780358_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m2596256679(IAsyncOperationWithProgressCompletedHandler_2_t3173780358_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m4125002903(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct NOVTABLE IAsyncOperation_1_t1918115372 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m677968592(IAsyncOperationCompletedHandler_1_t342432431_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m1527642250(IAsyncOperationCompletedHandler_1_t342432431_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m4077769623(IRandomAccessStreamWithContentType_t3296927652** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStream>
struct NOVTABLE IAsyncOperation_1_t721183771 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m1751653406(IAsyncOperationCompletedHandler_1_t3440468126_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m3598311264(IAsyncOperationCompletedHandler_1_t3440468126_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m2960108873(IRandomAccessStream_t2099996051** comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStream
struct NOVTABLE IRandomAccessStream_t2099996051 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Size_m3315994282(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_put_Size_m2471143606(uint64_t ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_GetInputStreamAt_m2841117993(uint64_t ___position0, IInputStream_t2821136229** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped0_GetOutputStreamAt_m1068482380() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_Position_m3162954653(uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_Seek_m3482800682(uint64_t ___position0) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_U24__Stripped1_CloneStream_m3491590319() = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanRead_m2334341332(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStream_get_CanWrite_m1780602347(bool* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Char>
struct NOVTABLE IReference_1_t2887628895 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m704688121(Il2CppChar* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Boolean>
struct NOVTABLE IReference_1_t3645423686 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m774017165(bool* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t1622574100 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m809910966(IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m489652616(IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m3126232629(IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m4203981877(IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m3465034556(IBuffer_t541192229** comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t593214123 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m1633053105(IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m165963889(IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m483007812(IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m655232302(IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m3754792249(uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>
struct NOVTABLE IAsyncOperationWithProgress_2_t666352745 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Progress_m1879259012(IAsyncOperationProgressHandler_2_t4160583571_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Progress_m1058255273(IAsyncOperationProgressHandler_2_t4160583571_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_put_Completed_m2338839716(IAsyncOperationWithProgressCompletedHandler_2_t2653736172_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_get_Completed_m2626479363(IAsyncOperationWithProgressCompletedHandler_2_t2653736172_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperationWithProgress_2_GetResults_m2250808291(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Byte>
struct NOVTABLE IReference_1_t387464801 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3247461990(uint8_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>
struct NOVTABLE IAsyncOperation_1_t372991836 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m1174308971(IAsyncOperationCompletedHandler_1_t3092276191_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m2669246745(IAsyncOperationCompletedHandler_1_t3092276191_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m4007442614(IStorageFile_t455187485** comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Object>
struct NOVTABLE IReference_1_t2333274589 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3229386239(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Media.SpeechSynthesis.ISpeechSynthesisStream
struct NOVTABLE ISpeechSynthesisStream_t764091608 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISpeechSynthesisStream_U24__Stripped0_get_Markers_m1331395156() = 0;
};
// Windows.Foundation.IReference`1<System.String>
struct NOVTABLE IReference_1_t1100619114 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4216510932(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Single>
struct NOVTABLE IReference_1_t650435199 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1034221680(float* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Int64>
struct NOVTABLE IReference_1_t2989735729 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m197260093(int64_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Exception>
struct NOVTABLE IReference_1_t689905674 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3319376935(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Double>
struct NOVTABLE IReference_1_t4142801084 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3861827098(double* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Int16>
struct NOVTABLE IReference_1_t1805988812 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3359388353(int16_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.Int32>
struct NOVTABLE IReference_1_t2204114178 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1946804912(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFolder>
struct NOVTABLE IAsyncOperation_1_t3901635704 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_put_Completed_m2910006857(IAsyncOperationCompletedHandler_1_t2325952763_ComCallableWrapper* ___handler0) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_get_Completed_m2270643935(IAsyncOperationCompletedHandler_1_t2325952763_ComCallableWrapper** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IAsyncOperation_1_GetResults_m2895527307(IStorageFolder_t2414910357** comReturnValue) = 0;
};
// Windows.Storage.Streams.IInputStreamReference
struct NOVTABLE IInputStreamReference_t980626503 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStreamReference_U24__Stripped0_OpenSequentialReadAsync_m2665372827() = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Type>
struct NOVTABLE IVectorView_1_t1822810022 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3708182184(uint32_t ___index0, Type_t ** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m1097778865(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1129849567(Type_t * ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m3274208783(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Type_t ** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Storage.Streams.IRandomAccessStreamReference
struct NOVTABLE IRandomAccessStreamReference_t2718546672 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IRandomAccessStreamReference_OpenReadAsync_m2508312280(IAsyncOperation_1_t1918115372** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.String>
struct NOVTABLE IVectorView_1_t1186315951 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3375407458(uint32_t ___index0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2689776779(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2724138940(Il2CppHString ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m912540698(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppHString* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IClosable
struct NOVTABLE IClosable_t326290202 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IClosable_Close_m649191502() = 0;
};
// Windows.Storage.IStorageFile2
struct NOVTABLE IStorageFile2_t81501002 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFile2_U24__Stripped0_OpenAsync_m165645617() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile2_U24__Stripped1_OpenTransactedWriteAsync_m1104539825() = 0;
};
// Windows.Storage.IStorageFileStatics
struct NOVTABLE IStorageFileStatics_t4131808966 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped0_GetFileFromPathAsync_m2841215677() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped1_GetFileFromApplicationUriAsync_m807305831() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped2_CreateStreamedFileAsync_m3773394311() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped3_ReplaceWithStreamedFileAsync_m2701266470() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped4_CreateStreamedFileFromUriAsync_m2958466004() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFileStatics_U24__Stripped5_ReplaceWithStreamedFileFromUriAsync_m1390089385() = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.IDisposable>
struct NOVTABLE IVectorView_1_t2979130745 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3461880810(uint32_t ___index0, IClosable_t326290202** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m671734930(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m456269461(IClosable_t326290202* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m1458693733(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IClosable_t326290202** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Media.Core.ITimedMetadataTrackProvider
struct NOVTABLE ITimedMetadataTrackProvider_t1703961418 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ITimedMetadataTrackProvider_U24__Stripped0_get_TimedMetadataTracks_m167098999() = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.UInt16>
struct NOVTABLE IVectorView_1_t1516590220 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3314156493(uint32_t ___index0, uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2270537288(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m450613661(uint16_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m619054749(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint16_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Storage.IStorageItem
struct NOVTABLE IStorageItem_t3194585767 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped0_RenameAsync_m1111865988() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped1_RenameAsync_m1111899871() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped2_DeleteAsync_m558316365() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped3_DeleteAsync_m558350056() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped4_GetBasicPropertiesAsync_m2561736561() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped5_get_Name_m3157959696() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_get_Path_m1853866705(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped6_get_Attributes_m2913386339() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped7_get_DateCreated_m1722396674() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem_U24__Stripped8_IsOfType_m2015695515() = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Int64>
struct NOVTABLE IVectorView_1_t3075432566 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m4097062415(uint32_t ___index0, int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3689183858(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m928127612(int64_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m2435124798(uint32_t ___startIndex0, uint32_t ___items1ArraySize, int64_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Storage.IStorageItem2
struct NOVTABLE IStorageItem2_t2827190580 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItem2_U24__Stripped0_GetParentAsync_m4237091681() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItem2_U24__Stripped1_IsEqual_m1153349944() = 0;
};
// Windows.Storage.IStorageItemPropertiesWithProvider
struct NOVTABLE IStorageItemPropertiesWithProvider_t3527078644 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItemPropertiesWithProvider_U24__Stripped0_get_Provider_m1098238941() = 0;
};
// Windows.Storage.IStorageFilePropertiesWithAvailability
struct NOVTABLE IStorageFilePropertiesWithAvailability_t1554344922 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFilePropertiesWithAvailability_U24__Stripped0_get_IsAvailable_m2026400567() = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Int32>
struct NOVTABLE IVectorView_1_t2289811015 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m1038499426(uint32_t ___index0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3269133634(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m711808760(int32_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m632553004(uint32_t ___startIndex0, uint32_t ___items1ArraySize, int32_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Storage.IStorageItemProperties
struct NOVTABLE IStorageItemProperties_t2031733036 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped0_GetThumbnailAsync_m260624717() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped1_GetThumbnailAsync_m3236220828() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped2_GetThumbnailAsync_m3688217351() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped3_get_DisplayName_m3813510564() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped4_get_DisplayType_m553261029() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped5_get_FolderRelativeId_m2825143686() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties_U24__Stripped6_get_Properties_m1148881838() = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Single>
struct NOVTABLE IVectorView_1_t736132036 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3845931799(uint32_t ___index0, float* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2530367390(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m481527169(float ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m996189245(uint32_t ___startIndex0, uint32_t ___items1ArraySize, float* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Storage.IStorageItemProperties2
struct NOVTABLE IStorageItemProperties2_t3993257882 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties2_U24__Stripped0_GetScaledImageAsThumbnailAsync_m1311815822() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties2_U24__Stripped1_GetScaledImageAsThumbnailAsync_m3789805793() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageItemProperties2_U24__Stripped2_GetScaledImageAsThumbnailAsync_m1883939878() = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Object>
struct NOVTABLE IVectorView_1_t2418971426 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m726655415(uint32_t ___index0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m1102039859(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2349108669(Il2CppIInspectable* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4226896717(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Il2CppIInspectable** ___items1, uint32_t* comReturnValue) = 0;
};
#ifndef RUNTIMEOBJECT_H
#define RUNTIMEOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEOBJECT_H
// Windows.Foundation.Collections.IVectorView`1<System.Int16>
struct NOVTABLE IVectorView_1_t1891685649 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m1319642345(uint32_t ___index0, int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2071989762(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1081404675(int16_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m3136641509(uint32_t ___startIndex0, uint32_t ___items1ArraySize, int16_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>
struct NOVTABLE IVectorView_1_t252326345 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m306269307(uint32_t ___index0, ISimpleHapticsControllerFeedback_t2199416581** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m164847096(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m390895991(ISimpleHapticsControllerFeedback_t2199416581* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m1398936297(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISimpleHapticsControllerFeedback_t2199416581** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Double>
struct NOVTABLE IVectorView_1_t4228497921 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3029520189(uint32_t ___index0, double* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m1840672366(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m519924844(double ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4072621343(uint32_t ___startIndex0, uint32_t ___items1ArraySize, double* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Devices.Haptics.ISimpleHapticsControllerFeedback
struct NOVTABLE ISimpleHapticsControllerFeedback_t2199416581 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsControllerFeedback_get_Waveform_m2893722823(uint16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL ISimpleHapticsControllerFeedback_U24__Stripped0_get_Duration_m1134348836() = 0;
};
// Windows.Storage.IStorageFolderStatics
struct NOVTABLE IStorageFolderStatics_t333412554 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolderStatics_GetFolderFromPathAsync_m3674878916(Il2CppHString ___path0, IAsyncOperation_1_t3901635704** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>
struct NOVTABLE IVectorView_1_t1538281843 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3846975120(uint32_t ___index0, ISimpleHapticsControllerFeedback_t2199416581** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2545045611(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2360559998(ISimpleHapticsControllerFeedback_t2199416581* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m1297880195(uint32_t ___startIndex0, uint32_t ___items1ArraySize, ISimpleHapticsControllerFeedback_t2199416581** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IStringable
struct NOVTABLE IStringable_t1634798504 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStringable_ToString_m698137009(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>
struct NOVTABLE IVectorView_1_t2282165232 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2035733383(uint32_t ___index0, IWwwFormUrlDecoderEntry_t2943299970** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2047203447(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2753411397(IWwwFormUrlDecoderEntry_t2943299970* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m66302439(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IWwwFormUrlDecoderEntry_t2943299970** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IStringable>
struct NOVTABLE IVectorView_1_t973663766 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m794332739(uint32_t ___index0, IStringable_t1634798504** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3577537834(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m726151057(IStringable_t1634798504* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m304364855(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IStringable_t1634798504** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Media.SpeechSynthesis.IVoiceInformation
struct NOVTABLE IVoiceInformation_t3111056019 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_get_DisplayName_m1429510609(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped0_get_Id_m1776229927() = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped1_get_Language_m1418474925() = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped2_get_Description_m153214867() = 0;
	virtual il2cpp_hresult_t STDCALL IVoiceInformation_U24__Stripped3_get_Gender_m2588825291() = 0;
};
// Windows.Foundation.IUriEscapeStatics
struct NOVTABLE IUriEscapeStatics_t1418340874 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IUriEscapeStatics_UnescapeComponent_m4034034788(Il2CppHString ___toUnescape0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IUriEscapeStatics_EscapeComponent_m2989309814(Il2CppHString ___toEscape0, Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.UInt64>
struct NOVTABLE IVectorView_1_t3472905354 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m4005243902(uint32_t ___index0, uint64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3900133190(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3903182137(uint64_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m3669431734(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint64_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Storage.Streams.IContentTypeProvider
struct NOVTABLE IContentTypeProvider_t1806097440 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IContentTypeProvider_U24__Stripped0_get_ContentType_m1286225722() = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.UInt32>
struct NOVTABLE IVectorView_1_t1898927240 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m1103191833(uint32_t ___index0, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3012050323(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2476062681(uint32_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m2297801015(uint32_t ___startIndex0, uint32_t ___items1ArraySize, uint32_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Exception>
struct NOVTABLE IVectorView_1_t775602511 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m116971458(uint32_t ___index0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m917737768(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2525069292(int32_t ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m979855732(uint32_t ___startIndex0, uint32_t ___items1ArraySize, int32_t* ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Storage.Streams.IOutputStream
struct NOVTABLE IOutputStream_t2042351338 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IOutputStream_WriteAsync_m124082296(IBuffer_t541192229* ___buffer0, IAsyncOperationWithProgress_2_t593214123** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IOutputStream_FlushAsync_m252007188(IAsyncOperation_1_t3013442981** comReturnValue) = 0;
};
// Windows.Storage.Search.IStorageFolderQueryOperations
struct NOVTABLE IStorageFolderQueryOperations_t91328000 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped0_GetIndexedStateAsync_m1002212636() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped1_CreateFileQuery_m2610834360() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped2_CreateFileQuery_m2607550361() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped3_CreateFileQueryWithOptions_m3264920027() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped4_CreateFolderQuery_m562621060() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped5_CreateFolderQuery_m293497691() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped6_CreateFolderQueryWithOptions_m3171464593() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped7_CreateItemQuery_m3471952481() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped8_CreateItemQueryWithOptions_m3157268352() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped9_GetFilesAsync_m2850188463() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped10_GetFilesAsync_m2309390520() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped11_GetFoldersAsync_m3312258101() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped12_GetFoldersAsync_m2029391029() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped13_GetItemsAsync_m463088250() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped14_AreQueryOptionsSupported_m2004623827() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped15_IsCommonFolderQuerySupported_m3750205277() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolderQueryOperations_U24__Stripped16_IsCommonFileQuerySupported_m2447375717() = 0;
};
// Windows.Storage.IStorageFolder2
struct NOVTABLE IStorageFolder2_t3506658410 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolder2_U24__Stripped0_TryGetItemAsync_m3190903159() = 0;
};
// Windows.Networking.IHostNameFactory
struct NOVTABLE IHostNameFactory_t2985905689 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameFactory_CreateHostName_m4168667700(Il2CppHString ___hostName0, IHostName_t3179521082** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Uri>
struct NOVTABLE IVectorView_1_t3734068882 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m454402293(uint32_t ___index0, IUriRuntimeClass_t921050115** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3232372556(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m56161609(IUriRuntimeClass_t921050115* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m3086367392(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IUriRuntimeClass_t921050115** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Networking.IHostNameStatics
struct NOVTABLE IHostNameStatics_t664333692 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostNameStatics_U24__Stripped0_Compare_m3120053299() = 0;
};
#ifndef EXCEPTION_T_H
#define EXCEPTION_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Exception
struct  Exception_t  : public RuntimeObject
{
public:
	// System.String System.Exception::_className
	String_t* ____className_1;
	// System.String System.Exception::_message
	String_t* ____message_2;
	// System.Collections.IDictionary System.Exception::_data
	RuntimeObject* ____data_3;
	// System.Exception System.Exception::_innerException
	Exception_t * ____innerException_4;
	// System.String System.Exception::_helpURL
	String_t* ____helpURL_5;
	// System.Object System.Exception::_stackTrace
	RuntimeObject * ____stackTrace_6;
	// System.String System.Exception::_stackTraceString
	String_t* ____stackTraceString_7;
	// System.String System.Exception::_remoteStackTraceString
	String_t* ____remoteStackTraceString_8;
	// System.Int32 System.Exception::_remoteStackIndex
	int32_t ____remoteStackIndex_9;
	// System.Object System.Exception::_dynamicMethods
	RuntimeObject * ____dynamicMethods_10;
	// System.Int32 System.Exception::_HResult
	int32_t ____HResult_11;
	// System.String System.Exception::_source
	String_t* ____source_12;
	// System.Runtime.Serialization.SafeSerializationManager System.Exception::_safeSerializationManager
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t4013366056* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((&____className_1), value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((&____message_2), value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((&____data_3), value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((&____innerException_4), value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((&____helpURL_5), value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((&____stackTrace_6), value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((&____stackTraceString_7), value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((&____remoteStackTraceString_8), value);
	}

	inline static int32_t get_offset_of__remoteStackIndex_9() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackIndex_9)); }
	inline int32_t get__remoteStackIndex_9() const { return ____remoteStackIndex_9; }
	inline int32_t* get_address_of__remoteStackIndex_9() { return &____remoteStackIndex_9; }
	inline void set__remoteStackIndex_9(int32_t value)
	{
		____remoteStackIndex_9 = value;
	}

	inline static int32_t get_offset_of__dynamicMethods_10() { return static_cast<int32_t>(offsetof(Exception_t, ____dynamicMethods_10)); }
	inline RuntimeObject * get__dynamicMethods_10() const { return ____dynamicMethods_10; }
	inline RuntimeObject ** get_address_of__dynamicMethods_10() { return &____dynamicMethods_10; }
	inline void set__dynamicMethods_10(RuntimeObject * value)
	{
		____dynamicMethods_10 = value;
		Il2CppCodeGenWriteBarrier((&____dynamicMethods_10), value);
	}

	inline static int32_t get_offset_of__HResult_11() { return static_cast<int32_t>(offsetof(Exception_t, ____HResult_11)); }
	inline int32_t get__HResult_11() const { return ____HResult_11; }
	inline int32_t* get_address_of__HResult_11() { return &____HResult_11; }
	inline void set__HResult_11(int32_t value)
	{
		____HResult_11 = value;
	}

	inline static int32_t get_offset_of__source_12() { return static_cast<int32_t>(offsetof(Exception_t, ____source_12)); }
	inline String_t* get__source_12() const { return ____source_12; }
	inline String_t** get_address_of__source_12() { return &____source_12; }
	inline void set__source_12(String_t* value)
	{
		____source_12 = value;
		Il2CppCodeGenWriteBarrier((&____source_12), value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_t2481557153 * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_t2481557153 ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_t2481557153 * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((&____safeSerializationManager_13), value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t1169129676* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t1169129676** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t1169129676* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((&___captured_traces_14), value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t4013366056* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t4013366056** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t4013366056* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((&___native_trace_ips_15), value);
	}
};

struct Exception_t_StaticFields
{
public:
	// System.Object System.Exception::s_EDILock
	RuntimeObject * ___s_EDILock_0;

public:
	inline static int32_t get_offset_of_s_EDILock_0() { return static_cast<int32_t>(offsetof(Exception_t_StaticFields, ___s_EDILock_0)); }
	inline RuntimeObject * get_s_EDILock_0() const { return ___s_EDILock_0; }
	inline RuntimeObject ** get_address_of_s_EDILock_0() { return &___s_EDILock_0; }
	inline void set_s_EDILock_0(RuntimeObject * value)
	{
		___s_EDILock_0 = value;
		Il2CppCodeGenWriteBarrier((&___s_EDILock_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Exception
struct Exception_t_marshaled_pinvoke
{
	char* ____className_1;
	char* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_pinvoke* ____innerException_4;
	char* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	char* ____stackTraceString_7;
	char* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	char* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
// Native definition for COM marshalling of System.Exception
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className_1;
	Il2CppChar* ____message_2;
	RuntimeObject* ____data_3;
	Exception_t_marshaled_com* ____innerException_4;
	Il2CppChar* ____helpURL_5;
	Il2CppIUnknown* ____stackTrace_6;
	Il2CppChar* ____stackTraceString_7;
	Il2CppChar* ____remoteStackTraceString_8;
	int32_t ____remoteStackIndex_9;
	Il2CppIUnknown* ____dynamicMethods_10;
	int32_t ____HResult_11;
	Il2CppChar* ____source_12;
	SafeSerializationManager_t2481557153 * ____safeSerializationManager_13;
	StackTraceU5BU5D_t1169129676* ___captured_traces_14;
	intptr_t* ___native_trace_ips_15;
};
#endif // EXCEPTION_T_H
struct Il2CppArrayBounds;
#ifndef RUNTIMEARRAY_H
#define RUNTIMEARRAY_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Array

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMEARRAY_H
#ifndef IL2CPPCOMOBJECT_H
#define IL2CPPCOMOBJECT_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComObject

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // IL2CPPCOMOBJECT_H
#ifndef VALUETYPE_T3640485471_H
#define VALUETYPE_T3640485471_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ValueType
struct  ValueType_t3640485471  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t3640485471_marshaled_com
{
};
#endif // VALUETYPE_T3640485471_H
#ifndef MEMBERINFO_T_H
#define MEMBERINFO_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.MemberInfo
struct  MemberInfo_t  : public RuntimeObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MEMBERINFO_T_H
#ifndef STRING_T_H
#define STRING_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.String
struct  String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((&___Empty_5), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STRING_T_H
#ifndef UNIVERSALAPICONTRACT_T3367004861_H
#define UNIVERSALAPICONTRACT_T3367004861_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.UniversalApiContract
struct  UniversalApiContract_t3367004861 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UNIVERSALAPICONTRACT_T3367004861_H
#ifndef TIMESPAN_T1755640982_H
#define TIMESPAN_T1755640982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.TimeSpan
struct  TimeSpan_t1755640982 
{
public:
	// System.Int64 Windows.Foundation.TimeSpan::Duration
	int64_t ___Duration_0;

public:
	inline static int32_t get_offset_of_Duration_0() { return static_cast<int32_t>(offsetof(TimeSpan_t1755640982, ___Duration_0)); }
	inline int64_t get_Duration_0() const { return ___Duration_0; }
	inline int64_t* get_address_of_Duration_0() { return &___Duration_0; }
	inline void set_Duration_0(int64_t value)
	{
		___Duration_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T1755640982_H
#ifndef BYTE_T1134296376_H
#define BYTE_T1134296376_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Byte
struct  Byte_t1134296376 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t1134296376, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BYTE_T1134296376_H
#ifndef RECT_T2695113488_H
#define RECT_T2695113488_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Rect
struct  Rect_t2695113488 
{
public:
	// System.Single Windows.Foundation.Rect::X
	float ___X_0;
	// System.Single Windows.Foundation.Rect::Y
	float ___Y_1;
	// System.Single Windows.Foundation.Rect::Width
	float ___Width_2;
	// System.Single Windows.Foundation.Rect::Height
	float ___Height_3;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Rect_t2695113488, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Rect_t2695113488, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}

	inline static int32_t get_offset_of_Width_2() { return static_cast<int32_t>(offsetof(Rect_t2695113488, ___Width_2)); }
	inline float get_Width_2() const { return ___Width_2; }
	inline float* get_address_of_Width_2() { return &___Width_2; }
	inline void set_Width_2(float value)
	{
		___Width_2 = value;
	}

	inline static int32_t get_offset_of_Height_3() { return static_cast<int32_t>(offsetof(Rect_t2695113488, ___Height_3)); }
	inline float get_Height_3() const { return ___Height_3; }
	inline float* get_address_of_Height_3() { return &___Height_3; }
	inline void set_Height_3(float value)
	{
		___Height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2695113488_H
#ifndef ENUM_T4135868527_H
#define ENUM_T4135868527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Enum
struct  Enum_t4135868527  : public ValueType_t3640485471
{
public:

public:
};

struct Enum_t4135868527_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t3528271667* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t4135868527_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t3528271667* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t3528271667** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t3528271667* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((&___enumSeperatorCharArray_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t4135868527_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t4135868527_marshaled_com
{
};
#endif // ENUM_T4135868527_H
#ifndef DATETIME_T3738529785_H
#define DATETIME_T3738529785_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTime
struct  DateTime_t3738529785 
{
public:
	// System.UInt64 System.DateTime::dateData
	uint64_t ___dateData_44;

public:
	inline static int32_t get_offset_of_dateData_44() { return static_cast<int32_t>(offsetof(DateTime_t3738529785, ___dateData_44)); }
	inline uint64_t get_dateData_44() const { return ___dateData_44; }
	inline uint64_t* get_address_of_dateData_44() { return &___dateData_44; }
	inline void set_dateData_44(uint64_t value)
	{
		___dateData_44 = value;
	}
};

struct DateTime_t3738529785_StaticFields
{
public:
	// System.Int32[] System.DateTime::DaysToMonth365
	Int32U5BU5D_t385246372* ___DaysToMonth365_29;
	// System.Int32[] System.DateTime::DaysToMonth366
	Int32U5BU5D_t385246372* ___DaysToMonth366_30;
	// System.DateTime System.DateTime::MinValue
	DateTime_t3738529785  ___MinValue_31;
	// System.DateTime System.DateTime::MaxValue
	DateTime_t3738529785  ___MaxValue_32;

public:
	inline static int32_t get_offset_of_DaysToMonth365_29() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth365_29)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth365_29() const { return ___DaysToMonth365_29; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth365_29() { return &___DaysToMonth365_29; }
	inline void set_DaysToMonth365_29(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth365_29 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth365_29), value);
	}

	inline static int32_t get_offset_of_DaysToMonth366_30() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___DaysToMonth366_30)); }
	inline Int32U5BU5D_t385246372* get_DaysToMonth366_30() const { return ___DaysToMonth366_30; }
	inline Int32U5BU5D_t385246372** get_address_of_DaysToMonth366_30() { return &___DaysToMonth366_30; }
	inline void set_DaysToMonth366_30(Int32U5BU5D_t385246372* value)
	{
		___DaysToMonth366_30 = value;
		Il2CppCodeGenWriteBarrier((&___DaysToMonth366_30), value);
	}

	inline static int32_t get_offset_of_MinValue_31() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MinValue_31)); }
	inline DateTime_t3738529785  get_MinValue_31() const { return ___MinValue_31; }
	inline DateTime_t3738529785 * get_address_of_MinValue_31() { return &___MinValue_31; }
	inline void set_MinValue_31(DateTime_t3738529785  value)
	{
		___MinValue_31 = value;
	}

	inline static int32_t get_offset_of_MaxValue_32() { return static_cast<int32_t>(offsetof(DateTime_t3738529785_StaticFields, ___MaxValue_32)); }
	inline DateTime_t3738529785  get_MaxValue_32() const { return ___MaxValue_32; }
	inline DateTime_t3738529785 * get_address_of_MaxValue_32() { return &___MaxValue_32; }
	inline void set_MaxValue_32(DateTime_t3738529785  value)
	{
		___MaxValue_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T3738529785_H
#ifndef HRESULT_T3073183193_H
#define HRESULT_T3073183193_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.HResult
struct  HResult_t3073183193 
{
public:
	// System.Int32 Windows.Foundation.HResult::Value
	int32_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(HResult_t3073183193, ___Value_0)); }
	inline int32_t get_Value_0() const { return ___Value_0; }
	inline int32_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int32_t value)
	{
		___Value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HRESULT_T3073183193_H
#ifndef DATETIME_T1679451545_H
#define DATETIME_T1679451545_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.DateTime
struct  DateTime_t1679451545 
{
public:
	// System.Int64 Windows.Foundation.DateTime::UniversalTime
	int64_t ___UniversalTime_0;

public:
	inline static int32_t get_offset_of_UniversalTime_0() { return static_cast<int32_t>(offsetof(DateTime_t1679451545, ___UniversalTime_0)); }
	inline int64_t get_UniversalTime_0() const { return ___UniversalTime_0; }
	inline int64_t* get_address_of_UniversalTime_0() { return &___UniversalTime_0; }
	inline void set_UniversalTime_0(int64_t value)
	{
		___UniversalTime_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIME_T1679451545_H
#ifndef FOUNDATIONCONTRACT_T3651383009_H
#define FOUNDATIONCONTRACT_T3651383009_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.FoundationContract
struct  FoundationContract_t3651383009 
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FOUNDATIONCONTRACT_T3651383009_H
#ifndef POINT_T4164953540_H
#define POINT_T4164953540_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Point
struct  Point_t4164953540 
{
public:
	// System.Single Windows.Foundation.Point::X
	float ___X_0;
	// System.Single Windows.Foundation.Point::Y
	float ___Y_1;

public:
	inline static int32_t get_offset_of_X_0() { return static_cast<int32_t>(offsetof(Point_t4164953540, ___X_0)); }
	inline float get_X_0() const { return ___X_0; }
	inline float* get_address_of_X_0() { return &___X_0; }
	inline void set_X_0(float value)
	{
		___X_0 = value;
	}

	inline static int32_t get_offset_of_Y_1() { return static_cast<int32_t>(offsetof(Point_t4164953540, ___Y_1)); }
	inline float get_Y_1() const { return ___Y_1; }
	inline float* get_address_of_Y_1() { return &___Y_1; }
	inline void set_Y_1(float value)
	{
		___Y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINT_T4164953540_H
#ifndef SIZE_T550917639_H
#define SIZE_T550917639_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Size
struct  Size_t550917639 
{
public:
	// System.Single Windows.Foundation.Size::Width
	float ___Width_0;
	// System.Single Windows.Foundation.Size::Height
	float ___Height_1;

public:
	inline static int32_t get_offset_of_Width_0() { return static_cast<int32_t>(offsetof(Size_t550917639, ___Width_0)); }
	inline float get_Width_0() const { return ___Width_0; }
	inline float* get_address_of_Width_0() { return &___Width_0; }
	inline void set_Width_0(float value)
	{
		___Width_0 = value;
	}

	inline static int32_t get_offset_of_Height_1() { return static_cast<int32_t>(offsetof(Size_t550917639, ___Height_1)); }
	inline float get_Height_1() const { return ___Height_1; }
	inline float* get_address_of_Height_1() { return &___Height_1; }
	inline void set_Height_1(float value)
	{
		___Height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIZE_T550917639_H
#ifndef EVENTREGISTRATIONTOKEN_T3152277946_H
#define EVENTREGISTRATIONTOKEN_T3152277946_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.EventRegistrationToken
struct  EventRegistrationToken_t3152277946 
{
public:
	// System.Int64 Windows.Foundation.EventRegistrationToken::Value
	int64_t ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t3152277946, ___Value_0)); }
	inline int64_t get_Value_0() const { return ___Value_0; }
	inline int64_t* get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(int64_t value)
	{
		___Value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTREGISTRATIONTOKEN_T3152277946_H
#ifndef CHAR_T3634460470_H
#define CHAR_T3634460470_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Char
struct  Char_t3634460470 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_t3634460470, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_t3634460470_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_t4116647657* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_t3634460470_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_t4116647657* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_t4116647657** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_t4116647657* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((&___categoryForLatin1_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CHAR_T3634460470_H
#ifndef SIZE_T550917638_H
#define SIZE_T550917638_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Size
struct  Size_t550917638 
{
public:
	// System.Single Windows.Foundation.Size::_width
	float ____width_0;
	// System.Single Windows.Foundation.Size::_height
	float ____height_1;

public:
	inline static int32_t get_offset_of__width_0() { return static_cast<int32_t>(offsetof(Size_t550917638, ____width_0)); }
	inline float get__width_0() const { return ____width_0; }
	inline float* get_address_of__width_0() { return &____width_0; }
	inline void set__width_0(float value)
	{
		____width_0 = value;
	}

	inline static int32_t get_offset_of__height_1() { return static_cast<int32_t>(offsetof(Size_t550917638, ____height_1)); }
	inline float get__height_1() const { return ____height_1; }
	inline float* get_address_of__height_1() { return &____height_1; }
	inline void set__height_1(float value)
	{
		____height_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIZE_T550917638_H
#ifndef UINT16_T2177724958_H
#define UINT16_T2177724958_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt16
struct  UInt16_t2177724958 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_t2177724958, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT16_T2177724958_H
#ifndef UINT64_T4134040092_H
#define UINT64_T4134040092_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt64
struct  UInt64_t4134040092 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_t4134040092, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT64_T4134040092_H
#ifndef EVENTREGISTRATIONTOKEN_T318890788_H
#define EVENTREGISTRATIONTOKEN_T318890788_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken
struct  EventRegistrationToken_t318890788 
{
public:
	// System.UInt64 System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(EventRegistrationToken_t318890788, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // EVENTREGISTRATIONTOKEN_T318890788_H
#ifndef SINGLE_T1397266774_H
#define SINGLE_T1397266774_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Single
struct  Single_t1397266774 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_t1397266774, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SINGLE_T1397266774_H
#ifndef VOICEINFORMATION_T4266404632_H
#define VOICEINFORMATION_T4266404632_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.SpeechSynthesis.VoiceInformation
struct  VoiceInformation_t4266404632  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.SpeechSynthesis.IVoiceInformation
	IVoiceInformation_t3111056019* ____ivoiceInformation_t3111056019;

public:
	inline IVoiceInformation_t3111056019* get_____ivoiceInformation_t3111056019()
	{
		IVoiceInformation_t3111056019* returnValue = ____ivoiceInformation_t3111056019;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IVoiceInformation_t3111056019::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IVoiceInformation_t3111056019>((&____ivoiceInformation_t3111056019), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ivoiceInformation_t3111056019;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOICEINFORMATION_T4266404632_H
#ifndef URI_T952691556_H
#define URI_T952691556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Uri
struct  Uri_t952691556  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Foundation.IUriRuntimeClass
	IUriRuntimeClass_t921050115* ____iuriRuntimeClass_t921050115;
	// Cached pointer to Windows.Foundation.IUriRuntimeClassWithAbsoluteCanonicalUri
	IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788;
	// Cached pointer to Windows.Foundation.IStringable
	IStringable_t1634798504* ____istringable_t1634798504;

public:
	inline IUriRuntimeClass_t921050115* get_____iuriRuntimeClass_t921050115()
	{
		IUriRuntimeClass_t921050115* returnValue = ____iuriRuntimeClass_t921050115;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUriRuntimeClass_t921050115::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriRuntimeClass_t921050115>((&____iuriRuntimeClass_t921050115), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriRuntimeClass_t921050115;
			}
		}
		return returnValue;
	}

	inline IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* get_____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788()
	{
		IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788* returnValue = ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriRuntimeClassWithAbsoluteCanonicalUri_t3505007788>((&____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriRuntimeClassWithAbsoluteCanonicalUri_t3505007788;
			}
		}
		return returnValue;
	}

	inline IStringable_t1634798504* get_____istringable_t1634798504()
	{
		IStringable_t1634798504* returnValue = ____istringable_t1634798504;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStringable_t1634798504::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStringable_t1634798504>((&____istringable_t1634798504), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istringable_t1634798504;
			}
		}
		return returnValue;
	}
};

struct Uri_t952691556_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Foundation.IUriRuntimeClassFactory
	IUriRuntimeClassFactory_t1786313621* ____iuriRuntimeClassFactory_t1786313621;
	// Cached pointer to Windows.Foundation.IUriEscapeStatics
	IUriEscapeStatics_t1418340874* ____iuriEscapeStatics_t1418340874;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Foundation.Uri"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IUriRuntimeClassFactory_t1786313621* get_____iuriRuntimeClassFactory_t1786313621()
	{
		IUriRuntimeClassFactory_t1786313621* returnValue = ____iuriRuntimeClassFactory_t1786313621;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUriRuntimeClassFactory_t1786313621::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriRuntimeClassFactory_t1786313621>((&____iuriRuntimeClassFactory_t1786313621), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriRuntimeClassFactory_t1786313621;
			}
		}
		return returnValue;
	}

	inline IUriEscapeStatics_t1418340874* get_____iuriEscapeStatics_t1418340874()
	{
		IUriEscapeStatics_t1418340874* returnValue = ____iuriEscapeStatics_t1418340874;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IUriEscapeStatics_t1418340874::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IUriEscapeStatics_t1418340874>((&____iuriEscapeStatics_t1418340874), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iuriEscapeStatics_t1418340874;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T952691556_H
#ifndef INTPTR_T_H
#define INTPTR_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.IntPtr
struct  IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INTPTR_T_H
#ifndef POINT_T4164953539_H
#define POINT_T4164953539_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Point
struct  Point_t4164953539 
{
public:
	// System.Single Windows.Foundation.Point::_x
	float ____x_0;
	// System.Single Windows.Foundation.Point::_y
	float ____y_1;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Point_t4164953539, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Point_t4164953539, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // POINT_T4164953539_H
#ifndef RECT_T2695113487_H
#define RECT_T2695113487_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Rect
struct  Rect_t2695113487 
{
public:
	// System.Single Windows.Foundation.Rect::_x
	float ____x_0;
	// System.Single Windows.Foundation.Rect::_y
	float ____y_1;
	// System.Single Windows.Foundation.Rect::_width
	float ____width_2;
	// System.Single Windows.Foundation.Rect::_height
	float ____height_3;

public:
	inline static int32_t get_offset_of__x_0() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____x_0)); }
	inline float get__x_0() const { return ____x_0; }
	inline float* get_address_of__x_0() { return &____x_0; }
	inline void set__x_0(float value)
	{
		____x_0 = value;
	}

	inline static int32_t get_offset_of__y_1() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____y_1)); }
	inline float get__y_1() const { return ____y_1; }
	inline float* get_address_of__y_1() { return &____y_1; }
	inline void set__y_1(float value)
	{
		____y_1 = value;
	}

	inline static int32_t get_offset_of__width_2() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____width_2)); }
	inline float get__width_2() const { return ____width_2; }
	inline float* get_address_of__width_2() { return &____width_2; }
	inline void set__width_2(float value)
	{
		____width_2 = value;
	}

	inline static int32_t get_offset_of__height_3() { return static_cast<int32_t>(offsetof(Rect_t2695113487, ____height_3)); }
	inline float get__height_3() const { return ____height_3; }
	inline float* get_address_of__height_3() { return &____height_3; }
	inline void set__height_3(float value)
	{
		____height_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RECT_T2695113487_H
#ifndef __IL2CPPCOMDELEGATE_T1102178620_H
#define __IL2CPPCOMDELEGATE_T1102178620_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.__Il2CppComDelegate
struct  __Il2CppComDelegate_t1102178620  : public Il2CppComObject
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // __IL2CPPCOMDELEGATE_T1102178620_H
#ifndef SIMPLEHAPTICSCONTROLLERFEEDBACK_T913461083_H
#define SIMPLEHAPTICSCONTROLLERFEEDBACK_T913461083_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Devices.Haptics.SimpleHapticsControllerFeedback
struct  SimpleHapticsControllerFeedback_t913461083  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Devices.Haptics.ISimpleHapticsControllerFeedback
	ISimpleHapticsControllerFeedback_t2199416581* ____isimpleHapticsControllerFeedback_t2199416581;

public:
	inline ISimpleHapticsControllerFeedback_t2199416581* get_____isimpleHapticsControllerFeedback_t2199416581()
	{
		ISimpleHapticsControllerFeedback_t2199416581* returnValue = ____isimpleHapticsControllerFeedback_t2199416581;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISimpleHapticsControllerFeedback_t2199416581::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISimpleHapticsControllerFeedback_t2199416581>((&____isimpleHapticsControllerFeedback_t2199416581), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____isimpleHapticsControllerFeedback_t2199416581;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SIMPLEHAPTICSCONTROLLERFEEDBACK_T913461083_H
#ifndef SPATIALINTERACTIONSOURCESTATE_T1215688063_H
#define SPATIALINTERACTIONSOURCESTATE_T1215688063_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Input.Spatial.SpatialInteractionSourceState
struct  SpatialInteractionSourceState_t1215688063  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSourceState
	ISpatialInteractionSourceState_t1358829803* ____ispatialInteractionSourceState_t1358829803;
	// Cached pointer to Windows.UI.Input.Spatial.ISpatialInteractionSourceState2
	ISpatialInteractionSourceState2_t2977437931* ____ispatialInteractionSourceState2_t2977437931;

public:
	inline ISpatialInteractionSourceState_t1358829803* get_____ispatialInteractionSourceState_t1358829803()
	{
		ISpatialInteractionSourceState_t1358829803* returnValue = ____ispatialInteractionSourceState_t1358829803;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSourceState_t1358829803::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSourceState_t1358829803>((&____ispatialInteractionSourceState_t1358829803), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSourceState_t1358829803;
			}
		}
		return returnValue;
	}

	inline ISpatialInteractionSourceState2_t2977437931* get_____ispatialInteractionSourceState2_t2977437931()
	{
		ISpatialInteractionSourceState2_t2977437931* returnValue = ____ispatialInteractionSourceState2_t2977437931;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpatialInteractionSourceState2_t2977437931::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpatialInteractionSourceState2_t2977437931>((&____ispatialInteractionSourceState2_t2977437931), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispatialInteractionSourceState2_t2977437931;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPATIALINTERACTIONSOURCESTATE_T1215688063_H
#ifndef INT32_T2950945753_H
#define INT32_T2950945753_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int32
struct  Int32_t2950945753 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t2950945753, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT32_T2950945753_H
#ifndef DOUBLE_T594665363_H
#define DOUBLE_T594665363_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Double
struct  Double_t594665363 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t594665363, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t594665363_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t594665363_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DOUBLE_T594665363_H
#ifndef INT16_T2552820387_H
#define INT16_T2552820387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int16
struct  Int16_t2552820387 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_t2552820387, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT16_T2552820387_H
#ifndef GUID_T_H
#define GUID_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Guid
struct  Guid_t 
{
public:
	// System.Int32 System.Guid::_a
	int32_t ____a_4;
	// System.Int16 System.Guid::_b
	int16_t ____b_5;
	// System.Int16 System.Guid::_c
	int16_t ____c_6;
	// System.Byte System.Guid::_d
	uint8_t ____d_7;
	// System.Byte System.Guid::_e
	uint8_t ____e_8;
	// System.Byte System.Guid::_f
	uint8_t ____f_9;
	// System.Byte System.Guid::_g
	uint8_t ____g_10;
	// System.Byte System.Guid::_h
	uint8_t ____h_11;
	// System.Byte System.Guid::_i
	uint8_t ____i_12;
	// System.Byte System.Guid::_j
	uint8_t ____j_13;
	// System.Byte System.Guid::_k
	uint8_t ____k_14;

public:
	inline static int32_t get_offset_of__a_4() { return static_cast<int32_t>(offsetof(Guid_t, ____a_4)); }
	inline int32_t get__a_4() const { return ____a_4; }
	inline int32_t* get_address_of__a_4() { return &____a_4; }
	inline void set__a_4(int32_t value)
	{
		____a_4 = value;
	}

	inline static int32_t get_offset_of__b_5() { return static_cast<int32_t>(offsetof(Guid_t, ____b_5)); }
	inline int16_t get__b_5() const { return ____b_5; }
	inline int16_t* get_address_of__b_5() { return &____b_5; }
	inline void set__b_5(int16_t value)
	{
		____b_5 = value;
	}

	inline static int32_t get_offset_of__c_6() { return static_cast<int32_t>(offsetof(Guid_t, ____c_6)); }
	inline int16_t get__c_6() const { return ____c_6; }
	inline int16_t* get_address_of__c_6() { return &____c_6; }
	inline void set__c_6(int16_t value)
	{
		____c_6 = value;
	}

	inline static int32_t get_offset_of__d_7() { return static_cast<int32_t>(offsetof(Guid_t, ____d_7)); }
	inline uint8_t get__d_7() const { return ____d_7; }
	inline uint8_t* get_address_of__d_7() { return &____d_7; }
	inline void set__d_7(uint8_t value)
	{
		____d_7 = value;
	}

	inline static int32_t get_offset_of__e_8() { return static_cast<int32_t>(offsetof(Guid_t, ____e_8)); }
	inline uint8_t get__e_8() const { return ____e_8; }
	inline uint8_t* get_address_of__e_8() { return &____e_8; }
	inline void set__e_8(uint8_t value)
	{
		____e_8 = value;
	}

	inline static int32_t get_offset_of__f_9() { return static_cast<int32_t>(offsetof(Guid_t, ____f_9)); }
	inline uint8_t get__f_9() const { return ____f_9; }
	inline uint8_t* get_address_of__f_9() { return &____f_9; }
	inline void set__f_9(uint8_t value)
	{
		____f_9 = value;
	}

	inline static int32_t get_offset_of__g_10() { return static_cast<int32_t>(offsetof(Guid_t, ____g_10)); }
	inline uint8_t get__g_10() const { return ____g_10; }
	inline uint8_t* get_address_of__g_10() { return &____g_10; }
	inline void set__g_10(uint8_t value)
	{
		____g_10 = value;
	}

	inline static int32_t get_offset_of__h_11() { return static_cast<int32_t>(offsetof(Guid_t, ____h_11)); }
	inline uint8_t get__h_11() const { return ____h_11; }
	inline uint8_t* get_address_of__h_11() { return &____h_11; }
	inline void set__h_11(uint8_t value)
	{
		____h_11 = value;
	}

	inline static int32_t get_offset_of__i_12() { return static_cast<int32_t>(offsetof(Guid_t, ____i_12)); }
	inline uint8_t get__i_12() const { return ____i_12; }
	inline uint8_t* get_address_of__i_12() { return &____i_12; }
	inline void set__i_12(uint8_t value)
	{
		____i_12 = value;
	}

	inline static int32_t get_offset_of__j_13() { return static_cast<int32_t>(offsetof(Guid_t, ____j_13)); }
	inline uint8_t get__j_13() const { return ____j_13; }
	inline uint8_t* get_address_of__j_13() { return &____j_13; }
	inline void set__j_13(uint8_t value)
	{
		____j_13 = value;
	}

	inline static int32_t get_offset_of__k_14() { return static_cast<int32_t>(offsetof(Guid_t, ____k_14)); }
	inline uint8_t get__k_14() const { return ____k_14; }
	inline uint8_t* get_address_of__k_14() { return &____k_14; }
	inline void set__k_14(uint8_t value)
	{
		____k_14 = value;
	}
};

struct Guid_t_StaticFields
{
public:
	// System.Object System.Guid::_rngAccess
	RuntimeObject * ____rngAccess_0;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_rng
	RandomNumberGenerator_t386037858 * ____rng_1;
	// System.Security.Cryptography.RandomNumberGenerator System.Guid::_fastRng
	RandomNumberGenerator_t386037858 * ____fastRng_2;
	// System.Guid System.Guid::Empty
	Guid_t  ___Empty_3;

public:
	inline static int32_t get_offset_of__rngAccess_0() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rngAccess_0)); }
	inline RuntimeObject * get__rngAccess_0() const { return ____rngAccess_0; }
	inline RuntimeObject ** get_address_of__rngAccess_0() { return &____rngAccess_0; }
	inline void set__rngAccess_0(RuntimeObject * value)
	{
		____rngAccess_0 = value;
		Il2CppCodeGenWriteBarrier((&____rngAccess_0), value);
	}

	inline static int32_t get_offset_of__rng_1() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____rng_1)); }
	inline RandomNumberGenerator_t386037858 * get__rng_1() const { return ____rng_1; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__rng_1() { return &____rng_1; }
	inline void set__rng_1(RandomNumberGenerator_t386037858 * value)
	{
		____rng_1 = value;
		Il2CppCodeGenWriteBarrier((&____rng_1), value);
	}

	inline static int32_t get_offset_of__fastRng_2() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ____fastRng_2)); }
	inline RandomNumberGenerator_t386037858 * get__fastRng_2() const { return ____fastRng_2; }
	inline RandomNumberGenerator_t386037858 ** get_address_of__fastRng_2() { return &____fastRng_2; }
	inline void set__fastRng_2(RandomNumberGenerator_t386037858 * value)
	{
		____fastRng_2 = value;
		Il2CppCodeGenWriteBarrier((&____fastRng_2), value);
	}

	inline static int32_t get_offset_of_Empty_3() { return static_cast<int32_t>(offsetof(Guid_t_StaticFields, ___Empty_3)); }
	inline Guid_t  get_Empty_3() const { return ___Empty_3; }
	inline Guid_t * get_address_of_Empty_3() { return &___Empty_3; }
	inline void set_Empty_3(Guid_t  value)
	{
		___Empty_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // GUID_T_H
#ifndef UINT32_T2560061978_H
#define UINT32_T2560061978_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UInt32
struct  UInt32_t2560061978 
{
public:
	// System.UInt32 System.UInt32::m_value
	uint32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt32_t2560061978, ___m_value_0)); }
	inline uint32_t get_m_value_0() const { return ___m_value_0; }
	inline uint32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint32_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // UINT32_T2560061978_H
#ifndef VOID_T1185182177_H
#define VOID_T1185182177_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Void
struct  Void_t1185182177 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t1185182177__padding[1];
	};

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // VOID_T1185182177_H
#ifndef INT64_T3736567304_H
#define INT64_T3736567304_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Int64
struct  Int64_t3736567304 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t3736567304, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INT64_T3736567304_H
#ifndef BOOLEAN_T97287965_H
#define BOOLEAN_T97287965_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Boolean
struct  Boolean_t97287965 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t97287965, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t97287965_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((&___TrueString_5), value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t97287965_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((&___FalseString_6), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BOOLEAN_T97287965_H
#ifndef PROPERTYTYPE_T3031428354_H
#define PROPERTYTYPE_T3031428354_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.PropertyType
struct  PropertyType_t3031428354 
{
public:
	// System.Int32 Windows.Foundation.PropertyType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(PropertyType_t3031428354, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // PROPERTYTYPE_T3031428354_H
// Windows.Foundation.IReference`1<Windows.Foundation.Point>
struct NOVTABLE IReference_1_t3418121965 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2248936516(Point_t4164953540 * comReturnValue) = 0;
};
#ifndef BINDINGFLAGS_T2721792723_H
#define BINDINGFLAGS_T2721792723_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Reflection.BindingFlags
struct  BindingFlags_t2721792723 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_t2721792723, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // BINDINGFLAGS_T2721792723_H
#ifndef FLAGS_T2372798318_H
#define FLAGS_T2372798318_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri/Flags
struct  Flags_t2372798318 
{
public:
	// System.UInt64 System.Uri/Flags::value__
	uint64_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Flags_t2372798318, ___value___2)); }
	inline uint64_t get_value___2() const { return ___value___2; }
	inline uint64_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint64_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FLAGS_T2372798318_H
#ifndef URIIDNSCOPE_T1847433844_H
#define URIIDNSCOPE_T1847433844_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriIdnScope
struct  UriIdnScope_t1847433844 
{
public:
	// System.Int32 System.UriIdnScope::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriIdnScope_t1847433844, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIIDNSCOPE_T1847433844_H
#ifndef THREADINGMODEL_T2838021473_H
#define THREADINGMODEL_T2838021473_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.ThreadingModel
struct  ThreadingModel_t2838021473 
{
public:
	// System.Int32 Windows.Foundation.Metadata.ThreadingModel::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ThreadingModel_t2838021473, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // THREADINGMODEL_T2838021473_H
#ifndef MARSHALINGTYPE_T3556196393_H
#define MARSHALINGTYPE_T3556196393_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.MarshalingType
struct  MarshalingType_t3556196393 
{
public:
	// System.Int32 Windows.Foundation.Metadata.MarshalingType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(MarshalingType_t3556196393, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // MARSHALINGTYPE_T3556196393_H
// Windows.Foundation.IReference`1<Windows.Foundation.Point>
struct NOVTABLE IReference_1_t3418121964 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2248936515(Point_t4164953539 * comReturnValue) = 0;
};
#ifndef URIKIND_T3816567336_H
#define URIKIND_T3816567336_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriKind
struct  UriKind_t3816567336 
{
public:
	// System.Int32 System.UriKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriKind_t3816567336, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIKIND_T3816567336_H
// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_t1948281912 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2582268702(Rect_t2695113487 * comReturnValue) = 0;
};
#ifndef FILEACCESSMODE_T2616835387_H
#define FILEACCESSMODE_T2616835387_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.FileAccessMode
struct  FileAccessMode_t2616835387 
{
public:
	// System.Int32 Windows.Storage.FileAccessMode::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(FileAccessMode_t2616835387, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // FILEACCESSMODE_T2616835387_H
// Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>
struct NOVTABLE IReference_1_t1008809407 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3415674831(TimeSpan_t1755640982 * comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Size>
struct NOVTABLE IVectorView_1_t4184750196 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2196457089(uint32_t ___index0, Size_t550917638 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3307328074(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1205944866(Size_t550917638  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m2898007465(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Size_t550917638 * ___items1, uint32_t* comReturnValue) = 0;
};
#ifndef HOSTNAMETYPE_T4170768079_H
#define HOSTNAMETYPE_T4170768079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.HostNameType
struct  HostNameType_t4170768079 
{
public:
	// System.Int32 Windows.Networking.HostNameType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(HostNameType_t4170768079, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTNAMETYPE_T4170768079_H
#ifndef CREATIONCOLLISIONOPTION_T2003156443_H
#define CREATIONCOLLISIONOPTION_T2003156443_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.CreationCollisionOption
struct  CreationCollisionOption_t2003156443 
{
public:
	// System.Int32 Windows.Storage.CreationCollisionOption::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CreationCollisionOption_t2003156443, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CREATIONCOLLISIONOPTION_T2003156443_H
// Windows.Foundation.IReference`1<Windows.Foundation.UniversalApiContract>
struct NOVTABLE IReference_1_t2620173286 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2468794183(UniversalApiContract_t3367004861 * comReturnValue) = 0;
};
#ifndef TYPEKIND_T2273581760_H
#define TYPEKIND_T2273581760_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.TypeKind
struct  TypeKind_t2273581760 
{
public:
	// System.Int32 Windows.UI.Xaml.Interop.TypeKind::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(TypeKind_t2273581760, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPEKIND_T2273581760_H
#ifndef INPUTSTREAMOPTIONS_T2901738979_H
#define INPUTSTREAMOPTIONS_T2901738979_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.Streams.InputStreamOptions
struct  InputStreamOptions_t2901738979 
{
public:
	// System.UInt32 Windows.Storage.Streams.InputStreamOptions::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(InputStreamOptions_t2901738979, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INPUTSTREAMOPTIONS_T2901738979_H
// Windows.Foundation.IReference`1<Windows.Foundation.Rect>
struct NOVTABLE IReference_1_t1948281913 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2582268703(Rect_t2695113488 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Size>
struct NOVTABLE IReference_1_t4099053360 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3618386194(Size_t550917639 * comReturnValue) = 0;
};
#ifndef RUNTIMETYPEHANDLE_T3027515415_H
#define RUNTIMETYPEHANDLE_T3027515415_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.RuntimeTypeHandle
struct  RuntimeTypeHandle_t3027515415 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_t3027515415, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // RUNTIMETYPEHANDLE_T3027515415_H
#ifndef COREDISPATCHERPRIORITY_T3632043752_H
#define COREDISPATCHERPRIORITY_T3632043752_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Core.CoreDispatcherPriority
struct  CoreDispatcherPriority_t3632043752 
{
public:
	// System.Int32 Windows.UI.Core.CoreDispatcherPriority::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CoreDispatcherPriority_t3632043752, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COREDISPATCHERPRIORITY_T3632043752_H
// Windows.Foundation.IReference`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct NOVTABLE IReference_1_t3867026509 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m777133319(EventRegistrationToken_t318890788 * comReturnValue) = 0;
};
#ifndef TIMESPAN_T881159249_H
#define TIMESPAN_T881159249_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.TimeSpan
struct  TimeSpan_t881159249 
{
public:
	// System.Int64 System.TimeSpan::_ticks
	int64_t ____ticks_22;

public:
	inline static int32_t get_offset_of__ticks_22() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249, ____ticks_22)); }
	inline int64_t get__ticks_22() const { return ____ticks_22; }
	inline int64_t* get_address_of__ticks_22() { return &____ticks_22; }
	inline void set__ticks_22(int64_t value)
	{
		____ticks_22 = value;
	}
};

struct TimeSpan_t881159249_StaticFields
{
public:
	// System.TimeSpan System.TimeSpan::Zero
	TimeSpan_t881159249  ___Zero_19;
	// System.TimeSpan System.TimeSpan::MaxValue
	TimeSpan_t881159249  ___MaxValue_20;
	// System.TimeSpan System.TimeSpan::MinValue
	TimeSpan_t881159249  ___MinValue_21;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyConfigChecked
	bool ____legacyConfigChecked_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.TimeSpan::_legacyMode
	bool ____legacyMode_24;

public:
	inline static int32_t get_offset_of_Zero_19() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___Zero_19)); }
	inline TimeSpan_t881159249  get_Zero_19() const { return ___Zero_19; }
	inline TimeSpan_t881159249 * get_address_of_Zero_19() { return &___Zero_19; }
	inline void set_Zero_19(TimeSpan_t881159249  value)
	{
		___Zero_19 = value;
	}

	inline static int32_t get_offset_of_MaxValue_20() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MaxValue_20)); }
	inline TimeSpan_t881159249  get_MaxValue_20() const { return ___MaxValue_20; }
	inline TimeSpan_t881159249 * get_address_of_MaxValue_20() { return &___MaxValue_20; }
	inline void set_MaxValue_20(TimeSpan_t881159249  value)
	{
		___MaxValue_20 = value;
	}

	inline static int32_t get_offset_of_MinValue_21() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ___MinValue_21)); }
	inline TimeSpan_t881159249  get_MinValue_21() const { return ___MinValue_21; }
	inline TimeSpan_t881159249 * get_address_of_MinValue_21() { return &___MinValue_21; }
	inline void set_MinValue_21(TimeSpan_t881159249  value)
	{
		___MinValue_21 = value;
	}

	inline static int32_t get_offset_of__legacyConfigChecked_23() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyConfigChecked_23)); }
	inline bool get__legacyConfigChecked_23() const { return ____legacyConfigChecked_23; }
	inline bool* get_address_of__legacyConfigChecked_23() { return &____legacyConfigChecked_23; }
	inline void set__legacyConfigChecked_23(bool value)
	{
		____legacyConfigChecked_23 = value;
	}

	inline static int32_t get_offset_of__legacyMode_24() { return static_cast<int32_t>(offsetof(TimeSpan_t881159249_StaticFields, ____legacyMode_24)); }
	inline bool get__legacyMode_24() const { return ____legacyMode_24; }
	inline bool* get_address_of__legacyMode_24() { return &____legacyMode_24; }
	inline void set__legacyMode_24(bool value)
	{
		____legacyMode_24 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TIMESPAN_T881159249_H
#ifndef ATTRIBUTETARGETS_T1784037988_H
#define ATTRIBUTETARGETS_T1784037988_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.AttributeTargets
struct  AttributeTargets_t1784037988 
{
public:
	// System.Int32 System.AttributeTargets::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_t1784037988, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETARGETS_T1784037988_H
#ifndef ASYNCSTATUS_T2150485874_H
#define ASYNCSTATUS_T2150485874_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncStatus
struct  AsyncStatus_t2150485874 
{
public:
	// System.Int32 Windows.Foundation.AsyncStatus::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AsyncStatus_t2150485874, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ASYNCSTATUS_T2150485874_H
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Point>
struct NOVTABLE IVectorView_1_t3503818801 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m828460566(uint32_t ___index0, Point_t4164953539 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3766324835(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m1240834200(Point_t4164953539  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m320624579(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Point_t4164953539 * ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.DateTimeOffset>
struct NOVTABLE IReference_1_t2482455932 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2049683846(DateTime_t1679451545 * comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Guid>
struct NOVTABLE IVectorView_1_t2532398149 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3400009220(uint32_t ___index0, Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m50190753(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m4154363339(Guid_t  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m2882594533(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Guid_t * ___items1, uint32_t* comReturnValue) = 0;
};
#ifndef DATETIMEOFFSET_T3229287507_H
#define DATETIMEOFFSET_T3229287507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.DateTimeOffset
struct  DateTimeOffset_t3229287507 
{
public:
	// System.DateTime System.DateTimeOffset::m_dateTime
	DateTime_t3738529785  ___m_dateTime_2;
	// System.Int16 System.DateTimeOffset::m_offsetMinutes
	int16_t ___m_offsetMinutes_3;

public:
	inline static int32_t get_offset_of_m_dateTime_2() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___m_dateTime_2)); }
	inline DateTime_t3738529785  get_m_dateTime_2() const { return ___m_dateTime_2; }
	inline DateTime_t3738529785 * get_address_of_m_dateTime_2() { return &___m_dateTime_2; }
	inline void set_m_dateTime_2(DateTime_t3738529785  value)
	{
		___m_dateTime_2 = value;
	}

	inline static int32_t get_offset_of_m_offsetMinutes_3() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507, ___m_offsetMinutes_3)); }
	inline int16_t get_m_offsetMinutes_3() const { return ___m_offsetMinutes_3; }
	inline int16_t* get_address_of_m_offsetMinutes_3() { return &___m_offsetMinutes_3; }
	inline void set_m_offsetMinutes_3(int16_t value)
	{
		___m_offsetMinutes_3 = value;
	}
};

struct DateTimeOffset_t3229287507_StaticFields
{
public:
	// System.DateTimeOffset System.DateTimeOffset::MinValue
	DateTimeOffset_t3229287507  ___MinValue_0;
	// System.DateTimeOffset System.DateTimeOffset::MaxValue
	DateTimeOffset_t3229287507  ___MaxValue_1;

public:
	inline static int32_t get_offset_of_MinValue_0() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MinValue_0)); }
	inline DateTimeOffset_t3229287507  get_MinValue_0() const { return ___MinValue_0; }
	inline DateTimeOffset_t3229287507 * get_address_of_MinValue_0() { return &___MinValue_0; }
	inline void set_MinValue_0(DateTimeOffset_t3229287507  value)
	{
		___MinValue_0 = value;
	}

	inline static int32_t get_offset_of_MaxValue_1() { return static_cast<int32_t>(offsetof(DateTimeOffset_t3229287507_StaticFields, ___MaxValue_1)); }
	inline DateTimeOffset_t3229287507  get_MaxValue_1() const { return ___MaxValue_1; }
	inline DateTimeOffset_t3229287507 * get_address_of_MaxValue_1() { return &___MaxValue_1; }
	inline void set_MaxValue_1(DateTimeOffset_t3229287507  value)
	{
		___MaxValue_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DATETIMEOFFSET_T3229287507_H
// Windows.Foundation.IReference`1<System.Guid>
struct NOVTABLE IReference_1_t2446701312 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2917423479(Guid_t * comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>
struct NOVTABLE IVectorView_1_t3952723346 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m1574166267(uint32_t ___index0, EventRegistrationToken_t318890788 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m828705928(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m523834847(EventRegistrationToken_t318890788  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m2455943328(uint32_t ___startIndex0, uint32_t ___items1ArraySize, EventRegistrationToken_t318890788 * ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Size>
struct NOVTABLE IReference_1_t4099053359 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3618386193(Size_t550917638 * comReturnValue) = 0;
};
#ifndef URIFORMAT_T2031163398_H
#define URIFORMAT_T2031163398_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.UriFormat
struct  UriFormat_t2031163398 
{
public:
	// System.Int32 System.UriFormat::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(UriFormat_t2031163398, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URIFORMAT_T2031163398_H
#ifndef COMPOSITIONTYPE_T2620517455_H
#define COMPOSITIONTYPE_T2620517455_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.CompositionType
struct  CompositionType_t2620517455 
{
public:
	// System.Int32 Windows.Foundation.Metadata.CompositionType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(CompositionType_t2620517455, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // COMPOSITIONTYPE_T2620517455_H
// Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Rect>
struct NOVTABLE IVectorView_1_t2033978749 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m2736327627(uint32_t ___index0, Rect_t2695113487 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m2984082999(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m3219133186(Rect_t2695113487  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m4144836697(uint32_t ___startIndex0, uint32_t ___items1ArraySize, Rect_t2695113487 * ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.HResult>
struct NOVTABLE IReference_1_t2326351618 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3795436356(HResult_t3073183193 * comReturnValue) = 0;
};
#ifndef DEPRECATIONTYPE_T4182238482_H
#define DEPRECATIONTYPE_T4182238482_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.DeprecationType
struct  DeprecationType_t4182238482 
{
public:
	// System.Int32 Windows.Foundation.Metadata.DeprecationType::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(DeprecationType_t4182238482, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // DEPRECATIONTYPE_T4182238482_H
// Windows.Foundation.IReference`1<Windows.Foundation.DateTime>
struct NOVTABLE IReference_1_t932619970 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1126360047(DateTime_t1679451545 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.EventRegistrationToken>
struct NOVTABLE IReference_1_t2405446371 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2795834790(EventRegistrationToken_t3152277946 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.FoundationContract>
struct NOVTABLE IReference_1_t2904551434 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m919830547(FoundationContract_t3651383009 * comReturnValue) = 0;
};
#ifndef DELEGATE_T1188392813_H
#define DELEGATE_T1188392813_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Delegate
struct  Delegate_t1188392813  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t1677132599 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_target_2), value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((&___method_info_7), value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((&___original_method_info_8), value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___data_9)); }
	inline DelegateData_t1677132599 * get_data_9() const { return ___data_9; }
	inline DelegateData_t1677132599 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t1677132599 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((&___data_9), value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t1188392813, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t1188392813_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t1677132599 * ___data_9;
	int32_t ___method_is_virtual_10;
};
#endif // DELEGATE_T1188392813_H
// Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeKind>
struct NOVTABLE IReference_1_t1526750185 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2990591067(int32_t* comReturnValue) = 0;
};
#ifndef MULTICASTDELEGATE_T_H
#define MULTICASTDELEGATE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.MulticastDelegate
struct  MulticastDelegate_t  : public Delegate_t1188392813
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t1703627840* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t1703627840* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t1703627840** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t1703627840* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((&___delegates_11), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t1188392813_marshaled_pinvoke
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t1188392813_marshaled_com
{
	DelegateU5BU5D_t1703627840* ___delegates_11;
};
#endif // MULTICASTDELEGATE_T_H
// Windows.Storage.Streams.IInputStream
struct NOVTABLE IInputStream_t2821136229 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IInputStream_ReadAsync_m1153220809(IBuffer_t541192229* ___buffer0, uint32_t ___count1, uint32_t ___options2, IAsyncOperationWithProgress_2_t1622574100** comReturnValue) = 0;
};
#ifndef URI_T100236324_H
#define URI_T100236324_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Uri
struct  Uri_t100236324  : public RuntimeObject
{
public:
	// System.String System.Uri::m_String
	String_t* ___m_String_16;
	// System.String System.Uri::m_originalUnicodeString
	String_t* ___m_originalUnicodeString_17;
	// System.UriParser System.Uri::m_Syntax
	UriParser_t3890150400 * ___m_Syntax_18;
	// System.String System.Uri::m_DnsSafeHost
	String_t* ___m_DnsSafeHost_19;
	// System.Uri/Flags System.Uri::m_Flags
	uint64_t ___m_Flags_20;
	// System.Uri/UriInfo System.Uri::m_Info
	UriInfo_t1092684687 * ___m_Info_21;
	// System.Boolean System.Uri::m_iriParsing
	bool ___m_iriParsing_22;

public:
	inline static int32_t get_offset_of_m_String_16() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_String_16)); }
	inline String_t* get_m_String_16() const { return ___m_String_16; }
	inline String_t** get_address_of_m_String_16() { return &___m_String_16; }
	inline void set_m_String_16(String_t* value)
	{
		___m_String_16 = value;
		Il2CppCodeGenWriteBarrier((&___m_String_16), value);
	}

	inline static int32_t get_offset_of_m_originalUnicodeString_17() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_originalUnicodeString_17)); }
	inline String_t* get_m_originalUnicodeString_17() const { return ___m_originalUnicodeString_17; }
	inline String_t** get_address_of_m_originalUnicodeString_17() { return &___m_originalUnicodeString_17; }
	inline void set_m_originalUnicodeString_17(String_t* value)
	{
		___m_originalUnicodeString_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_originalUnicodeString_17), value);
	}

	inline static int32_t get_offset_of_m_Syntax_18() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_Syntax_18)); }
	inline UriParser_t3890150400 * get_m_Syntax_18() const { return ___m_Syntax_18; }
	inline UriParser_t3890150400 ** get_address_of_m_Syntax_18() { return &___m_Syntax_18; }
	inline void set_m_Syntax_18(UriParser_t3890150400 * value)
	{
		___m_Syntax_18 = value;
		Il2CppCodeGenWriteBarrier((&___m_Syntax_18), value);
	}

	inline static int32_t get_offset_of_m_DnsSafeHost_19() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_DnsSafeHost_19)); }
	inline String_t* get_m_DnsSafeHost_19() const { return ___m_DnsSafeHost_19; }
	inline String_t** get_address_of_m_DnsSafeHost_19() { return &___m_DnsSafeHost_19; }
	inline void set_m_DnsSafeHost_19(String_t* value)
	{
		___m_DnsSafeHost_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_DnsSafeHost_19), value);
	}

	inline static int32_t get_offset_of_m_Flags_20() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_Flags_20)); }
	inline uint64_t get_m_Flags_20() const { return ___m_Flags_20; }
	inline uint64_t* get_address_of_m_Flags_20() { return &___m_Flags_20; }
	inline void set_m_Flags_20(uint64_t value)
	{
		___m_Flags_20 = value;
	}

	inline static int32_t get_offset_of_m_Info_21() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_Info_21)); }
	inline UriInfo_t1092684687 * get_m_Info_21() const { return ___m_Info_21; }
	inline UriInfo_t1092684687 ** get_address_of_m_Info_21() { return &___m_Info_21; }
	inline void set_m_Info_21(UriInfo_t1092684687 * value)
	{
		___m_Info_21 = value;
		Il2CppCodeGenWriteBarrier((&___m_Info_21), value);
	}

	inline static int32_t get_offset_of_m_iriParsing_22() { return static_cast<int32_t>(offsetof(Uri_t100236324, ___m_iriParsing_22)); }
	inline bool get_m_iriParsing_22() const { return ___m_iriParsing_22; }
	inline bool* get_address_of_m_iriParsing_22() { return &___m_iriParsing_22; }
	inline void set_m_iriParsing_22(bool value)
	{
		___m_iriParsing_22 = value;
	}
};

struct Uri_t100236324_StaticFields
{
public:
	// System.String System.Uri::UriSchemeFile
	String_t* ___UriSchemeFile_0;
	// System.String System.Uri::UriSchemeFtp
	String_t* ___UriSchemeFtp_1;
	// System.String System.Uri::UriSchemeGopher
	String_t* ___UriSchemeGopher_2;
	// System.String System.Uri::UriSchemeHttp
	String_t* ___UriSchemeHttp_3;
	// System.String System.Uri::UriSchemeHttps
	String_t* ___UriSchemeHttps_4;
	// System.String System.Uri::UriSchemeWs
	String_t* ___UriSchemeWs_5;
	// System.String System.Uri::UriSchemeWss
	String_t* ___UriSchemeWss_6;
	// System.String System.Uri::UriSchemeMailto
	String_t* ___UriSchemeMailto_7;
	// System.String System.Uri::UriSchemeNews
	String_t* ___UriSchemeNews_8;
	// System.String System.Uri::UriSchemeNntp
	String_t* ___UriSchemeNntp_9;
	// System.String System.Uri::UriSchemeNetTcp
	String_t* ___UriSchemeNetTcp_10;
	// System.String System.Uri::UriSchemeNetPipe
	String_t* ___UriSchemeNetPipe_11;
	// System.String System.Uri::SchemeDelimiter
	String_t* ___SchemeDelimiter_12;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitialized
	bool ___s_ConfigInitialized_23;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_ConfigInitializing
	bool ___s_ConfigInitializing_24;
	// System.UriIdnScope modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IdnScope
	int32_t ___s_IdnScope_25;
	// System.Boolean modreq(System.Runtime.CompilerServices.IsVolatile) System.Uri::s_IriParsing
	bool ___s_IriParsing_26;
	// System.Boolean System.Uri::useDotNetRelativeOrAbsolute
	bool ___useDotNetRelativeOrAbsolute_27;
	// System.Boolean System.Uri::IsWindowsFileSystem
	bool ___IsWindowsFileSystem_29;
	// System.Object System.Uri::s_initLock
	RuntimeObject * ___s_initLock_30;
	// System.Char[] System.Uri::HexLowerChars
	CharU5BU5D_t3528271667* ___HexLowerChars_34;
	// System.Char[] System.Uri::_WSchars
	CharU5BU5D_t3528271667* ____WSchars_35;

public:
	inline static int32_t get_offset_of_UriSchemeFile_0() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFile_0)); }
	inline String_t* get_UriSchemeFile_0() const { return ___UriSchemeFile_0; }
	inline String_t** get_address_of_UriSchemeFile_0() { return &___UriSchemeFile_0; }
	inline void set_UriSchemeFile_0(String_t* value)
	{
		___UriSchemeFile_0 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFile_0), value);
	}

	inline static int32_t get_offset_of_UriSchemeFtp_1() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeFtp_1)); }
	inline String_t* get_UriSchemeFtp_1() const { return ___UriSchemeFtp_1; }
	inline String_t** get_address_of_UriSchemeFtp_1() { return &___UriSchemeFtp_1; }
	inline void set_UriSchemeFtp_1(String_t* value)
	{
		___UriSchemeFtp_1 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeFtp_1), value);
	}

	inline static int32_t get_offset_of_UriSchemeGopher_2() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeGopher_2)); }
	inline String_t* get_UriSchemeGopher_2() const { return ___UriSchemeGopher_2; }
	inline String_t** get_address_of_UriSchemeGopher_2() { return &___UriSchemeGopher_2; }
	inline void set_UriSchemeGopher_2(String_t* value)
	{
		___UriSchemeGopher_2 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeGopher_2), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttp_3() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttp_3)); }
	inline String_t* get_UriSchemeHttp_3() const { return ___UriSchemeHttp_3; }
	inline String_t** get_address_of_UriSchemeHttp_3() { return &___UriSchemeHttp_3; }
	inline void set_UriSchemeHttp_3(String_t* value)
	{
		___UriSchemeHttp_3 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttp_3), value);
	}

	inline static int32_t get_offset_of_UriSchemeHttps_4() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeHttps_4)); }
	inline String_t* get_UriSchemeHttps_4() const { return ___UriSchemeHttps_4; }
	inline String_t** get_address_of_UriSchemeHttps_4() { return &___UriSchemeHttps_4; }
	inline void set_UriSchemeHttps_4(String_t* value)
	{
		___UriSchemeHttps_4 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeHttps_4), value);
	}

	inline static int32_t get_offset_of_UriSchemeWs_5() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeWs_5)); }
	inline String_t* get_UriSchemeWs_5() const { return ___UriSchemeWs_5; }
	inline String_t** get_address_of_UriSchemeWs_5() { return &___UriSchemeWs_5; }
	inline void set_UriSchemeWs_5(String_t* value)
	{
		___UriSchemeWs_5 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeWs_5), value);
	}

	inline static int32_t get_offset_of_UriSchemeWss_6() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeWss_6)); }
	inline String_t* get_UriSchemeWss_6() const { return ___UriSchemeWss_6; }
	inline String_t** get_address_of_UriSchemeWss_6() { return &___UriSchemeWss_6; }
	inline void set_UriSchemeWss_6(String_t* value)
	{
		___UriSchemeWss_6 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeWss_6), value);
	}

	inline static int32_t get_offset_of_UriSchemeMailto_7() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeMailto_7)); }
	inline String_t* get_UriSchemeMailto_7() const { return ___UriSchemeMailto_7; }
	inline String_t** get_address_of_UriSchemeMailto_7() { return &___UriSchemeMailto_7; }
	inline void set_UriSchemeMailto_7(String_t* value)
	{
		___UriSchemeMailto_7 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeMailto_7), value);
	}

	inline static int32_t get_offset_of_UriSchemeNews_8() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNews_8)); }
	inline String_t* get_UriSchemeNews_8() const { return ___UriSchemeNews_8; }
	inline String_t** get_address_of_UriSchemeNews_8() { return &___UriSchemeNews_8; }
	inline void set_UriSchemeNews_8(String_t* value)
	{
		___UriSchemeNews_8 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNews_8), value);
	}

	inline static int32_t get_offset_of_UriSchemeNntp_9() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNntp_9)); }
	inline String_t* get_UriSchemeNntp_9() const { return ___UriSchemeNntp_9; }
	inline String_t** get_address_of_UriSchemeNntp_9() { return &___UriSchemeNntp_9; }
	inline void set_UriSchemeNntp_9(String_t* value)
	{
		___UriSchemeNntp_9 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNntp_9), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetTcp_10() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetTcp_10)); }
	inline String_t* get_UriSchemeNetTcp_10() const { return ___UriSchemeNetTcp_10; }
	inline String_t** get_address_of_UriSchemeNetTcp_10() { return &___UriSchemeNetTcp_10; }
	inline void set_UriSchemeNetTcp_10(String_t* value)
	{
		___UriSchemeNetTcp_10 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetTcp_10), value);
	}

	inline static int32_t get_offset_of_UriSchemeNetPipe_11() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___UriSchemeNetPipe_11)); }
	inline String_t* get_UriSchemeNetPipe_11() const { return ___UriSchemeNetPipe_11; }
	inline String_t** get_address_of_UriSchemeNetPipe_11() { return &___UriSchemeNetPipe_11; }
	inline void set_UriSchemeNetPipe_11(String_t* value)
	{
		___UriSchemeNetPipe_11 = value;
		Il2CppCodeGenWriteBarrier((&___UriSchemeNetPipe_11), value);
	}

	inline static int32_t get_offset_of_SchemeDelimiter_12() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___SchemeDelimiter_12)); }
	inline String_t* get_SchemeDelimiter_12() const { return ___SchemeDelimiter_12; }
	inline String_t** get_address_of_SchemeDelimiter_12() { return &___SchemeDelimiter_12; }
	inline void set_SchemeDelimiter_12(String_t* value)
	{
		___SchemeDelimiter_12 = value;
		Il2CppCodeGenWriteBarrier((&___SchemeDelimiter_12), value);
	}

	inline static int32_t get_offset_of_s_ConfigInitialized_23() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_ConfigInitialized_23)); }
	inline bool get_s_ConfigInitialized_23() const { return ___s_ConfigInitialized_23; }
	inline bool* get_address_of_s_ConfigInitialized_23() { return &___s_ConfigInitialized_23; }
	inline void set_s_ConfigInitialized_23(bool value)
	{
		___s_ConfigInitialized_23 = value;
	}

	inline static int32_t get_offset_of_s_ConfigInitializing_24() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_ConfigInitializing_24)); }
	inline bool get_s_ConfigInitializing_24() const { return ___s_ConfigInitializing_24; }
	inline bool* get_address_of_s_ConfigInitializing_24() { return &___s_ConfigInitializing_24; }
	inline void set_s_ConfigInitializing_24(bool value)
	{
		___s_ConfigInitializing_24 = value;
	}

	inline static int32_t get_offset_of_s_IdnScope_25() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_IdnScope_25)); }
	inline int32_t get_s_IdnScope_25() const { return ___s_IdnScope_25; }
	inline int32_t* get_address_of_s_IdnScope_25() { return &___s_IdnScope_25; }
	inline void set_s_IdnScope_25(int32_t value)
	{
		___s_IdnScope_25 = value;
	}

	inline static int32_t get_offset_of_s_IriParsing_26() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_IriParsing_26)); }
	inline bool get_s_IriParsing_26() const { return ___s_IriParsing_26; }
	inline bool* get_address_of_s_IriParsing_26() { return &___s_IriParsing_26; }
	inline void set_s_IriParsing_26(bool value)
	{
		___s_IriParsing_26 = value;
	}

	inline static int32_t get_offset_of_useDotNetRelativeOrAbsolute_27() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___useDotNetRelativeOrAbsolute_27)); }
	inline bool get_useDotNetRelativeOrAbsolute_27() const { return ___useDotNetRelativeOrAbsolute_27; }
	inline bool* get_address_of_useDotNetRelativeOrAbsolute_27() { return &___useDotNetRelativeOrAbsolute_27; }
	inline void set_useDotNetRelativeOrAbsolute_27(bool value)
	{
		___useDotNetRelativeOrAbsolute_27 = value;
	}

	inline static int32_t get_offset_of_IsWindowsFileSystem_29() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___IsWindowsFileSystem_29)); }
	inline bool get_IsWindowsFileSystem_29() const { return ___IsWindowsFileSystem_29; }
	inline bool* get_address_of_IsWindowsFileSystem_29() { return &___IsWindowsFileSystem_29; }
	inline void set_IsWindowsFileSystem_29(bool value)
	{
		___IsWindowsFileSystem_29 = value;
	}

	inline static int32_t get_offset_of_s_initLock_30() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___s_initLock_30)); }
	inline RuntimeObject * get_s_initLock_30() const { return ___s_initLock_30; }
	inline RuntimeObject ** get_address_of_s_initLock_30() { return &___s_initLock_30; }
	inline void set_s_initLock_30(RuntimeObject * value)
	{
		___s_initLock_30 = value;
		Il2CppCodeGenWriteBarrier((&___s_initLock_30), value);
	}

	inline static int32_t get_offset_of_HexLowerChars_34() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ___HexLowerChars_34)); }
	inline CharU5BU5D_t3528271667* get_HexLowerChars_34() const { return ___HexLowerChars_34; }
	inline CharU5BU5D_t3528271667** get_address_of_HexLowerChars_34() { return &___HexLowerChars_34; }
	inline void set_HexLowerChars_34(CharU5BU5D_t3528271667* value)
	{
		___HexLowerChars_34 = value;
		Il2CppCodeGenWriteBarrier((&___HexLowerChars_34), value);
	}

	inline static int32_t get_offset_of__WSchars_35() { return static_cast<int32_t>(offsetof(Uri_t100236324_StaticFields, ____WSchars_35)); }
	inline CharU5BU5D_t3528271667* get__WSchars_35() const { return ____WSchars_35; }
	inline CharU5BU5D_t3528271667** get_address_of__WSchars_35() { return &____WSchars_35; }
	inline void set__WSchars_35(CharU5BU5D_t3528271667* value)
	{
		____WSchars_35 = value;
		Il2CppCodeGenWriteBarrier((&____WSchars_35), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // URI_T100236324_H
#ifndef TYPE_T_H
#define TYPE_T_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Type
struct  Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_t3027515415  ____impl_0;

public:
	inline static int32_t get_offset_of__impl_0() { return static_cast<int32_t>(offsetof(Type_t, ____impl_0)); }
	inline RuntimeTypeHandle_t3027515415  get__impl_0() const { return ____impl_0; }
	inline RuntimeTypeHandle_t3027515415 * get_address_of__impl_0() { return &____impl_0; }
	inline void set__impl_0(RuntimeTypeHandle_t3027515415  value)
	{
		____impl_0 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t426314064 * ___FilterAttribute_1;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t426314064 * ___FilterName_2;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t426314064 * ___FilterNameIgnoreCase_3;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_4;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_5;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t3940880105* ___EmptyTypes_6;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2999457153 * ___defaultBinder_7;

public:
	inline static int32_t get_offset_of_FilterAttribute_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_1)); }
	inline MemberFilter_t426314064 * get_FilterAttribute_1() const { return ___FilterAttribute_1; }
	inline MemberFilter_t426314064 ** get_address_of_FilterAttribute_1() { return &___FilterAttribute_1; }
	inline void set_FilterAttribute_1(MemberFilter_t426314064 * value)
	{
		___FilterAttribute_1 = value;
		Il2CppCodeGenWriteBarrier((&___FilterAttribute_1), value);
	}

	inline static int32_t get_offset_of_FilterName_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_2)); }
	inline MemberFilter_t426314064 * get_FilterName_2() const { return ___FilterName_2; }
	inline MemberFilter_t426314064 ** get_address_of_FilterName_2() { return &___FilterName_2; }
	inline void set_FilterName_2(MemberFilter_t426314064 * value)
	{
		___FilterName_2 = value;
		Il2CppCodeGenWriteBarrier((&___FilterName_2), value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_3)); }
	inline MemberFilter_t426314064 * get_FilterNameIgnoreCase_3() const { return ___FilterNameIgnoreCase_3; }
	inline MemberFilter_t426314064 ** get_address_of_FilterNameIgnoreCase_3() { return &___FilterNameIgnoreCase_3; }
	inline void set_FilterNameIgnoreCase_3(MemberFilter_t426314064 * value)
	{
		___FilterNameIgnoreCase_3 = value;
		Il2CppCodeGenWriteBarrier((&___FilterNameIgnoreCase_3), value);
	}

	inline static int32_t get_offset_of_Missing_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_4)); }
	inline RuntimeObject * get_Missing_4() const { return ___Missing_4; }
	inline RuntimeObject ** get_address_of_Missing_4() { return &___Missing_4; }
	inline void set_Missing_4(RuntimeObject * value)
	{
		___Missing_4 = value;
		Il2CppCodeGenWriteBarrier((&___Missing_4), value);
	}

	inline static int32_t get_offset_of_Delimiter_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_5)); }
	inline Il2CppChar get_Delimiter_5() const { return ___Delimiter_5; }
	inline Il2CppChar* get_address_of_Delimiter_5() { return &___Delimiter_5; }
	inline void set_Delimiter_5(Il2CppChar value)
	{
		___Delimiter_5 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_6)); }
	inline TypeU5BU5D_t3940880105* get_EmptyTypes_6() const { return ___EmptyTypes_6; }
	inline TypeU5BU5D_t3940880105** get_address_of_EmptyTypes_6() { return &___EmptyTypes_6; }
	inline void set_EmptyTypes_6(TypeU5BU5D_t3940880105* value)
	{
		___EmptyTypes_6 = value;
		Il2CppCodeGenWriteBarrier((&___EmptyTypes_6), value);
	}

	inline static int32_t get_offset_of_defaultBinder_7() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_7)); }
	inline Binder_t2999457153 * get_defaultBinder_7() const { return ___defaultBinder_7; }
	inline Binder_t2999457153 ** get_address_of_defaultBinder_7() { return &___defaultBinder_7; }
	inline void set_defaultBinder_7(Binder_t2999457153 * value)
	{
		___defaultBinder_7 = value;
		Il2CppCodeGenWriteBarrier((&___defaultBinder_7), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // TYPE_T_H
#ifndef TYPENAME_T4208425108_H
#define TYPENAME_T4208425108_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.UI.Xaml.Interop.TypeName
struct  TypeName_t4208425108 
{
public:
	// System.String Windows.UI.Xaml.Interop.TypeName::Name
	String_t* ___Name_0;
	// Windows.UI.Xaml.Interop.TypeKind Windows.UI.Xaml.Interop.TypeName::Kind
	int32_t ___Kind_1;

public:
	inline static int32_t get_offset_of_Name_0() { return static_cast<int32_t>(offsetof(TypeName_t4208425108, ___Name_0)); }
	inline String_t* get_Name_0() const { return ___Name_0; }
	inline String_t** get_address_of_Name_0() { return &___Name_0; }
	inline void set_Name_0(String_t* value)
	{
		___Name_0 = value;
		Il2CppCodeGenWriteBarrier((&___Name_0), value);
	}

	inline static int32_t get_offset_of_Kind_1() { return static_cast<int32_t>(offsetof(TypeName_t4208425108, ___Kind_1)); }
	inline int32_t get_Kind_1() const { return ___Kind_1; }
	inline int32_t* get_address_of_Kind_1() { return &___Kind_1; }
	inline void set_Kind_1(int32_t value)
	{
		___Kind_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for P/Invoke marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t4208425108_marshaled_pinvoke
{
	char* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for COM marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t4208425108_marshaled_com
{
	Il2CppChar* ___Name_0;
	int32_t ___Kind_1;
};
// Native definition for Windows Runtime marshalling of Windows.UI.Xaml.Interop.TypeName
struct TypeName_t4208425108_marshaled_windows_runtime
{
	Il2CppHString ___Name_0;
	int32_t ___Kind_1;
};
#endif // TYPENAME_T4208425108_H
// Windows.Foundation.Collections.IVectorView`1<System.TimeSpan>
struct NOVTABLE IVectorView_1_t220024511 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m1798264202(uint32_t ___index0, TimeSpan_t881159249 * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m846008238(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m2157973748(TimeSpan_t881159249  ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m3909526617(uint32_t ___startIndex0, uint32_t ___items1ArraySize, TimeSpan_t881159249 * ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.UI.Core.CoreDispatcherPriority>
struct NOVTABLE IReference_1_t2885212177 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m199028236(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.DeprecationType>
struct NOVTABLE IReference_1_t3435406907 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2361503342(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.CompositionType>
struct NOVTABLE IReference_1_t1873685880 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m56861080(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.ThreadingModel>
struct NOVTABLE IReference_1_t2091189898 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3959947048(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.MarshalingType>
struct NOVTABLE IReference_1_t2809364818 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4241848242(int32_t* comReturnValue) = 0;
};
#ifndef ATTRIBUTETARGETS_T2460853228_H
#define ATTRIBUTETARGETS_T2460853228_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.Metadata.AttributeTargets
struct  AttributeTargets_t2460853228 
{
public:
	// System.UInt32 Windows.Foundation.Metadata.AttributeTargets::value__
	uint32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(AttributeTargets_t2460853228, ___value___2)); }
	inline uint32_t get_value___2() const { return ___value___2; }
	inline uint32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(uint32_t value)
	{
		___value___2 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ATTRIBUTETARGETS_T2460853228_H
// Windows.Storage.IStorageFolder
struct NOVTABLE IStorageFolder_t2414910357 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped0_CreateFileAsync_m3478046114() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_CreateFileAsync_m3292856642(Il2CppHString ___desiredName0, int32_t ___options1, IAsyncOperation_1_t372991836** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped1_CreateFolderAsync_m3554080672() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped2_CreateFolderAsync_m413574889() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_GetFileAsync_m859688798(Il2CppHString ___name0, IAsyncOperation_1_t372991836** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped3_GetFolderAsync_m377722965() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped4_GetItemAsync_m831988853() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped5_GetFilesAsync_m2162686979() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped6_GetFoldersAsync_m139074646() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFolder_U24__Stripped7_GetItemsAsync_m4085621006() = 0;
};
// Windows.Storage.IStorageFile
struct NOVTABLE IStorageFile_t455187485 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped0_get_FileType_m1126212897() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped1_get_ContentType_m3676239059() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_OpenAsync_m1037381949(int32_t ___accessMode0, IAsyncOperation_1_t721183771** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped2_OpenTransactedWriteAsync_m1588569100() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped3_CopyAsync_m1826427802() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped4_CopyAsync_m1826250819() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped5_CopyAsync_m1826495320() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped6_CopyAndReplaceAsync_m3545084853() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped7_MoveAsync_m1671606626() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped8_MoveAsync_m1671462051() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped9_MoveAsync_m1671424532() = 0;
	virtual il2cpp_hresult_t STDCALL IStorageFile_U24__Stripped10_MoveAndReplaceAsync_m870303739() = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.AsyncStatus>
struct NOVTABLE IReference_1_t1403654299 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2017125470(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.TimeSpan>
struct NOVTABLE IReference_1_t134327674 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2770668730(TimeSpan_t881159249 * comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Foundation.PropertyType>
struct NOVTABLE IReference_1_t2284596779 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m4223149003(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Storage.CreationCollisionOption>
struct NOVTABLE IReference_1_t1256324868 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2204867723(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Networking.HostNameType>
struct NOVTABLE IReference_1_t3423936504 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1424367424(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<Windows.Storage.FileAccessMode>
struct NOVTABLE IReference_1_t1870003812 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m1269367142(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.IReference`1<System.AttributeTargets>
struct NOVTABLE IReference_1_t1037206413 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m95326068(int32_t* comReturnValue) = 0;
};
// Windows.Networking.IHostName
struct NOVTABLE IHostName_t3179521082 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped0_get_IPInformation_m2521739025() = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped1_get_RawName_m106347642() = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_get_DisplayName_m3568158889(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped2_get_CanonicalName_m2488148993() = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_get_Type_m2074874122(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IHostName_U24__Stripped3_IsEqual_m2387026067() = 0;
};
// Windows.Foundation.IReference`1<Windows.Storage.Streams.InputStreamOptions>
struct NOVTABLE IReference_1_t2154907404 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m2331768150(uint32_t* comReturnValue) = 0;
};
#ifndef ASYNCOPERATIONCOMPLETEDHANDLER_1_T342432431_H
#define ASYNCOPERATIONCOMPLETEDHANDLER_1_T342432431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct  AsyncOperationCompletedHandler_1_t342432431  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>
struct IAsyncOperationCompletedHandler_1_t342432431_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t1918115372* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONCOMPLETEDHANDLER_1_T342432431_H
#ifndef STORAGEFOLDER_T985480688_H
#define STORAGEFOLDER_T985480688_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.StorageFolder
struct  StorageFolder_t985480688  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.IStorageFolder
	IStorageFolder_t2414910357* ____istorageFolder_t2414910357;
	// Cached pointer to Windows.Storage.IStorageItem
	IStorageItem_t3194585767* ____istorageItem_t3194585767;
	// Cached pointer to Windows.Storage.Search.IStorageFolderQueryOperations
	IStorageFolderQueryOperations_t91328000* ____istorageFolderQueryOperations_t91328000;
	// Cached pointer to Windows.Storage.IStorageItemProperties
	IStorageItemProperties_t2031733036* ____istorageItemProperties_t2031733036;
	// Cached pointer to Windows.Storage.IStorageItemProperties2
	IStorageItemProperties2_t3993257882* ____istorageItemProperties2_t3993257882;
	// Cached pointer to Windows.Storage.IStorageItem2
	IStorageItem2_t2827190580* ____istorageItem2_t2827190580;
	// Cached pointer to Windows.Storage.IStorageFolder2
	IStorageFolder2_t3506658410* ____istorageFolder2_t3506658410;
	// Cached pointer to Windows.Storage.IStorageItemPropertiesWithProvider
	IStorageItemPropertiesWithProvider_t3527078644* ____istorageItemPropertiesWithProvider_t3527078644;

public:
	inline IStorageFolder_t2414910357* get_____istorageFolder_t2414910357()
	{
		IStorageFolder_t2414910357* returnValue = ____istorageFolder_t2414910357;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFolder_t2414910357::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolder_t2414910357>((&____istorageFolder_t2414910357), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolder_t2414910357;
			}
		}
		return returnValue;
	}

	inline IStorageItem_t3194585767* get_____istorageItem_t3194585767()
	{
		IStorageItem_t3194585767* returnValue = ____istorageItem_t3194585767;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem_t3194585767::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem_t3194585767>((&____istorageItem_t3194585767), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem_t3194585767;
			}
		}
		return returnValue;
	}

	inline IStorageFolderQueryOperations_t91328000* get_____istorageFolderQueryOperations_t91328000()
	{
		IStorageFolderQueryOperations_t91328000* returnValue = ____istorageFolderQueryOperations_t91328000;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFolderQueryOperations_t91328000::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolderQueryOperations_t91328000>((&____istorageFolderQueryOperations_t91328000), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolderQueryOperations_t91328000;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties_t2031733036* get_____istorageItemProperties_t2031733036()
	{
		IStorageItemProperties_t2031733036* returnValue = ____istorageItemProperties_t2031733036;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties_t2031733036::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties_t2031733036>((&____istorageItemProperties_t2031733036), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties_t2031733036;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties2_t3993257882* get_____istorageItemProperties2_t3993257882()
	{
		IStorageItemProperties2_t3993257882* returnValue = ____istorageItemProperties2_t3993257882;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties2_t3993257882::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties2_t3993257882>((&____istorageItemProperties2_t3993257882), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties2_t3993257882;
			}
		}
		return returnValue;
	}

	inline IStorageItem2_t2827190580* get_____istorageItem2_t2827190580()
	{
		IStorageItem2_t2827190580* returnValue = ____istorageItem2_t2827190580;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem2_t2827190580::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem2_t2827190580>((&____istorageItem2_t2827190580), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem2_t2827190580;
			}
		}
		return returnValue;
	}

	inline IStorageFolder2_t3506658410* get_____istorageFolder2_t3506658410()
	{
		IStorageFolder2_t3506658410* returnValue = ____istorageFolder2_t3506658410;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFolder2_t3506658410::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolder2_t3506658410>((&____istorageFolder2_t3506658410), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolder2_t3506658410;
			}
		}
		return returnValue;
	}

	inline IStorageItemPropertiesWithProvider_t3527078644* get_____istorageItemPropertiesWithProvider_t3527078644()
	{
		IStorageItemPropertiesWithProvider_t3527078644* returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemPropertiesWithProvider_t3527078644::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemPropertiesWithProvider_t3527078644>((&____istorageItemPropertiesWithProvider_t3527078644), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
			}
		}
		return returnValue;
	}
};

struct StorageFolder_t985480688_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IStorageFolderStatics
	IStorageFolderStatics_t333412554* ____istorageFolderStatics_t333412554;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.StorageFolder"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStorageFolderStatics_t333412554* get_____istorageFolderStatics_t333412554()
	{
		IStorageFolderStatics_t333412554* returnValue = ____istorageFolderStatics_t333412554;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFolderStatics_t333412554::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFolderStatics_t333412554>((&____istorageFolderStatics_t333412554), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFolderStatics_t333412554;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STORAGEFOLDER_T985480688_H
#ifndef ASYNCOPERATIONPROGRESSHANDLER_2_T4087444949_H
#define ASYNCOPERATIONPROGRESSHANDLER_2_T4087444949_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct  AsyncOperationProgressHandler_2_t4087444949  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t593214123* ___asyncInfo0, uint32_t ___progressInfo1) = 0;
};

#endif // ASYNCOPERATIONPROGRESSHANDLER_2_T4087444949_H
#ifndef ASYNCOPERATIONCOMPLETEDHANDLER_1_T3440468126_H
#define ASYNCOPERATIONCOMPLETEDHANDLER_1_T3440468126_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStream>
struct  AsyncOperationCompletedHandler_1_t3440468126  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.Streams.IRandomAccessStream>
struct IAsyncOperationCompletedHandler_1_t3440468126_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t721183771* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONCOMPLETEDHANDLER_1_T3440468126_H
#ifndef ASYNCOPERATIONPROGRESSHANDLER_2_T385660461_H
#define ASYNCOPERATIONPROGRESSHANDLER_2_T385660461_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>
struct  AsyncOperationProgressHandler_2_t385660461  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.Object>
struct IAsyncOperationProgressHandler_2_t385660461_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t1186396931* ___asyncInfo0, Il2CppIInspectable* ___progressInfo1) = 0;
};

#endif // ASYNCOPERATIONPROGRESSHANDLER_2_T385660461_H
#ifndef ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T2653736172_H
#define ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T2653736172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct  AsyncOperationWithProgressCompletedHandler_2_t2653736172  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t2653736172_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t666352745* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T2653736172_H
#ifndef ASYNCOPERATIONPROGRESSHANDLER_2_T821837630_H
#define ASYNCOPERATIONPROGRESSHANDLER_2_T821837630_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct  AsyncOperationProgressHandler_2_t821837630  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t1622574100* ___asyncInfo0, uint32_t ___progressInfo1) = 0;
};

#endif // ASYNCOPERATIONPROGRESSHANDLER_2_T821837630_H
#ifndef ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T2580597550_H
#define ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T2580597550_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct  AsyncOperationWithProgressCompletedHandler_2_t2580597550  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.UInt32,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t593214123* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T2580597550_H
#ifndef ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T3173780358_H
#define ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T3173780358_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>
struct  AsyncOperationWithProgressCompletedHandler_2_t3173780358  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<System.Object,System.Object>
struct IAsyncOperationWithProgressCompletedHandler_2_t3173780358_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t1186396931* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T3173780358_H
#ifndef ASYNCOPERATIONPROGRESSHANDLER_2_T4160583571_H
#define ASYNCOPERATIONPROGRESSHANDLER_2_T4160583571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
struct  AsyncOperationProgressHandler_2_t4160583571  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationProgressHandler`2<System.Object,System.UInt32>
struct IAsyncOperationProgressHandler_2_t4160583571_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t666352745* ___asyncInfo0, uint32_t ___progressInfo1) = 0;
};

#endif // ASYNCOPERATIONPROGRESSHANDLER_2_T4160583571_H
#ifndef ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T3609957527_H
#define ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T3609957527_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct  AsyncOperationWithProgressCompletedHandler_2_t3609957527  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<Windows.Storage.Streams.IBuffer,System.UInt32>
struct IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperationWithProgress_2_t1622574100* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONWITHPROGRESSCOMPLETEDHANDLER_2_T3609957527_H
#ifndef ASYNCOPERATIONCOMPLETEDHANDLER_1_T2325952763_H
#define ASYNCOPERATIONCOMPLETEDHANDLER_1_T2325952763_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFolder>
struct  AsyncOperationCompletedHandler_1_t2325952763  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFolder>
struct IAsyncOperationCompletedHandler_1_t2325952763_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t3901635704* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONCOMPLETEDHANDLER_1_T2325952763_H
#ifndef EVENTHANDLER_1_T39852124_H
#define EVENTHANDLER_1_T39852124_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.EventHandler`1<System.Object>
struct  EventHandler_1_t39852124  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.EventHandler`1<System.Object>
struct IEventHandler_1_t39852124_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___args1) = 0;
};

#endif // EVENTHANDLER_1_T39852124_H
// Windows.Foundation.IReference`1<Windows.Foundation.Metadata.AttributeTargets>
struct NOVTABLE IReference_1_t1714021653 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m800375591(uint32_t* comReturnValue) = 0;
};
#ifndef ASYNCOPERATIONCOMPLETEDHANDLER_1_T1437760040_H
#define ASYNCOPERATIONCOMPLETEDHANDLER_1_T1437760040_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct  AsyncOperationCompletedHandler_1_t1437760040  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Boolean>
struct IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t3013442981* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONCOMPLETEDHANDLER_1_T1437760040_H
// Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeName>
struct NOVTABLE IReference_1_t3461593533 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IReference_1_get_Value_m3274607421(TypeName_t4208425108_marshaled_windows_runtime* comReturnValue) = 0;
};
#ifndef TYPEDEVENTHANDLER_2_T2186740966_H
#define TYPEDEVENTHANDLER_2_T2186740966_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct  TypedEventHandler_2_t2186740966  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>
struct ITypedEventHandler_2_t2186740966_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___args1) = 0;
};

#endif // TYPEDEVENTHANDLER_2_T2186740966_H
#ifndef HOSTNAME_T2890034819_H
#define HOSTNAME_T2890034819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Networking.HostName
struct  HostName_t2890034819  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Networking.IHostName
	IHostName_t3179521082* ____ihostName_t3179521082;
	// Cached pointer to Windows.Foundation.IStringable
	IStringable_t1634798504* ____istringable_t1634798504;

public:
	inline IHostName_t3179521082* get_____ihostName_t3179521082()
	{
		IHostName_t3179521082* returnValue = ____ihostName_t3179521082;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IHostName_t3179521082::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IHostName_t3179521082>((&____ihostName_t3179521082), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostName_t3179521082;
			}
		}
		return returnValue;
	}

	inline IStringable_t1634798504* get_____istringable_t1634798504()
	{
		IStringable_t1634798504* returnValue = ____istringable_t1634798504;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStringable_t1634798504::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStringable_t1634798504>((&____istringable_t1634798504), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istringable_t1634798504;
			}
		}
		return returnValue;
	}
};

struct HostName_t2890034819_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Networking.IHostNameFactory
	IHostNameFactory_t2985905689* ____ihostNameFactory_t2985905689;
	// Cached pointer to Windows.Networking.IHostNameStatics
	IHostNameStatics_t664333692* ____ihostNameStatics_t664333692;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Networking.HostName"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IHostNameFactory_t2985905689* get_____ihostNameFactory_t2985905689()
	{
		IHostNameFactory_t2985905689* returnValue = ____ihostNameFactory_t2985905689;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameFactory_t2985905689::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IHostNameFactory_t2985905689>((&____ihostNameFactory_t2985905689), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameFactory_t2985905689;
			}
		}
		return returnValue;
	}

	inline IHostNameStatics_t664333692* get_____ihostNameStatics_t664333692()
	{
		IHostNameStatics_t664333692* returnValue = ____ihostNameStatics_t664333692;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IHostNameStatics_t664333692::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IHostNameStatics_t664333692>((&____ihostNameStatics_t664333692), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ihostNameStatics_t664333692;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // HOSTNAME_T2890034819_H
#ifndef SPEECHSYNTHESISSTREAM_T2322339758_H
#define SPEECHSYNTHESISSTREAM_T2322339758_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Media.SpeechSynthesis.SpeechSynthesisStream
struct  SpeechSynthesisStream_t2322339758  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Media.SpeechSynthesis.ISpeechSynthesisStream
	ISpeechSynthesisStream_t764091608* ____ispeechSynthesisStream_t764091608;
	// Cached pointer to Windows.Storage.Streams.IRandomAccessStreamWithContentType
	IRandomAccessStreamWithContentType_t3296927652* ____irandomAccessStreamWithContentType_t3296927652;
	// Cached pointer to Windows.Storage.Streams.IContentTypeProvider
	IContentTypeProvider_t1806097440* ____icontentTypeProvider_t1806097440;
	// Cached pointer to Windows.Storage.Streams.IRandomAccessStream
	IRandomAccessStream_t2099996051* ____irandomAccessStream_t2099996051;
	// Cached pointer to Windows.Storage.Streams.IOutputStream
	IOutputStream_t2042351338* ____ioutputStream_t2042351338;
	// Cached pointer to Windows.Storage.Streams.IInputStream
	IInputStream_t2821136229* ____iinputStream_t2821136229;
	// Cached pointer to Windows.Media.Core.ITimedMetadataTrackProvider
	ITimedMetadataTrackProvider_t1703961418* ____itimedMetadataTrackProvider_t1703961418;
	// Cached pointer to Windows.Foundation.IClosable
	IClosable_t326290202* ____iclosable_t326290202;

public:
	inline ISpeechSynthesisStream_t764091608* get_____ispeechSynthesisStream_t764091608()
	{
		ISpeechSynthesisStream_t764091608* returnValue = ____ispeechSynthesisStream_t764091608;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ISpeechSynthesisStream_t764091608::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ISpeechSynthesisStream_t764091608>((&____ispeechSynthesisStream_t764091608), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ispeechSynthesisStream_t764091608;
			}
		}
		return returnValue;
	}

	inline IRandomAccessStreamWithContentType_t3296927652* get_____irandomAccessStreamWithContentType_t3296927652()
	{
		IRandomAccessStreamWithContentType_t3296927652* returnValue = ____irandomAccessStreamWithContentType_t3296927652;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IRandomAccessStreamWithContentType_t3296927652::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IRandomAccessStreamWithContentType_t3296927652>((&____irandomAccessStreamWithContentType_t3296927652), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____irandomAccessStreamWithContentType_t3296927652;
			}
		}
		return returnValue;
	}

	inline IContentTypeProvider_t1806097440* get_____icontentTypeProvider_t1806097440()
	{
		IContentTypeProvider_t1806097440* returnValue = ____icontentTypeProvider_t1806097440;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IContentTypeProvider_t1806097440::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IContentTypeProvider_t1806097440>((&____icontentTypeProvider_t1806097440), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____icontentTypeProvider_t1806097440;
			}
		}
		return returnValue;
	}

	inline IRandomAccessStream_t2099996051* get_____irandomAccessStream_t2099996051()
	{
		IRandomAccessStream_t2099996051* returnValue = ____irandomAccessStream_t2099996051;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IRandomAccessStream_t2099996051::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IRandomAccessStream_t2099996051>((&____irandomAccessStream_t2099996051), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____irandomAccessStream_t2099996051;
			}
		}
		return returnValue;
	}

	inline IOutputStream_t2042351338* get_____ioutputStream_t2042351338()
	{
		IOutputStream_t2042351338* returnValue = ____ioutputStream_t2042351338;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IOutputStream_t2042351338::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IOutputStream_t2042351338>((&____ioutputStream_t2042351338), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ioutputStream_t2042351338;
			}
		}
		return returnValue;
	}

	inline IInputStream_t2821136229* get_____iinputStream_t2821136229()
	{
		IInputStream_t2821136229* returnValue = ____iinputStream_t2821136229;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IInputStream_t2821136229::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInputStream_t2821136229>((&____iinputStream_t2821136229), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinputStream_t2821136229;
			}
		}
		return returnValue;
	}

	inline ITimedMetadataTrackProvider_t1703961418* get_____itimedMetadataTrackProvider_t1703961418()
	{
		ITimedMetadataTrackProvider_t1703961418* returnValue = ____itimedMetadataTrackProvider_t1703961418;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(ITimedMetadataTrackProvider_t1703961418::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<ITimedMetadataTrackProvider_t1703961418>((&____itimedMetadataTrackProvider_t1703961418), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____itimedMetadataTrackProvider_t1703961418;
			}
		}
		return returnValue;
	}

	inline IClosable_t326290202* get_____iclosable_t326290202()
	{
		IClosable_t326290202* returnValue = ____iclosable_t326290202;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IClosable_t326290202>((&____iclosable_t326290202), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iclosable_t326290202;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SPEECHSYNTHESISSTREAM_T2322339758_H
#ifndef ASYNCOPERATIONCOMPLETEDHANDLER_1_T3092276191_H
#define ASYNCOPERATIONCOMPLETEDHANDLER_1_T3092276191_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
struct  AsyncOperationCompletedHandler_1_t3092276191  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Storage.StorageFile>
struct IAsyncOperationCompletedHandler_1_t3092276191_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t372991836* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONCOMPLETEDHANDLER_1_T3092276191_H
#ifndef STORAGEFILE_T1751804116_H
#define STORAGEFILE_T1751804116_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Storage.StorageFile
struct  StorageFile_t1751804116  : public Il2CppComObject
{
public:
	// Cached pointer to Windows.Storage.IStorageFile
	IStorageFile_t455187485* ____istorageFile_t455187485;
	// Cached pointer to Windows.Storage.Streams.IInputStreamReference
	IInputStreamReference_t980626503* ____iinputStreamReference_t980626503;
	// Cached pointer to Windows.Storage.Streams.IRandomAccessStreamReference
	IRandomAccessStreamReference_t2718546672* ____irandomAccessStreamReference_t2718546672;
	// Cached pointer to Windows.Storage.IStorageItem
	IStorageItem_t3194585767* ____istorageItem_t3194585767;
	// Cached pointer to Windows.Storage.IStorageItemProperties
	IStorageItemProperties_t2031733036* ____istorageItemProperties_t2031733036;
	// Cached pointer to Windows.Storage.IStorageItemProperties2
	IStorageItemProperties2_t3993257882* ____istorageItemProperties2_t3993257882;
	// Cached pointer to Windows.Storage.IStorageItem2
	IStorageItem2_t2827190580* ____istorageItem2_t2827190580;
	// Cached pointer to Windows.Storage.IStorageItemPropertiesWithProvider
	IStorageItemPropertiesWithProvider_t3527078644* ____istorageItemPropertiesWithProvider_t3527078644;
	// Cached pointer to Windows.Storage.IStorageFilePropertiesWithAvailability
	IStorageFilePropertiesWithAvailability_t1554344922* ____istorageFilePropertiesWithAvailability_t1554344922;
	// Cached pointer to Windows.Storage.IStorageFile2
	IStorageFile2_t81501002* ____istorageFile2_t81501002;

public:
	inline IStorageFile_t455187485* get_____istorageFile_t455187485()
	{
		IStorageFile_t455187485* returnValue = ____istorageFile_t455187485;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFile_t455187485::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFile_t455187485>((&____istorageFile_t455187485), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFile_t455187485;
			}
		}
		return returnValue;
	}

	inline IInputStreamReference_t980626503* get_____iinputStreamReference_t980626503()
	{
		IInputStreamReference_t980626503* returnValue = ____iinputStreamReference_t980626503;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IInputStreamReference_t980626503::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IInputStreamReference_t980626503>((&____iinputStreamReference_t980626503), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____iinputStreamReference_t980626503;
			}
		}
		return returnValue;
	}

	inline IRandomAccessStreamReference_t2718546672* get_____irandomAccessStreamReference_t2718546672()
	{
		IRandomAccessStreamReference_t2718546672* returnValue = ____irandomAccessStreamReference_t2718546672;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IRandomAccessStreamReference_t2718546672::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IRandomAccessStreamReference_t2718546672>((&____irandomAccessStreamReference_t2718546672), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____irandomAccessStreamReference_t2718546672;
			}
		}
		return returnValue;
	}

	inline IStorageItem_t3194585767* get_____istorageItem_t3194585767()
	{
		IStorageItem_t3194585767* returnValue = ____istorageItem_t3194585767;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem_t3194585767::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem_t3194585767>((&____istorageItem_t3194585767), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem_t3194585767;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties_t2031733036* get_____istorageItemProperties_t2031733036()
	{
		IStorageItemProperties_t2031733036* returnValue = ____istorageItemProperties_t2031733036;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties_t2031733036::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties_t2031733036>((&____istorageItemProperties_t2031733036), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties_t2031733036;
			}
		}
		return returnValue;
	}

	inline IStorageItemProperties2_t3993257882* get_____istorageItemProperties2_t3993257882()
	{
		IStorageItemProperties2_t3993257882* returnValue = ____istorageItemProperties2_t3993257882;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemProperties2_t3993257882::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemProperties2_t3993257882>((&____istorageItemProperties2_t3993257882), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemProperties2_t3993257882;
			}
		}
		return returnValue;
	}

	inline IStorageItem2_t2827190580* get_____istorageItem2_t2827190580()
	{
		IStorageItem2_t2827190580* returnValue = ____istorageItem2_t2827190580;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItem2_t2827190580::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItem2_t2827190580>((&____istorageItem2_t2827190580), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItem2_t2827190580;
			}
		}
		return returnValue;
	}

	inline IStorageItemPropertiesWithProvider_t3527078644* get_____istorageItemPropertiesWithProvider_t3527078644()
	{
		IStorageItemPropertiesWithProvider_t3527078644* returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageItemPropertiesWithProvider_t3527078644::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageItemPropertiesWithProvider_t3527078644>((&____istorageItemPropertiesWithProvider_t3527078644), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageItemPropertiesWithProvider_t3527078644;
			}
		}
		return returnValue;
	}

	inline IStorageFilePropertiesWithAvailability_t1554344922* get_____istorageFilePropertiesWithAvailability_t1554344922()
	{
		IStorageFilePropertiesWithAvailability_t1554344922* returnValue = ____istorageFilePropertiesWithAvailability_t1554344922;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFilePropertiesWithAvailability_t1554344922::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFilePropertiesWithAvailability_t1554344922>((&____istorageFilePropertiesWithAvailability_t1554344922), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFilePropertiesWithAvailability_t1554344922;
			}
		}
		return returnValue;
	}

	inline IStorageFile2_t81501002* get_____istorageFile2_t81501002()
	{
		IStorageFile2_t81501002* returnValue = ____istorageFile2_t81501002;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = identity->QueryInterface(IStorageFile2_t81501002::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFile2_t81501002>((&____istorageFile2_t81501002), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFile2_t81501002;
			}
		}
		return returnValue;
	}
};

struct StorageFile_t1751804116_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Windows.Storage.IStorageFileStatics
	IStorageFileStatics_t4131808966* ____istorageFileStatics_t4131808966;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Windows.Storage.StorageFile"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<Il2CppIActivationFactory>((&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline IStorageFileStatics_t4131808966* get_____istorageFileStatics_t4131808966()
	{
		IStorageFileStatics_t4131808966* returnValue = ____istorageFileStatics_t4131808966;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(IStorageFileStatics_t4131808966::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer<IStorageFileStatics_t4131808966>((&____istorageFileStatics_t4131808966), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____istorageFileStatics_t4131808966;
			}
		}
		return returnValue;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // STORAGEFILE_T1751804116_H
#ifndef ASYNCOPERATIONCOMPLETEDHANDLER_1_T125610943_H
#define ASYNCOPERATIONCOMPLETEDHANDLER_1_T125610943_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct  AsyncOperationCompletedHandler_1_t125610943  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.Object>
struct IAsyncOperationCompletedHandler_1_t125610943_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t1701293884* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONCOMPLETEDHANDLER_1_T125610943_H
#ifndef ASYNCOPERATIONCOMPLETEDHANDLER_1_T3900534053_H
#define ASYNCOPERATIONCOMPLETEDHANDLER_1_T3900534053_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>
struct  AsyncOperationCompletedHandler_1_t3900534053  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<System.UInt32>
struct IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t1181249698* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONCOMPLETEDHANDLER_1_T3900534053_H
#ifndef ASYNCOPERATIONCOMPLETEDHANDLER_1_T3662811833_H
#define ASYNCOPERATIONCOMPLETEDHANDLER_1_T3662811833_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct  AsyncOperationCompletedHandler_1_t3662811833  : public MulticastDelegate_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// COM Callable Wrapper interface definition for Windows.Foundation.AsyncOperationCompletedHandler`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>
struct IAsyncOperationCompletedHandler_1_t3662811833_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(IAsyncOperation_1_t943527478* ___asyncInfo0, int32_t ___asyncStatus1) = 0;
};

#endif // ASYNCOPERATIONCOMPLETEDHANDLER_1_T3662811833_H
// System.Double[]
struct DoubleU5BU5D_t3413330114  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) double m_Items[1];

public:
	inline double GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline double* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, double value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline double GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline double* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, double value)
	{
		m_Items[index] = value;
	}
};
// System.Exception[]
struct ExceptionU5BU5D_t2535001212  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Exception_t * m_Items[1];

public:
	inline Exception_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Exception_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Exception_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Exception_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Exception_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Exception_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Guid[]
struct GuidU5BU5D_t545550574  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Guid_t  m_Items[1];

public:
	inline Guid_t  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Guid_t * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Guid_t  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Guid_t  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Guid_t * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Guid_t  value)
	{
		m_Items[index] = value;
	}
};
// System.IDisposable[]
struct IDisposableU5BU5D_t3584190570  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Int16[]
struct Int16U5BU5D_t3686840178  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int16_t m_Items[1];

public:
	inline int16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int16_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int32[]
struct Int32U5BU5D_t385246372  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int32_t m_Items[1];

public:
	inline int32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int32_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int64[]
struct Int64U5BU5D_t2559172825  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int64_t m_Items[1];

public:
	inline int64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_t2843939325  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject * m_Items[1];

public:
	inline RuntimeObject * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken[]
struct EventRegistrationTokenU5BU5D_t897718221  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) EventRegistrationToken_t318890788  m_Items[1];

public:
	inline EventRegistrationToken_t318890788  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline EventRegistrationToken_t318890788 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, EventRegistrationToken_t318890788  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline EventRegistrationToken_t318890788  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline EventRegistrationToken_t318890788 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, EventRegistrationToken_t318890788  value)
	{
		m_Items[index] = value;
	}
};
// System.Single[]
struct SingleU5BU5D_t1444911251  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) float m_Items[1];

public:
	inline float GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline float* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, float value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline float GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline float* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, float value)
	{
		m_Items[index] = value;
	}
};
// System.String[]
struct StringU5BU5D_t1281789340  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) String_t* m_Items[1];

public:
	inline String_t* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline String_t** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, String_t* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline String_t* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline String_t** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, String_t* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.TimeSpan[]
struct TimeSpanU5BU5D_t4291357516  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) TimeSpan_t881159249  m_Items[1];

public:
	inline TimeSpan_t881159249  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline TimeSpan_t881159249 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, TimeSpan_t881159249  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline TimeSpan_t881159249  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline TimeSpan_t881159249 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, TimeSpan_t881159249  value)
	{
		m_Items[index] = value;
	}
};
// System.Type[]
struct TypeU5BU5D_t3940880105  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Type_t * m_Items[1];

public:
	inline Type_t * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Type_t ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Type_t * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Type_t * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Type_t ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Type_t * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.UInt16[]
struct UInt16U5BU5D_t3326319531  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint16_t m_Items[1];

public:
	inline uint16_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint16_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint16_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint16_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint16_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint16_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt32[]
struct UInt32U5BU5D_t2770800703  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint32_t m_Items[1];

public:
	inline uint32_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint32_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint32_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint32_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint32_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint32_t value)
	{
		m_Items[index] = value;
	}
};
// System.UInt64[]
struct UInt64U5BU5D_t1659327989  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint64_t m_Items[1];

public:
	inline uint64_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint64_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint64_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint64_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint64_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint64_t value)
	{
		m_Items[index] = value;
	}
};
// System.Uri[]
struct UriU5BU5D_t673446605  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Uri_t100236324 * m_Items[1];

public:
	inline Uri_t100236324 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Uri_t100236324 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Uri_t100236324 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Uri_t100236324 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Uri_t100236324 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Uri_t100236324 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.Devices.Haptics.ISimpleHapticsControllerFeedback[]
struct ISimpleHapticsControllerFeedbackU5BU5D_t2466915144  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.Devices.Haptics.SimpleHapticsControllerFeedback[]
struct SimpleHapticsControllerFeedbackU5BU5D_t1558149338  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SimpleHapticsControllerFeedback_t913461083 * m_Items[1];

public:
	inline SimpleHapticsControllerFeedback_t913461083 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SimpleHapticsControllerFeedback_t913461083 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SimpleHapticsControllerFeedback_t913461083 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SimpleHapticsControllerFeedback_t913461083 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SimpleHapticsControllerFeedback_t913461083 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SimpleHapticsControllerFeedback_t913461083 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.Foundation.IStringable[]
struct IStringableU5BU5D_t2804238521  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.Foundation.IWwwFormUrlDecoderEntry[]
struct IWwwFormUrlDecoderEntryU5BU5D_t40345143  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.Foundation.Point[]
struct PointU5BU5D_t724808658  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Point_t4164953539  m_Items[1];

public:
	inline Point_t4164953539  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Point_t4164953539 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Point_t4164953539  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Point_t4164953539  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Point_t4164953539 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Point_t4164953539  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Rect[]
struct RectU5BU5D_t5657558  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Rect_t2695113487  m_Items[1];

public:
	inline Rect_t2695113487  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Rect_t2695113487 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Rect_t2695113487  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Rect_t2695113487  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Rect_t2695113487 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Rect_t2695113487  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Foundation.Size[]
struct SizeU5BU5D_t1671914275  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Size_t550917638  m_Items[1];

public:
	inline Size_t550917638  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Size_t550917638 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Size_t550917638  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Size_t550917638  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Size_t550917638 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Size_t550917638  value)
	{
		m_Items[index] = value;
	}
};
// Windows.Media.SpeechSynthesis.IVoiceInformation[]
struct IVoiceInformationU5BU5D_t3472394690  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.Media.SpeechSynthesis.VoiceInformation[]
struct VoiceInformationU5BU5D_t1943932297  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) VoiceInformation_t4266404632 * m_Items[1];

public:
	inline VoiceInformation_t4266404632 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline VoiceInformation_t4266404632 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, VoiceInformation_t4266404632 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline VoiceInformation_t4266404632 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline VoiceInformation_t4266404632 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, VoiceInformation_t4266404632 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.Networking.HostName[]
struct HostNameU5BU5D_t2796646418  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) HostName_t2890034819 * m_Items[1];

public:
	inline HostName_t2890034819 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline HostName_t2890034819 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, HostName_t2890034819 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline HostName_t2890034819 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline HostName_t2890034819 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, HostName_t2890034819 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.Networking.IHostName[]
struct IHostNameU5BU5D_t640561567  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState[]
struct ISpatialInteractionSourceStateU5BU5D_t513935114  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.UI.Input.Spatial.ISpatialInteractionSourceState2[]
struct ISpatialInteractionSourceState2U5BU5D_t3674212106  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

public:
	inline RuntimeObject* GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, RuntimeObject* value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline RuntimeObject* GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline RuntimeObject** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, RuntimeObject* value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// Windows.UI.Input.Spatial.SpatialInteractionSourceState[]
struct SpatialInteractionSourceStateU5BU5D_t1865583014  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) SpatialInteractionSourceState_t1215688063 * m_Items[1];

public:
	inline SpatialInteractionSourceState_t1215688063 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline SpatialInteractionSourceState_t1215688063 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, SpatialInteractionSourceState_t1215688063 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline SpatialInteractionSourceState_t1215688063 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline SpatialInteractionSourceState_t1215688063 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, SpatialInteractionSourceState_t1215688063 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};
// System.Delegate[]
struct DelegateU5BU5D_t1703627840  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Delegate_t1188392813 * m_Items[1];

public:
	inline Delegate_t1188392813 * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
	inline Delegate_t1188392813 * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Delegate_t1188392813 ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Delegate_t1188392813 * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier(m_Items + index, value);
	}
};

extern "C"  void AsyncOperationCompletedHandler_1_Invoke_m1728644989_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationCompletedHandler_1_Invoke_m4027491544_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationCompletedHandler_1_Invoke_m274646961_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationCompletedHandler_1_Invoke_m990580978_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationCompletedHandler_1_Invoke_m122450152_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationCompletedHandler_1_Invoke_m510864878_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationCompletedHandler_1_Invoke_m2733685339_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationCompletedHandler_1_Invoke_m388471121_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationProgressHandler_2_Invoke_m3152257273_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, RuntimeObject * ___progressInfo1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationWithProgressCompletedHandler_2_Invoke_m1272920396_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationProgressHandler_2_Invoke_m3878254636_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationWithProgressCompletedHandler_2_Invoke_m2996415322_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationProgressHandler_2_Invoke_m1906555057_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationWithProgressCompletedHandler_2_Invoke_m369172062_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationProgressHandler_2_Invoke_m6457722_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, uint32_t ___progressInfo1, const RuntimeMethod* method);;
extern "C"  void AsyncOperationWithProgressCompletedHandler_2_Invoke_m2483366708_NativeInvoker (Il2CppComObject * __this, RuntimeObject* ___asyncInfo0, int32_t ___asyncStatus1, const RuntimeMethod* method);;
extern "C" void TypeName_t4208425108_marshal_windows_runtime(const TypeName_t4208425108& unmarshaled, TypeName_t4208425108_marshaled_windows_runtime& marshaled);
extern "C" void TypeName_t4208425108_marshal_windows_runtime_back(const TypeName_t4208425108_marshaled_windows_runtime& marshaled, TypeName_t4208425108& unmarshaled);
extern "C" void TypeName_t4208425108_marshal_windows_runtime_cleanup(TypeName_t4208425108_marshaled_windows_runtime& marshaled);


// System.Void System.Uri::.ctor(System.String)
extern "C"  void Uri__ctor_m1474792120 (Uri_t100236324 * __this, String_t* ___uriString0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.String System.Uri::get_OriginalString()
extern "C"  String_t* Uri_get_OriginalString_m2551181575 (Uri_t100236324 * __this, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String,System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m282481429 (ArgumentOutOfRangeException_t777629997 * __this, String_t* ___paramName0, String_t* ___message1, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.DateTimeOffset System.DateTimeOffset::ToLocalTime(System.Boolean)
extern "C"  DateTimeOffset_t3229287507  DateTimeOffset_ToLocalTime_m1141180670 (DateTimeOffset_t3229287507 * __this, bool ___throwOnOverflow0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<System.Double>::GetAt(System.UInt32)
extern "C"  double IVectorView_1_GetAt_m3029520189 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVectorView_1_t4228497921* ____ivectorView_1_t4228497921 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t4228497921::IID, reinterpret_cast<void**>(&____ivectorView_1_t4228497921));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	double returnValue = 0.0;
	hr = ____ivectorView_1_t4228497921->IVectorView_1_GetAt_m3029520189(___index0, &returnValue);
	____ivectorView_1_t4228497921->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Double>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m1840672366 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t4228497921* ____ivectorView_1_t4228497921 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t4228497921::IID, reinterpret_cast<void**>(&____ivectorView_1_t4228497921));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t4228497921->IVectorView_1_get_Size_m1840672366(&returnValue);
	____ivectorView_1_t4228497921->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<System.Double>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m519924844 (RuntimeObject* __this, double ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t4228497921* ____ivectorView_1_t4228497921 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t4228497921::IID, reinterpret_cast<void**>(&____ivectorView_1_t4228497921));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t4228497921->IVectorView_1_IndexOf_m519924844(___value0, (&____index1_empty), &returnValue);
	____ivectorView_1_t4228497921->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Double>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m4072621343 (RuntimeObject* __this, uint32_t ___startIndex0, DoubleU5BU5D_t3413330114* ___items1, const RuntimeMethod* method)
{
	IVectorView_1_t4228497921* ____ivectorView_1_t4228497921 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t4228497921::IID, reinterpret_cast<void**>(&____ivectorView_1_t4228497921));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	double* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<double>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(double));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t4228497921->IVectorView_1_GetMany_m4072621343(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t4228497921->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<System.Exception>::GetAt(System.UInt32)
extern "C"  Exception_t * IVectorView_1_GetAt_m116971458 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVectorView_1_t775602511* ____ivectorView_1_t775602511 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t775602511::IID, reinterpret_cast<void**>(&____ivectorView_1_t775602511));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ivectorView_1_t775602511->IVectorView_1_GetAt_m116971458(___index0, &returnValue);
	____ivectorView_1_t775602511->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return (returnValue != IL2CPP_S_OK ? reinterpret_cast<Exception_t *>(il2cpp_codegen_com_get_exception(returnValue, false)) : NULL);
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Exception>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m917737768 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t775602511* ____ivectorView_1_t775602511 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t775602511::IID, reinterpret_cast<void**>(&____ivectorView_1_t775602511));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t775602511->IVectorView_1_get_Size_m917737768(&returnValue);
	____ivectorView_1_t775602511->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<System.Exception>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m2525069292 (RuntimeObject* __this, Exception_t * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t775602511* ____ivectorView_1_t775602511 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t775602511::IID, reinterpret_cast<void**>(&____ivectorView_1_t775602511));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t775602511->IVectorView_1_IndexOf_m2525069292((___value0 != NULL ? reinterpret_cast<RuntimeException*>(___value0)->hresult : IL2CPP_S_OK), (&____index1_empty), &returnValue);
	____ivectorView_1_t775602511->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Exception>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m979855732 (RuntimeObject* __this, uint32_t ___startIndex0, ExceptionU5BU5D_t2535001212* ___items1, const RuntimeMethod* method)
{
	IVectorView_1_t775602511* ____ivectorView_1_t775602511 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t775602511::IID, reinterpret_cast<void**>(&____ivectorView_1_t775602511));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	int32_t* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<int32_t>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(int32_t));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t775602511->IVectorView_1_GetMany_m979855732(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t775602511->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), ((____items1_marshaled)[i] != IL2CPP_S_OK ? reinterpret_cast<Exception_t *>(il2cpp_codegen_com_get_exception((____items1_marshaled)[i], false)) : NULL));
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<System.Guid>::GetAt(System.UInt32)
extern "C"  Guid_t  IVectorView_1_GetAt_m3400009220 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVectorView_1_t2532398149* ____ivectorView_1_t2532398149 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2532398149::IID, reinterpret_cast<void**>(&____ivectorView_1_t2532398149));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Guid_t  returnValue = {};
	hr = ____ivectorView_1_t2532398149->IVectorView_1_GetAt_m3400009220(___index0, &returnValue);
	____ivectorView_1_t2532398149->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Guid>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m50190753 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t2532398149* ____ivectorView_1_t2532398149 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2532398149::IID, reinterpret_cast<void**>(&____ivectorView_1_t2532398149));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2532398149->IVectorView_1_get_Size_m50190753(&returnValue);
	____ivectorView_1_t2532398149->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<System.Guid>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m4154363339 (RuntimeObject* __this, Guid_t  ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t2532398149* ____ivectorView_1_t2532398149 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2532398149::IID, reinterpret_cast<void**>(&____ivectorView_1_t2532398149));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t2532398149->IVectorView_1_IndexOf_m4154363339(___value0, (&____index1_empty), &returnValue);
	____ivectorView_1_t2532398149->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Guid>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m2882594533 (RuntimeObject* __this, uint32_t ___startIndex0, GuidU5BU5D_t545550574* ___items1, const RuntimeMethod* method)
{
	IVectorView_1_t2532398149* ____ivectorView_1_t2532398149 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2532398149::IID, reinterpret_cast<void**>(&____ivectorView_1_t2532398149));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	Guid_t * ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<Guid_t >(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(Guid_t ));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2532398149->IVectorView_1_GetMany_m2882594533(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t2532398149->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<System.IDisposable>::GetAt(System.UInt32)
extern "C"  RuntimeObject* IVectorView_1_GetAt_m3461880810 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m3461880810_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t2979130745* ____ivectorView_1_t2979130745 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2979130745::IID, reinterpret_cast<void**>(&____ivectorView_1_t2979130745));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IClosable_t326290202* returnValue = NULL;
	hr = ____ivectorView_1_t2979130745->IVectorView_1_GetAt_m3461880810(___index0, &returnValue);
	____ivectorView_1_t2979130745->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.IDisposable>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m671734930 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t2979130745* ____ivectorView_1_t2979130745 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2979130745::IID, reinterpret_cast<void**>(&____ivectorView_1_t2979130745));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2979130745->IVectorView_1_get_Size_m671734930(&returnValue);
	____ivectorView_1_t2979130745->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<System.IDisposable>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m456269461 (RuntimeObject* __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t2979130745* ____ivectorView_1_t2979130745 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2979130745::IID, reinterpret_cast<void**>(&____ivectorView_1_t2979130745));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IClosable_t326290202* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(IClosable_t326290202::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IClosable_t326290202>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t2979130745->IVectorView_1_IndexOf_m456269461(____value0_marshaled, (&____index1_empty), &returnValue);
	____ivectorView_1_t2979130745->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.IDisposable>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m1458693733 (RuntimeObject* __this, uint32_t ___startIndex0, IDisposableU5BU5D_t3584190570* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m1458693733_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t2979130745* ____ivectorView_1_t2979130745 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2979130745::IID, reinterpret_cast<void**>(&____ivectorView_1_t2979130745));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	IClosable_t326290202** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<IClosable_t326290202*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(IClosable_t326290202*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2979130745->IVectorView_1_GetMany_m1458693733(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t2979130745->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			RuntimeObject* _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((____items1_marshaled)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<System.Int16>::GetAt(System.UInt32)
extern "C"  int16_t IVectorView_1_GetAt_m1319642345 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVectorView_1_t1891685649* ____ivectorView_1_t1891685649 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1891685649::IID, reinterpret_cast<void**>(&____ivectorView_1_t1891685649));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int16_t returnValue = 0;
	hr = ____ivectorView_1_t1891685649->IVectorView_1_GetAt_m1319642345(___index0, &returnValue);
	____ivectorView_1_t1891685649->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Int16>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m2071989762 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t1891685649* ____ivectorView_1_t1891685649 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1891685649::IID, reinterpret_cast<void**>(&____ivectorView_1_t1891685649));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t1891685649->IVectorView_1_get_Size_m2071989762(&returnValue);
	____ivectorView_1_t1891685649->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<System.Int16>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m1081404675 (RuntimeObject* __this, int16_t ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t1891685649* ____ivectorView_1_t1891685649 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1891685649::IID, reinterpret_cast<void**>(&____ivectorView_1_t1891685649));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t1891685649->IVectorView_1_IndexOf_m1081404675(___value0, (&____index1_empty), &returnValue);
	____ivectorView_1_t1891685649->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Int16>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m3136641509 (RuntimeObject* __this, uint32_t ___startIndex0, Int16U5BU5D_t3686840178* ___items1, const RuntimeMethod* method)
{
	IVectorView_1_t1891685649* ____ivectorView_1_t1891685649 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1891685649::IID, reinterpret_cast<void**>(&____ivectorView_1_t1891685649));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	int16_t* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<int16_t>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(int16_t));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t1891685649->IVectorView_1_GetMany_m3136641509(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t1891685649->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<System.Int32>::GetAt(System.UInt32)
extern "C"  int32_t IVectorView_1_GetAt_m1038499426 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVectorView_1_t2289811015* ____ivectorView_1_t2289811015 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2289811015::IID, reinterpret_cast<void**>(&____ivectorView_1_t2289811015));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ivectorView_1_t2289811015->IVectorView_1_GetAt_m1038499426(___index0, &returnValue);
	____ivectorView_1_t2289811015->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Int32>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m3269133634 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t2289811015* ____ivectorView_1_t2289811015 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2289811015::IID, reinterpret_cast<void**>(&____ivectorView_1_t2289811015));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2289811015->IVectorView_1_get_Size_m3269133634(&returnValue);
	____ivectorView_1_t2289811015->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<System.Int32>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m711808760 (RuntimeObject* __this, int32_t ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t2289811015* ____ivectorView_1_t2289811015 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2289811015::IID, reinterpret_cast<void**>(&____ivectorView_1_t2289811015));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t2289811015->IVectorView_1_IndexOf_m711808760(___value0, (&____index1_empty), &returnValue);
	____ivectorView_1_t2289811015->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Int32>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m632553004 (RuntimeObject* __this, uint32_t ___startIndex0, Int32U5BU5D_t385246372* ___items1, const RuntimeMethod* method)
{
	IVectorView_1_t2289811015* ____ivectorView_1_t2289811015 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2289811015::IID, reinterpret_cast<void**>(&____ivectorView_1_t2289811015));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	int32_t* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<int32_t>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(int32_t));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2289811015->IVectorView_1_GetMany_m632553004(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t2289811015->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<System.Int64>::GetAt(System.UInt32)
extern "C"  int64_t IVectorView_1_GetAt_m4097062415 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVectorView_1_t3075432566* ____ivectorView_1_t3075432566 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3075432566::IID, reinterpret_cast<void**>(&____ivectorView_1_t3075432566));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int64_t returnValue = 0;
	hr = ____ivectorView_1_t3075432566->IVectorView_1_GetAt_m4097062415(___index0, &returnValue);
	____ivectorView_1_t3075432566->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Int64>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m3689183858 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t3075432566* ____ivectorView_1_t3075432566 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3075432566::IID, reinterpret_cast<void**>(&____ivectorView_1_t3075432566));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t3075432566->IVectorView_1_get_Size_m3689183858(&returnValue);
	____ivectorView_1_t3075432566->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<System.Int64>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m928127612 (RuntimeObject* __this, int64_t ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t3075432566* ____ivectorView_1_t3075432566 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3075432566::IID, reinterpret_cast<void**>(&____ivectorView_1_t3075432566));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t3075432566->IVectorView_1_IndexOf_m928127612(___value0, (&____index1_empty), &returnValue);
	____ivectorView_1_t3075432566->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Int64>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m2435124798 (RuntimeObject* __this, uint32_t ___startIndex0, Int64U5BU5D_t2559172825* ___items1, const RuntimeMethod* method)
{
	IVectorView_1_t3075432566* ____ivectorView_1_t3075432566 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3075432566::IID, reinterpret_cast<void**>(&____ivectorView_1_t3075432566));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	int64_t* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<int64_t>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(int64_t));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t3075432566->IVectorView_1_GetMany_m2435124798(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t3075432566->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<System.Object>::GetAt(System.UInt32)
extern "C"  RuntimeObject * IVectorView_1_GetAt_m726655415 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m726655415_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t2418971426* ____ivectorView_1_t2418971426 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2418971426::IID, reinterpret_cast<void**>(&____ivectorView_1_t2418971426));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppIInspectable* returnValue = NULL;
	hr = ____ivectorView_1_t2418971426->IVectorView_1_GetAt_m726655415(___index0, &returnValue);
	____ivectorView_1_t2418971426->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Object>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m1102039859 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t2418971426* ____ivectorView_1_t2418971426 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2418971426::IID, reinterpret_cast<void**>(&____ivectorView_1_t2418971426));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2418971426->IVectorView_1_get_Size_m1102039859(&returnValue);
	____ivectorView_1_t2418971426->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<System.Object>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m2349108669 (RuntimeObject* __this, RuntimeObject * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t2418971426* ____ivectorView_1_t2418971426 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2418971426::IID, reinterpret_cast<void**>(&____ivectorView_1_t2418971426));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	Il2CppIInspectable* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t2418971426->IVectorView_1_IndexOf_m2349108669(____value0_marshaled, (&____index1_empty), &returnValue);
	____ivectorView_1_t2418971426->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Object>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m4226896717 (RuntimeObject* __this, uint32_t ___startIndex0, ObjectU5BU5D_t2843939325* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m4226896717_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t2418971426* ____ivectorView_1_t2418971426 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2418971426::IID, reinterpret_cast<void**>(&____ivectorView_1_t2418971426));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	Il2CppIInspectable** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<Il2CppIInspectable*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(Il2CppIInspectable*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2418971426->IVectorView_1_GetMany_m4226896717(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t2418971426->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			RuntimeObject * _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((____items1_marshaled)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::GetAt(System.UInt32)
extern "C"  EventRegistrationToken_t318890788  IVectorView_1_GetAt_m1574166267 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVectorView_1_t3952723346* ____ivectorView_1_t3952723346 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3952723346::IID, reinterpret_cast<void**>(&____ivectorView_1_t3952723346));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	EventRegistrationToken_t318890788  returnValue = {};
	hr = ____ivectorView_1_t3952723346->IVectorView_1_GetAt_m1574166267(___index0, &returnValue);
	____ivectorView_1_t3952723346->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m828705928 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t3952723346* ____ivectorView_1_t3952723346 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3952723346::IID, reinterpret_cast<void**>(&____ivectorView_1_t3952723346));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t3952723346->IVectorView_1_get_Size_m828705928(&returnValue);
	____ivectorView_1_t3952723346->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m523834847 (RuntimeObject* __this, EventRegistrationToken_t318890788  ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t3952723346* ____ivectorView_1_t3952723346 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3952723346::IID, reinterpret_cast<void**>(&____ivectorView_1_t3952723346));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t3952723346->IVectorView_1_IndexOf_m523834847(___value0, (&____index1_empty), &returnValue);
	____ivectorView_1_t3952723346->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m2455943328 (RuntimeObject* __this, uint32_t ___startIndex0, EventRegistrationTokenU5BU5D_t897718221* ___items1, const RuntimeMethod* method)
{
	IVectorView_1_t3952723346* ____ivectorView_1_t3952723346 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3952723346::IID, reinterpret_cast<void**>(&____ivectorView_1_t3952723346));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	EventRegistrationToken_t318890788 * ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<EventRegistrationToken_t318890788 >(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(EventRegistrationToken_t318890788 ));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t3952723346->IVectorView_1_GetMany_m2455943328(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t3952723346->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<System.Single>::GetAt(System.UInt32)
extern "C"  float IVectorView_1_GetAt_m3845931799 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVectorView_1_t736132036* ____ivectorView_1_t736132036 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t736132036::IID, reinterpret_cast<void**>(&____ivectorView_1_t736132036));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	float returnValue = 0.0f;
	hr = ____ivectorView_1_t736132036->IVectorView_1_GetAt_m3845931799(___index0, &returnValue);
	____ivectorView_1_t736132036->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Single>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m2530367390 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t736132036* ____ivectorView_1_t736132036 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t736132036::IID, reinterpret_cast<void**>(&____ivectorView_1_t736132036));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t736132036->IVectorView_1_get_Size_m2530367390(&returnValue);
	____ivectorView_1_t736132036->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<System.Single>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m481527169 (RuntimeObject* __this, float ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t736132036* ____ivectorView_1_t736132036 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t736132036::IID, reinterpret_cast<void**>(&____ivectorView_1_t736132036));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t736132036->IVectorView_1_IndexOf_m481527169(___value0, (&____index1_empty), &returnValue);
	____ivectorView_1_t736132036->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Single>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m996189245 (RuntimeObject* __this, uint32_t ___startIndex0, SingleU5BU5D_t1444911251* ___items1, const RuntimeMethod* method)
{
	IVectorView_1_t736132036* ____ivectorView_1_t736132036 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t736132036::IID, reinterpret_cast<void**>(&____ivectorView_1_t736132036));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	float* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<float>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(float));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t736132036->IVectorView_1_GetMany_m996189245(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t736132036->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<System.String>::GetAt(System.UInt32)
extern "C"  String_t* IVectorView_1_GetAt_m3375407458 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVectorView_1_t1186315951* ____ivectorView_1_t1186315951 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1186315951::IID, reinterpret_cast<void**>(&____ivectorView_1_t1186315951));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppHString returnValue = NULL;
	hr = ____ivectorView_1_t1186315951->IVectorView_1_GetAt_m3375407458(___index0, &returnValue);
	____ivectorView_1_t1186315951->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.String>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m2689776779 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t1186315951* ____ivectorView_1_t1186315951 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1186315951::IID, reinterpret_cast<void**>(&____ivectorView_1_t1186315951));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t1186315951->IVectorView_1_get_Size_m2689776779(&returnValue);
	____ivectorView_1_t1186315951->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<System.String>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m2724138940 (RuntimeObject* __this, String_t* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t1186315951* ____ivectorView_1_t1186315951 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1186315951::IID, reinterpret_cast<void**>(&____ivectorView_1_t1186315951));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	Il2CppHString ____value0_marshaled = NULL;
	if (___value0 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("value"),NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___value0NativeView, ___value0);
	il2cpp::utils::Il2CppHStringReference ___value0HStringReference(___value0NativeView);
	____value0_marshaled = ___value0HStringReference;

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t1186315951->IVectorView_1_IndexOf_m2724138940(____value0_marshaled, (&____index1_empty), &returnValue);
	____ivectorView_1_t1186315951->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.String>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m912540698 (RuntimeObject* __this, uint32_t ___startIndex0, StringU5BU5D_t1281789340* ___items1, const RuntimeMethod* method)
{
	IVectorView_1_t1186315951* ____ivectorView_1_t1186315951 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1186315951::IID, reinterpret_cast<void**>(&____ivectorView_1_t1186315951));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	Il2CppHString* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<Il2CppHString>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(Il2CppHString));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t1186315951->IVectorView_1_GetMany_m912540698(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t1186315951->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			String_t* _____items1_marshaled_i__unmarshaled = NULL;
			_____items1_marshaled_i__unmarshaled = il2cpp_codegen_marshal_hstring_result((____items1_marshaled)[i]);
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			il2cpp_codegen_marshal_free_hstring((____items1_marshaled)[i]);
			(____items1_marshaled)[i] = NULL;
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<System.TimeSpan>::GetAt(System.UInt32)
extern "C"  TimeSpan_t881159249  IVectorView_1_GetAt_m1798264202 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVectorView_1_t220024511* ____ivectorView_1_t220024511 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t220024511::IID, reinterpret_cast<void**>(&____ivectorView_1_t220024511));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	TimeSpan_t881159249  returnValue = {};
	hr = ____ivectorView_1_t220024511->IVectorView_1_GetAt_m1798264202(___index0, &returnValue);
	____ivectorView_1_t220024511->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.TimeSpan>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m846008238 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t220024511* ____ivectorView_1_t220024511 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t220024511::IID, reinterpret_cast<void**>(&____ivectorView_1_t220024511));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t220024511->IVectorView_1_get_Size_m846008238(&returnValue);
	____ivectorView_1_t220024511->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<System.TimeSpan>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m2157973748 (RuntimeObject* __this, TimeSpan_t881159249  ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t220024511* ____ivectorView_1_t220024511 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t220024511::IID, reinterpret_cast<void**>(&____ivectorView_1_t220024511));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t220024511->IVectorView_1_IndexOf_m2157973748(___value0, (&____index1_empty), &returnValue);
	____ivectorView_1_t220024511->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.TimeSpan>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m3909526617 (RuntimeObject* __this, uint32_t ___startIndex0, TimeSpanU5BU5D_t4291357516* ___items1, const RuntimeMethod* method)
{
	IVectorView_1_t220024511* ____ivectorView_1_t220024511 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t220024511::IID, reinterpret_cast<void**>(&____ivectorView_1_t220024511));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	TimeSpan_t881159249 * ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<TimeSpan_t881159249 >(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(TimeSpan_t881159249 ));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t220024511->IVectorView_1_GetMany_m3909526617(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t220024511->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<System.Type>::GetAt(System.UInt32)
extern "C"  Type_t * IVectorView_1_GetAt_m3708182184 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Type>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m1097778865 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t1822810022* ____ivectorView_1_t1822810022 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1822810022::IID, reinterpret_cast<void**>(&____ivectorView_1_t1822810022));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t1822810022->IVectorView_1_get_Size_m1097778865(&returnValue);
	____ivectorView_1_t1822810022->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<System.Type>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m1129849567 (RuntimeObject* __this, Type_t * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Type>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m3274208783 (RuntimeObject* __this, uint32_t ___startIndex0, TypeU5BU5D_t3940880105* ___items1, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<System.UInt16>::GetAt(System.UInt32)
extern "C"  uint16_t IVectorView_1_GetAt_m3314156493 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVectorView_1_t1516590220* ____ivectorView_1_t1516590220 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1516590220::IID, reinterpret_cast<void**>(&____ivectorView_1_t1516590220));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint16_t returnValue = 0;
	hr = ____ivectorView_1_t1516590220->IVectorView_1_GetAt_m3314156493(___index0, &returnValue);
	____ivectorView_1_t1516590220->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.UInt16>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m2270537288 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t1516590220* ____ivectorView_1_t1516590220 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1516590220::IID, reinterpret_cast<void**>(&____ivectorView_1_t1516590220));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t1516590220->IVectorView_1_get_Size_m2270537288(&returnValue);
	____ivectorView_1_t1516590220->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<System.UInt16>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m450613661 (RuntimeObject* __this, uint16_t ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t1516590220* ____ivectorView_1_t1516590220 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1516590220::IID, reinterpret_cast<void**>(&____ivectorView_1_t1516590220));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t1516590220->IVectorView_1_IndexOf_m450613661(___value0, (&____index1_empty), &returnValue);
	____ivectorView_1_t1516590220->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.UInt16>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m619054749 (RuntimeObject* __this, uint32_t ___startIndex0, UInt16U5BU5D_t3326319531* ___items1, const RuntimeMethod* method)
{
	IVectorView_1_t1516590220* ____ivectorView_1_t1516590220 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1516590220::IID, reinterpret_cast<void**>(&____ivectorView_1_t1516590220));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	uint16_t* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<uint16_t>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(uint16_t));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t1516590220->IVectorView_1_GetMany_m619054749(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t1516590220->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<System.UInt32>::GetAt(System.UInt32)
extern "C"  uint32_t IVectorView_1_GetAt_m1103191833 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVectorView_1_t1898927240* ____ivectorView_1_t1898927240 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1898927240::IID, reinterpret_cast<void**>(&____ivectorView_1_t1898927240));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t1898927240->IVectorView_1_GetAt_m1103191833(___index0, &returnValue);
	____ivectorView_1_t1898927240->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.UInt32>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m3012050323 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t1898927240* ____ivectorView_1_t1898927240 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1898927240::IID, reinterpret_cast<void**>(&____ivectorView_1_t1898927240));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t1898927240->IVectorView_1_get_Size_m3012050323(&returnValue);
	____ivectorView_1_t1898927240->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<System.UInt32>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m2476062681 (RuntimeObject* __this, uint32_t ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t1898927240* ____ivectorView_1_t1898927240 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1898927240::IID, reinterpret_cast<void**>(&____ivectorView_1_t1898927240));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t1898927240->IVectorView_1_IndexOf_m2476062681(___value0, (&____index1_empty), &returnValue);
	____ivectorView_1_t1898927240->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.UInt32>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m2297801015 (RuntimeObject* __this, uint32_t ___startIndex0, UInt32U5BU5D_t2770800703* ___items1, const RuntimeMethod* method)
{
	IVectorView_1_t1898927240* ____ivectorView_1_t1898927240 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1898927240::IID, reinterpret_cast<void**>(&____ivectorView_1_t1898927240));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	uint32_t* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<uint32_t>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(uint32_t));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t1898927240->IVectorView_1_GetMany_m2297801015(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t1898927240->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<System.UInt64>::GetAt(System.UInt32)
extern "C"  uint64_t IVectorView_1_GetAt_m4005243902 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVectorView_1_t3472905354* ____ivectorView_1_t3472905354 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3472905354::IID, reinterpret_cast<void**>(&____ivectorView_1_t3472905354));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint64_t returnValue = 0;
	hr = ____ivectorView_1_t3472905354->IVectorView_1_GetAt_m4005243902(___index0, &returnValue);
	____ivectorView_1_t3472905354->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.UInt64>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m3900133190 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t3472905354* ____ivectorView_1_t3472905354 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3472905354::IID, reinterpret_cast<void**>(&____ivectorView_1_t3472905354));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t3472905354->IVectorView_1_get_Size_m3900133190(&returnValue);
	____ivectorView_1_t3472905354->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<System.UInt64>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m3903182137 (RuntimeObject* __this, uint64_t ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t3472905354* ____ivectorView_1_t3472905354 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3472905354::IID, reinterpret_cast<void**>(&____ivectorView_1_t3472905354));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t3472905354->IVectorView_1_IndexOf_m3903182137(___value0, (&____index1_empty), &returnValue);
	____ivectorView_1_t3472905354->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.UInt64>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m3669431734 (RuntimeObject* __this, uint32_t ___startIndex0, UInt64U5BU5D_t1659327989* ___items1, const RuntimeMethod* method)
{
	IVectorView_1_t3472905354* ____ivectorView_1_t3472905354 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3472905354::IID, reinterpret_cast<void**>(&____ivectorView_1_t3472905354));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	uint64_t* ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<uint64_t>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(uint64_t));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t3472905354->IVectorView_1_GetMany_m3669431734(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t3472905354->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<System.Uri>::GetAt(System.UInt32)
extern "C"  Uri_t100236324 * IVectorView_1_GetAt_m454402293 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m454402293_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t3734068882* ____ivectorView_1_t3734068882 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3734068882::IID, reinterpret_cast<void**>(&____ivectorView_1_t3734068882));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IUriRuntimeClass_t921050115* returnValue = NULL;
	hr = ____ivectorView_1_t3734068882->IVectorView_1_GetAt_m454402293(___index0, &returnValue);
	____ivectorView_1_t3734068882->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	Uri_t100236324 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppHString __returnValue_unmarshaledAsString_marshaled = NULL;
		il2cpp_hresult_t hr = (returnValue)->IUriRuntimeClass_get_RawUri_m1303737506((&__returnValue_unmarshaledAsString_marshaled));
		il2cpp_codegen_com_raise_exception_if_failed(hr, false);

		String_t* ___returnValue_unmarshaledAsString_marshaled_unmarshaled = NULL;
		___returnValue_unmarshaledAsString_marshaled_unmarshaled = il2cpp_codegen_marshal_hstring_result(__returnValue_unmarshaledAsString_marshaled);
		il2cpp_codegen_marshal_free_hstring(__returnValue_unmarshaledAsString_marshaled);
		__returnValue_unmarshaledAsString_marshaled = NULL;

		Uri_t100236324 * _returnValue_unmarshaledTemp = (Uri_t100236324*)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
		Uri__ctor_m1474792120(_returnValue_unmarshaledTemp, ___returnValue_unmarshaledAsString_marshaled_unmarshaled, NULL);
		_returnValue_unmarshaled = _returnValue_unmarshaledTemp;
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Uri>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m3232372556 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t3734068882* ____ivectorView_1_t3734068882 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3734068882::IID, reinterpret_cast<void**>(&____ivectorView_1_t3734068882));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t3734068882->IVectorView_1_get_Size_m3232372556(&returnValue);
	____ivectorView_1_t3734068882->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<System.Uri>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m56161609 (RuntimeObject* __this, Uri_t100236324 * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_IndexOf_m56161609_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t3734068882* ____ivectorView_1_t3734068882 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3734068882::IID, reinterpret_cast<void**>(&____ivectorView_1_t3734068882));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IUriRuntimeClass_t921050115* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		String_t* ___value0AsString = Uri_get_OriginalString_m2551181575(___value0, NULL);
		Il2CppHString ____value0AsString_marshaled = NULL;
		if (___value0AsString == NULL)
		{
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("___value0AsString"),NULL);
		}

		DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___value0AsStringNativeView, ___value0AsString);
		il2cpp::utils::Il2CppHStringReference ___value0AsStringHStringReference(___value0AsStringNativeView);
		____value0AsString_marshaled = ___value0AsStringHStringReference;
		il2cpp_hresult_t hr = ((Uri_t952691556_StaticFields*)Uri_t952691556_il2cpp_TypeInfo_var->static_fields)->get_____iuriRuntimeClassFactory_t1786313621()->IUriRuntimeClassFactory_CreateUri_m1347622952(____value0AsString_marshaled, (&____value0_marshaled));
		il2cpp_codegen_com_raise_exception_if_failed(hr, false);
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t3734068882->IVectorView_1_IndexOf_m56161609(____value0_marshaled, (&____index1_empty), &returnValue);
	____ivectorView_1_t3734068882->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Uri>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m3086367392 (RuntimeObject* __this, uint32_t ___startIndex0, UriU5BU5D_t673446605* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m3086367392_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t3734068882* ____ivectorView_1_t3734068882 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3734068882::IID, reinterpret_cast<void**>(&____ivectorView_1_t3734068882));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	IUriRuntimeClass_t921050115** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<IUriRuntimeClass_t921050115*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(IUriRuntimeClass_t921050115*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t3734068882->IVectorView_1_GetMany_m3086367392(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t3734068882->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			Uri_t100236324 * _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				Il2CppHString ______items1_marshaled_i__unmarshaledAsString_marshaled = NULL;
				il2cpp_hresult_t hr = ((____items1_marshaled)[i])->IUriRuntimeClass_get_RawUri_m1303737506((&______items1_marshaled_i__unmarshaledAsString_marshaled));
				il2cpp_codegen_com_raise_exception_if_failed(hr, false);

				String_t* _______items1_marshaled_i__unmarshaledAsString_marshaled_unmarshaled = NULL;
				_______items1_marshaled_i__unmarshaledAsString_marshaled_unmarshaled = il2cpp_codegen_marshal_hstring_result(______items1_marshaled_i__unmarshaledAsString_marshaled);
				il2cpp_codegen_marshal_free_hstring(______items1_marshaled_i__unmarshaledAsString_marshaled);
				______items1_marshaled_i__unmarshaledAsString_marshaled = NULL;

				Uri_t100236324 * _____items1_marshaled_i__unmarshaledTemp = (Uri_t100236324*)il2cpp_codegen_object_new(Uri_t100236324_il2cpp_TypeInfo_var);
				Uri__ctor_m1474792120(_____items1_marshaled_i__unmarshaledTemp, _______items1_marshaled_i__unmarshaledAsString_marshaled_unmarshaled, NULL);
				_____items1_marshaled_i__unmarshaled = _____items1_marshaled_i__unmarshaledTemp;
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>::GetAt(System.UInt32)
extern "C"  RuntimeObject* IVectorView_1_GetAt_m3846975120 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m3846975120_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t1538281843* ____ivectorView_1_t1538281843 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1538281843::IID, reinterpret_cast<void**>(&____ivectorView_1_t1538281843));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	ISimpleHapticsControllerFeedback_t2199416581* returnValue = NULL;
	hr = ____ivectorView_1_t1538281843->IVectorView_1_GetAt_m3846975120(___index0, &returnValue);
	____ivectorView_1_t1538281843->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m2545045611 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t1538281843* ____ivectorView_1_t1538281843 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1538281843::IID, reinterpret_cast<void**>(&____ivectorView_1_t1538281843));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t1538281843->IVectorView_1_get_Size_m2545045611(&returnValue);
	____ivectorView_1_t1538281843->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m2360559998 (RuntimeObject* __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t1538281843* ____ivectorView_1_t1538281843 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1538281843::IID, reinterpret_cast<void**>(&____ivectorView_1_t1538281843));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISimpleHapticsControllerFeedback_t2199416581* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(ISimpleHapticsControllerFeedback_t2199416581::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISimpleHapticsControllerFeedback_t2199416581>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t1538281843->IVectorView_1_IndexOf_m2360559998(____value0_marshaled, (&____index1_empty), &returnValue);
	____ivectorView_1_t1538281843->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Haptics.ISimpleHapticsControllerFeedback>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m1297880195 (RuntimeObject* __this, uint32_t ___startIndex0, ISimpleHapticsControllerFeedbackU5BU5D_t2466915144* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m1297880195_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t1538281843* ____ivectorView_1_t1538281843 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t1538281843::IID, reinterpret_cast<void**>(&____ivectorView_1_t1538281843));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	ISimpleHapticsControllerFeedback_t2199416581** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<ISimpleHapticsControllerFeedback_t2199416581*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(ISimpleHapticsControllerFeedback_t2199416581*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t1538281843->IVectorView_1_GetMany_m1297880195(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t1538281843->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			RuntimeObject* _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((____items1_marshaled)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>::GetAt(System.UInt32)
extern "C"  SimpleHapticsControllerFeedback_t913461083 * IVectorView_1_GetAt_m306269307 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m306269307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t252326345* ____ivectorView_1_t252326345 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t252326345::IID, reinterpret_cast<void**>(&____ivectorView_1_t252326345));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	ISimpleHapticsControllerFeedback_t2199416581* returnValue = NULL;
	hr = ____ivectorView_1_t252326345->IVectorView_1_GetAt_m306269307(___index0, &returnValue);
	____ivectorView_1_t252326345->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	SimpleHapticsControllerFeedback_t913461083 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SimpleHapticsControllerFeedback_t913461083>(returnValue, SimpleHapticsControllerFeedback_t913461083_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m164847096 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t252326345* ____ivectorView_1_t252326345 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t252326345::IID, reinterpret_cast<void**>(&____ivectorView_1_t252326345));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t252326345->IVectorView_1_get_Size_m164847096(&returnValue);
	____ivectorView_1_t252326345->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m390895991 (RuntimeObject* __this, SimpleHapticsControllerFeedback_t913461083 * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t252326345* ____ivectorView_1_t252326345 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t252326345::IID, reinterpret_cast<void**>(&____ivectorView_1_t252326345));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISimpleHapticsControllerFeedback_t2199416581* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_marshaled = (___value0)->get_____isimpleHapticsControllerFeedback_t2199416581();
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t252326345->IVectorView_1_IndexOf_m390895991(____value0_marshaled, (&____index1_empty), &returnValue);
	____ivectorView_1_t252326345->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Devices.Haptics.SimpleHapticsControllerFeedback>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m1398936297 (RuntimeObject* __this, uint32_t ___startIndex0, SimpleHapticsControllerFeedbackU5BU5D_t1558149338* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m1398936297_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t252326345* ____ivectorView_1_t252326345 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t252326345::IID, reinterpret_cast<void**>(&____ivectorView_1_t252326345));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	ISimpleHapticsControllerFeedback_t2199416581** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<ISimpleHapticsControllerFeedback_t2199416581*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(ISimpleHapticsControllerFeedback_t2199416581*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t252326345->IVectorView_1_GetMany_m1398936297(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t252326345->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			SimpleHapticsControllerFeedback_t913461083 * _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SimpleHapticsControllerFeedback_t913461083>((____items1_marshaled)[i], SimpleHapticsControllerFeedback_t913461083_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IStringable>::GetAt(System.UInt32)
extern "C"  RuntimeObject* IVectorView_1_GetAt_m794332739 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m794332739_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t973663766* ____ivectorView_1_t973663766 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t973663766::IID, reinterpret_cast<void**>(&____ivectorView_1_t973663766));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IStringable_t1634798504* returnValue = NULL;
	hr = ____ivectorView_1_t973663766->IVectorView_1_GetAt_m794332739(___index0, &returnValue);
	____ivectorView_1_t973663766->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IStringable>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m3577537834 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t973663766* ____ivectorView_1_t973663766 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t973663766::IID, reinterpret_cast<void**>(&____ivectorView_1_t973663766));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t973663766->IVectorView_1_get_Size_m3577537834(&returnValue);
	____ivectorView_1_t973663766->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IStringable>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m726151057 (RuntimeObject* __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t973663766* ____ivectorView_1_t973663766 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t973663766::IID, reinterpret_cast<void**>(&____ivectorView_1_t973663766));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IStringable_t1634798504* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(IStringable_t1634798504::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IStringable_t1634798504>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t973663766->IVectorView_1_IndexOf_m726151057(____value0_marshaled, (&____index1_empty), &returnValue);
	____ivectorView_1_t973663766->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IStringable>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m304364855 (RuntimeObject* __this, uint32_t ___startIndex0, IStringableU5BU5D_t2804238521* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m304364855_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t973663766* ____ivectorView_1_t973663766 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t973663766::IID, reinterpret_cast<void**>(&____ivectorView_1_t973663766));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	IStringable_t1634798504** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<IStringable_t1634798504*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(IStringable_t1634798504*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t973663766->IVectorView_1_GetMany_m304364855(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t973663766->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			RuntimeObject* _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((____items1_marshaled)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::GetAt(System.UInt32)
extern "C"  RuntimeObject* IVectorView_1_GetAt_m2035733383 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m2035733383_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t2282165232* ____ivectorView_1_t2282165232 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2282165232::IID, reinterpret_cast<void**>(&____ivectorView_1_t2282165232));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IWwwFormUrlDecoderEntry_t2943299970* returnValue = NULL;
	hr = ____ivectorView_1_t2282165232->IVectorView_1_GetAt_m2035733383(___index0, &returnValue);
	____ivectorView_1_t2282165232->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m2047203447 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t2282165232* ____ivectorView_1_t2282165232 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2282165232::IID, reinterpret_cast<void**>(&____ivectorView_1_t2282165232));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2282165232->IVectorView_1_get_Size_m2047203447(&returnValue);
	____ivectorView_1_t2282165232->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m2753411397 (RuntimeObject* __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t2282165232* ____ivectorView_1_t2282165232 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2282165232::IID, reinterpret_cast<void**>(&____ivectorView_1_t2282165232));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IWwwFormUrlDecoderEntry_t2943299970* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(IWwwFormUrlDecoderEntry_t2943299970::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IWwwFormUrlDecoderEntry_t2943299970>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t2282165232->IVectorView_1_IndexOf_m2753411397(____value0_marshaled, (&____index1_empty), &returnValue);
	____ivectorView_1_t2282165232->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.IWwwFormUrlDecoderEntry>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m66302439 (RuntimeObject* __this, uint32_t ___startIndex0, IWwwFormUrlDecoderEntryU5BU5D_t40345143* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m66302439_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t2282165232* ____ivectorView_1_t2282165232 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2282165232::IID, reinterpret_cast<void**>(&____ivectorView_1_t2282165232));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	IWwwFormUrlDecoderEntry_t2943299970** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<IWwwFormUrlDecoderEntry_t2943299970*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(IWwwFormUrlDecoderEntry_t2943299970*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2282165232->IVectorView_1_GetMany_m66302439(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t2282165232->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			RuntimeObject* _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((____items1_marshaled)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Point>::GetAt(System.UInt32)
extern "C"  Point_t4164953539  IVectorView_1_GetAt_m828460566 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVectorView_1_t3503818801* ____ivectorView_1_t3503818801 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3503818801::IID, reinterpret_cast<void**>(&____ivectorView_1_t3503818801));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Point_t4164953539  returnValue = {};
	hr = ____ivectorView_1_t3503818801->IVectorView_1_GetAt_m828460566(___index0, &returnValue);
	____ivectorView_1_t3503818801->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Point>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m3766324835 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t3503818801* ____ivectorView_1_t3503818801 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3503818801::IID, reinterpret_cast<void**>(&____ivectorView_1_t3503818801));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t3503818801->IVectorView_1_get_Size_m3766324835(&returnValue);
	____ivectorView_1_t3503818801->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Point>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m1240834200 (RuntimeObject* __this, Point_t4164953539  ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t3503818801* ____ivectorView_1_t3503818801 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3503818801::IID, reinterpret_cast<void**>(&____ivectorView_1_t3503818801));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t3503818801->IVectorView_1_IndexOf_m1240834200(___value0, (&____index1_empty), &returnValue);
	____ivectorView_1_t3503818801->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Point>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m320624579 (RuntimeObject* __this, uint32_t ___startIndex0, PointU5BU5D_t724808658* ___items1, const RuntimeMethod* method)
{
	IVectorView_1_t3503818801* ____ivectorView_1_t3503818801 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3503818801::IID, reinterpret_cast<void**>(&____ivectorView_1_t3503818801));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	Point_t4164953539 * ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<Point_t4164953539 >(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(Point_t4164953539 ));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t3503818801->IVectorView_1_GetMany_m320624579(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t3503818801->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Rect>::GetAt(System.UInt32)
extern "C"  Rect_t2695113487  IVectorView_1_GetAt_m2736327627 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVectorView_1_t2033978749* ____ivectorView_1_t2033978749 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2033978749::IID, reinterpret_cast<void**>(&____ivectorView_1_t2033978749));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Rect_t2695113487  returnValue = {};
	hr = ____ivectorView_1_t2033978749->IVectorView_1_GetAt_m2736327627(___index0, &returnValue);
	____ivectorView_1_t2033978749->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Rect>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m2984082999 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t2033978749* ____ivectorView_1_t2033978749 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2033978749::IID, reinterpret_cast<void**>(&____ivectorView_1_t2033978749));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2033978749->IVectorView_1_get_Size_m2984082999(&returnValue);
	____ivectorView_1_t2033978749->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Rect>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m3219133186 (RuntimeObject* __this, Rect_t2695113487  ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t2033978749* ____ivectorView_1_t2033978749 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2033978749::IID, reinterpret_cast<void**>(&____ivectorView_1_t2033978749));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t2033978749->IVectorView_1_IndexOf_m3219133186(___value0, (&____index1_empty), &returnValue);
	____ivectorView_1_t2033978749->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Rect>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m4144836697 (RuntimeObject* __this, uint32_t ___startIndex0, RectU5BU5D_t5657558* ___items1, const RuntimeMethod* method)
{
	IVectorView_1_t2033978749* ____ivectorView_1_t2033978749 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2033978749::IID, reinterpret_cast<void**>(&____ivectorView_1_t2033978749));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	Rect_t2695113487 * ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<Rect_t2695113487 >(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(Rect_t2695113487 ));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2033978749->IVectorView_1_GetMany_m4144836697(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t2033978749->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Size>::GetAt(System.UInt32)
extern "C"  Size_t550917638  IVectorView_1_GetAt_m2196457089 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	IVectorView_1_t4184750196* ____ivectorView_1_t4184750196 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t4184750196::IID, reinterpret_cast<void**>(&____ivectorView_1_t4184750196));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Size_t550917638  returnValue = {};
	hr = ____ivectorView_1_t4184750196->IVectorView_1_GetAt_m2196457089(___index0, &returnValue);
	____ivectorView_1_t4184750196->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Size>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m3307328074 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t4184750196* ____ivectorView_1_t4184750196 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t4184750196::IID, reinterpret_cast<void**>(&____ivectorView_1_t4184750196));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t4184750196->IVectorView_1_get_Size_m3307328074(&returnValue);
	____ivectorView_1_t4184750196->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Size>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m1205944866 (RuntimeObject* __this, Size_t550917638  ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t4184750196* ____ivectorView_1_t4184750196 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t4184750196::IID, reinterpret_cast<void**>(&____ivectorView_1_t4184750196));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t4184750196->IVectorView_1_IndexOf_m1205944866(___value0, (&____index1_empty), &returnValue);
	____ivectorView_1_t4184750196->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Foundation.Size>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m2898007465 (RuntimeObject* __this, uint32_t ___startIndex0, SizeU5BU5D_t1671914275* ___items1, const RuntimeMethod* method)
{
	IVectorView_1_t4184750196* ____ivectorView_1_t4184750196 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t4184750196::IID, reinterpret_cast<void**>(&____ivectorView_1_t4184750196));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	Size_t550917638 * ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<Size_t550917638 >(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(Size_t550917638 ));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t4184750196->IVectorView_1_GetMany_m2898007465(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t4184750196->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), (____items1_marshaled)[i]);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	il2cpp_codegen_marshal_free(____items1_marshaled);
	____items1_marshaled = NULL;

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<Windows.Media.SpeechSynthesis.IVoiceInformation>::GetAt(System.UInt32)
extern "C"  RuntimeObject* IVectorView_1_GetAt_m413498356 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m413498356_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t2449921281* ____ivectorView_1_t2449921281 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2449921281::IID, reinterpret_cast<void**>(&____ivectorView_1_t2449921281));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVoiceInformation_t3111056019* returnValue = NULL;
	hr = ____ivectorView_1_t2449921281->IVectorView_1_GetAt_m413498356(___index0, &returnValue);
	____ivectorView_1_t2449921281->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Media.SpeechSynthesis.IVoiceInformation>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m15361801 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t2449921281* ____ivectorView_1_t2449921281 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2449921281::IID, reinterpret_cast<void**>(&____ivectorView_1_t2449921281));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2449921281->IVectorView_1_get_Size_m15361801(&returnValue);
	____ivectorView_1_t2449921281->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<Windows.Media.SpeechSynthesis.IVoiceInformation>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m3832803476 (RuntimeObject* __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t2449921281* ____ivectorView_1_t2449921281 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2449921281::IID, reinterpret_cast<void**>(&____ivectorView_1_t2449921281));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IVoiceInformation_t3111056019* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(IVoiceInformation_t3111056019::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IVoiceInformation_t3111056019>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t2449921281->IVectorView_1_IndexOf_m3832803476(____value0_marshaled, (&____index1_empty), &returnValue);
	____ivectorView_1_t2449921281->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Media.SpeechSynthesis.IVoiceInformation>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m2635114557 (RuntimeObject* __this, uint32_t ___startIndex0, IVoiceInformationU5BU5D_t3472394690* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m2635114557_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t2449921281* ____ivectorView_1_t2449921281 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2449921281::IID, reinterpret_cast<void**>(&____ivectorView_1_t2449921281));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	IVoiceInformation_t3111056019** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<IVoiceInformation_t3111056019*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(IVoiceInformation_t3111056019*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2449921281->IVectorView_1_GetMany_m2635114557(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t2449921281->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			RuntimeObject* _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((____items1_marshaled)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<Windows.Media.SpeechSynthesis.VoiceInformation>::GetAt(System.UInt32)
extern "C"  VoiceInformation_t4266404632 * IVectorView_1_GetAt_m2454591675 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m2454591675_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t3605269894* ____ivectorView_1_t3605269894 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3605269894::IID, reinterpret_cast<void**>(&____ivectorView_1_t3605269894));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IVoiceInformation_t3111056019* returnValue = NULL;
	hr = ____ivectorView_1_t3605269894->IVectorView_1_GetAt_m2454591675(___index0, &returnValue);
	____ivectorView_1_t3605269894->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	VoiceInformation_t4266404632 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<VoiceInformation_t4266404632>(returnValue, VoiceInformation_t4266404632_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Media.SpeechSynthesis.VoiceInformation>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m4055464204 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t3605269894* ____ivectorView_1_t3605269894 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3605269894::IID, reinterpret_cast<void**>(&____ivectorView_1_t3605269894));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t3605269894->IVectorView_1_get_Size_m4055464204(&returnValue);
	____ivectorView_1_t3605269894->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<Windows.Media.SpeechSynthesis.VoiceInformation>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m2751515202 (RuntimeObject* __this, VoiceInformation_t4266404632 * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t3605269894* ____ivectorView_1_t3605269894 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3605269894::IID, reinterpret_cast<void**>(&____ivectorView_1_t3605269894));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IVoiceInformation_t3111056019* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_marshaled = (___value0)->get_____ivoiceInformation_t3111056019();
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t3605269894->IVectorView_1_IndexOf_m2751515202(____value0_marshaled, (&____index1_empty), &returnValue);
	____ivectorView_1_t3605269894->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Media.SpeechSynthesis.VoiceInformation>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m3987600692 (RuntimeObject* __this, uint32_t ___startIndex0, VoiceInformationU5BU5D_t1943932297* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m3987600692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t3605269894* ____ivectorView_1_t3605269894 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t3605269894::IID, reinterpret_cast<void**>(&____ivectorView_1_t3605269894));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	IVoiceInformation_t3111056019** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<IVoiceInformation_t3111056019*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(IVoiceInformation_t3111056019*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t3605269894->IVectorView_1_GetMany_m3987600692(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t3605269894->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			VoiceInformation_t4266404632 * _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<VoiceInformation_t4266404632>((____items1_marshaled)[i], VoiceInformation_t4266404632_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<Windows.Networking.HostName>::GetAt(System.UInt32)
extern "C"  HostName_t2890034819 * IVectorView_1_GetAt_m1545579875 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m1545579875_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t2228900081* ____ivectorView_1_t2228900081 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2228900081::IID, reinterpret_cast<void**>(&____ivectorView_1_t2228900081));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IHostName_t3179521082* returnValue = NULL;
	hr = ____ivectorView_1_t2228900081->IVectorView_1_GetAt_m1545579875(___index0, &returnValue);
	____ivectorView_1_t2228900081->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	HostName_t2890034819 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<HostName_t2890034819>(returnValue, HostName_t2890034819_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Networking.HostName>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m1139562657 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t2228900081* ____ivectorView_1_t2228900081 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2228900081::IID, reinterpret_cast<void**>(&____ivectorView_1_t2228900081));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2228900081->IVectorView_1_get_Size_m1139562657(&returnValue);
	____ivectorView_1_t2228900081->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<Windows.Networking.HostName>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m1058966889 (RuntimeObject* __this, HostName_t2890034819 * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t2228900081* ____ivectorView_1_t2228900081 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2228900081::IID, reinterpret_cast<void**>(&____ivectorView_1_t2228900081));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IHostName_t3179521082* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_marshaled = (___value0)->get_____ihostName_t3179521082();
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t2228900081->IVectorView_1_IndexOf_m1058966889(____value0_marshaled, (&____index1_empty), &returnValue);
	____ivectorView_1_t2228900081->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Networking.HostName>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m3839290201 (RuntimeObject* __this, uint32_t ___startIndex0, HostNameU5BU5D_t2796646418* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m3839290201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t2228900081* ____ivectorView_1_t2228900081 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2228900081::IID, reinterpret_cast<void**>(&____ivectorView_1_t2228900081));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	IHostName_t3179521082** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<IHostName_t3179521082*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(IHostName_t3179521082*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2228900081->IVectorView_1_GetMany_m3839290201(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t2228900081->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			HostName_t2890034819 * _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<HostName_t2890034819>((____items1_marshaled)[i], HostName_t2890034819_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<Windows.Networking.IHostName>::GetAt(System.UInt32)
extern "C"  RuntimeObject* IVectorView_1_GetAt_m4134496452 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m4134496452_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t2518386344* ____ivectorView_1_t2518386344 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2518386344::IID, reinterpret_cast<void**>(&____ivectorView_1_t2518386344));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IHostName_t3179521082* returnValue = NULL;
	hr = ____ivectorView_1_t2518386344->IVectorView_1_GetAt_m4134496452(___index0, &returnValue);
	____ivectorView_1_t2518386344->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Networking.IHostName>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m1697958776 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t2518386344* ____ivectorView_1_t2518386344 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2518386344::IID, reinterpret_cast<void**>(&____ivectorView_1_t2518386344));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2518386344->IVectorView_1_get_Size_m1697958776(&returnValue);
	____ivectorView_1_t2518386344->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<Windows.Networking.IHostName>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m2926431078 (RuntimeObject* __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t2518386344* ____ivectorView_1_t2518386344 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2518386344::IID, reinterpret_cast<void**>(&____ivectorView_1_t2518386344));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	IHostName_t3179521082* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(IHostName_t3179521082::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IHostName_t3179521082>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t2518386344->IVectorView_1_IndexOf_m2926431078(____value0_marshaled, (&____index1_empty), &returnValue);
	____ivectorView_1_t2518386344->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.Networking.IHostName>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m1013536940 (RuntimeObject* __this, uint32_t ___startIndex0, IHostNameU5BU5D_t640561567* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m1013536940_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t2518386344* ____ivectorView_1_t2518386344 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2518386344::IID, reinterpret_cast<void**>(&____ivectorView_1_t2518386344));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	IHostName_t3179521082** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<IHostName_t3179521082*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(IHostName_t3179521082*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2518386344->IVectorView_1_GetMany_m1013536940(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t2518386344->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			RuntimeObject* _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((____items1_marshaled)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::GetAt(System.UInt32)
extern "C"  RuntimeObject* IVectorView_1_GetAt_m849474102 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m849474102_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t697695065* ____ivectorView_1_t697695065 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t697695065::IID, reinterpret_cast<void**>(&____ivectorView_1_t697695065));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	ISpatialInteractionSourceState_t1358829803* returnValue = NULL;
	hr = ____ivectorView_1_t697695065->IVectorView_1_GetAt_m849474102(___index0, &returnValue);
	____ivectorView_1_t697695065->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m1912501272 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t697695065* ____ivectorView_1_t697695065 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t697695065::IID, reinterpret_cast<void**>(&____ivectorView_1_t697695065));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t697695065->IVectorView_1_get_Size_m1912501272(&returnValue);
	____ivectorView_1_t697695065->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m1154184863 (RuntimeObject* __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t697695065* ____ivectorView_1_t697695065 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t697695065::IID, reinterpret_cast<void**>(&____ivectorView_1_t697695065));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISpatialInteractionSourceState_t1358829803* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(ISpatialInteractionSourceState_t1358829803::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState_t1358829803>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t697695065->IVectorView_1_IndexOf_m1154184863(____value0_marshaled, (&____index1_empty), &returnValue);
	____ivectorView_1_t697695065->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m4030857929 (RuntimeObject* __this, uint32_t ___startIndex0, ISpatialInteractionSourceStateU5BU5D_t513935114* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m4030857929_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t697695065* ____ivectorView_1_t697695065 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t697695065::IID, reinterpret_cast<void**>(&____ivectorView_1_t697695065));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	ISpatialInteractionSourceState_t1358829803** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<ISpatialInteractionSourceState_t1358829803*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(ISpatialInteractionSourceState_t1358829803*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t697695065->IVectorView_1_GetMany_m4030857929(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t697695065->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			RuntimeObject* _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((____items1_marshaled)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::GetAt(System.UInt32)
extern "C"  RuntimeObject* IVectorView_1_GetAt_m481647535 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m481647535_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t2316303193* ____ivectorView_1_t2316303193 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2316303193::IID, reinterpret_cast<void**>(&____ivectorView_1_t2316303193));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	ISpatialInteractionSourceState2_t2977437931* returnValue = NULL;
	hr = ____ivectorView_1_t2316303193->IVectorView_1_GetAt_m481647535(___index0, &returnValue);
	____ivectorView_1_t2316303193->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m3235029412 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t2316303193* ____ivectorView_1_t2316303193 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2316303193::IID, reinterpret_cast<void**>(&____ivectorView_1_t2316303193));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2316303193->IVectorView_1_get_Size_m3235029412(&returnValue);
	____ivectorView_1_t2316303193->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m3786545505 (RuntimeObject* __this, RuntimeObject* ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t2316303193* ____ivectorView_1_t2316303193 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2316303193::IID, reinterpret_cast<void**>(&____ivectorView_1_t2316303193));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISpatialInteractionSourceState2_t2977437931* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___value0))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)___value0)->identity->QueryInterface(ISpatialInteractionSourceState2_t2977437931::IID, reinterpret_cast<void**>(&____value0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____value0_marshaled = il2cpp_codegen_com_get_or_create_ccw<ISpatialInteractionSourceState2_t2977437931>(___value0);
		}
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t2316303193->IVectorView_1_IndexOf_m3786545505(____value0_marshaled, (&____index1_empty), &returnValue);
	____ivectorView_1_t2316303193->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___value0' native representation
	if (____value0_marshaled != NULL)
	{
		(____value0_marshaled)->Release();
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.ISpatialInteractionSourceState2>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m3125443688 (RuntimeObject* __this, uint32_t ___startIndex0, ISpatialInteractionSourceState2U5BU5D_t3674212106* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m3125443688_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t2316303193* ____ivectorView_1_t2316303193 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t2316303193::IID, reinterpret_cast<void**>(&____ivectorView_1_t2316303193));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	ISpatialInteractionSourceState2_t2977437931** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<ISpatialInteractionSourceState2_t2977437931*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(ISpatialInteractionSourceState2_t2977437931*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t2316303193->IVectorView_1_GetMany_m3125443688(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t2316303193->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			RuntimeObject* _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>((____items1_marshaled)[i], Il2CppComObject_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		const il2cpp_array_size_t ____items1_marshaled_CleanupLoopCount = (___items1 != NULL) ? (___items1)->max_length : 0;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(____items1_marshaled_CleanupLoopCount); i++)
		{
			if ((____items1_marshaled)[i] != NULL)
			{
				((____items1_marshaled)[i])->Release();
				(____items1_marshaled)[i] = NULL;
			}
		}
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::GetAt(System.UInt32)
extern "C"  SpatialInteractionSourceState_t1215688063 * IVectorView_1_GetAt_m3403983141 (RuntimeObject* __this, uint32_t ___index0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m3403983141_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t554553325* ____ivectorView_1_t554553325 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t554553325::IID, reinterpret_cast<void**>(&____ivectorView_1_t554553325));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	ISpatialInteractionSourceState_t1358829803* returnValue = NULL;
	hr = ____ivectorView_1_t554553325->IVectorView_1_GetAt_m3403983141(___index0, &returnValue);
	____ivectorView_1_t554553325->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	SpatialInteractionSourceState_t1215688063 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SpatialInteractionSourceState_t1215688063>(returnValue, SpatialInteractionSourceState_t1215688063_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::get_Size()
extern "C"  uint32_t IVectorView_1_get_Size_m2305435658 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IVectorView_1_t554553325* ____ivectorView_1_t554553325 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t554553325::IID, reinterpret_cast<void**>(&____ivectorView_1_t554553325));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t554553325->IVectorView_1_get_Size_m2305435658(&returnValue);
	____ivectorView_1_t554553325->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
// System.Boolean Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::IndexOf(T,System.UInt32&)
extern "C"  bool IVectorView_1_IndexOf_m1144283072 (RuntimeObject* __this, SpatialInteractionSourceState_t1215688063 * ___value0, uint32_t* ___index1, const RuntimeMethod* method)
{
	IVectorView_1_t554553325* ____ivectorView_1_t554553325 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t554553325::IID, reinterpret_cast<void**>(&____ivectorView_1_t554553325));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___value0' to native representation
	ISpatialInteractionSourceState_t1358829803* ____value0_marshaled = NULL;
	if (___value0 != NULL)
	{
		____value0_marshaled = (___value0)->get_____ispatialInteractionSourceState_t1358829803();
	}
	else
	{
		____value0_marshaled = NULL;
	}

	// Marshaling of parameter '___index1' to native representation
	uint32_t ____index1_empty = 0;

	// Native function invocation
	bool returnValue = 0;
	hr = ____ivectorView_1_t554553325->IVectorView_1_IndexOf_m1144283072(____value0_marshaled, (&____index1_empty), &returnValue);
	____ivectorView_1_t554553325->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___index1' back from native representation
	*___index1 = ____index1_empty;

	return returnValue;
}
// System.UInt32 Windows.Foundation.Collections.IVectorView`1<Windows.UI.Input.Spatial.SpatialInteractionSourceState>::GetMany(System.UInt32,T[])
extern "C"  uint32_t IVectorView_1_GetMany_m557233082 (RuntimeObject* __this, uint32_t ___startIndex0, SpatialInteractionSourceStateU5BU5D_t1865583014* ___items1, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m557233082_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IVectorView_1_t554553325* ____ivectorView_1_t554553325 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IVectorView_1_t554553325::IID, reinterpret_cast<void**>(&____ivectorView_1_t554553325));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' to native representation
	uint32_t ____items1_marshaledArraySize = 0;
	ISpatialInteractionSourceState_t1358829803** ____items1_marshaled = NULL;
	if (___items1 != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		____items1_marshaled = il2cpp_codegen_marshal_allocate_array<ISpatialInteractionSourceState_t1358829803*>(static_cast<int32_t>(____items1_marshaledArraySize));
		memset(____items1_marshaled, 0, static_cast<int32_t>(____items1_marshaledArraySize) * sizeof(ISpatialInteractionSourceState_t1358829803*));
	}

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ivectorView_1_t554553325->IVectorView_1_GetMany_m557233082(___startIndex0, ____items1_marshaledArraySize, ____items1_marshaled, &returnValue);
	____ivectorView_1_t554553325->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___items1' back from native representation
	if (____items1_marshaled != NULL)
	{
		____items1_marshaledArraySize = static_cast<uint32_t>((___items1)->max_length);
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(static_cast<int32_t>(____items1_marshaledArraySize)); i++)
		{
			SpatialInteractionSourceState_t1215688063 * _____items1_marshaled_i__unmarshaled = NULL;
			if ((____items1_marshaled)[i] != NULL)
			{
				_____items1_marshaled_i__unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SpatialInteractionSourceState_t1215688063>((____items1_marshaled)[i], SpatialInteractionSourceState_t1215688063_il2cpp_TypeInfo_var);
			}
			else
			{
				_____items1_marshaled_i__unmarshaled = NULL;
			}
			(___items1)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), _____items1_marshaled_i__unmarshaled);
		}
	}

	// Marshaling cleanup of parameter '___items1' native representation
	if (____items1_marshaled != NULL)
	{
		il2cpp_codegen_marshal_free(____items1_marshaled);
		____items1_marshaled = NULL;
	}

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.EventHandler`1<System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void EventHandler_1__ctor_m380207085_gshared (EventHandler_1_t39852124 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.Foundation.EventHandler`1<System.Object>::Invoke(System.Object,T)
extern "C"  void EventHandler_1_Invoke_m3884748090_gshared (EventHandler_1_t39852124 * __this, RuntimeObject * ___sender0, RuntimeObject * ___args1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___args1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___args1, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
							else
								GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
							else
								VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___sender0, ___args1);
							else
								GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___sender0, ___args1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___args1);
							else
								VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___args1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___args1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___args1, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
						else
							GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
						else
							VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___sender0, ___args1);
						else
							GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___sender0, ___args1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___args1);
						else
							VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___args1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
				}
			}
		}
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.IAsyncOperation`1<System.Boolean>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
extern "C"  void IAsyncOperation_1_put_Completed_m1783482745 (RuntimeObject* __this, AsyncOperationCompletedHandler_1_t1437760040 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_put_Completed_m1783482745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t3013442981* ____iasyncOperation_1_t3013442981 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t3013442981::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t3013442981));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperation_1_t3013442981->IAsyncOperation_1_put_Completed_m1783482745(____handler0_marshaled);
	____iasyncOperation_1_t3013442981->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationCompletedHandler`1<TResult> Windows.Foundation.IAsyncOperation`1<System.Boolean>::get_Completed()
extern "C"  AsyncOperationCompletedHandler_1_t1437760040 * IAsyncOperation_1_get_Completed_m2903702275 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_get_Completed_m2903702275_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t3013442981* ____iasyncOperation_1_t3013442981 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t3013442981::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t3013442981));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationCompletedHandler_1_t1437760040_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperation_1_t3013442981->IAsyncOperation_1_get_Completed_m2903702275(&returnValue);
	____iasyncOperation_1_t3013442981->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationCompletedHandler_1_t1437760040 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_t1437760040 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationCompletedHandler_1_t1437760040*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t1437760040_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationCompletedHandler_1_Invoke_m1728644989_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_m1728644989_RuntimeMethod_var);
			_returnValue_unmarshaled->set_method_3(methodInfo);
			_returnValue_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t1102178620>(returnValue, __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var));
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// TResult Windows.Foundation.IAsyncOperation`1<System.Boolean>::GetResults()
extern "C"  bool IAsyncOperation_1_GetResults_m183360251 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IAsyncOperation_1_t3013442981* ____iasyncOperation_1_t3013442981 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t3013442981::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t3013442981));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____iasyncOperation_1_t3013442981->IAsyncOperation_1_GetResults_m183360251(&returnValue);
	____iasyncOperation_1_t3013442981->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.IAsyncOperation`1<System.Object>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
extern "C"  void IAsyncOperation_1_put_Completed_m2440562410 (RuntimeObject* __this, AsyncOperationCompletedHandler_1_t125610943 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_put_Completed_m2440562410_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1701293884* ____iasyncOperation_1_t1701293884 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t1701293884::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t1701293884));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationCompletedHandler_1_t125610943_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_t125610943_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_t125610943_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperation_1_t1701293884->IAsyncOperation_1_put_Completed_m2440562410(____handler0_marshaled);
	____iasyncOperation_1_t1701293884->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationCompletedHandler`1<TResult> Windows.Foundation.IAsyncOperation`1<System.Object>::get_Completed()
extern "C"  AsyncOperationCompletedHandler_1_t125610943 * IAsyncOperation_1_get_Completed_m1801998692 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_get_Completed_m1801998692_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1701293884* ____iasyncOperation_1_t1701293884 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t1701293884::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t1701293884));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationCompletedHandler_1_t125610943_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperation_1_t1701293884->IAsyncOperation_1_get_Completed_m1801998692(&returnValue);
	____iasyncOperation_1_t1701293884->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationCompletedHandler_1_t125610943 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_t125610943 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationCompletedHandler_1_t125610943*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t125610943_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationCompletedHandler_1_Invoke_m4027491544_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_m4027491544_RuntimeMethod_var);
			_returnValue_unmarshaled->set_method_3(methodInfo);
			_returnValue_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t1102178620>(returnValue, __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var));
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// TResult Windows.Foundation.IAsyncOperation`1<System.Object>::GetResults()
extern "C"  RuntimeObject * IAsyncOperation_1_GetResults_m313133751 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_GetResults_m313133751_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1701293884* ____iasyncOperation_1_t1701293884 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t1701293884::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t1701293884));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppIInspectable* returnValue = NULL;
	hr = ____iasyncOperation_1_t1701293884->IAsyncOperation_1_GetResults_m313133751(&returnValue);
	____iasyncOperation_1_t1701293884->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.IAsyncOperation`1<System.UInt32>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
extern "C"  void IAsyncOperation_1_put_Completed_m1437779878 (RuntimeObject* __this, AsyncOperationCompletedHandler_1_t3900534053 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_put_Completed_m1437779878_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t1181249698::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t1181249698));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperation_1_t1181249698->IAsyncOperation_1_put_Completed_m1437779878(____handler0_marshaled);
	____iasyncOperation_1_t1181249698->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationCompletedHandler`1<TResult> Windows.Foundation.IAsyncOperation`1<System.UInt32>::get_Completed()
extern "C"  AsyncOperationCompletedHandler_1_t3900534053 * IAsyncOperation_1_get_Completed_m2736054029 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_get_Completed_m2736054029_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t1181249698::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t1181249698));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationCompletedHandler_1_t3900534053_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperation_1_t1181249698->IAsyncOperation_1_get_Completed_m2736054029(&returnValue);
	____iasyncOperation_1_t1181249698->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationCompletedHandler_1_t3900534053 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_t3900534053 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationCompletedHandler_1_t3900534053*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t3900534053_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationCompletedHandler_1_Invoke_m274646961_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_m274646961_RuntimeMethod_var);
			_returnValue_unmarshaled->set_method_3(methodInfo);
			_returnValue_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t1102178620>(returnValue, __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var));
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// TResult Windows.Foundation.IAsyncOperation`1<System.UInt32>::GetResults()
extern "C"  uint32_t IAsyncOperation_1_GetResults_m2010780058 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IAsyncOperation_1_t1181249698* ____iasyncOperation_1_t1181249698 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t1181249698::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t1181249698));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____iasyncOperation_1_t1181249698->IAsyncOperation_1_GetResults_m2010780058(&returnValue);
	____iasyncOperation_1_t1181249698->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
extern "C"  void IAsyncOperation_1_put_Completed_m2708255201 (RuntimeObject* __this, AsyncOperationCompletedHandler_1_t3662811833 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_put_Completed_m2708255201_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t943527478* ____iasyncOperation_1_t943527478 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t943527478::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t943527478));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationCompletedHandler_1_t3662811833_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_t3662811833_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_t3662811833_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperation_1_t943527478->IAsyncOperation_1_put_Completed_m2708255201(____handler0_marshaled);
	____iasyncOperation_1_t943527478->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationCompletedHandler`1<TResult> Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>::get_Completed()
extern "C"  AsyncOperationCompletedHandler_1_t3662811833 * IAsyncOperation_1_get_Completed_m1799896646 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_get_Completed_m1799896646_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t943527478* ____iasyncOperation_1_t943527478 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t943527478::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t943527478));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationCompletedHandler_1_t3662811833_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperation_1_t943527478->IAsyncOperation_1_get_Completed_m1799896646(&returnValue);
	____iasyncOperation_1_t943527478->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationCompletedHandler_1_t3662811833 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_t3662811833 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationCompletedHandler_1_t3662811833*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t3662811833_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationCompletedHandler_1_Invoke_m990580978_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_m990580978_RuntimeMethod_var);
			_returnValue_unmarshaled->set_method_3(methodInfo);
			_returnValue_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t1102178620>(returnValue, __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var));
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// TResult Windows.Foundation.IAsyncOperation`1<Windows.Media.SpeechSynthesis.SpeechSynthesisStream>::GetResults()
extern "C"  SpeechSynthesisStream_t2322339758 * IAsyncOperation_1_GetResults_m1078041023 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_GetResults_m1078041023_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t943527478* ____iasyncOperation_1_t943527478 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t943527478::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t943527478));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	ISpeechSynthesisStream_t764091608* returnValue = NULL;
	hr = ____iasyncOperation_1_t943527478->IAsyncOperation_1_GetResults_m1078041023(&returnValue);
	____iasyncOperation_1_t943527478->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	SpeechSynthesisStream_t2322339758 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<SpeechSynthesisStream_t2322339758>(returnValue, SpeechSynthesisStream_t2322339758_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
extern "C"  void IAsyncOperation_1_put_Completed_m1174308971 (RuntimeObject* __this, AsyncOperationCompletedHandler_1_t3092276191 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_put_Completed_m1174308971_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t372991836* ____iasyncOperation_1_t372991836 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t372991836::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t372991836));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationCompletedHandler_1_t3092276191_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_t3092276191_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_t3092276191_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperation_1_t372991836->IAsyncOperation_1_put_Completed_m1174308971(____handler0_marshaled);
	____iasyncOperation_1_t372991836->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationCompletedHandler`1<TResult> Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>::get_Completed()
extern "C"  AsyncOperationCompletedHandler_1_t3092276191 * IAsyncOperation_1_get_Completed_m2669246745 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_get_Completed_m2669246745_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t372991836* ____iasyncOperation_1_t372991836 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t372991836::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t372991836));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationCompletedHandler_1_t3092276191_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperation_1_t372991836->IAsyncOperation_1_get_Completed_m2669246745(&returnValue);
	____iasyncOperation_1_t372991836->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationCompletedHandler_1_t3092276191 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_t3092276191 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationCompletedHandler_1_t3092276191*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t3092276191_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationCompletedHandler_1_Invoke_m122450152_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_m122450152_RuntimeMethod_var);
			_returnValue_unmarshaled->set_method_3(methodInfo);
			_returnValue_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t1102178620>(returnValue, __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var));
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// TResult Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFile>::GetResults()
extern "C"  StorageFile_t1751804116 * IAsyncOperation_1_GetResults_m4007442614 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_GetResults_m4007442614_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t372991836* ____iasyncOperation_1_t372991836 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t372991836::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t372991836));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IStorageFile_t455187485* returnValue = NULL;
	hr = ____iasyncOperation_1_t372991836->IAsyncOperation_1_GetResults_m4007442614(&returnValue);
	____iasyncOperation_1_t372991836->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	StorageFile_t1751804116 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<StorageFile_t1751804116>(returnValue, StorageFile_t1751804116_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFolder>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
extern "C"  void IAsyncOperation_1_put_Completed_m2910006857 (RuntimeObject* __this, AsyncOperationCompletedHandler_1_t2325952763 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_put_Completed_m2910006857_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t3901635704* ____iasyncOperation_1_t3901635704 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t3901635704::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t3901635704));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationCompletedHandler_1_t2325952763_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_t2325952763_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_t2325952763_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperation_1_t3901635704->IAsyncOperation_1_put_Completed_m2910006857(____handler0_marshaled);
	____iasyncOperation_1_t3901635704->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationCompletedHandler`1<TResult> Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFolder>::get_Completed()
extern "C"  AsyncOperationCompletedHandler_1_t2325952763 * IAsyncOperation_1_get_Completed_m2270643935 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_get_Completed_m2270643935_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t3901635704* ____iasyncOperation_1_t3901635704 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t3901635704::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t3901635704));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationCompletedHandler_1_t2325952763_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperation_1_t3901635704->IAsyncOperation_1_get_Completed_m2270643935(&returnValue);
	____iasyncOperation_1_t3901635704->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationCompletedHandler_1_t2325952763 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_t2325952763 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationCompletedHandler_1_t2325952763*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t2325952763_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationCompletedHandler_1_Invoke_m510864878_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_m510864878_RuntimeMethod_var);
			_returnValue_unmarshaled->set_method_3(methodInfo);
			_returnValue_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t1102178620>(returnValue, __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var));
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// TResult Windows.Foundation.IAsyncOperation`1<Windows.Storage.StorageFolder>::GetResults()
extern "C"  StorageFolder_t985480688 * IAsyncOperation_1_GetResults_m2895527307 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_GetResults_m2895527307_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t3901635704* ____iasyncOperation_1_t3901635704 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t3901635704::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t3901635704));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IStorageFolder_t2414910357* returnValue = NULL;
	hr = ____iasyncOperation_1_t3901635704->IAsyncOperation_1_GetResults_m2895527307(&returnValue);
	____iasyncOperation_1_t3901635704->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	StorageFolder_t985480688 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<StorageFolder_t985480688>(returnValue, StorageFolder_t985480688_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStream>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
extern "C"  void IAsyncOperation_1_put_Completed_m1751653406 (RuntimeObject* __this, AsyncOperationCompletedHandler_1_t3440468126 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_put_Completed_m1751653406_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t721183771* ____iasyncOperation_1_t721183771 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t721183771::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t721183771));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationCompletedHandler_1_t3440468126_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_t3440468126_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_t3440468126_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperation_1_t721183771->IAsyncOperation_1_put_Completed_m1751653406(____handler0_marshaled);
	____iasyncOperation_1_t721183771->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationCompletedHandler`1<TResult> Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStream>::get_Completed()
extern "C"  AsyncOperationCompletedHandler_1_t3440468126 * IAsyncOperation_1_get_Completed_m3598311264 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_get_Completed_m3598311264_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t721183771* ____iasyncOperation_1_t721183771 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t721183771::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t721183771));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationCompletedHandler_1_t3440468126_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperation_1_t721183771->IAsyncOperation_1_get_Completed_m3598311264(&returnValue);
	____iasyncOperation_1_t721183771->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationCompletedHandler_1_t3440468126 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_t3440468126 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationCompletedHandler_1_t3440468126*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t3440468126_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationCompletedHandler_1_Invoke_m2733685339_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_m2733685339_RuntimeMethod_var);
			_returnValue_unmarshaled->set_method_3(methodInfo);
			_returnValue_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t1102178620>(returnValue, __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var));
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// TResult Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStream>::GetResults()
extern "C"  RuntimeObject* IAsyncOperation_1_GetResults_m2960108873 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_GetResults_m2960108873_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t721183771* ____iasyncOperation_1_t721183771 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t721183771::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t721183771));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IRandomAccessStream_t2099996051* returnValue = NULL;
	hr = ____iasyncOperation_1_t721183771->IAsyncOperation_1_GetResults_m2960108873(&returnValue);
	____iasyncOperation_1_t721183771->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>::put_Completed(Windows.Foundation.AsyncOperationCompletedHandler`1<TResult>)
extern "C"  void IAsyncOperation_1_put_Completed_m677968592 (RuntimeObject* __this, AsyncOperationCompletedHandler_1_t342432431 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_put_Completed_m677968592_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1918115372* ____iasyncOperation_1_t1918115372 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t1918115372::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t1918115372));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationCompletedHandler_1_t342432431_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationCompletedHandler_1_t342432431_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationCompletedHandler_1_t342432431_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperation_1_t1918115372->IAsyncOperation_1_put_Completed_m677968592(____handler0_marshaled);
	____iasyncOperation_1_t1918115372->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationCompletedHandler`1<TResult> Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>::get_Completed()
extern "C"  AsyncOperationCompletedHandler_1_t342432431 * IAsyncOperation_1_get_Completed_m1527642250 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_get_Completed_m1527642250_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1918115372* ____iasyncOperation_1_t1918115372 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t1918115372::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t1918115372));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationCompletedHandler_1_t342432431_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperation_1_t1918115372->IAsyncOperation_1_get_Completed_m1527642250(&returnValue);
	____iasyncOperation_1_t1918115372->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationCompletedHandler_1_t342432431 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationCompletedHandler_1_t342432431 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationCompletedHandler_1_t342432431*)il2cpp_codegen_object_new(AsyncOperationCompletedHandler_1_t342432431_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationCompletedHandler_1_Invoke_m388471121_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationCompletedHandler_1_Invoke_m388471121_RuntimeMethod_var);
			_returnValue_unmarshaled->set_method_3(methodInfo);
			_returnValue_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t1102178620>(returnValue, __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var));
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// TResult Windows.Foundation.IAsyncOperation`1<Windows.Storage.Streams.IRandomAccessStreamWithContentType>::GetResults()
extern "C"  RuntimeObject* IAsyncOperation_1_GetResults_m4077769623 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperation_1_GetResults_m4077769623_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperation_1_t1918115372* ____iasyncOperation_1_t1918115372 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperation_1_t1918115372::IID, reinterpret_cast<void**>(&____iasyncOperation_1_t1918115372));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IRandomAccessStreamWithContentType_t3296927652* returnValue = NULL;
	hr = ____iasyncOperation_1_t1918115372->IAsyncOperation_1_GetResults_m4077769623(&returnValue);
	____iasyncOperation_1_t1918115372->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.Object>::put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
extern "C"  void IAsyncOperationWithProgress_2_put_Progress_m2941309595 (RuntimeObject* __this, AsyncOperationProgressHandler_2_t385660461 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_put_Progress_m2941309595_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1186396931* ____iasyncOperationWithProgress_2_t1186396931 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1186396931::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1186396931));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationProgressHandler_2_t385660461_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationProgressHandler_2_t385660461_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationProgressHandler_2_t385660461_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperationWithProgress_2_t1186396931->IAsyncOperationWithProgress_2_put_Progress_m2941309595(____handler0_marshaled);
	____iasyncOperationWithProgress_2_t1186396931->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress> Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.Object>::get_Progress()
extern "C"  AsyncOperationProgressHandler_2_t385660461 * IAsyncOperationWithProgress_2_get_Progress_m42638027 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_get_Progress_m42638027_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1186396931* ____iasyncOperationWithProgress_2_t1186396931 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1186396931::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1186396931));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationProgressHandler_2_t385660461_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t1186396931->IAsyncOperationWithProgress_2_get_Progress_m42638027(&returnValue);
	____iasyncOperationWithProgress_2_t1186396931->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationProgressHandler_2_t385660461 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationProgressHandler_2_t385660461 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationProgressHandler_2_t385660461*)il2cpp_codegen_object_new(AsyncOperationProgressHandler_2_t385660461_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationProgressHandler_2_Invoke_m3152257273_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationProgressHandler_2_Invoke_m3152257273_RuntimeMethod_var);
			_returnValue_unmarshaled->set_method_3(methodInfo);
			_returnValue_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t1102178620>(returnValue, __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var));
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.Object>::put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
extern "C"  void IAsyncOperationWithProgress_2_put_Completed_m796962860 (RuntimeObject* __this, AsyncOperationWithProgressCompletedHandler_2_t3173780358 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_put_Completed_m796962860_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1186396931* ____iasyncOperationWithProgress_2_t1186396931 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1186396931::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1186396931));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationWithProgressCompletedHandler_2_t3173780358_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationWithProgressCompletedHandler_2_t3173780358_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgressCompletedHandler_2_t3173780358_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperationWithProgress_2_t1186396931->IAsyncOperationWithProgress_2_put_Completed_m796962860(____handler0_marshaled);
	____iasyncOperationWithProgress_2_t1186396931->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress> Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.Object>::get_Completed()
extern "C"  AsyncOperationWithProgressCompletedHandler_2_t3173780358 * IAsyncOperationWithProgress_2_get_Completed_m2596256679 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_get_Completed_m2596256679_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1186396931* ____iasyncOperationWithProgress_2_t1186396931 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1186396931::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1186396931));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationWithProgressCompletedHandler_2_t3173780358_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t1186396931->IAsyncOperationWithProgress_2_get_Completed_m2596256679(&returnValue);
	____iasyncOperationWithProgress_2_t1186396931->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationWithProgressCompletedHandler_2_t3173780358 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationWithProgressCompletedHandler_2_t3173780358 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationWithProgressCompletedHandler_2_t3173780358*)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_t3173780358_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationWithProgressCompletedHandler_2_Invoke_m1272920396_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationWithProgressCompletedHandler_2_Invoke_m1272920396_RuntimeMethod_var);
			_returnValue_unmarshaled->set_method_3(methodInfo);
			_returnValue_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t1102178620>(returnValue, __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var));
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// TResult Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.Object>::GetResults()
extern "C"  RuntimeObject * IAsyncOperationWithProgress_2_GetResults_m4125002903 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_GetResults_m4125002903_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1186396931* ____iasyncOperationWithProgress_2_t1186396931 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1186396931::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1186396931));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppIInspectable* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t1186396931->IAsyncOperationWithProgress_2_GetResults_m4125002903(&returnValue);
	____iasyncOperationWithProgress_2_t1186396931->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>::put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
extern "C"  void IAsyncOperationWithProgress_2_put_Progress_m1879259012 (RuntimeObject* __this, AsyncOperationProgressHandler_2_t4160583571 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_put_Progress_m1879259012_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t666352745* ____iasyncOperationWithProgress_2_t666352745 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t666352745::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t666352745));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationProgressHandler_2_t4160583571_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationProgressHandler_2_t4160583571_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationProgressHandler_2_t4160583571_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperationWithProgress_2_t666352745->IAsyncOperationWithProgress_2_put_Progress_m1879259012(____handler0_marshaled);
	____iasyncOperationWithProgress_2_t666352745->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress> Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>::get_Progress()
extern "C"  AsyncOperationProgressHandler_2_t4160583571 * IAsyncOperationWithProgress_2_get_Progress_m1058255273 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_get_Progress_m1058255273_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t666352745* ____iasyncOperationWithProgress_2_t666352745 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t666352745::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t666352745));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationProgressHandler_2_t4160583571_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t666352745->IAsyncOperationWithProgress_2_get_Progress_m1058255273(&returnValue);
	____iasyncOperationWithProgress_2_t666352745->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationProgressHandler_2_t4160583571 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationProgressHandler_2_t4160583571 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationProgressHandler_2_t4160583571*)il2cpp_codegen_object_new(AsyncOperationProgressHandler_2_t4160583571_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationProgressHandler_2_Invoke_m3878254636_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationProgressHandler_2_Invoke_m3878254636_RuntimeMethod_var);
			_returnValue_unmarshaled->set_method_3(methodInfo);
			_returnValue_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t1102178620>(returnValue, __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var));
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>::put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
extern "C"  void IAsyncOperationWithProgress_2_put_Completed_m2338839716 (RuntimeObject* __this, AsyncOperationWithProgressCompletedHandler_2_t2653736172 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_put_Completed_m2338839716_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t666352745* ____iasyncOperationWithProgress_2_t666352745 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t666352745::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t666352745));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationWithProgressCompletedHandler_2_t2653736172_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationWithProgressCompletedHandler_2_t2653736172_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgressCompletedHandler_2_t2653736172_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperationWithProgress_2_t666352745->IAsyncOperationWithProgress_2_put_Completed_m2338839716(____handler0_marshaled);
	____iasyncOperationWithProgress_2_t666352745->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress> Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>::get_Completed()
extern "C"  AsyncOperationWithProgressCompletedHandler_2_t2653736172 * IAsyncOperationWithProgress_2_get_Completed_m2626479363 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_get_Completed_m2626479363_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t666352745* ____iasyncOperationWithProgress_2_t666352745 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t666352745::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t666352745));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationWithProgressCompletedHandler_2_t2653736172_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t666352745->IAsyncOperationWithProgress_2_get_Completed_m2626479363(&returnValue);
	____iasyncOperationWithProgress_2_t666352745->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationWithProgressCompletedHandler_2_t2653736172 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationWithProgressCompletedHandler_2_t2653736172 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationWithProgressCompletedHandler_2_t2653736172*)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_t2653736172_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationWithProgressCompletedHandler_2_Invoke_m2996415322_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationWithProgressCompletedHandler_2_Invoke_m2996415322_RuntimeMethod_var);
			_returnValue_unmarshaled->set_method_3(methodInfo);
			_returnValue_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t1102178620>(returnValue, __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var));
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// TResult Windows.Foundation.IAsyncOperationWithProgress`2<System.Object,System.UInt32>::GetResults()
extern "C"  RuntimeObject * IAsyncOperationWithProgress_2_GetResults_m2250808291 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_GetResults_m2250808291_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t666352745* ____iasyncOperationWithProgress_2_t666352745 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t666352745::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t666352745));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppIInspectable* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t666352745->IAsyncOperationWithProgress_2_GetResults_m2250808291(&returnValue);
	____iasyncOperationWithProgress_2_t666352745->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>::put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
extern "C"  void IAsyncOperationWithProgress_2_put_Progress_m1633053105 (RuntimeObject* __this, AsyncOperationProgressHandler_2_t4087444949 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_put_Progress_m1633053105_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t593214123* ____iasyncOperationWithProgress_2_t593214123 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t593214123::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t593214123));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperationWithProgress_2_t593214123->IAsyncOperationWithProgress_2_put_Progress_m1633053105(____handler0_marshaled);
	____iasyncOperationWithProgress_2_t593214123->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress> Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>::get_Progress()
extern "C"  AsyncOperationProgressHandler_2_t4087444949 * IAsyncOperationWithProgress_2_get_Progress_m165963889 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_get_Progress_m165963889_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t593214123* ____iasyncOperationWithProgress_2_t593214123 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t593214123::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t593214123));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationProgressHandler_2_t4087444949_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t593214123->IAsyncOperationWithProgress_2_get_Progress_m165963889(&returnValue);
	____iasyncOperationWithProgress_2_t593214123->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationProgressHandler_2_t4087444949 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationProgressHandler_2_t4087444949 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationProgressHandler_2_t4087444949*)il2cpp_codegen_object_new(AsyncOperationProgressHandler_2_t4087444949_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationProgressHandler_2_Invoke_m1906555057_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationProgressHandler_2_Invoke_m1906555057_RuntimeMethod_var);
			_returnValue_unmarshaled->set_method_3(methodInfo);
			_returnValue_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t1102178620>(returnValue, __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var));
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>::put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
extern "C"  void IAsyncOperationWithProgress_2_put_Completed_m483007812 (RuntimeObject* __this, AsyncOperationWithProgressCompletedHandler_2_t2580597550 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_put_Completed_m483007812_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t593214123* ____iasyncOperationWithProgress_2_t593214123 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t593214123::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t593214123));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperationWithProgress_2_t593214123->IAsyncOperationWithProgress_2_put_Completed_m483007812(____handler0_marshaled);
	____iasyncOperationWithProgress_2_t593214123->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress> Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>::get_Completed()
extern "C"  AsyncOperationWithProgressCompletedHandler_2_t2580597550 * IAsyncOperationWithProgress_2_get_Completed_m655232302 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_get_Completed_m655232302_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t593214123* ____iasyncOperationWithProgress_2_t593214123 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t593214123::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t593214123));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationWithProgressCompletedHandler_2_t2580597550_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t593214123->IAsyncOperationWithProgress_2_get_Completed_m655232302(&returnValue);
	____iasyncOperationWithProgress_2_t593214123->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationWithProgressCompletedHandler_2_t2580597550 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationWithProgressCompletedHandler_2_t2580597550 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationWithProgressCompletedHandler_2_t2580597550*)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_t2580597550_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationWithProgressCompletedHandler_2_Invoke_m369172062_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationWithProgressCompletedHandler_2_Invoke_m369172062_RuntimeMethod_var);
			_returnValue_unmarshaled->set_method_3(methodInfo);
			_returnValue_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t1102178620>(returnValue, __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var));
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// TResult Windows.Foundation.IAsyncOperationWithProgress`2<System.UInt32,System.UInt32>::GetResults()
extern "C"  uint32_t IAsyncOperationWithProgress_2_GetResults_m3754792249 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IAsyncOperationWithProgress_2_t593214123* ____iasyncOperationWithProgress_2_t593214123 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t593214123::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t593214123));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____iasyncOperationWithProgress_2_t593214123->IAsyncOperationWithProgress_2_GetResults_m3754792249(&returnValue);
	____iasyncOperationWithProgress_2_t593214123->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>::put_Progress(Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress>)
extern "C"  void IAsyncOperationWithProgress_2_put_Progress_m809910966 (RuntimeObject* __this, AsyncOperationProgressHandler_2_t821837630 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_put_Progress_m809910966_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1622574100* ____iasyncOperationWithProgress_2_t1622574100 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1622574100::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1622574100));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperationWithProgress_2_t1622574100->IAsyncOperationWithProgress_2_put_Progress_m809910966(____handler0_marshaled);
	____iasyncOperationWithProgress_2_t1622574100->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationProgressHandler`2<TResult,TProgress> Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>::get_Progress()
extern "C"  AsyncOperationProgressHandler_2_t821837630 * IAsyncOperationWithProgress_2_get_Progress_m489652616 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_get_Progress_m489652616_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1622574100* ____iasyncOperationWithProgress_2_t1622574100 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1622574100::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1622574100));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationProgressHandler_2_t821837630_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t1622574100->IAsyncOperationWithProgress_2_get_Progress_m489652616(&returnValue);
	____iasyncOperationWithProgress_2_t1622574100->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationProgressHandler_2_t821837630 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationProgressHandler_2_t821837630 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationProgressHandler_2_t821837630*)il2cpp_codegen_object_new(AsyncOperationProgressHandler_2_t821837630_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationProgressHandler_2_Invoke_m6457722_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationProgressHandler_2_Invoke_m6457722_RuntimeMethod_var);
			_returnValue_unmarshaled->set_method_3(methodInfo);
			_returnValue_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t1102178620>(returnValue, __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var));
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// System.Void Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>::put_Completed(Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress>)
extern "C"  void IAsyncOperationWithProgress_2_put_Completed_m3126232629 (RuntimeObject* __this, AsyncOperationWithProgressCompletedHandler_2_t3609957527 * ___handler0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_put_Completed_m3126232629_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1622574100* ____iasyncOperationWithProgress_2_t1622574100 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1622574100::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1622574100));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of parameter '___handler0' to native representation
	IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper* ____handler0_marshaled = NULL;
	if (___handler0 != NULL)
	{
		RuntimeObject* target = ___handler0->get_m_target_2();

		if (target != NULL && ___handler0->get_delegates_11() == NULL && target->klass == __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var)
		{
			il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(target)->identity->QueryInterface(IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper::IID, reinterpret_cast<void**>(&____handler0_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			____handler0_marshaled = il2cpp_codegen_com_get_or_create_ccw<IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper>(___handler0);
		}
	}
	else
	{
		____handler0_marshaled = NULL;
	}

	// Native function invocation
	hr = ____iasyncOperationWithProgress_2_t1622574100->IAsyncOperationWithProgress_2_put_Completed_m3126232629(____handler0_marshaled);
	____iasyncOperationWithProgress_2_t1622574100->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___handler0' native representation
	if (____handler0_marshaled != NULL)
	{
		(____handler0_marshaled)->Release();
		____handler0_marshaled = NULL;
	}

}
// Windows.Foundation.AsyncOperationWithProgressCompletedHandler`2<TResult,TProgress> Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>::get_Completed()
extern "C"  AsyncOperationWithProgressCompletedHandler_2_t3609957527 * IAsyncOperationWithProgress_2_get_Completed_m4203981877 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_get_Completed_m4203981877_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1622574100* ____iasyncOperationWithProgress_2_t1622574100 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1622574100::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1622574100));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IAsyncOperationWithProgressCompletedHandler_2_t3609957527_ComCallableWrapper* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t1622574100->IAsyncOperationWithProgress_2_get_Completed_m4203981877(&returnValue);
	____iasyncOperationWithProgress_2_t1622574100->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	AsyncOperationWithProgressCompletedHandler_2_t3609957527 * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		Il2CppIManagedObjectHolder* imanagedObject = NULL;
		il2cpp_hresult_t hr = (returnValue)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			_returnValue_unmarshaled = static_cast<AsyncOperationWithProgressCompletedHandler_2_t3609957527 *>(imanagedObject->GetManagedObject());
			imanagedObject->Release();
		}
		else
		{
			_returnValue_unmarshaled = (AsyncOperationWithProgressCompletedHandler_2_t3609957527*)il2cpp_codegen_object_new(AsyncOperationWithProgressCompletedHandler_2_t3609957527_il2cpp_TypeInfo_var);
			_returnValue_unmarshaled->set_method_ptr_0((Il2CppMethodPointer)AsyncOperationWithProgressCompletedHandler_2_Invoke_m2483366708_NativeInvoker);
			intptr_t methodInfo;
			methodInfo = reinterpret_cast<intptr_t>(AsyncOperationWithProgressCompletedHandler_2_Invoke_m2483366708_RuntimeMethod_var);
			_returnValue_unmarshaled->set_method_3(methodInfo);
			_returnValue_unmarshaled->set_m_target_2(il2cpp_codegen_com_get_or_create_rcw_for_sealed_class<__Il2CppComDelegate_t1102178620>(returnValue, __Il2CppComDelegate_t1102178620_il2cpp_TypeInfo_var));
		}
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
// TResult Windows.Foundation.IAsyncOperationWithProgress`2<Windows.Storage.Streams.IBuffer,System.UInt32>::GetResults()
extern "C"  RuntimeObject* IAsyncOperationWithProgress_2_GetResults_m3465034556 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IAsyncOperationWithProgress_2_GetResults_m3465034556_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IAsyncOperationWithProgress_2_t1622574100* ____iasyncOperationWithProgress_2_t1622574100 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IAsyncOperationWithProgress_2_t1622574100::IID, reinterpret_cast<void**>(&____iasyncOperationWithProgress_2_t1622574100));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	IBuffer_t541192229* returnValue = NULL;
	hr = ____iasyncOperationWithProgress_2_t1622574100->IAsyncOperationWithProgress_2_GetResults_m3465034556(&returnValue);
	____iasyncOperationWithProgress_2_t1622574100->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject* _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.AttributeTargets>::get_Value()
extern "C"  int32_t IReference_1_get_Value_m95326068 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1037206413* ____ireference_1_t1037206413 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1037206413::IID, reinterpret_cast<void**>(&____ireference_1_t1037206413));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t1037206413->IReference_1_get_Value_m95326068(&returnValue);
	____ireference_1_t1037206413->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Boolean>::get_Value()
extern "C"  bool IReference_1_get_Value_m774017165 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3645423686* ____ireference_1_t3645423686 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3645423686::IID, reinterpret_cast<void**>(&____ireference_1_t3645423686));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	bool returnValue = 0;
	hr = ____ireference_1_t3645423686->IReference_1_get_Value_m774017165(&returnValue);
	____ireference_1_t3645423686->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Byte>::get_Value()
extern "C"  uint8_t IReference_1_get_Value_m3247461990 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t387464801* ____ireference_1_t387464801 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t387464801::IID, reinterpret_cast<void**>(&____ireference_1_t387464801));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint8_t returnValue = 0;
	hr = ____ireference_1_t387464801->IReference_1_get_Value_m3247461990(&returnValue);
	____ireference_1_t387464801->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Char>::get_Value()
extern "C"  Il2CppChar IReference_1_get_Value_m704688121 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2887628895* ____ireference_1_t2887628895 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2887628895::IID, reinterpret_cast<void**>(&____ireference_1_t2887628895));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppChar returnValue = 0;
	hr = ____ireference_1_t2887628895->IReference_1_get_Value_m704688121(&returnValue);
	____ireference_1_t2887628895->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.DateTimeOffset>::get_Value()
extern "C"  DateTimeOffset_t3229287507  IReference_1_get_Value_m2049683846 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReference_1_get_Value_m2049683846_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReference_1_t2482455932* ____ireference_1_t2482455932 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2482455932::IID, reinterpret_cast<void**>(&____ireference_1_t2482455932));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	DateTime_t1679451545  returnValue = {};
	hr = ____ireference_1_t2482455932->IReference_1_get_Value_m2049683846(&returnValue);
	____ireference_1_t2482455932->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	DateTimeOffset_t3229287507  _returnValue_unmarshaled;
	memset(&_returnValue_unmarshaled, 0, sizeof(_returnValue_unmarshaled));
	if ((returnValue).get_UniversalTime_0() < -504911232000000000 || (returnValue).get_UniversalTime_0() > 2650467743999999999)
	{
		ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
		ArgumentOutOfRangeException__ctor_m282481429(exception, _stringLiteral4286223022, _stringLiteral311452336, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(exception,NULL);
	}

	DateTimeOffset_t3229287507  _returnValue_unmarshaledStaging;
	DateTime_t3738529785  _returnValue_unmarshaledDateTime;
	_returnValue_unmarshaledDateTime.set_dateData_44((returnValue).get_UniversalTime_0() + 504911232000000000);
	_returnValue_unmarshaledStaging.set_m_dateTime_2(_returnValue_unmarshaledDateTime);
	_returnValue_unmarshaledStaging.set_m_offsetMinutes_3(0);
	_returnValue_unmarshaled = DateTimeOffset_ToLocalTime_m1141180670((&_returnValue_unmarshaledStaging), true, NULL);;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Double>::get_Value()
extern "C"  double IReference_1_get_Value_m3861827098 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t4142801084* ____ireference_1_t4142801084 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t4142801084::IID, reinterpret_cast<void**>(&____ireference_1_t4142801084));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	double returnValue = 0.0;
	hr = ____ireference_1_t4142801084->IReference_1_get_Value_m3861827098(&returnValue);
	____ireference_1_t4142801084->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Exception>::get_Value()
extern "C"  Exception_t * IReference_1_get_Value_m3319376935 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t689905674* ____ireference_1_t689905674 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t689905674::IID, reinterpret_cast<void**>(&____ireference_1_t689905674));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t689905674->IReference_1_get_Value_m3319376935(&returnValue);
	____ireference_1_t689905674->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return (returnValue != IL2CPP_S_OK ? reinterpret_cast<Exception_t *>(il2cpp_codegen_com_get_exception(returnValue, false)) : NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Guid>::get_Value()
extern "C"  Guid_t  IReference_1_get_Value_m2917423479 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2446701312* ____ireference_1_t2446701312 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2446701312::IID, reinterpret_cast<void**>(&____ireference_1_t2446701312));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Guid_t  returnValue = {};
	hr = ____ireference_1_t2446701312->IReference_1_get_Value_m2917423479(&returnValue);
	____ireference_1_t2446701312->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Int16>::get_Value()
extern "C"  int16_t IReference_1_get_Value_m3359388353 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1805988812* ____ireference_1_t1805988812 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1805988812::IID, reinterpret_cast<void**>(&____ireference_1_t1805988812));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int16_t returnValue = 0;
	hr = ____ireference_1_t1805988812->IReference_1_get_Value_m3359388353(&returnValue);
	____ireference_1_t1805988812->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Int32>::get_Value()
extern "C"  int32_t IReference_1_get_Value_m1946804912 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2204114178* ____ireference_1_t2204114178 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2204114178::IID, reinterpret_cast<void**>(&____ireference_1_t2204114178));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t2204114178->IReference_1_get_Value_m1946804912(&returnValue);
	____ireference_1_t2204114178->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Int64>::get_Value()
extern "C"  int64_t IReference_1_get_Value_m197260093 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2989735729* ____ireference_1_t2989735729 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2989735729::IID, reinterpret_cast<void**>(&____ireference_1_t2989735729));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int64_t returnValue = 0;
	hr = ____ireference_1_t2989735729->IReference_1_get_Value_m197260093(&returnValue);
	____ireference_1_t2989735729->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Object>::get_Value()
extern "C"  RuntimeObject * IReference_1_get_Value_m3229386239 (RuntimeObject* __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IReference_1_get_Value_m3229386239_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	IReference_1_t2333274589* ____ireference_1_t2333274589 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2333274589::IID, reinterpret_cast<void**>(&____ireference_1_t2333274589));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppIInspectable* returnValue = NULL;
	hr = ____ireference_1_t2333274589->IReference_1_get_Value_m3229386239(&returnValue);
	____ireference_1_t2333274589->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	RuntimeObject * _returnValue_unmarshaled = NULL;
	if (returnValue != NULL)
	{
		_returnValue_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(returnValue, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		_returnValue_unmarshaled = NULL;
	}

	// Marshaling cleanup of return value native representation
	if (returnValue != NULL)
	{
		(returnValue)->Release();
		returnValue = NULL;
	}

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Runtime.InteropServices.WindowsRuntime.EventRegistrationToken>::get_Value()
extern "C"  EventRegistrationToken_t318890788  IReference_1_get_Value_m777133319 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3867026509* ____ireference_1_t3867026509 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3867026509::IID, reinterpret_cast<void**>(&____ireference_1_t3867026509));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	EventRegistrationToken_t318890788  returnValue = {};
	hr = ____ireference_1_t3867026509->IReference_1_get_Value_m777133319(&returnValue);
	____ireference_1_t3867026509->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Single>::get_Value()
extern "C"  float IReference_1_get_Value_m1034221680 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t650435199* ____ireference_1_t650435199 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t650435199::IID, reinterpret_cast<void**>(&____ireference_1_t650435199));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	float returnValue = 0.0f;
	hr = ____ireference_1_t650435199->IReference_1_get_Value_m1034221680(&returnValue);
	____ireference_1_t650435199->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.String>::get_Value()
extern "C"  String_t* IReference_1_get_Value_m4216510932 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1100619114* ____ireference_1_t1100619114 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1100619114::IID, reinterpret_cast<void**>(&____ireference_1_t1100619114));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Il2CppHString returnValue = NULL;
	hr = ____ireference_1_t1100619114->IReference_1_get_Value_m4216510932(&returnValue);
	____ireference_1_t1100619114->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	String_t* _returnValue_unmarshaled = NULL;
	_returnValue_unmarshaled = il2cpp_codegen_marshal_hstring_result(returnValue);

	// Marshaling cleanup of return value native representation
	il2cpp_codegen_marshal_free_hstring(returnValue);
	returnValue = NULL;

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.TimeSpan>::get_Value()
extern "C"  TimeSpan_t881159249  IReference_1_get_Value_m2770668730 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t134327674* ____ireference_1_t134327674 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t134327674::IID, reinterpret_cast<void**>(&____ireference_1_t134327674));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	TimeSpan_t881159249  returnValue = {};
	hr = ____ireference_1_t134327674->IReference_1_get_Value_m2770668730(&returnValue);
	____ireference_1_t134327674->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.Type>::get_Value()
extern "C"  Type_t * IReference_1_get_Value_m2081172832 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.UInt16>::get_Value()
extern "C"  uint16_t IReference_1_get_Value_m1209658772 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1430893383* ____ireference_1_t1430893383 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1430893383::IID, reinterpret_cast<void**>(&____ireference_1_t1430893383));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint16_t returnValue = 0;
	hr = ____ireference_1_t1430893383->IReference_1_get_Value_m1209658772(&returnValue);
	____ireference_1_t1430893383->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.UInt32>::get_Value()
extern "C"  uint32_t IReference_1_get_Value_m1308423508 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1813230403* ____ireference_1_t1813230403 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1813230403::IID, reinterpret_cast<void**>(&____ireference_1_t1813230403));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ireference_1_t1813230403->IReference_1_get_Value_m1308423508(&returnValue);
	____ireference_1_t1813230403->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<System.UInt64>::get_Value()
extern "C"  uint64_t IReference_1_get_Value_m2294903021 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3387208517* ____ireference_1_t3387208517 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3387208517::IID, reinterpret_cast<void**>(&____ireference_1_t3387208517));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint64_t returnValue = 0;
	hr = ____ireference_1_t3387208517->IReference_1_get_Value_m2294903021(&returnValue);
	____ireference_1_t3387208517->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.AsyncStatus>::get_Value()
extern "C"  int32_t IReference_1_get_Value_m2017125470 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1403654299* ____ireference_1_t1403654299 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1403654299::IID, reinterpret_cast<void**>(&____ireference_1_t1403654299));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t1403654299->IReference_1_get_Value_m2017125470(&returnValue);
	____ireference_1_t1403654299->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.DateTime>::get_Value()
extern "C"  DateTime_t1679451545  IReference_1_get_Value_m1126360047 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t932619970* ____ireference_1_t932619970 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t932619970::IID, reinterpret_cast<void**>(&____ireference_1_t932619970));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	DateTime_t1679451545  returnValue = {};
	hr = ____ireference_1_t932619970->IReference_1_get_Value_m1126360047(&returnValue);
	____ireference_1_t932619970->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.EventRegistrationToken>::get_Value()
extern "C"  EventRegistrationToken_t3152277946  IReference_1_get_Value_m2795834790 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2405446371* ____ireference_1_t2405446371 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2405446371::IID, reinterpret_cast<void**>(&____ireference_1_t2405446371));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	EventRegistrationToken_t3152277946  returnValue = {};
	hr = ____ireference_1_t2405446371->IReference_1_get_Value_m2795834790(&returnValue);
	____ireference_1_t2405446371->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.FoundationContract>::get_Value()
extern "C"  FoundationContract_t3651383009  IReference_1_get_Value_m919830547 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2904551434* ____ireference_1_t2904551434 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2904551434::IID, reinterpret_cast<void**>(&____ireference_1_t2904551434));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	FoundationContract_t3651383009  returnValue = {};
	hr = ____ireference_1_t2904551434->IReference_1_get_Value_m919830547(&returnValue);
	____ireference_1_t2904551434->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.HResult>::get_Value()
extern "C"  HResult_t3073183193  IReference_1_get_Value_m3795436356 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2326351618* ____ireference_1_t2326351618 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2326351618::IID, reinterpret_cast<void**>(&____ireference_1_t2326351618));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	HResult_t3073183193  returnValue = {};
	hr = ____ireference_1_t2326351618->IReference_1_get_Value_m3795436356(&returnValue);
	____ireference_1_t2326351618->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.AttributeTargets>::get_Value()
extern "C"  uint32_t IReference_1_get_Value_m800375591 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1714021653* ____ireference_1_t1714021653 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1714021653::IID, reinterpret_cast<void**>(&____ireference_1_t1714021653));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ireference_1_t1714021653->IReference_1_get_Value_m800375591(&returnValue);
	____ireference_1_t1714021653->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.CompositionType>::get_Value()
extern "C"  int32_t IReference_1_get_Value_m56861080 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1873685880* ____ireference_1_t1873685880 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1873685880::IID, reinterpret_cast<void**>(&____ireference_1_t1873685880));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t1873685880->IReference_1_get_Value_m56861080(&returnValue);
	____ireference_1_t1873685880->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.DeprecationType>::get_Value()
extern "C"  int32_t IReference_1_get_Value_m2361503342 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3435406907* ____ireference_1_t3435406907 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3435406907::IID, reinterpret_cast<void**>(&____ireference_1_t3435406907));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t3435406907->IReference_1_get_Value_m2361503342(&returnValue);
	____ireference_1_t3435406907->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.MarshalingType>::get_Value()
extern "C"  int32_t IReference_1_get_Value_m4241848242 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2809364818* ____ireference_1_t2809364818 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2809364818::IID, reinterpret_cast<void**>(&____ireference_1_t2809364818));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t2809364818->IReference_1_get_Value_m4241848242(&returnValue);
	____ireference_1_t2809364818->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Metadata.ThreadingModel>::get_Value()
extern "C"  int32_t IReference_1_get_Value_m3959947048 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2091189898* ____ireference_1_t2091189898 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2091189898::IID, reinterpret_cast<void**>(&____ireference_1_t2091189898));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t2091189898->IReference_1_get_Value_m3959947048(&returnValue);
	____ireference_1_t2091189898->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Point>::get_Value()
extern "C"  Point_t4164953539  IReference_1_get_Value_m2248936515 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3418121964* ____ireference_1_t3418121964 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3418121964::IID, reinterpret_cast<void**>(&____ireference_1_t3418121964));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Point_t4164953539  returnValue = {};
	hr = ____ireference_1_t3418121964->IReference_1_get_Value_m2248936515(&returnValue);
	____ireference_1_t3418121964->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Point>::get_Value()
extern "C"  Point_t4164953540  IReference_1_get_Value_m2248936516 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3418121965* ____ireference_1_t3418121965 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3418121965::IID, reinterpret_cast<void**>(&____ireference_1_t3418121965));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Point_t4164953540  returnValue = {};
	hr = ____ireference_1_t3418121965->IReference_1_get_Value_m2248936516(&returnValue);
	____ireference_1_t3418121965->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.PropertyType>::get_Value()
extern "C"  int32_t IReference_1_get_Value_m4223149003 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2284596779* ____ireference_1_t2284596779 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2284596779::IID, reinterpret_cast<void**>(&____ireference_1_t2284596779));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t2284596779->IReference_1_get_Value_m4223149003(&returnValue);
	____ireference_1_t2284596779->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Rect>::get_Value()
extern "C"  Rect_t2695113487  IReference_1_get_Value_m2582268702 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1948281912* ____ireference_1_t1948281912 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1948281912::IID, reinterpret_cast<void**>(&____ireference_1_t1948281912));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Rect_t2695113487  returnValue = {};
	hr = ____ireference_1_t1948281912->IReference_1_get_Value_m2582268702(&returnValue);
	____ireference_1_t1948281912->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Rect>::get_Value()
extern "C"  Rect_t2695113488  IReference_1_get_Value_m2582268703 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1948281913* ____ireference_1_t1948281913 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1948281913::IID, reinterpret_cast<void**>(&____ireference_1_t1948281913));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Rect_t2695113488  returnValue = {};
	hr = ____ireference_1_t1948281913->IReference_1_get_Value_m2582268703(&returnValue);
	____ireference_1_t1948281913->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Size>::get_Value()
extern "C"  Size_t550917638  IReference_1_get_Value_m3618386193 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t4099053359* ____ireference_1_t4099053359 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t4099053359::IID, reinterpret_cast<void**>(&____ireference_1_t4099053359));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Size_t550917638  returnValue = {};
	hr = ____ireference_1_t4099053359->IReference_1_get_Value_m3618386193(&returnValue);
	____ireference_1_t4099053359->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.Size>::get_Value()
extern "C"  Size_t550917639  IReference_1_get_Value_m3618386194 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t4099053360* ____ireference_1_t4099053360 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t4099053360::IID, reinterpret_cast<void**>(&____ireference_1_t4099053360));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	Size_t550917639  returnValue = {};
	hr = ____ireference_1_t4099053360->IReference_1_get_Value_m3618386194(&returnValue);
	____ireference_1_t4099053360->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.TimeSpan>::get_Value()
extern "C"  TimeSpan_t1755640982  IReference_1_get_Value_m3415674831 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1008809407* ____ireference_1_t1008809407 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1008809407::IID, reinterpret_cast<void**>(&____ireference_1_t1008809407));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	TimeSpan_t1755640982  returnValue = {};
	hr = ____ireference_1_t1008809407->IReference_1_get_Value_m3415674831(&returnValue);
	____ireference_1_t1008809407->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Foundation.UniversalApiContract>::get_Value()
extern "C"  UniversalApiContract_t3367004861  IReference_1_get_Value_m2468794183 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2620173286* ____ireference_1_t2620173286 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2620173286::IID, reinterpret_cast<void**>(&____ireference_1_t2620173286));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	UniversalApiContract_t3367004861  returnValue = {};
	hr = ____ireference_1_t2620173286->IReference_1_get_Value_m2468794183(&returnValue);
	____ireference_1_t2620173286->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Networking.HostNameType>::get_Value()
extern "C"  int32_t IReference_1_get_Value_m1424367424 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t3423936504* ____ireference_1_t3423936504 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3423936504::IID, reinterpret_cast<void**>(&____ireference_1_t3423936504));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t3423936504->IReference_1_get_Value_m1424367424(&returnValue);
	____ireference_1_t3423936504->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Storage.CreationCollisionOption>::get_Value()
extern "C"  int32_t IReference_1_get_Value_m2204867723 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1256324868* ____ireference_1_t1256324868 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1256324868::IID, reinterpret_cast<void**>(&____ireference_1_t1256324868));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t1256324868->IReference_1_get_Value_m2204867723(&returnValue);
	____ireference_1_t1256324868->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Storage.FileAccessMode>::get_Value()
extern "C"  int32_t IReference_1_get_Value_m1269367142 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1870003812* ____ireference_1_t1870003812 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1870003812::IID, reinterpret_cast<void**>(&____ireference_1_t1870003812));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t1870003812->IReference_1_get_Value_m1269367142(&returnValue);
	____ireference_1_t1870003812->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.Storage.Streams.InputStreamOptions>::get_Value()
extern "C"  uint32_t IReference_1_get_Value_m2331768150 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2154907404* ____ireference_1_t2154907404 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2154907404::IID, reinterpret_cast<void**>(&____ireference_1_t2154907404));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	uint32_t returnValue = 0;
	hr = ____ireference_1_t2154907404->IReference_1_get_Value_m2331768150(&returnValue);
	____ireference_1_t2154907404->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.UI.Core.CoreDispatcherPriority>::get_Value()
extern "C"  int32_t IReference_1_get_Value_m199028236 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t2885212177* ____ireference_1_t2885212177 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t2885212177::IID, reinterpret_cast<void**>(&____ireference_1_t2885212177));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t2885212177->IReference_1_get_Value_m199028236(&returnValue);
	____ireference_1_t2885212177->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeKind>::get_Value()
extern "C"  int32_t IReference_1_get_Value_m2990591067 (RuntimeObject* __this, const RuntimeMethod* method)
{
	IReference_1_t1526750185* ____ireference_1_t1526750185 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t1526750185::IID, reinterpret_cast<void**>(&____ireference_1_t1526750185));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	int32_t returnValue = 0;
	hr = ____ireference_1_t1526750185->IReference_1_get_Value_m2990591067(&returnValue);
	____ireference_1_t1526750185->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	return returnValue;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// T Windows.Foundation.IReference`1<Windows.UI.Xaml.Interop.TypeName>::get_Value()
extern "C"  TypeName_t4208425108  IReference_1_get_Value_m3274607421 (RuntimeObject* __this, const RuntimeMethod* method)
{


	IReference_1_t3461593533* ____ireference_1_t3461593533 = NULL;
	il2cpp_hresult_t hr = static_cast<Il2CppComObject *>(__this)->identity->QueryInterface(IReference_1_t3461593533::IID, reinterpret_cast<void**>(&____ireference_1_t3461593533));
	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Native function invocation
	TypeName_t4208425108_marshaled_windows_runtime returnValue = {};
	hr = ____ireference_1_t3461593533->IReference_1_get_Value_m3274607421(&returnValue);
	____ireference_1_t3461593533->Release();

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling of return value back from native representation
	TypeName_t4208425108  _returnValue_unmarshaled;
	memset(&_returnValue_unmarshaled, 0, sizeof(_returnValue_unmarshaled));
	TypeName_t4208425108_marshal_windows_runtime_back(returnValue, _returnValue_unmarshaled);

	// Marshaling cleanup of return value native representation
	TypeName_t4208425108_marshal_windows_runtime_cleanup(returnValue);

	return _returnValue_unmarshaled;
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>::.ctor(System.Object,System.IntPtr)
extern "C"  void TypedEventHandler_2__ctor_m202482739_gshared (TypedEventHandler_2_t2186740966 * __this, RuntimeObject * ___object0, intptr_t ___method1, const RuntimeMethod* method)
{
	__this->set_method_ptr_0(il2cpp_codegen_get_method_pointer((RuntimeMethod*)___method1));
	__this->set_method_3(___method1);
	__this->set_m_target_2(___object0);
}
// System.Void Windows.Foundation.TypedEventHandler`2<System.Object,System.Object>::Invoke(TSender,TResult)
extern "C"  void TypedEventHandler_2_Invoke_m3314316659_gshared (TypedEventHandler_2_t2186740966 * __this, RuntimeObject * ___sender0, RuntimeObject * ___args1, const RuntimeMethod* method)
{
	il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found((RuntimeMethod*)(__this->get_method_3()));
	DelegateU5BU5D_t1703627840* delegatesToInvoke = __this->get_delegates_11();
	if (delegatesToInvoke != NULL)
	{
		il2cpp_array_size_t length = delegatesToInvoke->max_length;
		for (il2cpp_array_size_t i = 0; i < length; i++)
		{
			Delegate_t1188392813* currentDelegate = (delegatesToInvoke)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i));
			Il2CppMethodPointer targetMethodPointer = currentDelegate->get_method_ptr_0();
			RuntimeMethod* targetMethod = (RuntimeMethod*)(currentDelegate->get_method_3());
			RuntimeObject* targetThis = currentDelegate->get_m_target_2();
			il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
			bool ___methodIsStatic = MethodIsStatic(targetMethod);
			if (___methodIsStatic)
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// open
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___args1, targetMethod);
					}
				}
				else
				{
					// closed
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___args1, targetMethod);
					}
				}
			}
			else
			{
				if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
				{
					// closed
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
							else
								GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
							else
								VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
					}
				}
				else
				{
					// open
					if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
					{
						if (il2cpp_codegen_method_is_generic_instance(targetMethod))
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___sender0, ___args1);
							else
								GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___sender0, ___args1);
						}
						else
						{
							if (il2cpp_codegen_method_is_interface_method(targetMethod))
								InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___args1);
							else
								VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___args1);
						}
					}
					else
					{
						typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
						((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
					}
				}
			}
		}
	}
	else
	{
		Il2CppMethodPointer targetMethodPointer = __this->get_method_ptr_0();
		RuntimeMethod* targetMethod = (RuntimeMethod*)(__this->get_method_3());
		RuntimeObject* targetThis = __this->get_m_target_2();
		il2cpp_codegen_raise_execution_engine_exception_if_method_is_not_found(targetMethod);
		bool ___methodIsStatic = MethodIsStatic(targetMethod);
		if (___methodIsStatic)
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// open
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, ___sender0, ___args1, targetMethod);
				}
			}
			else
			{
				// closed
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(NULL, targetThis, ___sender0, ___args1, targetMethod);
				}
			}
		}
		else
		{
			if (il2cpp_codegen_method_parameter_count(targetMethod) == 2)
			{
				// closed
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
						else
							GenericVirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(targetMethod, targetThis, ___sender0, ___args1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), targetThis, ___sender0, ___args1);
						else
							VirtActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), targetThis, ___sender0, ___args1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (void*, RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(targetThis, ___sender0, ___args1, targetMethod);
				}
			}
			else
			{
				// open
				if (il2cpp_codegen_method_is_virtual(targetMethod) && !il2cpp_codegen_object_is_of_sealed_type(targetThis))
				{
					if (il2cpp_codegen_method_is_generic_instance(targetMethod))
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							GenericInterfaceActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___sender0, ___args1);
						else
							GenericVirtActionInvoker1< RuntimeObject * >::Invoke(targetMethod, ___sender0, ___args1);
					}
					else
					{
						if (il2cpp_codegen_method_is_interface_method(targetMethod))
							InterfaceActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), il2cpp_codegen_method_get_declaring_type(targetMethod), ___sender0, ___args1);
						else
							VirtActionInvoker1< RuntimeObject * >::Invoke(il2cpp_codegen_method_get_slot(targetMethod), ___sender0, ___args1);
					}
				}
				else
				{
					typedef void (*FunctionPointerType) (RuntimeObject *, RuntimeObject *, const RuntimeMethod*);
					((FunctionPointerType)targetMethodPointer)(___sender0, ___args1, targetMethod);
				}
			}
		}
	}
}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
