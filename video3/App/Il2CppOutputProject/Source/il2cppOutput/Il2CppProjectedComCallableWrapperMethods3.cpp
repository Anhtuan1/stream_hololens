#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "il2cpp-class-internals.h"
#include "codegen/il2cpp-codegen.h"
#include "vm/NonCachedCCWBase.h"
#include "il2cpp-object-internals.h"

template <typename R>
struct VirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R, typename T1>
struct InterfaceFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
	}
};
template <typename R>
struct InterfaceFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
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
struct InterfaceActionInvoker0
{
	typedef void (*Action)(void*, const RuntimeMethod*);

	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		((Action)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1, typename T2>
struct InterfaceFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct ReadOnlyCollection_1_t3458027106;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct IList_1_t4060770602;
// System.InvalidOperationException
struct InvalidOperationException_t56020091;
// System.String
struct String_t;
// System.Exception
struct Exception_t;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_t777629997;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>
struct ReadOnlyCollection_1_t3669654984;
// System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>
struct IList_1_t4272398480;
// System.Collections.Generic.KeyNotFoundException
struct KeyNotFoundException_t2292407383;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Object>
struct ConstantSplittableMap_2_t2396221982;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Object>
struct IReadOnlyDictionary_2_t3281331859;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Object>
struct ConstantSplittableMap_2_t3958371967;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>
struct IReadOnlyDictionary_2_t548514548;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>
struct ReadOnlyDictionary_2_t3426852175;
// System.Collections.Generic.IDictionary`2<System.Object,System.Object>
struct IDictionary_2_t2891363839;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Guid,System.Type>
struct ReadOnlyDictionary_2_t532302020;
// System.Collections.Generic.IDictionary`2<System.Guid,System.Type>
struct IDictionary_2_t4291780980;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Guid,System.Object>
struct ReadOnlyDictionary_2_t1128463424;
// System.Collections.Generic.IDictionary`2<System.Guid,System.Object>
struct IDictionary_2_t592975088;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Type>
struct ConstantSplittableMap_2_t1063821812;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Guid,System.Type>
struct IReadOnlyDictionary_2_t1948931689;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Object>
struct ConstantSplittableMap_2_t1659983216;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Guid,System.Object>
struct IReadOnlyDictionary_2_t2545093093;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Object>
struct ReadOnlyDictionary_2_t968159222;
// System.Collections.Generic.IDictionary`2<System.Int32,System.Object>
struct IDictionary_2_t432670886;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Object>
struct ConstantSplittableMap_2_t1499679014;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Object>
struct IReadOnlyDictionary_2_t2384788891;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.String>
struct ReadOnlyDictionary_2_t632046715;
// System.Collections.Generic.IDictionary`2<System.String,System.String>
struct IDictionary_2_t96558379;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.String>
struct ConstantSplittableMap_2_t1163566507;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>
struct IReadOnlyDictionary_2_t2048676384;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Type>
struct ReadOnlyDictionary_2_t1268540786;
// System.Collections.Generic.IDictionary`2<System.String,System.Type>
struct IDictionary_2_t733052450;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Type>
struct ConstantSplittableMap_2_t1800060578;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Type>
struct IReadOnlyDictionary_2_t2685170455;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Int32>
struct ReadOnlyDictionary_2_t1735541779;
// System.Collections.Generic.IDictionary`2<System.String,System.Int32>
struct IDictionary_2_t1200053443;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Int32>
struct ReadOnlyDictionary_2_t3297691764;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int32>
struct IDictionary_2_t2762203428;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Int32>
struct ConstantSplittableMap_2_t2267061571;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Int32>
struct IReadOnlyDictionary_2_t3152171448;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int32>
struct ConstantSplittableMap_2_t3829211556;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Int32>
struct IReadOnlyDictionary_2_t419354137;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Boolean>
struct ReadOnlyDictionary_2_t3176851287;
// System.Collections.Generic.IDictionary`2<System.String,System.Boolean>
struct IDictionary_2_t2641362951;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Boolean>
struct ReadOnlyDictionary_2_t444033976;
// System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>
struct IDictionary_2_t4203512936;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Boolean>
struct ConstantSplittableMap_2_t3708371079;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Boolean>
struct IReadOnlyDictionary_2_t298513660;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Boolean>
struct ConstantSplittableMap_2_t975553768;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Boolean>
struct IReadOnlyDictionary_2_t1860663645;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ReadOnlyDictionary_2_t2876963330;
// System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IDictionary_2_t2341474994;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ConstantSplittableMap_2_t3408483122;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct IReadOnlyDictionary_2_t4293592999;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Int64>
struct ReadOnlyDictionary_2_t2521163330;
// System.Collections.Generic.IDictionary`2<System.String,System.Int64>
struct IDictionary_2_t1985674994;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Int64>
struct ReadOnlyDictionary_2_t4083313315;
// System.Collections.Generic.IDictionary`2<System.Object,System.Int64>
struct IDictionary_2_t3547824979;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Int64>
struct ConstantSplittableMap_2_t3052683122;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Int64>
struct IReadOnlyDictionary_2_t3937792999;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int64>
struct ConstantSplittableMap_2_t319865811;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Int64>
struct IReadOnlyDictionary_2_t1204975688;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Type,System.Type>
struct ReadOnlyDictionary_2_t3927631551;
// System.Collections.Generic.IDictionary`2<System.Type,System.Type>
struct IDictionary_2_t3392143215;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Type,System.Type>
struct ConstantSplittableMap_2_t164184047;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Type,System.Type>
struct IReadOnlyDictionary_2_t1049293924;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int16,System.Object>
struct ReadOnlyDictionary_2_t4269753028;
// System.Collections.Generic.IDictionary`2<System.Int16,System.Object>
struct IDictionary_2_t3734264692;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int16,System.Object>
struct ConstantSplittableMap_2_t506305524;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int16,System.Object>
struct IReadOnlyDictionary_2_t1391415401;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Char>
struct ReadOnlyDictionary_2_t2419056496;
// System.Collections.Generic.IDictionary`2<System.String,System.Char>
struct IDictionary_2_t1883568160;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Char>
struct ReadOnlyDictionary_2_t3981206481;
// System.Collections.Generic.IDictionary`2<System.Object,System.Char>
struct IDictionary_2_t3445718145;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Char>
struct ConstantSplittableMap_2_t2950576288;
// System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Char>
struct IReadOnlyDictionary_2_t3835686165;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Char>
struct ConstantSplittableMap_2_t217758977;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Char>
struct IReadOnlyDictionary_2_t1102868854;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int64,System.Object>
struct ReadOnlyDictionary_2_t3142085675;
// System.Collections.Generic.IDictionary`2<System.Int64,System.Object>
struct IDictionary_2_t2606597339;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int64,System.Object>
struct ConstantSplittableMap_2_t3673605467;
// System.Collections.Generic.IReadOnlyDictionary`2<System.Int64,System.Object>
struct IReadOnlyDictionary_2_t263748048;
// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Object>
struct ReadOnlyDictionary_2_t3353713553;
// System.Collections.Generic.IDictionary`2<System.UInt32,System.Object>
struct IDictionary_2_t2818225217;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Object>
struct ConstantSplittableMap_2_t3885233345;
// System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.Object>
struct IReadOnlyDictionary_2_t475375926;
// System.Type
struct Type_t;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyCollection_t3726722309;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct ValueCollection_t3412900636;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.UInt32,System.Object>
struct KeyValuePairComparer_t85607529;
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2544954260;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Int16,System.Object>
struct KeyValuePairComparer_t1001647004;
// System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>[]
struct KeyValuePair_2U5BU5D_t1690253877;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct KeyValuePairComparer_t3903824602;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>[]
struct KeyValuePair_2U5BU5D_t1687566399;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.UInt32,System.Object>
struct KeyCollection_t4203472532;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.UInt32,System.Object>
struct ValueCollection_t3889650859;
// System.Collections.IDictionary
struct IDictionary_t1363984059;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_t2481557153;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t1169129676;
// System.IntPtr[]
struct IntPtrU5BU5D_t4013366056;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Type,System.Type>
struct KeyValuePairComparer_t659525527;
// System.Collections.Generic.KeyValuePair`2<System.Type,System.Type>[]
struct KeyValuePair_2U5BU5D_t130504686;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Type,System.Type>
struct KeyCollection_t482423234;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Type,System.Type>
struct ValueCollection_t168601561;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Object,System.Char>
struct KeyCollection_t535998164;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Object,System.Char>
struct ValueCollection_t222176491;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Int16,System.Object>
struct KeyCollection_t824544711;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Int16,System.Object>
struct ValueCollection_t510723038;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,System.Char>
struct KeyCollection_t3268815475;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,System.Char>
struct ValueCollection_t2954993802;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.String,System.Char>
struct KeyValuePairComparer_t3445917768;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Char>[]
struct KeyValuePair_2U5BU5D_t2582780249;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Object,System.Char>
struct KeyValuePairComparer_t713100457;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>[]
struct KeyValuePair_2U5BU5D_t802601556;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.String,System.Int64>
struct KeyValuePairComparer_t3548024602;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>[]
struct KeyValuePair_2U5BU5D_t1613681407;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Int64,System.Object>
struct KeyValuePairComparer_t4168946947;
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>[]
struct KeyValuePair_2U5BU5D_t3818836818;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,System.Int64>
struct KeyCollection_t3370922309;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,System.Int64>
struct ValueCollection_t3057100636;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Object,System.Int64>
struct KeyValuePairComparer_t815207291;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>[]
struct KeyValuePair_2U5BU5D_t4128470010;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Object,System.Int64>
struct KeyCollection_t638104998;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Object,System.Int64>
struct ValueCollection_t324283325;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Int64,System.Object>
struct KeyCollection_t3991844654;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Int64,System.Object>
struct ValueCollection_t3678022981;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.String,System.Object>
struct KeyValuePairComparer_t2891563462;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>[]
struct KeyValuePair_2U5BU5D_t1898447907;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.String,System.String>
struct KeyValuePairComparer_t1658907987;
// System.Collections.Generic.KeyValuePair`2<System.String,System.String>[]
struct KeyValuePair_2U5BU5D_t336297922;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,System.String>
struct KeyCollection_t1481805694;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,System.String>
struct ValueCollection_t1167984021;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.String,System.Type>
struct KeyValuePairComparer_t2295402058;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Type>[]
struct KeyValuePair_2U5BU5D_t2995388687;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,System.Type>
struct KeyCollection_t2118299765;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,System.Type>
struct ValueCollection_t1804478092;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Int32,System.Object>
struct KeyValuePairComparer_t1995020494;
// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2652375035;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Guid,System.Object>
struct KeyValuePairComparer_t2155324696;
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>[]
struct KeyValuePair_2U5BU5D_t3332857673;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Guid,System.Type>
struct KeyCollection_t1382060999;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Guid,System.Type>
struct ValueCollection_t1068239326;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Guid,System.Type>
struct KeyValuePairComparer_t1559163292;
// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Type>[]
struct KeyValuePair_2U5BU5D_t134831157;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Int32,System.Object>
struct KeyCollection_t1817918201;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Int32,System.Object>
struct ValueCollection_t1504096528;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Object,System.Object>
struct KeyCollection_t4276611154;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Object,System.Object>
struct ValueCollection_t3962789481;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Object,System.Object>
struct KeyValuePairComparer_t158746151;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>[]
struct KeyValuePair_2U5BU5D_t118269214;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,System.Int32>
struct KeyCollection_t2585300758;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,System.Int32>
struct ValueCollection_t2271479085;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Guid,System.Object>
struct KeyCollection_t1978222403;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Guid,System.Object>
struct ValueCollection_t1664400730;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.String,System.Boolean>
struct KeyValuePairComparer_t4203712559;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t1951926774;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Object,System.Boolean>
struct KeyValuePairComparer_t1470895248;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>[]
struct KeyValuePair_2U5BU5D_t171748081;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Object,System.Boolean>
struct KeyCollection_t1293792955;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Object,System.Boolean>
struct ValueCollection_t979971282;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.Object,System.Int32>
struct KeyCollection_t4147450743;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.Object,System.Int32>
struct ValueCollection_t3833629070;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<System.String,System.Boolean>
struct KeyCollection_t4026610266;
// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<System.String,System.Boolean>
struct ValueCollection_t3712788593;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.Object,System.Int32>
struct KeyValuePairComparer_t29585740;
// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>[]
struct KeyValuePair_2U5BU5D_t1954543557;
// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<System.String,System.Int32>
struct KeyValuePairComparer_t2762403051;
// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>[]
struct KeyValuePair_2U5BU5D_t3734722250;
// System.Security.Cryptography.RandomNumberGenerator
struct RandomNumberGenerator_t386037858;

extern RuntimeClass* IList_1_t4060770602_il2cpp_TypeInfo_var;
extern RuntimeClass* ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var;
extern RuntimeClass* String_t_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t2245450819_il2cpp_TypeInfo_var;
extern const uint32_t IVector_1_GetAt_m3124897496_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ICollection_1_t778635757_il2cpp_TypeInfo_var;
extern const uint32_t IVector_1_get_Size_m874801668_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyList_1_t2809873725_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyCollection_1_t3458027106_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyCollection_1__ctor_m1966006039_RuntimeMethod_var;
extern const uint32_t IVector_1_GetView_m4097812691_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* Il2CppComObject_il2cpp_TypeInfo_var;
extern const uint32_t IVector_1_IndexOf_m1464477667_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_SetAt_m603593208_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_InsertAt_m403823273_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_RemoveAt_m4103204621_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_Append_m2914172346_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* InvalidOperationException_t56020091_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral1050527596;
extern const uint32_t IVector_1_RemoveAtEnd_m2473712616_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_Clear_m1678107825_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern String_t* _stringLiteral797640427;
extern const uint32_t IVector_1_GetMany_m257510634_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2U5BU5D_t3818836818_il2cpp_TypeInfo_var;
extern const uint32_t IVector_1_ReplaceAll_m618106076_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IEnumerator_1_t2678021287_il2cpp_TypeInfo_var;
extern const uint32_t IIterator_1_t119594292_Adapter_GetCurrent_MetadataUsageId;
extern RuntimeClass* IEnumerator_t1853284238_il2cpp_TypeInfo_var;
extern const uint32_t IIterator_1_t119594292_Adapter_MoveNext_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t1225303708_il2cpp_TypeInfo_var;
extern const uint32_t IIterable_1_First_m1699614814_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_GetAt_m3698596162_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t2248566756_il2cpp_TypeInfo_var;
extern const uint32_t IVectorView_1_get_Size_m3315242568_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_IndexOf_m195073214_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m1367398776_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IList_1_t4272398480_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var;
extern const uint32_t IVector_1_GetAt_m1090173897_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ICollection_1_t990263635_il2cpp_TypeInfo_var;
extern const uint32_t IVector_1_get_Size_m3383550533_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyList_1_t3021501603_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyCollection_1_t3669654984_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyCollection_1__ctor_m254165444_RuntimeMethod_var;
extern const uint32_t IVector_1_GetView_m1790084502_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_IndexOf_m1347610173_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_SetAt_m2438018550_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_InsertAt_m3473244934_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_RemoveAt_m3651251296_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_Append_m4008576553_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_RemoveAtEnd_m3823104315_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_Clear_m121801865_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVector_1_GetMany_m1085726944_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2U5BU5D_t2544954260_il2cpp_TypeInfo_var;
extern const uint32_t IVector_1_ReplaceAll_m286104263_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IEnumerator_1_t2889649165_il2cpp_TypeInfo_var;
extern const uint32_t IIterator_1_t331222170_Adapter_GetCurrent_MetadataUsageId;
extern const uint32_t IIterator_1_t331222170_Adapter_MoveNext_MetadataUsageId;
extern RuntimeClass* IEnumerable_1_t1436931586_il2cpp_TypeInfo_var;
extern const uint32_t IIterable_1_First_m817385671_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_GetAt_m3476973415_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t2460194634_il2cpp_TypeInfo_var;
extern const uint32_t IVectorView_1_get_Size_m1565795300_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_IndexOf_m836020600_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IVectorView_1_GetMany_m2658557676_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t3281331859_il2cpp_TypeInfo_var;
extern RuntimeClass* KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var;
extern String_t* _stringLiteral4076297504;
extern const uint32_t IMapView_2_Lookup_m2993729319_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t971183271_il2cpp_TypeInfo_var;
extern const uint32_t IMapView_2_get_Size_m2008534305_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m3205845981_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t2396221982_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m245620443_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m1997543296_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m1626200424_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t2530217319_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m4184817181_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m2750152149_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1132502692_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Value_m2672088708_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t2891363839_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_Lookup_m1731177585_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ICollection_1_t1063402257_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_get_Size_m3704454125_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m2433635512_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t548514548_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t3426852175_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m3044404427_RuntimeMethod_var;
extern const uint32_t IMap_2_GetView_m2883253156_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m335884934_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m3274472395_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m112521936_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m354916185_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t2533333256_il2cpp_TypeInfo_var;
extern const uint32_t IMapView_2_get_Size_m1307357424_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m1226002878_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t3958371967_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m4259417880_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m2998943571_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m3017881906_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t968067334_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m2973773633_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m3523589551_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m2151159939_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Value_m3279123715_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ICollection_1_t2463819398_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_get_Size_m4209346384_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t4291780980_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_HasKey_m2767397819_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t1948931689_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t532302020_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m3720374228_RuntimeMethod_var;
extern const uint32_t IMap_2_GetView_m3956818822_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m441912298_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m1518512299_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t3933750397_il2cpp_TypeInfo_var;
extern const uint32_t IMapView_2_get_Size_m2349127300_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m1382000797_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t1063821812_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m4057205974_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m4122198191_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m2592840147_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t231828568_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m4294704491_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m3324945768_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m2666064688_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Value_m52124236_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t592975088_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_Lookup_m3068028334_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ICollection_1_t3059980802_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_get_Size_m1704379977_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m2236943020_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t2545093093_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t1128463424_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m2119190349_RuntimeMethod_var;
extern const uint32_t IMap_2_GetView_m3237694789_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m1575381716_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m3289693839_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m2519350850_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m3331997343_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t234944505_il2cpp_TypeInfo_var;
extern const uint32_t IMapView_2_get_Size_m3858358881_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m3111850129_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t1659983216_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m2413510944_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m3822801152_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m3394162196_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t3930634460_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1325471274_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m1247672299_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t432670886_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_Lookup_m2451726409_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ICollection_1_t2899676600_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_get_Size_m2259249674_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m4208301656_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t2384788891_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t968159222_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m3621257446_RuntimeMethod_var;
extern const uint32_t IMap_2_GetView_m3361060608_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m490092833_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m1067146362_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m3558300509_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m3742065343_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t74640303_il2cpp_TypeInfo_var;
extern const uint32_t IMapView_2_get_Size_m1359240774_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m973232472_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t1499679014_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m3772921655_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m2176297438_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m842968636_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t71524366_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1839753989_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m2186241555_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m3495598764_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Value_m210688108_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t96558379_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_Lookup_m3419416962_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ICollection_1_t2563564093_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_get_Size_m3747204495_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m1327307936_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t2048676384_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t632046715_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m461640262_RuntimeMethod_var;
extern const uint32_t IMap_2_GetView_m1648969448_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m3135696435_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m3800098948_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m3867596926_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m1783676987_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t4033495092_il2cpp_TypeInfo_var;
extern const uint32_t IMapView_2_get_Size_m3316105878_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m1003035185_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t1163566507_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m2462269511_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m890587491_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m978754527_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t4030379155_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m865914345_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m3013852749_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1897740815_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Value_m2003745203_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ICollection_1_t3200058164_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_get_Size_m732615070_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t733052450_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_HasKey_m3062070663_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t2685170455_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t1268540786_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m515128087_RuntimeMethod_var;
extern const uint32_t IMap_2_GetView_m160940274_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m3871291260_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m2457687352_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t375021867_il2cpp_TypeInfo_var;
extern const uint32_t IMapView_2_get_Size_m3065552575_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m1694676420_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t1800060578_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m137017575_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m3390560063_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m3605358933_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t371905930_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m2656778124_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m2199926285_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t1200053443_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_Lookup_m2400282917_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ICollection_1_t3667059157_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_get_Size_m3320579976_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m3055190088_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t3152171448_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t1735541779_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m2131144993_RuntimeMethod_var;
extern const uint32_t IMap_2_GetView_m3605659067_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m48626576_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m2564332326_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m1499398795_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m1298530599_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t842022860_il2cpp_TypeInfo_var;
extern const uint32_t IMapView_2_get_Size_m546192505_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m3322124696_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t2267061571_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m2347350877_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m3256786513_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m96786832_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t2401056908_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1055012466_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m1066766749_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1308554439_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Value_m269040038_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t2762203428_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_Lookup_m4271171535_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ICollection_1_t934241846_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_get_Size_m672085459_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m377757278_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t419354137_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t3297691764_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m2579745724_RuntimeMethod_var;
extern const uint32_t IMap_2_GetView_m2992416671_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m3186075525_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m1560976792_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m1661948797_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m877167602_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t2404172845_il2cpp_TypeInfo_var;
extern const uint32_t IMapView_2_get_Size_m3871500701_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m1872447125_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t3829211556_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m2528261516_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m1776544164_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m4061037733_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t838906923_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m3340370308_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m599934735_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m692097207_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Value_m2337749369_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t2641362951_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_Lookup_m356884552_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ICollection_1_t813401369_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_get_Size_m2116548387_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m650644540_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t298513660_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t3176851287_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m1629022071_RuntimeMethod_var;
extern const uint32_t IMap_2_GetView_m1023461368_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m2357915180_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m2388588850_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m3448822397_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m818349798_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t2283332368_il2cpp_TypeInfo_var;
extern const uint32_t IMapView_2_get_Size_m1396842905_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m2200864154_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t3708371079_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m1702516145_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m3288519233_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m22494317_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t3842366416_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m2106922848_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m1916408783_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1669764045_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Value_m3611222262_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t4203512936_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_Lookup_m2791672174_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ICollection_1_t2375551354_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_get_Size_m521129328_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m3863327211_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t1860663645_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t444033976_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m4089905679_RuntimeMethod_var;
extern const uint32_t IMap_2_GetView_m1166070801_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m3431746527_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m1939883922_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m403209908_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m4048973909_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t3845482353_il2cpp_TypeInfo_var;
extern const uint32_t IMapView_2_get_Size_m516432122_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m1413942596_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t975553768_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m1584615223_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m3318364013_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m2647546983_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t2280216431_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1816659530_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m2534079307_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m608750205_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Value_m2353902038_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t4237331251_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m2635782095_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m2344176952_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1804680087_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Value_m1590219272_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t2341474994_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_Lookup_m1090581803_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ICollection_1_t513513412_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_get_Size_m2333900912_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m2357583497_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t4293592999_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t2876963330_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m1424822176_RuntimeMethod_var;
extern const uint32_t IMap_2_GetView_m1550708224_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m4126452847_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m1838696614_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m3139968190_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m620925806_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t1983444411_il2cpp_TypeInfo_var;
extern const uint32_t IMapView_2_get_Size_m428097518_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m2416144552_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t3408483122_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m2597123826_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m524797523_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m1339964017_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t1980328474_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m2436713626_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m2178856022_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m2095377930_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Value_m2884691945_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t1985674994_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_Lookup_m1932774643_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ICollection_1_t157713412_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_get_Size_m3030780019_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m551338849_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t3937792999_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t2521163330_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m480558215_RuntimeMethod_var;
extern const uint32_t IMap_2_GetView_m296988736_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m1829518757_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m3915764709_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m487165348_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m4051343361_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t1627644411_il2cpp_TypeInfo_var;
extern const uint32_t IMapView_2_get_Size_m1325984944_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m3018735158_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t3052683122_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m1114701518_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m2922592133_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m3264766995_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t3186678459_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1351363758_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m676269419_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m3718382948_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Value_m4114789852_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t3547824979_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_Lookup_m2749605711_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ICollection_1_t1719863397_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_get_Size_m4220192820_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m1523217296_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t1204975688_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t4083313315_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m1275927908_RuntimeMethod_var;
extern const uint32_t IMap_2_GetView_m2101267589_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m89651347_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m286177173_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m3252333872_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m2925402872_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t3189794396_il2cpp_TypeInfo_var;
extern const uint32_t IMapView_2_get_Size_m152831722_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m2105716713_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t319865811_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m46244548_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m564838166_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m2758594792_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t1624528474_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m4089679062_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m1283560117_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m3349579743_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Value_m3012986135_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ICollection_1_t1564181633_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_get_Size_m1325865584_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t1049293924_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t3927631551_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m1324428410_RuntimeMethod_var;
extern const uint32_t IMap_2_GetView_m3149330040_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m2235974657_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t3034112632_il2cpp_TypeInfo_var;
extern const uint32_t IMapView_2_get_Size_m2678681203_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t164184047_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m2711158636_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m829232429_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m964547936_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t3734264692_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_Lookup_m1377426718_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ICollection_1_t1906303110_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_get_Size_m2007020954_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m1075586825_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t1391415401_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t4269753028_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m119515751_RuntimeMethod_var;
extern const uint32_t IMap_2_GetView_m804961895_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m4079130092_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m3581067814_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m869510232_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m2413624234_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t3376234109_il2cpp_TypeInfo_var;
extern const uint32_t IMapView_2_get_Size_m902359432_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m376069899_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t506305524_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m3254295153_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m1257898454_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m1121423689_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t3373118172_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m3277879993_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m2077915680_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1448500413_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Value_m693116984_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t1883568160_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_Lookup_m1226578202_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ICollection_1_t55606578_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_get_Size_m953287421_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m3168229620_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t3835686165_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t2419056496_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m2491777098_RuntimeMethod_var;
extern const uint32_t IMap_2_GetView_m3012284534_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m2426351234_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m3659944873_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m3161566146_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m399377357_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t1525537577_il2cpp_TypeInfo_var;
extern const uint32_t IMapView_2_get_Size_m3246206294_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m2413362274_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t2950576288_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m872198931_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m52071581_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m2948761159_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t3084571625_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m347998276_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m1046287378_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m3672048595_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Value_m547158090_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t3445718145_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_Lookup_m1957260505_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ICollection_1_t1617756563_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_get_Size_m4154899271_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m3146129820_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t1102868854_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t3981206481_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m163702474_RuntimeMethod_var;
extern const uint32_t IMap_2_GetView_m402110412_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m2496848365_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m175080439_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m1829911841_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m1265563177_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyCollection_1_t3087687562_il2cpp_TypeInfo_var;
extern const uint32_t IMapView_2_get_Size_m1806056645_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m1994695022_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t217758977_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m982374164_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m769420026_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m551954581_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* KeyValuePair_2_t1522421640_il2cpp_TypeInfo_var;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1256714359_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m980420821_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m4279551231_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Value_m1390024704_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t2606597339_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_Lookup_m367753107_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m137360363_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m663731653_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t263748048_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t3142085675_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m2780183003_RuntimeMethod_var;
extern const uint32_t IMap_2_GetView_m1077656533_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m2086881606_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m2064551222_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m156915013_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m2833276555_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m2657859418_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m1129223030_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t3673605467_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m3856857150_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m882408943_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m2875932391_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m635992374_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m1937891137_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m392474074_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Value_m1356929877_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IDictionary_2_t2818225217_il2cpp_TypeInfo_var;
extern const uint32_t IMap_2_Lookup_m2631401358_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_get_Size_m3107625399_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_HasKey_m1140347487_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* IReadOnlyDictionary_2_t475375926_il2cpp_TypeInfo_var;
extern RuntimeClass* ReadOnlyDictionary_2_t3353713553_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ReadOnlyDictionary_2__ctor_m3549648522_RuntimeMethod_var;
extern const uint32_t IMap_2_GetView_m1344022084_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Insert_m3454051178_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Remove_m1413378520_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMap_2_Clear_m3255529802_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_Lookup_m3822737838_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_get_Size_m142448920_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const uint32_t IMapView_2_HasKey_m2107050039_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern RuntimeClass* ConstantSplittableMap_2_t3885233345_il2cpp_TypeInfo_var;
extern const RuntimeMethod* ConstantSplittableMap_2__ctor_m4144945432_RuntimeMethod_var;
extern const RuntimeMethod* ConstantSplittableMap_2_Split_m277985157_RuntimeMethod_var;
extern const uint32_t IMapView_2_Split_m4049158937_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Key_m1662296104_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Key_m2175672871_ComCallableWrapperProjectedMethod_MetadataUsageId;
extern const RuntimeMethod* KeyValuePair_2_get_Value_m1484005982_RuntimeMethod_var;
extern const uint32_t IKeyValuePair_2_get_Value_m3078130594_ComCallableWrapperProjectedMethod_MetadataUsageId;
struct IMapView_2_t4018177723;
struct IMapView_2_t2382301192;
struct IMapView_2_t2537982956;
struct IMapView_2_t190211420;
struct IMapView_2_t3717796159;
struct IMapView_2_t2724422669;
struct IMapView_2_t3381683652;
struct IKeyValuePair_2_t3554936937;
struct IMapView_2_t1331632971;
struct IMapView_2_t1631520928;
struct IMapView_2_t3193670913;
struct IMapView_2_t1752361405;
struct IMapView_2_t975832971;
struct IMapView_2_t1596755316;
struct IMapView_2_t319371831;
struct IMapView_2_t1881521816;
struct IKeyValuePair_2_t3481798315;
struct IVectorView_1_t1795943959;
struct IIterator_1_t331222170;
struct IMapView_2_t1808383194;
struct IIterator_1_t119594292;
struct IKeyValuePair_2_t3270170437;
struct IVectorView_1_t1584316081;
struct IMapView_2_t873726137;
struct IMapView_2_t2435876122;
struct Exception_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct IMapView_2_t3878100361;
struct IMapView_2_t3281938957;

struct KeyValuePair_2U5BU5D_t3818836818;
struct KeyValuePair_2U5BU5D_t2544954260;


// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.String>
struct NOVTABLE IKeyValuePair_2_t760131477 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m3013852749(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m2003745203(Il2CppHString* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.Type>
struct NOVTABLE IMap_2_t918837879 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m3058979306(Il2CppHString ___key0, Type_t ** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m732615070(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m3062070663(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m160940274(IMapView_2_t4018177723** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m610774430(Il2CppHString ___key0, Type_t * ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m3871291260(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m2457687352() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Type,System.Type>
struct NOVTABLE IMap_2_t3577928644 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m4154434452(Type_t * ___key0, Type_t ** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m1325865584(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m2230142782(Type_t * ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m3149330040(IMapView_2_t2382301192** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m4189730454(Type_t * ___key0, Type_t * ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m1267624818(Type_t * ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m2235974657() = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Int64>
struct NOVTABLE IKeyValuePair_2_t2649248092 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m1283560117(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m3012986135(int64_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.Type>
struct NOVTABLE IMapView_2_t4018177723 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m594002932(Il2CppHString ___key0, Type_t ** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m3065552575(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m1694676420(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m3605358933(IMapView_2_t4018177723** ___first0, IMapView_2_t4018177723** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Object,System.Int64>
struct NOVTABLE IMap_2_t3733610408 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m2749605711(Il2CppIInspectable* ___key0, int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m4220192820(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m1523217296(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m2101267589(IMapView_2_t2537982956** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m89651347(Il2CppIInspectable* ___key0, int64_t ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m286177173(Il2CppIInspectable* ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m3252333872() = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.Int32>
struct NOVTABLE IMap_2_t1385838872 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m2400282917(Il2CppHString ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m3320579976(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m3055190088(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m3605659067(IMapView_2_t190211420** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m48626576(Il2CppHString ___key0, int32_t ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m2564332326(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m1499398795() = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Object,System.Int64>
struct NOVTABLE IMapView_2_t2537982956 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m2925402872(Il2CppIInspectable* ___key0, int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m152831722(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m2105716713(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m2758594792(IMapView_2_t2537982956** ___first0, IMapView_2_t2537982956** ___second1) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Type>
struct NOVTABLE IKeyValuePair_2_t1396625548 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m2199926285(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m1427991677(Type_t ** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Type,System.Type>
struct NOVTABLE IKeyValuePair_2_t4055716313 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m2294505739(Type_t ** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m1073902776(Type_t ** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>
struct NOVTABLE IMap_2_t618456315 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m2451726409(int32_t ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m2259249674(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m4208301656(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m3361060608(IMapView_2_t3717796159** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m490092833(int32_t ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m1067146362(int32_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m3558300509() = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Int16,System.Object>
struct NOVTABLE IMapView_2_t2724422669 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m2413624234(int16_t ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m902359432(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m376069899(int16_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m1121423689(IMapView_2_t2724422669** ___first0, IMapView_2_t2724422669** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Int16,System.Object>
struct NOVTABLE IMap_2_t3920050121 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m1377426718(int16_t ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m2007020954(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m1075586825(int16_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m804961895(IMapView_2_t2724422669** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m4079130092(int16_t ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m3581067814(int16_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m869510232() = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Int32,System.Object>
struct NOVTABLE IMapView_2_t3717796159 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m3742065343(int32_t ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m1359240774(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m973232472(int32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m842968636(IMapView_2_t3717796159** ___first0, IMapView_2_t3717796159** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.String>
struct NOVTABLE IMap_2_t282343808 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m3419416962(Il2CppHString ___key0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m3747204495(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m1327307936(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m1648969448(IMapView_2_t3381683652** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m3135696435(Il2CppHString ___key0, Il2CppHString ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m3800098948(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m3867596926() = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.String>
struct NOVTABLE IMapView_2_t3381683652 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m1783676987(Il2CppHString ___key0, Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m3316105878(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m1003035185(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m978754527(IMapView_2_t3381683652** ___first0, IMapView_2_t3381683652** ___second1) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Object>
struct NOVTABLE IKeyValuePair_2_t1096243984 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m2186241555(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m210688108(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Type,System.Type>
struct NOVTABLE IMapView_2_t2382301192 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m580708534(Type_t * ___key0, Type_t ** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m2678681203(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m1363070300(Type_t * ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m964547936(IMapView_2_t2382301192** ___first0, IMapView_2_t2382301192** ___second1) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Boolean>
struct NOVTABLE IKeyValuePair_2_t572118738 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m1916408783(Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m3611222262(bool* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct NOVTABLE IMapView_2_t1331632971 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m620925806(Il2CppIInspectable* ___key0, IKeyValuePair_2_t3554936937** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m428097518(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m2416144552(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m1339964017(IMapView_2_t1331632971** ___first0, IMapView_2_t1331632971** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.Boolean>
struct NOVTABLE IMap_2_t2827148380 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m356884552(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m2116548387(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m650644540(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m1023461368(IMapView_2_t1631520928** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m2357915180(Il2CppHString ___key0, bool ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m2388588850(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m3448822397() = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.Boolean>
struct NOVTABLE IMapView_2_t1631520928 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m818349798(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m1396842905(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m2200864154(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m22494317(IMapView_2_t1631520928** ___first0, IMapView_2_t1631520928** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>
struct NOVTABLE IMap_2_t94331069 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m2791672174(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m521129328(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m3863327211(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m1166070801(IMapView_2_t3193670913** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m3431746527(Il2CppIInspectable* ___key0, bool ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m1939883922(Il2CppIInspectable* ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m403209908() = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Int32>
struct NOVTABLE IKeyValuePair_2_t967083573 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m2344176952(int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m1590219272(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Boolean>
struct NOVTABLE IKeyValuePair_2_t3304936049 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m2534079307(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m2353902038(bool* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Object,System.Boolean>
struct NOVTABLE IMapView_2_t3193670913 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m4048973909(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m516432122(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m1413942596(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m2647546983(IMapView_2_t3193670913** ___first0, IMapView_2_t3193670913** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct NOVTABLE IMap_2_t2527260423 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m1090581803(Il2CppIInspectable* ___key0, IKeyValuePair_2_t3554936937** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m2333900912(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m2357583497(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m1550708224(IMapView_2_t1331632971** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m4126452847(Il2CppIInspectable* ___key0, IKeyValuePair_2_t3554936937* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m1838696614(Il2CppIInspectable* ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m3139968190() = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Int32>
struct NOVTABLE IKeyValuePair_2_t3425776526 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m1066766749(Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m269040038(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>
struct NOVTABLE IMap_2_t2947988857 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m4271171535(Il2CppIInspectable* ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m672085459(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m377757278(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m2992416671(IMapView_2_t1752361405** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m3186075525(Il2CppIInspectable* ___key0, int32_t ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m1560976792(Il2CppIInspectable* ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m1661948797() = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.Int32>
struct NOVTABLE IMapView_2_t190211420 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m1298530599(Il2CppHString ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m546192505(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m3322124696(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m96786832(IMapView_2_t190211420** ___first0, IMapView_2_t190211420** ___second1) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Int64>
struct NOVTABLE IKeyValuePair_2_t4211398077 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m676269419(Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m4114789852(int64_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Object,System.Int32>
struct NOVTABLE IMapView_2_t1752361405 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m877167602(Il2CppIInspectable* ___key0, int32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m3871500701(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m1872447125(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m4061037733(IMapView_2_t1752361405** ___first0, IMapView_2_t1752361405** ___second1) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Int32>
struct NOVTABLE IKeyValuePair_2_t1863626541 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m599934735(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m2337749369(int32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct NOVTABLE IKeyValuePair_2_t3005048092 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m2178856022(Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m2884691945(IKeyValuePair_2_t3554936937** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.Int64>
struct NOVTABLE IMapView_2_t975832971 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m4051343361(Il2CppHString ___key0, int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m1325984944(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m3018735158(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m3264766995(IMapView_2_t975832971** ___first0, IMapView_2_t975832971** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.Int64>
struct NOVTABLE IMap_2_t2171460423 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m1932774643(Il2CppHString ___key0, int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m3030780019(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m551338849(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m296988736(IMapView_2_t975832971** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m1829518757(Il2CppHString ___key0, int64_t ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m3915764709(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m487165348() = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int16,System.Object>
struct NOVTABLE IKeyValuePair_2_t102870494 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m2077915680(int16_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m693116984(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Object>
struct NOVTABLE IKeyValuePair_2_t3554936937 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m2750152149(Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m2672088708(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Int64,System.Object>
struct NOVTABLE IMapView_2_t1596755316 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m2833276555(int64_t ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m2657859418(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m1129223030(int64_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m2875932391(IMapView_2_t1596755316** ___first0, IMapView_2_t1596755316** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.Object>
struct NOVTABLE IMapView_2_t319371831 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m2993729319(Il2CppHString ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m2008534305(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m3205845981(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m1626200424(IMapView_2_t319371831** ___first0, IMapView_2_t319371831** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Int64,System.Object>
struct NOVTABLE IMap_2_t2792382768 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m367753107(int64_t ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m137360363(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m663731653(int64_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m1077656533(IMapView_2_t1596755316** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m2086881606(int64_t ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m2064551222(int64_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m156915013() = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Object,System.Object>
struct NOVTABLE IMapView_2_t1881521816 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m354916185(Il2CppIInspectable* ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m1307357424(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m1226002878(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m3017881906(IMapView_2_t1881521816** ___first0, IMapView_2_t1881521816** ___second1) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>
struct NOVTABLE IVector_1_t3197700418 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m1090173897(uint32_t ___index0, IKeyValuePair_2_t3481798315** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m3383550533(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m1790084502(IVectorView_1_t1795943959** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m1347610173(IKeyValuePair_2_t3481798315* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m2438018550(uint32_t ___index0, IKeyValuePair_2_t3481798315* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m3473244934(uint32_t ___index0, IKeyValuePair_2_t3481798315* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m3651251296(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m4008576553(IKeyValuePair_2_t3481798315* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m3823104315() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m121801865() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m1085726944(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IKeyValuePair_2_t3481798315** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m286104263(uint32_t ___items0ArraySize, IKeyValuePair_2_t3481798315** ___items0) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Object,System.Object>
struct NOVTABLE IMap_2_t3077149268 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m1731177585(Il2CppIInspectable* ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m3704454125(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m2433635512(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m2883253156(IMapView_2_t1881521816** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m335884934(Il2CppIInspectable* ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m3274472395(Il2CppIInspectable* ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m112521936() = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>
struct NOVTABLE IIterable_1_t78476157 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m817385671(IIterator_1_t331222170** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>
struct NOVTABLE IVectorView_1_t1795943959 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3476973415(uint32_t ___index0, IKeyValuePair_2_t3481798315** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m1565795300(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m836020600(IKeyValuePair_2_t3481798315* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m2658557676(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IKeyValuePair_2_t3481798315** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Object>
struct NOVTABLE IKeyValuePair_2_t3481798315 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m2175672871(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m3078130594(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.UInt32,System.Object>
struct NOVTABLE IMap_2_t3004010646 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m2631401358(uint32_t ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m3107625399(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m1140347487(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m1344022084(IMapView_2_t1808383194** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m3454051178(uint32_t ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m1413378520(uint32_t ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m3255529802() = 0;
};
// Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct NOVTABLE IIterable_1_t4161815575 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterable_1_First_m1699614814(IIterator_1_t119594292** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IIterator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>
struct NOVTABLE IIterator_1_t331222170 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_Current_m3355334578(IKeyValuePair_2_t3481798315** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_HasCurrent_m940628351(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_MoveNext_m1278101282(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_GetMany_m253528417(uint32_t ___items0ArraySize, IKeyValuePair_2_t3481798315** ___items0, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Object>
struct NOVTABLE IMapView_2_t1808383194 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m3822737838(uint32_t ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m142448920(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m2107050039(uint32_t ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m4049158937(IMapView_2_t1808383194** ___first0, IMapView_2_t1808383194** ___second1) = 0;
};
// Windows.Foundation.Collections.IIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct NOVTABLE IIterator_1_t119594292 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_Current_m3547052056(IKeyValuePair_2_t3270170437** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_HasCurrent_m344842528(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_MoveNext_m1308250629(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IIterator_1_GetMany_m3058286030(uint32_t ___items0ArraySize, IKeyValuePair_2_t3270170437** ___items0, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Char>
struct NOVTABLE IKeyValuePair_2_t4109291243 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m1046287378(Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m547158090(Il2CppChar* comReturnValue) = 0;
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
// Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct NOVTABLE IVectorView_1_t1584316081 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetAt_m3698596162(uint32_t ___index0, IKeyValuePair_2_t3270170437** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_get_Size_m3315242568(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_IndexOf_m195073214(IKeyValuePair_2_t3270170437* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVectorView_1_GetMany_m1367398776(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IKeyValuePair_2_t3270170437** ___items1, uint32_t* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.Int64,System.Object>
struct NOVTABLE IKeyValuePair_2_t3270170437 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m1937891137(int64_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m1356929877(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct NOVTABLE IVector_1_t2986072540 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetAt_m3124897496(uint32_t ___index0, IKeyValuePair_2_t3270170437** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_get_Size_m874801668(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetView_m4097812691(IVectorView_1_t1584316081** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_IndexOf_m1464477667(IKeyValuePair_2_t3270170437* ___value0, uint32_t* ___index1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_SetAt_m603593208(uint32_t ___index0, IKeyValuePair_2_t3270170437* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_InsertAt_m403823273(uint32_t ___index0, IKeyValuePair_2_t3270170437* ___value1) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAt_m4103204621(uint32_t ___index0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Append_m2914172346(IKeyValuePair_2_t3270170437* ___value0) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_RemoveAtEnd_m2473712616() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_Clear_m1678107825() = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_GetMany_m257510634(uint32_t ___startIndex0, uint32_t ___items1ArraySize, IKeyValuePair_2_t3270170437** ___items1, uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IVector_1_ReplaceAll_m618106076(uint32_t ___items0ArraySize, IKeyValuePair_2_t3270170437** ___items0) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.String,System.Char>
struct NOVTABLE IMap_2_t2069353589 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m1226578202(Il2CppHString ___key0, Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m953287421(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m3168229620(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m3012284534(IMapView_2_t873726137** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m2426351234(Il2CppHString ___key0, Il2CppChar ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m3659944873(Il2CppHString ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m3161566146() = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.String,System.Char>
struct NOVTABLE IMapView_2_t873726137 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m399377357(Il2CppHString ___key0, Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m3246206294(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m2413362274(Il2CppHString ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m2948761159(IMapView_2_t873726137** ___first0, IMapView_2_t873726137** ___second1) = 0;
};
// Windows.Foundation.Collections.IMapView`2<System.Object,System.Char>
struct NOVTABLE IMapView_2_t2435876122 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m1265563177(Il2CppIInspectable* ___key0, Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m1806056645(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m1994695022(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m551954581(IMapView_2_t2435876122** ___first0, IMapView_2_t2435876122** ___second1) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Object>
struct NOVTABLE IKeyValuePair_2_t1992786952 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m3523589551(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m3279123715(Il2CppIInspectable** comReturnValue) = 0;
};
// Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Char>
struct NOVTABLE IKeyValuePair_2_t2547141258 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m980420821(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m1390024704(Il2CppChar* comReturnValue) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Object,System.Char>
struct NOVTABLE IMap_2_t3631503574 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m1957260505(Il2CppIInspectable* ___key0, Il2CppChar* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m4154899271(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m3146129820(Il2CppIInspectable* ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m402110412(IMapView_2_t2435876122** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m2496848365(Il2CppIInspectable* ___key0, Il2CppChar ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m175080439(Il2CppIInspectable* ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m1829911841() = 0;
};
#ifndef READONLYDICTIONARY_2_T2876963330_H
#define READONLYDICTIONARY_2_T2876963330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  ReadOnlyDictionary_2_t2876963330  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t3726722309 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t3412900636 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t2876963330, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t2876963330, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t2876963330, ___m_keys_2)); }
	inline KeyCollection_t3726722309 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t3726722309 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t3726722309 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t2876963330, ___m_values_3)); }
	inline ValueCollection_t3412900636 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t3412900636 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t3412900636 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T2876963330_H
#ifndef CONSTANTSPLITTABLEMAP_2_T3885233345_H
#define CONSTANTSPLITTABLEMAP_2_T3885233345_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Object>
struct  ConstantSplittableMap_2_t3885233345  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t2544954260* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3885233345, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t2544954260* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t2544954260** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t2544954260* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3885233345, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3885233345, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t3885233345_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t85607529 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3885233345_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t85607529 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t85607529 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t85607529 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T3885233345_H
#ifndef CONSTANTSPLITTABLEMAP_2_T506305524_H
#define CONSTANTSPLITTABLEMAP_2_T506305524_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int16,System.Object>
struct  ConstantSplittableMap_2_t506305524  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t1690253877* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t506305524, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t1690253877* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t1690253877** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t1690253877* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t506305524, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t506305524, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t506305524_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t1001647004 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t506305524_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t1001647004 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t1001647004 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t1001647004 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T506305524_H
#ifndef CONSTANTSPLITTABLEMAP_2_T3408483122_H
#define CONSTANTSPLITTABLEMAP_2_T3408483122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  ConstantSplittableMap_2_t3408483122  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t1687566399* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3408483122, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t1687566399* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t1687566399** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t1687566399* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3408483122, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3408483122, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t3408483122_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t3903824602 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3408483122_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t3903824602 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t3903824602 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t3903824602 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T3408483122_H
#ifndef READONLYDICTIONARY_2_T3353713553_H
#define READONLYDICTIONARY_2_T3353713553_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Object>
struct  ReadOnlyDictionary_2_t3353713553  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t4203472532 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t3889650859 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3353713553, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3353713553, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3353713553, ___m_keys_2)); }
	inline KeyCollection_t4203472532 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t4203472532 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t4203472532 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3353713553, ___m_values_3)); }
	inline ValueCollection_t3889650859 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t3889650859 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t3889650859 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T3353713553_H
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
#ifndef CONSTANTSPLITTABLEMAP_2_T164184047_H
#define CONSTANTSPLITTABLEMAP_2_T164184047_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Type,System.Type>
struct  ConstantSplittableMap_2_t164184047  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t130504686* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t164184047, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t130504686* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t130504686** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t130504686* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t164184047, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t164184047, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t164184047_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t659525527 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t164184047_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t659525527 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t659525527 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t659525527 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T164184047_H
#ifndef READONLYDICTIONARY_2_T3927631551_H
#define READONLYDICTIONARY_2_T3927631551_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Type,System.Type>
struct  ReadOnlyDictionary_2_t3927631551  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t482423234 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t168601561 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3927631551, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3927631551, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3927631551, ___m_keys_2)); }
	inline KeyCollection_t482423234 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t482423234 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t482423234 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3927631551, ___m_values_3)); }
	inline ValueCollection_t168601561 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t168601561 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t168601561 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T3927631551_H
#ifndef READONLYDICTIONARY_2_T3981206481_H
#define READONLYDICTIONARY_2_T3981206481_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Char>
struct  ReadOnlyDictionary_2_t3981206481  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t535998164 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t222176491 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3981206481, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3981206481, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3981206481, ___m_keys_2)); }
	inline KeyCollection_t535998164 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t535998164 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t535998164 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3981206481, ___m_values_3)); }
	inline ValueCollection_t222176491 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t222176491 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t222176491 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T3981206481_H
#ifndef READONLYDICTIONARY_2_T4269753028_H
#define READONLYDICTIONARY_2_T4269753028_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int16,System.Object>
struct  ReadOnlyDictionary_2_t4269753028  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t824544711 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t510723038 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4269753028, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4269753028, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4269753028, ___m_keys_2)); }
	inline KeyCollection_t824544711 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t824544711 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t824544711 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4269753028, ___m_values_3)); }
	inline ValueCollection_t510723038 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t510723038 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t510723038 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T4269753028_H
#ifndef READONLYDICTIONARY_2_T2419056496_H
#define READONLYDICTIONARY_2_T2419056496_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Char>
struct  ReadOnlyDictionary_2_t2419056496  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t3268815475 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t2954993802 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t2419056496, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t2419056496, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t2419056496, ___m_keys_2)); }
	inline KeyCollection_t3268815475 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t3268815475 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t3268815475 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t2419056496, ___m_values_3)); }
	inline ValueCollection_t2954993802 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t2954993802 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t2954993802 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T2419056496_H
#ifndef CONSTANTSPLITTABLEMAP_2_T2950576288_H
#define CONSTANTSPLITTABLEMAP_2_T2950576288_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Char>
struct  ConstantSplittableMap_2_t2950576288  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t2582780249* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2950576288, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t2582780249* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t2582780249** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t2582780249* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2950576288, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2950576288, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t2950576288_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t3445917768 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2950576288_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t3445917768 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t3445917768 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t3445917768 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T2950576288_H
#ifndef CONSTANTSPLITTABLEMAP_2_T217758977_H
#define CONSTANTSPLITTABLEMAP_2_T217758977_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Char>
struct  ConstantSplittableMap_2_t217758977  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t802601556* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t217758977, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t802601556* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t802601556** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t802601556* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t217758977, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t217758977, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t217758977_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t713100457 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t217758977_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t713100457 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t713100457 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t713100457 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T217758977_H
#ifndef CONSTANTSPLITTABLEMAP_2_T3052683122_H
#define CONSTANTSPLITTABLEMAP_2_T3052683122_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Int64>
struct  ConstantSplittableMap_2_t3052683122  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t1613681407* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3052683122, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t1613681407* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t1613681407** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t1613681407* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3052683122, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3052683122, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t3052683122_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t3548024602 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3052683122_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t3548024602 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t3548024602 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t3548024602 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T3052683122_H
#ifndef CONSTANTSPLITTABLEMAP_2_T3673605467_H
#define CONSTANTSPLITTABLEMAP_2_T3673605467_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int64,System.Object>
struct  ConstantSplittableMap_2_t3673605467  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t3818836818* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3673605467, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t3818836818* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t3818836818** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t3818836818* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3673605467, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3673605467, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t3673605467_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t4168946947 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3673605467_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t4168946947 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t4168946947 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t4168946947 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T3673605467_H
#ifndef READONLYDICTIONARY_2_T2521163330_H
#define READONLYDICTIONARY_2_T2521163330_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Int64>
struct  ReadOnlyDictionary_2_t2521163330  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t3370922309 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t3057100636 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t2521163330, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t2521163330, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t2521163330, ___m_keys_2)); }
	inline KeyCollection_t3370922309 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t3370922309 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t3370922309 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t2521163330, ___m_values_3)); }
	inline ValueCollection_t3057100636 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t3057100636 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t3057100636 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T2521163330_H
#ifndef CONSTANTSPLITTABLEMAP_2_T319865811_H
#define CONSTANTSPLITTABLEMAP_2_T319865811_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int64>
struct  ConstantSplittableMap_2_t319865811  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t4128470010* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t319865811, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t4128470010* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t4128470010** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t4128470010* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t319865811, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t319865811, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t319865811_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t815207291 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t319865811_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t815207291 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t815207291 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t815207291 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T319865811_H
#ifndef READONLYDICTIONARY_2_T4083313315_H
#define READONLYDICTIONARY_2_T4083313315_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Int64>
struct  ReadOnlyDictionary_2_t4083313315  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t638104998 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t324283325 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4083313315, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4083313315, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4083313315, ___m_keys_2)); }
	inline KeyCollection_t638104998 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t638104998 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t638104998 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t4083313315, ___m_values_3)); }
	inline ValueCollection_t324283325 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t324283325 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t324283325 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T4083313315_H
#ifndef READONLYDICTIONARY_2_T3142085675_H
#define READONLYDICTIONARY_2_T3142085675_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int64,System.Object>
struct  ReadOnlyDictionary_2_t3142085675  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t3991844654 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t3678022981 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3142085675, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3142085675, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3142085675, ___m_keys_2)); }
	inline KeyCollection_t3991844654 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t3991844654 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t3991844654 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3142085675, ___m_values_3)); }
	inline ValueCollection_t3678022981 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t3678022981 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t3678022981 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T3142085675_H
#ifndef CONSTANTSPLITTABLEMAP_2_T2396221982_H
#define CONSTANTSPLITTABLEMAP_2_T2396221982_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Object>
struct  ConstantSplittableMap_2_t2396221982  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t1898447907* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2396221982, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t1898447907* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t1898447907** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t1898447907* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2396221982, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2396221982, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t2396221982_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t2891563462 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2396221982_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t2891563462 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t2891563462 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t2891563462 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T2396221982_H
#ifndef CONSTANTSPLITTABLEMAP_2_T1163566507_H
#define CONSTANTSPLITTABLEMAP_2_T1163566507_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.String>
struct  ConstantSplittableMap_2_t1163566507  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t336297922* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1163566507, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t336297922* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t336297922** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t336297922* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1163566507, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1163566507, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t1163566507_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t1658907987 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1163566507_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t1658907987 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t1658907987 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t1658907987 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T1163566507_H
#ifndef READONLYDICTIONARY_2_T632046715_H
#define READONLYDICTIONARY_2_T632046715_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.String>
struct  ReadOnlyDictionary_2_t632046715  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t1481805694 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t1167984021 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t632046715, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t632046715, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t632046715, ___m_keys_2)); }
	inline KeyCollection_t1481805694 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t1481805694 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t1481805694 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t632046715, ___m_values_3)); }
	inline ValueCollection_t1167984021 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t1167984021 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t1167984021 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T632046715_H
#ifndef READONLYCOLLECTION_1_T3669654984_H
#define READONLYCOLLECTION_1_T3669654984_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>
struct  ReadOnlyCollection_1_t3669654984  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t3669654984, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t3669654984, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T3669654984_H
#ifndef CONSTANTSPLITTABLEMAP_2_T1800060578_H
#define CONSTANTSPLITTABLEMAP_2_T1800060578_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Type>
struct  ConstantSplittableMap_2_t1800060578  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t2995388687* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1800060578, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t2995388687* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t2995388687** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t2995388687* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1800060578, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1800060578, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t1800060578_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t2295402058 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1800060578_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t2295402058 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t2295402058 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t2295402058 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T1800060578_H
#ifndef READONLYDICTIONARY_2_T1268540786_H
#define READONLYDICTIONARY_2_T1268540786_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Type>
struct  ReadOnlyDictionary_2_t1268540786  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t2118299765 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t1804478092 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1268540786, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1268540786, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1268540786, ___m_keys_2)); }
	inline KeyCollection_t2118299765 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t2118299765 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t2118299765 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1268540786, ___m_values_3)); }
	inline ValueCollection_t1804478092 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t1804478092 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t1804478092 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T1268540786_H
#ifndef CONSTANTSPLITTABLEMAP_2_T1499679014_H
#define CONSTANTSPLITTABLEMAP_2_T1499679014_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Object>
struct  ConstantSplittableMap_2_t1499679014  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t2652375035* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1499679014, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t2652375035* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t2652375035** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t2652375035* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1499679014, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1499679014, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t1499679014_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t1995020494 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1499679014_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t1995020494 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t1995020494 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t1995020494 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T1499679014_H
#ifndef CONSTANTSPLITTABLEMAP_2_T1659983216_H
#define CONSTANTSPLITTABLEMAP_2_T1659983216_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Object>
struct  ConstantSplittableMap_2_t1659983216  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t3332857673* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1659983216, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t3332857673* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t3332857673** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t3332857673* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1659983216, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1659983216, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t1659983216_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t2155324696 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1659983216_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t2155324696 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t2155324696 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t2155324696 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T1659983216_H
#ifndef READONLYDICTIONARY_2_T532302020_H
#define READONLYDICTIONARY_2_T532302020_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Guid,System.Type>
struct  ReadOnlyDictionary_2_t532302020  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t1382060999 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t1068239326 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t532302020, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t532302020, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t532302020, ___m_keys_2)); }
	inline KeyCollection_t1382060999 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t1382060999 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t1382060999 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t532302020, ___m_values_3)); }
	inline ValueCollection_t1068239326 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t1068239326 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t1068239326 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T532302020_H
#ifndef CONSTANTSPLITTABLEMAP_2_T1063821812_H
#define CONSTANTSPLITTABLEMAP_2_T1063821812_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Type>
struct  ConstantSplittableMap_2_t1063821812  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t134831157* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1063821812, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t134831157* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t134831157** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t134831157* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1063821812, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1063821812, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t1063821812_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t1559163292 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t1063821812_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t1559163292 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t1559163292 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t1559163292 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T1063821812_H
#ifndef READONLYDICTIONARY_2_T968159222_H
#define READONLYDICTIONARY_2_T968159222_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Object>
struct  ReadOnlyDictionary_2_t968159222  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t1817918201 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t1504096528 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t968159222, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t968159222, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t968159222, ___m_keys_2)); }
	inline KeyCollection_t1817918201 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t1817918201 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t1817918201 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t968159222, ___m_values_3)); }
	inline ValueCollection_t1504096528 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t1504096528 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t1504096528 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T968159222_H
#ifndef READONLYDICTIONARY_2_T3426852175_H
#define READONLYDICTIONARY_2_T3426852175_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>
struct  ReadOnlyDictionary_2_t3426852175  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t4276611154 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t3962789481 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3426852175, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3426852175, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3426852175, ___m_keys_2)); }
	inline KeyCollection_t4276611154 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t4276611154 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t4276611154 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3426852175, ___m_values_3)); }
	inline ValueCollection_t3962789481 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t3962789481 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t3962789481 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T3426852175_H
#ifndef CONSTANTSPLITTABLEMAP_2_T3958371967_H
#define CONSTANTSPLITTABLEMAP_2_T3958371967_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Object>
struct  ConstantSplittableMap_2_t3958371967  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t118269214* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3958371967, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t118269214* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t118269214** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t118269214* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3958371967, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3958371967, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t3958371967_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t158746151 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3958371967_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t158746151 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t158746151 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t158746151 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T3958371967_H
#ifndef READONLYDICTIONARY_2_T1735541779_H
#define READONLYDICTIONARY_2_T1735541779_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Int32>
struct  ReadOnlyDictionary_2_t1735541779  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t2585300758 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t2271479085 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1735541779, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1735541779, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1735541779, ___m_keys_2)); }
	inline KeyCollection_t2585300758 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t2585300758 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t2585300758 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1735541779, ___m_values_3)); }
	inline ValueCollection_t2271479085 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t2271479085 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t2271479085 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T1735541779_H
#ifndef READONLYDICTIONARY_2_T1128463424_H
#define READONLYDICTIONARY_2_T1128463424_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Guid,System.Object>
struct  ReadOnlyDictionary_2_t1128463424  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t1978222403 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t1664400730 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1128463424, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1128463424, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1128463424, ___m_keys_2)); }
	inline KeyCollection_t1978222403 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t1978222403 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t1978222403 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t1128463424, ___m_values_3)); }
	inline ValueCollection_t1664400730 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t1664400730 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t1664400730 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T1128463424_H
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
#ifndef CONSTANTSPLITTABLEMAP_2_T3708371079_H
#define CONSTANTSPLITTABLEMAP_2_T3708371079_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Boolean>
struct  ConstantSplittableMap_2_t3708371079  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t1951926774* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3708371079, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t1951926774* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t1951926774** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t1951926774* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3708371079, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3708371079, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t3708371079_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t4203712559 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3708371079_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t4203712559 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t4203712559 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t4203712559 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T3708371079_H
#ifndef CONSTANTSPLITTABLEMAP_2_T975553768_H
#define CONSTANTSPLITTABLEMAP_2_T975553768_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Boolean>
struct  ConstantSplittableMap_2_t975553768  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t171748081* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t975553768, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t171748081* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t171748081** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t171748081* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t975553768, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t975553768, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t975553768_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t1470895248 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t975553768_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t1470895248 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t1470895248 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t1470895248 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T975553768_H
#ifndef READONLYDICTIONARY_2_T444033976_H
#define READONLYDICTIONARY_2_T444033976_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Boolean>
struct  ReadOnlyDictionary_2_t444033976  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t1293792955 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t979971282 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t444033976, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t444033976, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t444033976, ___m_keys_2)); }
	inline KeyCollection_t1293792955 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t1293792955 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t1293792955 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t444033976, ___m_values_3)); }
	inline ValueCollection_t979971282 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t979971282 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t979971282 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T444033976_H
#ifndef READONLYCOLLECTION_1_T3458027106_H
#define READONLYCOLLECTION_1_T3458027106_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>
struct  ReadOnlyCollection_1_t3458027106  : public RuntimeObject
{
public:
	// System.Collections.Generic.IList`1<T> System.Collections.ObjectModel.ReadOnlyCollection`1::list
	RuntimeObject* ___list_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyCollection`1::_syncRoot
	RuntimeObject * ____syncRoot_1;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t3458027106, ___list_0)); }
	inline RuntimeObject* get_list_0() const { return ___list_0; }
	inline RuntimeObject** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(RuntimeObject* value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((&___list_0), value);
	}

	inline static int32_t get_offset_of__syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyCollection_1_t3458027106, ____syncRoot_1)); }
	inline RuntimeObject * get__syncRoot_1() const { return ____syncRoot_1; }
	inline RuntimeObject ** get_address_of__syncRoot_1() { return &____syncRoot_1; }
	inline void set__syncRoot_1(RuntimeObject * value)
	{
		____syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&____syncRoot_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYCOLLECTION_1_T3458027106_H
#ifndef READONLYDICTIONARY_2_T3297691764_H
#define READONLYDICTIONARY_2_T3297691764_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Int32>
struct  ReadOnlyDictionary_2_t3297691764  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t4147450743 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t3833629070 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3297691764, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3297691764, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3297691764, ___m_keys_2)); }
	inline KeyCollection_t4147450743 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t4147450743 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t4147450743 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3297691764, ___m_values_3)); }
	inline ValueCollection_t3833629070 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t3833629070 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t3833629070 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T3297691764_H
#ifndef READONLYDICTIONARY_2_T3176851287_H
#define READONLYDICTIONARY_2_T3176851287_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Boolean>
struct  ReadOnlyDictionary_2_t3176851287  : public RuntimeObject
{
public:
	// System.Collections.Generic.IDictionary`2<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_dictionary
	RuntimeObject* ___m_dictionary_0;
	// System.Object System.Collections.ObjectModel.ReadOnlyDictionary`2::m_syncRoot
	RuntimeObject * ___m_syncRoot_1;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/KeyCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_keys
	KeyCollection_t4026610266 * ___m_keys_2;
	// System.Collections.ObjectModel.ReadOnlyDictionary`2/ValueCollection<TKey,TValue> System.Collections.ObjectModel.ReadOnlyDictionary`2::m_values
	ValueCollection_t3712788593 * ___m_values_3;

public:
	inline static int32_t get_offset_of_m_dictionary_0() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3176851287, ___m_dictionary_0)); }
	inline RuntimeObject* get_m_dictionary_0() const { return ___m_dictionary_0; }
	inline RuntimeObject** get_address_of_m_dictionary_0() { return &___m_dictionary_0; }
	inline void set_m_dictionary_0(RuntimeObject* value)
	{
		___m_dictionary_0 = value;
		Il2CppCodeGenWriteBarrier((&___m_dictionary_0), value);
	}

	inline static int32_t get_offset_of_m_syncRoot_1() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3176851287, ___m_syncRoot_1)); }
	inline RuntimeObject * get_m_syncRoot_1() const { return ___m_syncRoot_1; }
	inline RuntimeObject ** get_address_of_m_syncRoot_1() { return &___m_syncRoot_1; }
	inline void set_m_syncRoot_1(RuntimeObject * value)
	{
		___m_syncRoot_1 = value;
		Il2CppCodeGenWriteBarrier((&___m_syncRoot_1), value);
	}

	inline static int32_t get_offset_of_m_keys_2() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3176851287, ___m_keys_2)); }
	inline KeyCollection_t4026610266 * get_m_keys_2() const { return ___m_keys_2; }
	inline KeyCollection_t4026610266 ** get_address_of_m_keys_2() { return &___m_keys_2; }
	inline void set_m_keys_2(KeyCollection_t4026610266 * value)
	{
		___m_keys_2 = value;
		Il2CppCodeGenWriteBarrier((&___m_keys_2), value);
	}

	inline static int32_t get_offset_of_m_values_3() { return static_cast<int32_t>(offsetof(ReadOnlyDictionary_2_t3176851287, ___m_values_3)); }
	inline ValueCollection_t3712788593 * get_m_values_3() const { return ___m_values_3; }
	inline ValueCollection_t3712788593 ** get_address_of_m_values_3() { return &___m_values_3; }
	inline void set_m_values_3(ValueCollection_t3712788593 * value)
	{
		___m_values_3 = value;
		Il2CppCodeGenWriteBarrier((&___m_values_3), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // READONLYDICTIONARY_2_T3176851287_H
#ifndef CONSTANTSPLITTABLEMAP_2_T3829211556_H
#define CONSTANTSPLITTABLEMAP_2_T3829211556_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int32>
struct  ConstantSplittableMap_2_t3829211556  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t1954543557* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3829211556, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t1954543557* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t1954543557** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t1954543557* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3829211556, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3829211556, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t3829211556_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t29585740 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t3829211556_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t29585740 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t29585740 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t29585740 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T3829211556_H
#ifndef CONSTANTSPLITTABLEMAP_2_T2267061571_H
#define CONSTANTSPLITTABLEMAP_2_T2267061571_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Int32>
struct  ConstantSplittableMap_2_t2267061571  : public RuntimeObject
{
public:
	// System.Collections.Generic.KeyValuePair`2<TKey,TValue>[] System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::items
	KeyValuePair_2U5BU5D_t3734722250* ___items_1;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::firstItemIndex
	int32_t ___firstItemIndex_2;
	// System.Int32 System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::lastItemIndex
	int32_t ___lastItemIndex_3;

public:
	inline static int32_t get_offset_of_items_1() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2267061571, ___items_1)); }
	inline KeyValuePair_2U5BU5D_t3734722250* get_items_1() const { return ___items_1; }
	inline KeyValuePair_2U5BU5D_t3734722250** get_address_of_items_1() { return &___items_1; }
	inline void set_items_1(KeyValuePair_2U5BU5D_t3734722250* value)
	{
		___items_1 = value;
		Il2CppCodeGenWriteBarrier((&___items_1), value);
	}

	inline static int32_t get_offset_of_firstItemIndex_2() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2267061571, ___firstItemIndex_2)); }
	inline int32_t get_firstItemIndex_2() const { return ___firstItemIndex_2; }
	inline int32_t* get_address_of_firstItemIndex_2() { return &___firstItemIndex_2; }
	inline void set_firstItemIndex_2(int32_t value)
	{
		___firstItemIndex_2 = value;
	}

	inline static int32_t get_offset_of_lastItemIndex_3() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2267061571, ___lastItemIndex_3)); }
	inline int32_t get_lastItemIndex_3() const { return ___lastItemIndex_3; }
	inline int32_t* get_address_of_lastItemIndex_3() { return &___lastItemIndex_3; }
	inline void set_lastItemIndex_3(int32_t value)
	{
		___lastItemIndex_3 = value;
	}
};

struct ConstantSplittableMap_2_t2267061571_StaticFields
{
public:
	// System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2/KeyValuePairComparer<TKey,TValue> System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2::keyValuePairComparer
	KeyValuePairComparer_t2762403051 * ___keyValuePairComparer_0;

public:
	inline static int32_t get_offset_of_keyValuePairComparer_0() { return static_cast<int32_t>(offsetof(ConstantSplittableMap_2_t2267061571_StaticFields, ___keyValuePairComparer_0)); }
	inline KeyValuePairComparer_t2762403051 * get_keyValuePairComparer_0() const { return ___keyValuePairComparer_0; }
	inline KeyValuePairComparer_t2762403051 ** get_address_of_keyValuePairComparer_0() { return &___keyValuePairComparer_0; }
	inline void set_keyValuePairComparer_0(KeyValuePairComparer_t2762403051 * value)
	{
		___keyValuePairComparer_0 = value;
		Il2CppCodeGenWriteBarrier((&___keyValuePairComparer_0), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // CONSTANTSPLITTABLEMAP_2_T2267061571_H
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
#ifndef KEYVALUEPAIR_2_T968067334_H
#define KEYVALUEPAIR_2_T968067334_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Object>
struct  KeyValuePair_2_t968067334 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t968067334, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T968067334_H
#ifndef KEYVALUEPAIR_2_T2457078697_H
#define KEYVALUEPAIR_2_T2457078697_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>
struct  KeyValuePair_2_t2457078697 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	uint32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2457078697, ___key_0)); }
	inline uint32_t get_key_0() const { return ___key_0; }
	inline uint32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(uint32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2457078697, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2457078697_H
#ifndef KEYVALUEPAIR_2_T3084571625_H
#define KEYVALUEPAIR_2_T3084571625_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>
struct  KeyValuePair_2_t3084571625 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Il2CppChar ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3084571625, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3084571625, ___value_1)); }
	inline Il2CppChar get_value_1() const { return ___value_1; }
	inline Il2CppChar* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Il2CppChar value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3084571625_H
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
#ifndef KEYVALUEPAIR_2_T1522421640_H
#define KEYVALUEPAIR_2_T1522421640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Char>
struct  KeyValuePair_2_t1522421640 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Il2CppChar ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1522421640, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1522421640, ___value_1)); }
	inline Il2CppChar get_value_1() const { return ___value_1; }
	inline Il2CppChar* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Il2CppChar value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1522421640_H
#ifndef SYSTEMEXCEPTION_T176217640_H
#define SYSTEMEXCEPTION_T176217640_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.SystemException
struct  SystemException_t176217640  : public Exception_t
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // SYSTEMEXCEPTION_T176217640_H
#ifndef KEYVALUEPAIR_2_T2245450819_H
#define KEYVALUEPAIR_2_T2245450819_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>
struct  KeyValuePair_2_t2245450819 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int64_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2245450819, ___key_0)); }
	inline int64_t get_key_0() const { return ___key_0; }
	inline int64_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int64_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2245450819, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2245450819_H
#ifndef KEYVALUEPAIR_2_T2530217319_H
#define KEYVALUEPAIR_2_T2530217319_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>
struct  KeyValuePair_2_t2530217319 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2530217319, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2530217319_H
#ifndef KEYVALUEPAIR_2_T4030379155_H
#define KEYVALUEPAIR_2_T4030379155_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.String>
struct  KeyValuePair_2_t4030379155 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	String_t* ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4030379155, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4030379155, ___value_1)); }
	inline String_t* get_value_1() const { return ___value_1; }
	inline String_t** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(String_t* value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4030379155_H
#ifndef KEYVALUEPAIR_2_T371905930_H
#define KEYVALUEPAIR_2_T371905930_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Type>
struct  KeyValuePair_2_t371905930 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Type_t * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t371905930, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t371905930, ___value_1)); }
	inline Type_t * get_value_1() const { return ___value_1; }
	inline Type_t ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Type_t * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T371905930_H
#ifndef KEYVALUEPAIR_2_T71524366_H
#define KEYVALUEPAIR_2_T71524366_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>
struct  KeyValuePair_2_t71524366 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t71524366, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t71524366, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T71524366_H
#ifndef KEYVALUEPAIR_2_T4237331251_H
#define KEYVALUEPAIR_2_T4237331251_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>
struct  KeyValuePair_2_t4237331251 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int32_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4237331251, ___key_0)); }
	inline int32_t get_key_0() const { return ___key_0; }
	inline int32_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int32_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t4237331251, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T4237331251_H
#ifndef KEYVALUEPAIR_2_T838906923_H
#define KEYVALUEPAIR_2_T838906923_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>
struct  KeyValuePair_2_t838906923 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t838906923, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t838906923, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T838906923_H
#ifndef KEYVALUEPAIR_2_T3842366416_H
#define KEYVALUEPAIR_2_T3842366416_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>
struct  KeyValuePair_2_t3842366416 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3842366416, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3842366416, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3842366416_H
#ifndef KEYVALUEPAIR_2_T3186678459_H
#define KEYVALUEPAIR_2_T3186678459_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>
struct  KeyValuePair_2_t3186678459 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int64_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3186678459, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3186678459, ___value_1)); }
	inline int64_t get_value_1() const { return ___value_1; }
	inline int64_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int64_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3186678459_H
#ifndef KEYVALUEPAIR_2_T2401056908_H
#define KEYVALUEPAIR_2_T2401056908_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>
struct  KeyValuePair_2_t2401056908 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int32_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2401056908, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2401056908, ___value_1)); }
	inline int32_t get_value_1() const { return ___value_1; }
	inline int32_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int32_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2401056908_H
#ifndef KEYVALUEPAIR_2_T2280216431_H
#define KEYVALUEPAIR_2_T2280216431_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>
struct  KeyValuePair_2_t2280216431 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	bool ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2280216431, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t2280216431, ___value_1)); }
	inline bool get_value_1() const { return ___value_1; }
	inline bool* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(bool value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T2280216431_H
#ifndef KEYVALUEPAIR_2_T3373118172_H
#define KEYVALUEPAIR_2_T3373118172_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>
struct  KeyValuePair_2_t3373118172 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	int16_t ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3373118172, ___key_0)); }
	inline int16_t get_key_0() const { return ___key_0; }
	inline int16_t* get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(int16_t value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3373118172, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3373118172_H
#ifndef KEYVALUEPAIR_2_T1624528474_H
#define KEYVALUEPAIR_2_T1624528474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>
struct  KeyValuePair_2_t1624528474 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	String_t* ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	int64_t ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1624528474, ___key_0)); }
	inline String_t* get_key_0() const { return ___key_0; }
	inline String_t** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(String_t* value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1624528474, ___value_1)); }
	inline int64_t get_value_1() const { return ___value_1; }
	inline int64_t* get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(int64_t value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1624528474_H
#ifndef KEYVALUEPAIR_2_T1980328474_H
#define KEYVALUEPAIR_2_T1980328474_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>
struct  KeyValuePair_2_t1980328474 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	RuntimeObject * ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	KeyValuePair_2_t2530217319  ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1980328474, ___key_0)); }
	inline RuntimeObject * get_key_0() const { return ___key_0; }
	inline RuntimeObject ** get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(RuntimeObject * value)
	{
		___key_0 = value;
		Il2CppCodeGenWriteBarrier((&___key_0), value);
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t1980328474, ___value_1)); }
	inline KeyValuePair_2_t2530217319  get_value_1() const { return ___value_1; }
	inline KeyValuePair_2_t2530217319 * get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(KeyValuePair_2_t2530217319  value)
	{
		___value_1 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T1980328474_H
#ifndef INVALIDOPERATIONEXCEPTION_T56020091_H
#define INVALIDOPERATIONEXCEPTION_T56020091_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.InvalidOperationException
struct  InvalidOperationException_t56020091  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // INVALIDOPERATIONEXCEPTION_T56020091_H
#ifndef ARGUMENTEXCEPTION_T132251570_H
#define ARGUMENTEXCEPTION_T132251570_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentException
struct  ArgumentException_t132251570  : public SystemException_t176217640
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t132251570, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((&___m_paramName_17), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTEXCEPTION_T132251570_H
// Windows.Foundation.Collections.IKeyValuePair`2<System.Guid,System.Object>
struct NOVTABLE IKeyValuePair_2_t1256548186 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m3324945768(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m52124236(Il2CppIInspectable** comReturnValue) = 0;
};
#ifndef KEYVALUEPAIR_2_T231828568_H
#define KEYVALUEPAIR_2_T231828568_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>
struct  KeyValuePair_2_t231828568 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	RuntimeObject * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t231828568, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t231828568, ___value_1)); }
	inline RuntimeObject * get_value_1() const { return ___value_1; }
	inline RuntimeObject ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(RuntimeObject * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T231828568_H
// Windows.Foundation.Collections.IMapView`2<System.Guid,System.Object>
struct NOVTABLE IMapView_2_t3878100361 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m3331997343(Guid_t  ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m3858358881(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m3111850129(Guid_t  ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m3394162196(IMapView_2_t3878100361** ___first0, IMapView_2_t3878100361** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Guid,System.Type>
struct NOVTABLE IMap_2_t182599113 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m372021310(Guid_t  ___key0, Type_t ** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m4209346384(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m2767397819(Guid_t  ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m3956818822(IMapView_2_t3281938957** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m52862695(Guid_t  ___key0, Type_t * ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m441912298(Guid_t  ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m1518512299() = 0;
};
#ifndef KEYVALUEPAIR_2_T3930634460_H
#define KEYVALUEPAIR_2_T3930634460_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyValuePair`2<System.Guid,System.Type>
struct  KeyValuePair_2_t3930634460 
{
public:
	// TKey System.Collections.Generic.KeyValuePair`2::key
	Guid_t  ___key_0;
	// TValue System.Collections.Generic.KeyValuePair`2::value
	Type_t * ___value_1;

public:
	inline static int32_t get_offset_of_key_0() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3930634460, ___key_0)); }
	inline Guid_t  get_key_0() const { return ___key_0; }
	inline Guid_t * get_address_of_key_0() { return &___key_0; }
	inline void set_key_0(Guid_t  value)
	{
		___key_0 = value;
	}

	inline static int32_t get_offset_of_value_1() { return static_cast<int32_t>(offsetof(KeyValuePair_2_t3930634460, ___value_1)); }
	inline Type_t * get_value_1() const { return ___value_1; }
	inline Type_t ** get_address_of_value_1() { return &___value_1; }
	inline void set_value_1(Type_t * value)
	{
		___value_1 = value;
		Il2CppCodeGenWriteBarrier((&___value_1), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYVALUEPAIR_2_T3930634460_H
// Windows.Foundation.Collections.IKeyValuePair`2<System.Guid,System.Type>
struct NOVTABLE IKeyValuePair_2_t660386782 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Key_m1247672299(Guid_t * comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IKeyValuePair_2_get_Value_m3450640679(Type_t ** comReturnValue) = 0;
};
#ifndef KEYNOTFOUNDEXCEPTION_T2292407383_H
#define KEYNOTFOUNDEXCEPTION_T2292407383_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Collections.Generic.KeyNotFoundException
struct  KeyNotFoundException_t2292407383  : public SystemException_t176217640
{
public:

public:
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // KEYNOTFOUNDEXCEPTION_T2292407383_H
// Windows.Foundation.Collections.IMapView`2<System.Guid,System.Type>
struct NOVTABLE IMapView_2_t3281938957 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Lookup_m3896662699(Guid_t  ___key0, Type_t ** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_get_Size_m2349127300(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_HasKey_m1382000797(Guid_t  ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMapView_2_Split_m2592840147(IMapView_2_t3281938957** ___first0, IMapView_2_t3281938957** ___second1) = 0;
};
// Windows.Foundation.Collections.IMap`2<System.Guid,System.Object>
struct NOVTABLE IMap_2_t778760517 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMap_2_Lookup_m3068028334(Guid_t  ___key0, Il2CppIInspectable** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_get_Size_m1704379977(uint32_t* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_HasKey_m2236943020(Guid_t  ___key0, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_GetView_m3237694789(IMapView_2_t3878100361** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Insert_m1575381716(Guid_t  ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Remove_m3289693839(Guid_t  ___key0) = 0;
	virtual il2cpp_hresult_t STDCALL IMap_2_Clear_m2519350850() = 0;
};
#ifndef ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#define ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.ArgumentOutOfRangeException
struct  ArgumentOutOfRangeException_t777629997  : public ArgumentException_t132251570
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((&___m_actualValue_19), value);
	}
};

struct ArgumentOutOfRangeException_t777629997_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_t777629997_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((&____rangeMessage_18), value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
#endif // ARGUMENTOUTOFRANGEEXCEPTION_T777629997_H
// System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>[]
struct KeyValuePair_2U5BU5D_t3818836818  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t2245450819  m_Items[1];

public:
	inline KeyValuePair_2_t2245450819  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t2245450819 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t2245450819  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t2245450819  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t2245450819 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t2245450819  value)
	{
		m_Items[index] = value;
	}
};
// System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>[]
struct KeyValuePair_2U5BU5D_t2544954260  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) KeyValuePair_2_t2457078697  m_Items[1];

public:
	inline KeyValuePair_2_t2457078697  GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline KeyValuePair_2_t2457078697 * GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, KeyValuePair_2_t2457078697  value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline KeyValuePair_2_t2457078697  GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline KeyValuePair_2_t2457078697 * GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, KeyValuePair_2_t2457078697  value)
	{
		m_Items[index] = value;
	}
};


// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C"  void ReadOnlyCollection_1__ctor_m1966006039_gshared (ReadOnlyCollection_1_t3458027106 * __this, RuntimeObject* ___list0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::.ctor(System.Collections.Generic.IList`1<T>)
extern "C"  void ReadOnlyCollection_1__ctor_m254165444_gshared (ReadOnlyCollection_1_t3669654984 * __this, RuntimeObject* ___list0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C"  void ConstantSplittableMap_2__ctor_m4259417880_gshared (ConstantSplittableMap_2_t3958371967 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C"  void ConstantSplittableMap_2_Split_m2998943571_gshared (ConstantSplittableMap_2_t3958371967 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m4184817181_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1132502692_gshared (KeyValuePair_2_t2530217319 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void ReadOnlyDictionary_2__ctor_m3044404427_gshared (ReadOnlyDictionary_2_t3426852175 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Guid,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void ReadOnlyDictionary_2__ctor_m2119190349_gshared (ReadOnlyDictionary_2_t1128463424 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C"  void ConstantSplittableMap_2__ctor_m2413510944_gshared (ConstantSplittableMap_2_t1659983216 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C"  void ConstantSplittableMap_2_Split_m3822801152_gshared (ConstantSplittableMap_2_t1659983216 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Key()
extern "C"  Guid_t  KeyValuePair_2_get_Key_m4294704491_gshared (KeyValuePair_2_t231828568 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m2666064688_gshared (KeyValuePair_2_t231828568 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void ReadOnlyDictionary_2__ctor_m3621257446_gshared (ReadOnlyDictionary_2_t968159222 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C"  void ConstantSplittableMap_2__ctor_m3772921655_gshared (ConstantSplittableMap_2_t1499679014 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C"  void ConstantSplittableMap_2_Split_m2176297438_gshared (ConstantSplittableMap_2_t1499679014 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m1839753989_gshared (KeyValuePair_2_t71524366 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m3495598764_gshared (KeyValuePair_2_t71524366 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void ReadOnlyDictionary_2__ctor_m2579745724_gshared (ReadOnlyDictionary_2_t3297691764 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C"  void ConstantSplittableMap_2__ctor_m2528261516_gshared (ConstantSplittableMap_2_t3829211556 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C"  void ConstantSplittableMap_2_Split_m1776544164_gshared (ConstantSplittableMap_2_t3829211556 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1055012466_gshared (KeyValuePair_2_t2401056908 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1308554439_gshared (KeyValuePair_2_t2401056908 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void ReadOnlyDictionary_2__ctor_m4089905679_gshared (ReadOnlyDictionary_2_t444033976 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C"  void ConstantSplittableMap_2__ctor_m1584615223_gshared (ConstantSplittableMap_2_t975553768 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C"  void ConstantSplittableMap_2_Split_m3318364013_gshared (ConstantSplittableMap_2_t975553768 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2106922848_gshared (KeyValuePair_2_t3842366416 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
extern "C"  bool KeyValuePair_2_get_Value_m1669764045_gshared (KeyValuePair_2_t3842366416 * __this, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
extern "C"  int32_t KeyValuePair_2_get_Key_m2635782095_gshared (KeyValuePair_2_t4237331251 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
extern "C"  int32_t KeyValuePair_2_get_Value_m1804680087_gshared (KeyValuePair_2_t4237331251 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void ReadOnlyDictionary_2__ctor_m1424822176_gshared (ReadOnlyDictionary_2_t2876963330 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C"  void ConstantSplittableMap_2__ctor_m2597123826_gshared (ConstantSplittableMap_2_t3408483122 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C"  void ConstantSplittableMap_2_Split_m524797523_gshared (ConstantSplittableMap_2_t3408483122 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m2436713626_gshared (KeyValuePair_2_t1980328474 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
extern "C"  KeyValuePair_2_t2530217319  KeyValuePair_2_get_Value_m2095377930_gshared (KeyValuePair_2_t1980328474 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void ReadOnlyDictionary_2__ctor_m1275927908_gshared (ReadOnlyDictionary_2_t4083313315 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C"  void ConstantSplittableMap_2__ctor_m46244548_gshared (ConstantSplittableMap_2_t319865811 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int64>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C"  void ConstantSplittableMap_2_Split_m564838166_gshared (ConstantSplittableMap_2_t319865811 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m1351363758_gshared (KeyValuePair_2_t3186678459 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Value()
extern "C"  int64_t KeyValuePair_2_get_Value_m3718382948_gshared (KeyValuePair_2_t3186678459 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int16,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void ReadOnlyDictionary_2__ctor_m119515751_gshared (ReadOnlyDictionary_2_t4269753028 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int16,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C"  void ConstantSplittableMap_2__ctor_m3254295153_gshared (ConstantSplittableMap_2_t506305524 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int16,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C"  void ConstantSplittableMap_2_Split_m1257898454_gshared (ConstantSplittableMap_2_t506305524 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Key()
extern "C"  int16_t KeyValuePair_2_get_Key_m3277879993_gshared (KeyValuePair_2_t3373118172 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1448500413_gshared (KeyValuePair_2_t3373118172 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void ReadOnlyDictionary_2__ctor_m163702474_gshared (ReadOnlyDictionary_2_t3981206481 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Char>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C"  void ConstantSplittableMap_2__ctor_m982374164_gshared (ConstantSplittableMap_2_t217758977 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Char>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C"  void ConstantSplittableMap_2_Split_m769420026_gshared (ConstantSplittableMap_2_t217758977 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>::get_Key()
extern "C"  RuntimeObject * KeyValuePair_2_get_Key_m347998276_gshared (KeyValuePair_2_t3084571625 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>::get_Value()
extern "C"  Il2CppChar KeyValuePair_2_get_Value_m3672048595_gshared (KeyValuePair_2_t3084571625 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void ReadOnlyDictionary_2__ctor_m2780183003_gshared (ReadOnlyDictionary_2_t3142085675 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C"  void ConstantSplittableMap_2__ctor_m3856857150_gshared (ConstantSplittableMap_2_t3673605467 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int64,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C"  void ConstantSplittableMap_2_Split_m882408943_gshared (ConstantSplittableMap_2_t3673605467 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::get_Key()
extern "C"  int64_t KeyValuePair_2_get_Key_m635992374_gshared (KeyValuePair_2_t2245450819 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m392474074_gshared (KeyValuePair_2_t2245450819 * __this, const RuntimeMethod* method);
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
extern "C"  void ReadOnlyDictionary_2__ctor_m3549648522_gshared (ReadOnlyDictionary_2_t3353713553 * __this, RuntimeObject* ___dictionary0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
extern "C"  void ConstantSplittableMap_2__ctor_m4144945432_gshared (ConstantSplittableMap_2_t3885233345 * __this, RuntimeObject* ___data0, const RuntimeMethod* method);
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
extern "C"  void ConstantSplittableMap_2_Split_m277985157_gshared (ConstantSplittableMap_2_t3885233345 * __this, RuntimeObject** ___firstPartition0, RuntimeObject** ___secondPartition1, const RuntimeMethod* method);
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::get_Key()
extern "C"  uint32_t KeyValuePair_2_get_Key_m1662296104_gshared (KeyValuePair_2_t2457078697 * __this, const RuntimeMethod* method);
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::get_Value()
extern "C"  RuntimeObject * KeyValuePair_2_get_Value_m1484005982_gshared (KeyValuePair_2_t2457078697 * __this, const RuntimeMethod* method);

// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::.ctor(System.Collections.Generic.IList`1<T>)
#define ReadOnlyCollection_1__ctor_m1966006039(__this, ___list0, method) ((  void (*) (ReadOnlyCollection_1_t3458027106 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m1966006039_gshared)(__this, ___list0, method)
// System.Void System.InvalidOperationException::.ctor(System.String)
extern "C"  void InvalidOperationException__ctor_m237278729 (InvalidOperationException_t56020091 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Exception::set_HResult(System.Int32)
extern "C"  void Exception_set_HResult_m3489164646 (Exception_t * __this, int32_t ___value0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
extern "C"  void ArgumentOutOfRangeException__ctor_m3628145864 (ArgumentOutOfRangeException_t777629997 * __this, String_t* ___paramName0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Collections.ObjectModel.ReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::.ctor(System.Collections.Generic.IList`1<T>)
#define ReadOnlyCollection_1__ctor_m254165444(__this, ___list0, method) ((  void (*) (ReadOnlyCollection_1_t3669654984 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyCollection_1__ctor_m254165444_gshared)(__this, ___list0, method)
// System.Void System.Collections.Generic.KeyNotFoundException::.ctor(System.String)
extern "C"  void KeyNotFoundException__ctor_m2696589580 (KeyNotFoundException_t2292407383 * __this, String_t* ___message0, const RuntimeMethod* method) IL2CPP_METHOD_ATTR;
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m245620443(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t2396221982 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m4259417880_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m1997543296(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t2396221982 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m2998943571_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m4184817181(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2530217319 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4184817181_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m1132502692(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2530217319 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1132502692_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define ReadOnlyDictionary_2__ctor_m3044404427(__this, ___dictionary0, method) ((  void (*) (ReadOnlyDictionary_2_t3426852175 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m3044404427_gshared)(__this, ___dictionary0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m4259417880(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t3958371967 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m4259417880_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m2998943571(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t3958371967 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m2998943571_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m2973773633(__this, method) ((  String_t* (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4184817181_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2151159939(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t968067334 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1132502692_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Guid,System.Type>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define ReadOnlyDictionary_2__ctor_m3720374228(__this, ___dictionary0, method) ((  void (*) (ReadOnlyDictionary_2_t532302020 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m2119190349_gshared)(__this, ___dictionary0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Type>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m4057205974(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t1063821812 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m2413510944_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Type>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m4122198191(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t1063821812 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m3822801152_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m4294704491(__this, method) ((  Guid_t  (*) (KeyValuePair_2_t231828568 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4294704491_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m2666064688(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t231828568 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2666064688_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Guid,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define ReadOnlyDictionary_2__ctor_m2119190349(__this, ___dictionary0, method) ((  void (*) (ReadOnlyDictionary_2_t1128463424 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m2119190349_gshared)(__this, ___dictionary0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m2413510944(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t1659983216 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m2413510944_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Guid,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m3822801152(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t1659983216 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m3822801152_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Guid,System.Type>::get_Key()
#define KeyValuePair_2_get_Key_m1325471274(__this, method) ((  Guid_t  (*) (KeyValuePair_2_t3930634460 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4294704491_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define ReadOnlyDictionary_2__ctor_m3621257446(__this, ___dictionary0, method) ((  void (*) (ReadOnlyDictionary_2_t968159222 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m3621257446_gshared)(__this, ___dictionary0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m3772921655(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t1499679014 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m3772921655_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int32,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m2176297438(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t1499679014 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m2176297438_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1839753989(__this, method) ((  int32_t (*) (KeyValuePair_2_t71524366 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1839753989_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m3495598764(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t71524366 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3495598764_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.String>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define ReadOnlyDictionary_2__ctor_m461640262(__this, ___dictionary0, method) ((  void (*) (ReadOnlyDictionary_2_t632046715 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m3044404427_gshared)(__this, ___dictionary0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.String>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m2462269511(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t1163566507 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m4259417880_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.String>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m890587491(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t1163566507 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m2998943571_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Key()
#define KeyValuePair_2_get_Key_m865914345(__this, method) ((  String_t* (*) (KeyValuePair_2_t4030379155 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4184817181_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.String>::get_Value()
#define KeyValuePair_2_get_Value_m1897740815(__this, method) ((  String_t* (*) (KeyValuePair_2_t4030379155 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1132502692_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Type>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define ReadOnlyDictionary_2__ctor_m515128087(__this, ___dictionary0, method) ((  void (*) (ReadOnlyDictionary_2_t1268540786 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m3044404427_gshared)(__this, ___dictionary0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Type>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m137017575(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t1800060578 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m4259417880_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Type>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m3390560063(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t1800060578 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m2998943571_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Type>::get_Key()
#define KeyValuePair_2_get_Key_m2656778124(__this, method) ((  String_t* (*) (KeyValuePair_2_t371905930 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m4184817181_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define ReadOnlyDictionary_2__ctor_m2131144993(__this, ___dictionary0, method) ((  void (*) (ReadOnlyDictionary_2_t1735541779 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m2579745724_gshared)(__this, ___dictionary0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Int32>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m2347350877(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t2267061571 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m2528261516_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m3256786513(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t2267061571 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m1776544164_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m1055012466(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2401056908 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1055012466_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m1308554439(__this, method) ((  int32_t (*) (KeyValuePair_2_t2401056908 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1308554439_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define ReadOnlyDictionary_2__ctor_m2579745724(__this, ___dictionary0, method) ((  void (*) (ReadOnlyDictionary_2_t3297691764 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m2579745724_gshared)(__this, ___dictionary0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int32>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m2528261516(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t3829211556 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m2528261516_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m1776544164(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t3829211556 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m1776544164_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m3340370308(__this, method) ((  String_t* (*) (KeyValuePair_2_t838906923 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1055012466_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m692097207(__this, method) ((  int32_t (*) (KeyValuePair_2_t838906923 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1308554439_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define ReadOnlyDictionary_2__ctor_m1629022071(__this, ___dictionary0, method) ((  void (*) (ReadOnlyDictionary_2_t3176851287 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m4089905679_gshared)(__this, ___dictionary0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Boolean>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m1702516145(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t3708371079 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m1584615223_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m3288519233(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t3708371079 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m3318364013_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Key()
#define KeyValuePair_2_get_Key_m2106922848(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3842366416 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2106922848_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>::get_Value()
#define KeyValuePair_2_get_Value_m1669764045(__this, method) ((  bool (*) (KeyValuePair_2_t3842366416 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1669764045_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define ReadOnlyDictionary_2__ctor_m4089905679(__this, ___dictionary0, method) ((  void (*) (ReadOnlyDictionary_2_t444033976 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m4089905679_gshared)(__this, ___dictionary0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Boolean>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m1584615223(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t975553768 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m1584615223_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m3318364013(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t975553768 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m3318364013_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Key()
#define KeyValuePair_2_get_Key_m1816659530(__this, method) ((  String_t* (*) (KeyValuePair_2_t2280216431 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2106922848_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>::get_Value()
#define KeyValuePair_2_get_Value_m608750205(__this, method) ((  bool (*) (KeyValuePair_2_t2280216431 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1669764045_gshared)(__this, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Key()
#define KeyValuePair_2_get_Key_m2635782095(__this, method) ((  int32_t (*) (KeyValuePair_2_t4237331251 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2635782095_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int32,System.Int32>::get_Value()
#define KeyValuePair_2_get_Value_m1804680087(__this, method) ((  int32_t (*) (KeyValuePair_2_t4237331251 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1804680087_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define ReadOnlyDictionary_2__ctor_m1424822176(__this, ___dictionary0, method) ((  void (*) (ReadOnlyDictionary_2_t2876963330 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m1424822176_gshared)(__this, ___dictionary0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m2597123826(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t3408483122 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m2597123826_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m524797523(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t3408483122 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m524797523_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
#define KeyValuePair_2_get_Key_m2436713626(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t1980328474 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m2436713626_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
#define KeyValuePair_2_get_Value_m2095377930(__this, method) ((  KeyValuePair_2_t2530217319  (*) (KeyValuePair_2_t1980328474 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m2095377930_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define ReadOnlyDictionary_2__ctor_m480558215(__this, ___dictionary0, method) ((  void (*) (ReadOnlyDictionary_2_t2521163330 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m1275927908_gshared)(__this, ___dictionary0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Int64>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m1114701518(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t3052683122 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m46244548_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Int64>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m2922592133(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t3052683122 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m564838166_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Key()
#define KeyValuePair_2_get_Key_m1351363758(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3186678459 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1351363758_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>::get_Value()
#define KeyValuePair_2_get_Value_m3718382948(__this, method) ((  int64_t (*) (KeyValuePair_2_t3186678459 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3718382948_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define ReadOnlyDictionary_2__ctor_m1275927908(__this, ___dictionary0, method) ((  void (*) (ReadOnlyDictionary_2_t4083313315 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m1275927908_gshared)(__this, ___dictionary0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int64>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m46244548(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t319865811 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m46244548_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Int64>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m564838166(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t319865811 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m564838166_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>::get_Key()
#define KeyValuePair_2_get_Key_m4089679062(__this, method) ((  String_t* (*) (KeyValuePair_2_t1624528474 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1351363758_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>::get_Value()
#define KeyValuePair_2_get_Value_m3349579743(__this, method) ((  int64_t (*) (KeyValuePair_2_t1624528474 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3718382948_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Type,System.Type>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define ReadOnlyDictionary_2__ctor_m1324428410(__this, ___dictionary0, method) ((  void (*) (ReadOnlyDictionary_2_t3927631551 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m3044404427_gshared)(__this, ___dictionary0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Type,System.Type>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m2711158636(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t164184047 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m4259417880_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Type,System.Type>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m829232429(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t164184047 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m2998943571_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int16,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define ReadOnlyDictionary_2__ctor_m119515751(__this, ___dictionary0, method) ((  void (*) (ReadOnlyDictionary_2_t4269753028 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m119515751_gshared)(__this, ___dictionary0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int16,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m3254295153(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t506305524 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m3254295153_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int16,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m1257898454(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t506305524 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m1257898454_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m3277879993(__this, method) ((  int16_t (*) (KeyValuePair_2_t3373118172 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m3277879993_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m1448500413(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3373118172 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1448500413_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.String,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define ReadOnlyDictionary_2__ctor_m2491777098(__this, ___dictionary0, method) ((  void (*) (ReadOnlyDictionary_2_t2419056496 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m163702474_gshared)(__this, ___dictionary0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Char>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m872198931(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t2950576288 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m982374164_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.String,System.Char>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m52071581(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t2950576288 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m769420026_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>::get_Key()
#define KeyValuePair_2_get_Key_m347998276(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t3084571625 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m347998276_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>::get_Value()
#define KeyValuePair_2_get_Value_m3672048595(__this, method) ((  Il2CppChar (*) (KeyValuePair_2_t3084571625 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3672048595_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Object,System.Char>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define ReadOnlyDictionary_2__ctor_m163702474(__this, ___dictionary0, method) ((  void (*) (ReadOnlyDictionary_2_t3981206481 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m163702474_gshared)(__this, ___dictionary0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Char>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m982374164(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t217758977 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m982374164_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Object,System.Char>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m769420026(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t217758977 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m769420026_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.String,System.Char>::get_Key()
#define KeyValuePair_2_get_Key_m1256714359(__this, method) ((  String_t* (*) (KeyValuePair_2_t1522421640 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m347998276_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.String,System.Char>::get_Value()
#define KeyValuePair_2_get_Value_m4279551231(__this, method) ((  Il2CppChar (*) (KeyValuePair_2_t1522421640 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m3672048595_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define ReadOnlyDictionary_2__ctor_m2780183003(__this, ___dictionary0, method) ((  void (*) (ReadOnlyDictionary_2_t3142085675 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m2780183003_gshared)(__this, ___dictionary0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int64,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m3856857150(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t3673605467 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m3856857150_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.Int64,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m882408943(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t3673605467 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m882408943_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m635992374(__this, method) ((  int64_t (*) (KeyValuePair_2_t2245450819 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m635992374_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m392474074(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2245450819 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m392474074_gshared)(__this, method)
// System.Void System.Collections.ObjectModel.ReadOnlyDictionary`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IDictionary`2<TKey,TValue>)
#define ReadOnlyDictionary_2__ctor_m3549648522(__this, ___dictionary0, method) ((  void (*) (ReadOnlyDictionary_2_t3353713553 *, RuntimeObject*, const RuntimeMethod*))ReadOnlyDictionary_2__ctor_m3549648522_gshared)(__this, ___dictionary0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Object>::.ctor(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>)
#define ConstantSplittableMap_2__ctor_m4144945432(__this, ___data0, method) ((  void (*) (ConstantSplittableMap_2_t3885233345 *, RuntimeObject*, const RuntimeMethod*))ConstantSplittableMap_2__ctor_m4144945432_gshared)(__this, ___data0, method)
// System.Void System.Runtime.InteropServices.WindowsRuntime.ConstantSplittableMap`2<System.UInt32,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&,System.Collections.Generic.IReadOnlyDictionary`2<TKey,TValue>&)
#define ConstantSplittableMap_2_Split_m277985157(__this, ___firstPartition0, ___secondPartition1, method) ((  void (*) (ConstantSplittableMap_2_t3885233345 *, RuntimeObject**, RuntimeObject**, const RuntimeMethod*))ConstantSplittableMap_2_Split_m277985157_gshared)(__this, ___firstPartition0, ___secondPartition1, method)
// TKey System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::get_Key()
#define KeyValuePair_2_get_Key_m1662296104(__this, method) ((  uint32_t (*) (KeyValuePair_2_t2457078697 *, const RuntimeMethod*))KeyValuePair_2_get_Key_m1662296104_gshared)(__this, method)
// TValue System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>::get_Value()
#define KeyValuePair_2_get_Value_m1484005982(__this, method) ((  RuntimeObject * (*) (KeyValuePair_2_t2457078697 *, const RuntimeMethod*))KeyValuePair_2_get_Value_m1484005982_gshared)(__this, method)
// Projected COM callable wrapper method for T Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::GetAt(System.UInt32)
il2cpp_hresult_t IVector_1_GetAt_m3124897496_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IKeyValuePair_2_t3270170437** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m3124897496_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	KeyValuePair_2_t2245450819  returnValue;
	try
	{
		try
		{
			returnValue = InterfaceFuncInvoker1< KeyValuePair_2_t2245450819 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Item(System.Int32) */, IList_1_t4060770602_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IKeyValuePair_2_t3270170437* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IKeyValuePair_2_t3270170437>(Box(KeyValuePair_2_t2245450819_il2cpp_TypeInfo_var, &returnValue));

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Size()
il2cpp_hresult_t IVector_1_get_Size_m874801668_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_get_Size_m874801668_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Count() */, ICollection_1_t778635757_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::GetView()
il2cpp_hresult_t IVector_1_GetView_m4097812691_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t1584316081** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m4097812691_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyList_1_t2809873725_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyCollection_1_t3458027106 * readOnlyCollection = (ReadOnlyCollection_1_t3458027106*)il2cpp_codegen_object_new(ReadOnlyCollection_1_t3458027106_il2cpp_TypeInfo_var);
			ReadOnlyCollection_1__ctor_m1966006039(readOnlyCollection, __thisValue, ReadOnlyCollection_1__ctor_m1966006039_RuntimeMethod_var);
			returnValue = readOnlyCollection;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IVectorView_1_t1584316081* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IVectorView_1_t1584316081::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IVectorView_1_t1584316081>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::IndexOf(T,System.UInt32&)
il2cpp_hresult_t IVector_1_IndexOf_m1464477667_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IKeyValuePair_2_t3270170437* ___value0, uint32_t* ___index1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_IndexOf_m1464477667_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___value0' to managed representation
	KeyValuePair_2_t2245450819  ____value0_unmarshaled;
	memset(&____value0_unmarshaled, 0, sizeof(____value0_unmarshaled));
	NullCheck(___value0);

	{
		Il2CppIManagedObjectHolder* ___value0_imanagedObject = NULL;
		il2cpp_hresult_t hr = (___value0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&___value0_imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			____value0_unmarshaled = *static_cast<KeyValuePair_2_t2245450819 *>(UnBox(___value0_imanagedObject->GetManagedObject(), KeyValuePair_2_t2245450819_il2cpp_TypeInfo_var));
			___value0_imanagedObject->Release();
		}
		else
		{
			KeyValuePair_2_t2245450819  ___value0Staging;
			int64_t ___value0KeyNative = 0;
			hr = (___value0)->IKeyValuePair_2_get_Key_m1937891137(&___value0KeyNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			___value0Staging.set_key_0(___value0KeyNative);

			Il2CppIInspectable* ___value0ValueNative = NULL;
			hr = (___value0)->IKeyValuePair_2_get_Value_m1356929877(&___value0ValueNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (___value0ValueNative != NULL)
			{
				___value0Staging.set_value_1(il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value0ValueNative, Il2CppComObject_il2cpp_TypeInfo_var));
			}
			else
			{
				___value0Staging.set_value_1(NULL);
			}

			if (___value0ValueNative != NULL)
			{
				(___value0ValueNative)->Release();
				___value0ValueNative = NULL;
			}

			____value0_unmarshaled = ___value0Staging;
		}
	}

	// Marshaling of parameter '___index1' to managed representation
	uint32_t ____index1_empty = 0;

	// Managed method invocation
	bool returnValue;
	try
	{
		____index1_empty = 0;
		returnValue = false;

		int elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Count() */, ICollection_1_t778635757_il2cpp_TypeInfo_var, __this);
		for (int i = 0; i < elementsInCollection; i++)
		{
			KeyValuePair_2_t2245450819  item = InterfaceFuncInvoker1< KeyValuePair_2_t2245450819 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Item(System.Int32) */, IList_1_t4060770602_il2cpp_TypeInfo_var, __this, i);
			if (VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, Box(KeyValuePair_2_t2245450819_il2cpp_TypeInfo_var, &item), Box(KeyValuePair_2_t2245450819_il2cpp_TypeInfo_var, &____value0_unmarshaled)))
			{
				____index1_empty = static_cast<uint32_t>(i);
				returnValue = true;
				break;
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___index1' back from managed representation
	*___index1 = ____index1_empty;

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::SetAt(System.UInt32,T)
il2cpp_hresult_t IVector_1_SetAt_m603593208_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IKeyValuePair_2_t3270170437* ___value1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_SetAt_m603593208_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	KeyValuePair_2_t2245450819  ____value1_unmarshaled;
	memset(&____value1_unmarshaled, 0, sizeof(____value1_unmarshaled));
	NullCheck(___value1);

	{
		Il2CppIManagedObjectHolder* ___value1_imanagedObject = NULL;
		il2cpp_hresult_t hr = (___value1)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&___value1_imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			____value1_unmarshaled = *static_cast<KeyValuePair_2_t2245450819 *>(UnBox(___value1_imanagedObject->GetManagedObject(), KeyValuePair_2_t2245450819_il2cpp_TypeInfo_var));
			___value1_imanagedObject->Release();
		}
		else
		{
			KeyValuePair_2_t2245450819  ___value1Staging;
			int64_t ___value1KeyNative = 0;
			hr = (___value1)->IKeyValuePair_2_get_Key_m1937891137(&___value1KeyNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			___value1Staging.set_key_0(___value1KeyNative);

			Il2CppIInspectable* ___value1ValueNative = NULL;
			hr = (___value1)->IKeyValuePair_2_get_Value_m1356929877(&___value1ValueNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (___value1ValueNative != NULL)
			{
				___value1Staging.set_value_1(il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1ValueNative, Il2CppComObject_il2cpp_TypeInfo_var));
			}
			else
			{
				___value1Staging.set_value_1(NULL);
			}

			if (___value1ValueNative != NULL)
			{
				(___value1ValueNative)->Release();
				___value1ValueNative = NULL;
			}

			____value1_unmarshaled = ___value1Staging;
		}
	}

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker2< int32_t, KeyValuePair_2_t2245450819  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::set_Item(System.Int32,T) */, IList_1_t4060770602_il2cpp_TypeInfo_var, __this, ___index0, ____value1_unmarshaled);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::InsertAt(System.UInt32,T)
il2cpp_hresult_t IVector_1_InsertAt_m403823273_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IKeyValuePair_2_t3270170437* ___value1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_InsertAt_m403823273_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	KeyValuePair_2_t2245450819  ____value1_unmarshaled;
	memset(&____value1_unmarshaled, 0, sizeof(____value1_unmarshaled));
	NullCheck(___value1);

	{
		Il2CppIManagedObjectHolder* ___value1_imanagedObject = NULL;
		il2cpp_hresult_t hr = (___value1)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&___value1_imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			____value1_unmarshaled = *static_cast<KeyValuePair_2_t2245450819 *>(UnBox(___value1_imanagedObject->GetManagedObject(), KeyValuePair_2_t2245450819_il2cpp_TypeInfo_var));
			___value1_imanagedObject->Release();
		}
		else
		{
			KeyValuePair_2_t2245450819  ___value1Staging;
			int64_t ___value1KeyNative = 0;
			hr = (___value1)->IKeyValuePair_2_get_Key_m1937891137(&___value1KeyNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			___value1Staging.set_key_0(___value1KeyNative);

			Il2CppIInspectable* ___value1ValueNative = NULL;
			hr = (___value1)->IKeyValuePair_2_get_Value_m1356929877(&___value1ValueNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (___value1ValueNative != NULL)
			{
				___value1Staging.set_value_1(il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1ValueNative, Il2CppComObject_il2cpp_TypeInfo_var));
			}
			else
			{
				___value1Staging.set_value_1(NULL);
			}

			if (___value1ValueNative != NULL)
			{
				(___value1ValueNative)->Release();
				___value1ValueNative = NULL;
			}

			____value1_unmarshaled = ___value1Staging;
		}
	}

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker2< int32_t, KeyValuePair_2_t2245450819  >::Invoke(3 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Insert(System.Int32,T) */, IList_1_t4060770602_il2cpp_TypeInfo_var, __this, ___index0, ____value1_unmarshaled);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::RemoveAt(System.UInt32)
il2cpp_hresult_t IVector_1_RemoveAt_m4103204621_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_RemoveAt_m4103204621_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::RemoveAt(System.Int32) */, IList_1_t4060770602_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Append(T)
il2cpp_hresult_t IVector_1_Append_m2914172346_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IKeyValuePair_2_t3270170437* ___value0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_Append_m2914172346_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___value0' to managed representation
	KeyValuePair_2_t2245450819  ____value0_unmarshaled;
	memset(&____value0_unmarshaled, 0, sizeof(____value0_unmarshaled));
	NullCheck(___value0);

	{
		Il2CppIManagedObjectHolder* ___value0_imanagedObject = NULL;
		il2cpp_hresult_t hr = (___value0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&___value0_imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			____value0_unmarshaled = *static_cast<KeyValuePair_2_t2245450819 *>(UnBox(___value0_imanagedObject->GetManagedObject(), KeyValuePair_2_t2245450819_il2cpp_TypeInfo_var));
			___value0_imanagedObject->Release();
		}
		else
		{
			KeyValuePair_2_t2245450819  ___value0Staging;
			int64_t ___value0KeyNative = 0;
			hr = (___value0)->IKeyValuePair_2_get_Key_m1937891137(&___value0KeyNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			___value0Staging.set_key_0(___value0KeyNative);

			Il2CppIInspectable* ___value0ValueNative = NULL;
			hr = (___value0)->IKeyValuePair_2_get_Value_m1356929877(&___value0ValueNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (___value0ValueNative != NULL)
			{
				___value0Staging.set_value_1(il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value0ValueNative, Il2CppComObject_il2cpp_TypeInfo_var));
			}
			else
			{
				___value0Staging.set_value_1(NULL);
			}

			if (___value0ValueNative != NULL)
			{
				(___value0ValueNative)->Release();
				___value0ValueNative = NULL;
			}

			____value0_unmarshaled = ___value0Staging;
		}
	}

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker1< KeyValuePair_2_t2245450819  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Add(T) */, ICollection_1_t778635757_il2cpp_TypeInfo_var, __thisValue, ____value0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::RemoveAtEnd()
il2cpp_hresult_t IVector_1_RemoveAtEnd_m2473712616_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_RemoveAtEnd_m2473712616_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Count() */, ICollection_1_t778635757_il2cpp_TypeInfo_var, __thisValue);
		if (itemsInCollection == 0)
		{
			InvalidOperationException_t56020091 * exception = (InvalidOperationException_t56020091*)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m237278729(exception, _stringLiteral1050527596, NULL);
			Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(exception,NULL);
		}
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::RemoveAt(System.Int32) */, IList_1_t4060770602_il2cpp_TypeInfo_var, __thisValue, itemsInCollection - 1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Clear()
il2cpp_hresult_t IVector_1_Clear_m1678107825_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_Clear_m1678107825_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Clear() */, ICollection_1_t778635757_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::GetMany(System.UInt32,T[])
il2cpp_hresult_t IVector_1_GetMany_m257510634_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IKeyValuePair_2_t3270170437** ___items1, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m257510634_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		uint32_t elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Count() */, ICollection_1_t778635757_il2cpp_TypeInfo_var, __this);
		if (___startIndex0 != elementsInCollection && ___items1 != NULL)
		{
			if (___startIndex0 > elementsInCollection || ___startIndex0 > 2147483647)
			{
				ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m3628145864(exception, _stringLiteral797640427, NULL);
				Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception,NULL);
			}
			returnValue = std::min(___items1ArraySize, elementsInCollection - ___startIndex0);
			for (uint32_t i = 0; i < returnValue; i++)
			{
				KeyValuePair_2_t2245450819  itemManaged = InterfaceFuncInvoker1< KeyValuePair_2_t2245450819 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Item(System.Int32) */, IList_1_t4060770602_il2cpp_TypeInfo_var, __this, i + ___startIndex0);
				___items1[i] = il2cpp_codegen_com_get_or_create_ccw<IKeyValuePair_2_t3270170437>(Box(KeyValuePair_2_t2245450819_il2cpp_TypeInfo_var, &itemManaged));
			}
		}
		else
		{
			returnValue = 0;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::ReplaceAll(T[])
il2cpp_hresult_t IVector_1_ReplaceAll_m618106076_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, IKeyValuePair_2_t3270170437** ___items0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_ReplaceAll_m618106076_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___items0' to managed representation
	KeyValuePair_2U5BU5D_t3818836818* ____items0_unmarshaled = NULL;
	if (___items0 != NULL)
	{
		if (____items0_unmarshaled == NULL)
		{
			____items0_unmarshaled = reinterpret_cast<KeyValuePair_2U5BU5D_t3818836818*>(SZArrayNew(KeyValuePair_2U5BU5D_t3818836818_il2cpp_TypeInfo_var, static_cast<int32_t>(___items0ArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (____items0_unmarshaled)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			KeyValuePair_2_t2245450819  ____items0_i__unmarshaled;
			memset(&____items0_i__unmarshaled, 0, sizeof(____items0_i__unmarshaled));
			NullCheck((___items0)[i]);

			{
				Il2CppIManagedObjectHolder* ___items0_i__imanagedObject = NULL;
				il2cpp_hresult_t hr = ((___items0)[i])->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&___items0_i__imanagedObject));
				if (IL2CPP_HR_SUCCEEDED(hr))
				{
					____items0_i__unmarshaled = *static_cast<KeyValuePair_2_t2245450819 *>(UnBox(___items0_i__imanagedObject->GetManagedObject(), KeyValuePair_2_t2245450819_il2cpp_TypeInfo_var));
					___items0_i__imanagedObject->Release();
				}
				else
				{
					KeyValuePair_2_t2245450819  ___items0_i_Staging;
					int64_t ___items0_i_KeyNative = 0;
					hr = ((___items0)[i])->IKeyValuePair_2_get_Key_m1937891137(&___items0_i_KeyNative);
					il2cpp_codegen_com_raise_exception_if_failed(hr, false);

					___items0_i_Staging.set_key_0(___items0_i_KeyNative);

					Il2CppIInspectable* ___items0_i_ValueNative = NULL;
					hr = ((___items0)[i])->IKeyValuePair_2_get_Value_m1356929877(&___items0_i_ValueNative);
					il2cpp_codegen_com_raise_exception_if_failed(hr, false);

					if (___items0_i_ValueNative != NULL)
					{
						___items0_i_Staging.set_value_1(il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___items0_i_ValueNative, Il2CppComObject_il2cpp_TypeInfo_var));
					}
					else
					{
						___items0_i_Staging.set_value_1(NULL);
					}

					if (___items0_i_ValueNative != NULL)
					{
						(___items0_i_ValueNative)->Release();
						___items0_i_ValueNative = NULL;
					}

					____items0_i__unmarshaled = ___items0_i_Staging;
				}
			}
			(____items0_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), ____items0_i__unmarshaled);
		}
	}

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Clear() */, ICollection_1_t778635757_il2cpp_TypeInfo_var, __thisValue);
		if (____items0_unmarshaled != NULL)
		{
			il2cpp_array_size_t itemsInCollection = ____items0_unmarshaled->max_length;
			for (il2cpp_array_size_t i = 0; i < itemsInCollection; i++)
			{
				InterfaceActionInvoker1< KeyValuePair_2_t2245450819  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Add(T) */, ICollection_1_t778635757_il2cpp_TypeInfo_var, __thisValue, (____items0_unmarshaled)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Windows.Foundation.Collections.IIterator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>> adapter
struct IIterator_1_t119594292_Adapter IL2CPP_FINAL : il2cpp::vm::NonCachedCCWBase<IIterator_1_t119594292_Adapter>, IIterator_1_t119594292
{
	inline IIterator_1_t119594292_Adapter(RuntimeObject* obj) : il2cpp::vm::NonCachedCCWBase<IIterator_1_t119594292_Adapter>(obj), _initialized(false), _hasCurrent(false) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterator_1_t119594292::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterator_1_t119594292*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IIterator_1_t119594292::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetRuntimeClassName(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_Current_m3547052056(IKeyValuePair_2_t3270170437** comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_HasCurrent_m344842528(bool* comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_MoveNext_m1308250629(bool* comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_GetMany_m3058286030(uint32_t ___items0ArraySize, IKeyValuePair_2_t3270170437** ___items0, uint32_t* comReturnValue) IL2CPP_OVERRIDE;
private:
	bool _initialized;
	bool _hasCurrent;
	il2cpp_hresult_t Initialize();
	il2cpp_hresult_t GetCurrent(IKeyValuePair_2_t3270170437** comReturnValue);
	il2cpp_hresult_t MoveNext(bool* comReturnValue);
};
il2cpp_hresult_t IIterator_1_t119594292_Adapter::IIterator_1_get_Current_m3547052056(IKeyValuePair_2_t3270170437** comReturnValue)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		*comReturnValue = NULL;
		return hr;
	}
	return GetCurrent(comReturnValue);
}
il2cpp_hresult_t IIterator_1_t119594292_Adapter::IIterator_1_get_HasCurrent_m344842528(bool* comReturnValue)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		*comReturnValue = false;
		return hr;
	}
	*comReturnValue = _hasCurrent;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t119594292_Adapter::IIterator_1_MoveNext_m1308250629(bool* comReturnValue)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		*comReturnValue = false;
		return hr;
	}
	hr = MoveNext(&_hasCurrent);
	*comReturnValue = _hasCurrent;
	return hr;
}
il2cpp_hresult_t IIterator_1_t119594292_Adapter::IIterator_1_GetMany_m3058286030(uint32_t ___items0ArraySize, IKeyValuePair_2_t3270170437** ___items0, uint32_t* comReturnValue)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		*comReturnValue = 0;
		return hr;
	}
	uint32_t count = 0;
	for (; _hasCurrent && (count < ___items0ArraySize); ++count)
	{
		hr = GetCurrent(___items0 + count);
		if (IL2CPP_HR_FAILED(hr))
		{
			*comReturnValue = count;
			return hr;
		}
		hr = MoveNext(&_hasCurrent);
		if (IL2CPP_HR_FAILED(hr))
		{
			*comReturnValue = count + 1;
			return hr;
		}
	}
	*comReturnValue = count;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t119594292_Adapter::Initialize()
{
	if (_initialized)
	{
		return IL2CPP_S_OK;
	}
	il2cpp_hresult_t hr = MoveNext(&_hasCurrent);
	_initialized = IL2CPP_HR_SUCCEEDED(hr);
	return hr;
}
il2cpp_hresult_t IIterator_1_t119594292_Adapter::GetCurrent(IKeyValuePair_2_t3270170437** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterator_1_t119594292_Adapter_GetCurrent_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Managed method invocation
	KeyValuePair_2_t2245450819  returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)GetManagedObjectInline();
		returnValue = InterfaceFuncInvoker0< KeyValuePair_2_t2245450819  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Current() */, IEnumerator_1_t2678021287_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return (ex.ex->hresult == IL2CPP_COR_E_INVALIDOPERATION) ? IL2CPP_E_BOUNDS : ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IKeyValuePair_2_t3270170437* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IKeyValuePair_2_t3270170437>(Box(KeyValuePair_2_t2245450819_il2cpp_TypeInfo_var, &returnValue));

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t119594292_Adapter::MoveNext(bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterator_1_t119594292_Adapter_MoveNext_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)GetManagedObjectInline();
		returnValue = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for Windows.Foundation.Collections.IIterator`1<T> Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::First()
il2cpp_hresult_t IIterable_1_First_m1699614814_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t119594292** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterable_1_First_m1699614814_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::GetEnumerator() */, IEnumerable_1_t1225303708_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = (returnValue != NULL) ? IIterator_1_t119594292_Adapter::__CreateInstance(returnValue) : NULL;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for T Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::GetAt(System.UInt32)
il2cpp_hresult_t IVectorView_1_GetAt_m3698596162_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IKeyValuePair_2_t3270170437** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m3698596162_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	KeyValuePair_2_t2245450819  returnValue;
	try
	{
		try
		{
			returnValue = InterfaceFuncInvoker1< KeyValuePair_2_t2245450819 , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Item(System.Int32) */, IReadOnlyList_1_t2809873725_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IKeyValuePair_2_t3270170437* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IKeyValuePair_2_t3270170437>(Box(KeyValuePair_2_t2245450819_il2cpp_TypeInfo_var, &returnValue));

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Size()
il2cpp_hresult_t IVectorView_1_get_Size_m3315242568_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_get_Size_m3315242568_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Count() */, IReadOnlyCollection_1_t2248566756_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::IndexOf(T,System.UInt32&)
il2cpp_hresult_t IVectorView_1_IndexOf_m195073214_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IKeyValuePair_2_t3270170437* ___value0, uint32_t* ___index1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_IndexOf_m195073214_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___value0' to managed representation
	KeyValuePair_2_t2245450819  ____value0_unmarshaled;
	memset(&____value0_unmarshaled, 0, sizeof(____value0_unmarshaled));
	NullCheck(___value0);

	{
		Il2CppIManagedObjectHolder* ___value0_imanagedObject = NULL;
		il2cpp_hresult_t hr = (___value0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&___value0_imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			____value0_unmarshaled = *static_cast<KeyValuePair_2_t2245450819 *>(UnBox(___value0_imanagedObject->GetManagedObject(), KeyValuePair_2_t2245450819_il2cpp_TypeInfo_var));
			___value0_imanagedObject->Release();
		}
		else
		{
			KeyValuePair_2_t2245450819  ___value0Staging;
			int64_t ___value0KeyNative = 0;
			hr = (___value0)->IKeyValuePair_2_get_Key_m1937891137(&___value0KeyNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			___value0Staging.set_key_0(___value0KeyNative);

			Il2CppIInspectable* ___value0ValueNative = NULL;
			hr = (___value0)->IKeyValuePair_2_get_Value_m1356929877(&___value0ValueNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (___value0ValueNative != NULL)
			{
				___value0Staging.set_value_1(il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value0ValueNative, Il2CppComObject_il2cpp_TypeInfo_var));
			}
			else
			{
				___value0Staging.set_value_1(NULL);
			}

			if (___value0ValueNative != NULL)
			{
				(___value0ValueNative)->Release();
				___value0ValueNative = NULL;
			}

			____value0_unmarshaled = ___value0Staging;
		}
	}

	// Marshaling of parameter '___index1' to managed representation
	uint32_t ____index1_empty = 0;

	// Managed method invocation
	bool returnValue;
	try
	{
		____index1_empty = 0;
		returnValue = false;

		int elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Count() */, IReadOnlyCollection_1_t2248566756_il2cpp_TypeInfo_var, __this);
		for (int i = 0; i < elementsInCollection; i++)
		{
			KeyValuePair_2_t2245450819  item = InterfaceFuncInvoker1< KeyValuePair_2_t2245450819 , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Item(System.Int32) */, IReadOnlyList_1_t2809873725_il2cpp_TypeInfo_var, __this, i);
			if (VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, Box(KeyValuePair_2_t2245450819_il2cpp_TypeInfo_var, &item), Box(KeyValuePair_2_t2245450819_il2cpp_TypeInfo_var, &____value0_unmarshaled)))
			{
				____index1_empty = static_cast<uint32_t>(i);
				returnValue = true;
				break;
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___index1' back from managed representation
	*___index1 = ____index1_empty;

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::GetMany(System.UInt32,T[])
il2cpp_hresult_t IVectorView_1_GetMany_m1367398776_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IKeyValuePair_2_t3270170437** ___items1, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m1367398776_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		uint32_t elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Count() */, IReadOnlyCollection_1_t2248566756_il2cpp_TypeInfo_var, __this);
		if (___startIndex0 != elementsInCollection && ___items1 != NULL)
		{
			if (___startIndex0 > elementsInCollection || ___startIndex0 > 2147483647)
			{
				ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m3628145864(exception, _stringLiteral797640427, NULL);
				Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception,NULL);
			}
			returnValue = std::min(___items1ArraySize, elementsInCollection - ___startIndex0);
			for (uint32_t i = 0; i < returnValue; i++)
			{
				KeyValuePair_2_t2245450819  itemManaged = InterfaceFuncInvoker1< KeyValuePair_2_t2245450819 , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Item(System.Int32) */, IReadOnlyList_1_t2809873725_il2cpp_TypeInfo_var, __this, i + ___startIndex0);
				___items1[i] = il2cpp_codegen_com_get_or_create_ccw<IKeyValuePair_2_t3270170437>(Box(KeyValuePair_2_t2245450819_il2cpp_TypeInfo_var, &itemManaged));
			}
		}
		else
		{
			returnValue = 0;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for T Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::GetAt(System.UInt32)
il2cpp_hresult_t IVector_1_GetAt_m1090173897_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IKeyValuePair_2_t3481798315** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetAt_m1090173897_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	KeyValuePair_2_t2457078697  returnValue;
	try
	{
		try
		{
			returnValue = InterfaceFuncInvoker1< KeyValuePair_2_t2457078697 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Item(System.Int32) */, IList_1_t4272398480_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IKeyValuePair_2_t3481798315* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IKeyValuePair_2_t3481798315>(Box(KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var, &returnValue));

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Size()
il2cpp_hresult_t IVector_1_get_Size_m3383550533_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_get_Size_m3383550533_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Count() */, ICollection_1_t990263635_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyList`1<T> Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::GetView()
il2cpp_hresult_t IVector_1_GetView_m1790084502_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IVectorView_1_t1795943959** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetView_m1790084502_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyList_1_t3021501603_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyCollection_1_t3669654984 * readOnlyCollection = (ReadOnlyCollection_1_t3669654984*)il2cpp_codegen_object_new(ReadOnlyCollection_1_t3669654984_il2cpp_TypeInfo_var);
			ReadOnlyCollection_1__ctor_m254165444(readOnlyCollection, __thisValue, ReadOnlyCollection_1__ctor_m254165444_RuntimeMethod_var);
			returnValue = readOnlyCollection;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IVectorView_1_t1795943959* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IVectorView_1_t1795943959::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IVectorView_1_t1795943959>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::IndexOf(T,System.UInt32&)
il2cpp_hresult_t IVector_1_IndexOf_m1347610173_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IKeyValuePair_2_t3481798315* ___value0, uint32_t* ___index1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_IndexOf_m1347610173_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___value0' to managed representation
	KeyValuePair_2_t2457078697  ____value0_unmarshaled;
	memset(&____value0_unmarshaled, 0, sizeof(____value0_unmarshaled));
	NullCheck(___value0);

	{
		Il2CppIManagedObjectHolder* ___value0_imanagedObject = NULL;
		il2cpp_hresult_t hr = (___value0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&___value0_imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			____value0_unmarshaled = *static_cast<KeyValuePair_2_t2457078697 *>(UnBox(___value0_imanagedObject->GetManagedObject(), KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var));
			___value0_imanagedObject->Release();
		}
		else
		{
			KeyValuePair_2_t2457078697  ___value0Staging;
			uint32_t ___value0KeyNative = 0;
			hr = (___value0)->IKeyValuePair_2_get_Key_m2175672871(&___value0KeyNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			___value0Staging.set_key_0(___value0KeyNative);

			Il2CppIInspectable* ___value0ValueNative = NULL;
			hr = (___value0)->IKeyValuePair_2_get_Value_m3078130594(&___value0ValueNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (___value0ValueNative != NULL)
			{
				___value0Staging.set_value_1(il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value0ValueNative, Il2CppComObject_il2cpp_TypeInfo_var));
			}
			else
			{
				___value0Staging.set_value_1(NULL);
			}

			if (___value0ValueNative != NULL)
			{
				(___value0ValueNative)->Release();
				___value0ValueNative = NULL;
			}

			____value0_unmarshaled = ___value0Staging;
		}
	}

	// Marshaling of parameter '___index1' to managed representation
	uint32_t ____index1_empty = 0;

	// Managed method invocation
	bool returnValue;
	try
	{
		____index1_empty = 0;
		returnValue = false;

		int elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Count() */, ICollection_1_t990263635_il2cpp_TypeInfo_var, __this);
		for (int i = 0; i < elementsInCollection; i++)
		{
			KeyValuePair_2_t2457078697  item = InterfaceFuncInvoker1< KeyValuePair_2_t2457078697 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Item(System.Int32) */, IList_1_t4272398480_il2cpp_TypeInfo_var, __this, i);
			if (VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, Box(KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var, &item), Box(KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var, &____value0_unmarshaled)))
			{
				____index1_empty = static_cast<uint32_t>(i);
				returnValue = true;
				break;
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___index1' back from managed representation
	*___index1 = ____index1_empty;

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::SetAt(System.UInt32,T)
il2cpp_hresult_t IVector_1_SetAt_m2438018550_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IKeyValuePair_2_t3481798315* ___value1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_SetAt_m2438018550_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	KeyValuePair_2_t2457078697  ____value1_unmarshaled;
	memset(&____value1_unmarshaled, 0, sizeof(____value1_unmarshaled));
	NullCheck(___value1);

	{
		Il2CppIManagedObjectHolder* ___value1_imanagedObject = NULL;
		il2cpp_hresult_t hr = (___value1)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&___value1_imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			____value1_unmarshaled = *static_cast<KeyValuePair_2_t2457078697 *>(UnBox(___value1_imanagedObject->GetManagedObject(), KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var));
			___value1_imanagedObject->Release();
		}
		else
		{
			KeyValuePair_2_t2457078697  ___value1Staging;
			uint32_t ___value1KeyNative = 0;
			hr = (___value1)->IKeyValuePair_2_get_Key_m2175672871(&___value1KeyNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			___value1Staging.set_key_0(___value1KeyNative);

			Il2CppIInspectable* ___value1ValueNative = NULL;
			hr = (___value1)->IKeyValuePair_2_get_Value_m3078130594(&___value1ValueNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (___value1ValueNative != NULL)
			{
				___value1Staging.set_value_1(il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1ValueNative, Il2CppComObject_il2cpp_TypeInfo_var));
			}
			else
			{
				___value1Staging.set_value_1(NULL);
			}

			if (___value1ValueNative != NULL)
			{
				(___value1ValueNative)->Release();
				___value1ValueNative = NULL;
			}

			____value1_unmarshaled = ___value1Staging;
		}
	}

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker2< int32_t, KeyValuePair_2_t2457078697  >::Invoke(1 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::set_Item(System.Int32,T) */, IList_1_t4272398480_il2cpp_TypeInfo_var, __this, ___index0, ____value1_unmarshaled);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::InsertAt(System.UInt32,T)
il2cpp_hresult_t IVector_1_InsertAt_m3473244934_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IKeyValuePair_2_t3481798315* ___value1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_InsertAt_m3473244934_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	KeyValuePair_2_t2457078697  ____value1_unmarshaled;
	memset(&____value1_unmarshaled, 0, sizeof(____value1_unmarshaled));
	NullCheck(___value1);

	{
		Il2CppIManagedObjectHolder* ___value1_imanagedObject = NULL;
		il2cpp_hresult_t hr = (___value1)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&___value1_imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			____value1_unmarshaled = *static_cast<KeyValuePair_2_t2457078697 *>(UnBox(___value1_imanagedObject->GetManagedObject(), KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var));
			___value1_imanagedObject->Release();
		}
		else
		{
			KeyValuePair_2_t2457078697  ___value1Staging;
			uint32_t ___value1KeyNative = 0;
			hr = (___value1)->IKeyValuePair_2_get_Key_m2175672871(&___value1KeyNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			___value1Staging.set_key_0(___value1KeyNative);

			Il2CppIInspectable* ___value1ValueNative = NULL;
			hr = (___value1)->IKeyValuePair_2_get_Value_m3078130594(&___value1ValueNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (___value1ValueNative != NULL)
			{
				___value1Staging.set_value_1(il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1ValueNative, Il2CppComObject_il2cpp_TypeInfo_var));
			}
			else
			{
				___value1Staging.set_value_1(NULL);
			}

			if (___value1ValueNative != NULL)
			{
				(___value1ValueNative)->Release();
				___value1ValueNative = NULL;
			}

			____value1_unmarshaled = ___value1Staging;
		}
	}

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker2< int32_t, KeyValuePair_2_t2457078697  >::Invoke(3 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::Insert(System.Int32,T) */, IList_1_t4272398480_il2cpp_TypeInfo_var, __this, ___index0, ____value1_unmarshaled);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::RemoveAt(System.UInt32)
il2cpp_hresult_t IVector_1_RemoveAt_m3651251296_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_RemoveAt_m3651251296_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		try
		{
			InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::RemoveAt(System.Int32) */, IList_1_t4272398480_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::Append(T)
il2cpp_hresult_t IVector_1_Append_m4008576553_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IKeyValuePair_2_t3481798315* ___value0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_Append_m4008576553_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___value0' to managed representation
	KeyValuePair_2_t2457078697  ____value0_unmarshaled;
	memset(&____value0_unmarshaled, 0, sizeof(____value0_unmarshaled));
	NullCheck(___value0);

	{
		Il2CppIManagedObjectHolder* ___value0_imanagedObject = NULL;
		il2cpp_hresult_t hr = (___value0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&___value0_imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			____value0_unmarshaled = *static_cast<KeyValuePair_2_t2457078697 *>(UnBox(___value0_imanagedObject->GetManagedObject(), KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var));
			___value0_imanagedObject->Release();
		}
		else
		{
			KeyValuePair_2_t2457078697  ___value0Staging;
			uint32_t ___value0KeyNative = 0;
			hr = (___value0)->IKeyValuePair_2_get_Key_m2175672871(&___value0KeyNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			___value0Staging.set_key_0(___value0KeyNative);

			Il2CppIInspectable* ___value0ValueNative = NULL;
			hr = (___value0)->IKeyValuePair_2_get_Value_m3078130594(&___value0ValueNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (___value0ValueNative != NULL)
			{
				___value0Staging.set_value_1(il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value0ValueNative, Il2CppComObject_il2cpp_TypeInfo_var));
			}
			else
			{
				___value0Staging.set_value_1(NULL);
			}

			if (___value0ValueNative != NULL)
			{
				(___value0ValueNative)->Release();
				___value0ValueNative = NULL;
			}

			____value0_unmarshaled = ___value0Staging;
		}
	}

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker1< KeyValuePair_2_t2457078697  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::Add(T) */, ICollection_1_t990263635_il2cpp_TypeInfo_var, __thisValue, ____value0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::RemoveAtEnd()
il2cpp_hresult_t IVector_1_RemoveAtEnd_m3823104315_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_RemoveAtEnd_m3823104315_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Count() */, ICollection_1_t990263635_il2cpp_TypeInfo_var, __thisValue);
		if (itemsInCollection == 0)
		{
			InvalidOperationException_t56020091 * exception = (InvalidOperationException_t56020091*)il2cpp_codegen_object_new(InvalidOperationException_t56020091_il2cpp_TypeInfo_var);
			InvalidOperationException__ctor_m237278729(exception, _stringLiteral1050527596, NULL);
			Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(exception,NULL);
		}
		InterfaceActionInvoker1< int32_t >::Invoke(4 /* System.Void System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::RemoveAt(System.Int32) */, IList_1_t4272398480_il2cpp_TypeInfo_var, __thisValue, itemsInCollection - 1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::Clear()
il2cpp_hresult_t IVector_1_Clear_m121801865_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_Clear_m121801865_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::Clear() */, ICollection_1_t990263635_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::GetMany(System.UInt32,T[])
il2cpp_hresult_t IVector_1_GetMany_m1085726944_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IKeyValuePair_2_t3481798315** ___items1, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_GetMany_m1085726944_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		uint32_t elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Count() */, ICollection_1_t990263635_il2cpp_TypeInfo_var, __this);
		if (___startIndex0 != elementsInCollection && ___items1 != NULL)
		{
			if (___startIndex0 > elementsInCollection || ___startIndex0 > 2147483647)
			{
				ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m3628145864(exception, _stringLiteral797640427, NULL);
				Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception,NULL);
			}
			returnValue = std::min(___items1ArraySize, elementsInCollection - ___startIndex0);
			for (uint32_t i = 0; i < returnValue; i++)
			{
				KeyValuePair_2_t2457078697  itemManaged = InterfaceFuncInvoker1< KeyValuePair_2_t2457078697 , int32_t >::Invoke(0 /* T System.Collections.Generic.IList`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Item(System.Int32) */, IList_1_t4272398480_il2cpp_TypeInfo_var, __this, i + ___startIndex0);
				___items1[i] = il2cpp_codegen_com_get_or_create_ccw<IKeyValuePair_2_t3481798315>(Box(KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var, &itemManaged));
			}
		}
		else
		{
			returnValue = 0;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IVector`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::ReplaceAll(T[])
il2cpp_hresult_t IVector_1_ReplaceAll_m286104263_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___items0ArraySize, IKeyValuePair_2_t3481798315** ___items0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVector_1_ReplaceAll_m286104263_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___items0' to managed representation
	KeyValuePair_2U5BU5D_t2544954260* ____items0_unmarshaled = NULL;
	if (___items0 != NULL)
	{
		if (____items0_unmarshaled == NULL)
		{
			____items0_unmarshaled = reinterpret_cast<KeyValuePair_2U5BU5D_t2544954260*>(SZArrayNew(KeyValuePair_2U5BU5D_t2544954260_il2cpp_TypeInfo_var, static_cast<int32_t>(___items0ArraySize)));
		}
		il2cpp_array_size_t _arrayLength = (____items0_unmarshaled)->max_length;
		for (int32_t i = 0; i < ARRAY_LENGTH_AS_INT32(_arrayLength); i++)
		{
			KeyValuePair_2_t2457078697  ____items0_i__unmarshaled;
			memset(&____items0_i__unmarshaled, 0, sizeof(____items0_i__unmarshaled));
			NullCheck((___items0)[i]);

			{
				Il2CppIManagedObjectHolder* ___items0_i__imanagedObject = NULL;
				il2cpp_hresult_t hr = ((___items0)[i])->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&___items0_i__imanagedObject));
				if (IL2CPP_HR_SUCCEEDED(hr))
				{
					____items0_i__unmarshaled = *static_cast<KeyValuePair_2_t2457078697 *>(UnBox(___items0_i__imanagedObject->GetManagedObject(), KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var));
					___items0_i__imanagedObject->Release();
				}
				else
				{
					KeyValuePair_2_t2457078697  ___items0_i_Staging;
					uint32_t ___items0_i_KeyNative = 0;
					hr = ((___items0)[i])->IKeyValuePair_2_get_Key_m2175672871(&___items0_i_KeyNative);
					il2cpp_codegen_com_raise_exception_if_failed(hr, false);

					___items0_i_Staging.set_key_0(___items0_i_KeyNative);

					Il2CppIInspectable* ___items0_i_ValueNative = NULL;
					hr = ((___items0)[i])->IKeyValuePair_2_get_Value_m3078130594(&___items0_i_ValueNative);
					il2cpp_codegen_com_raise_exception_if_failed(hr, false);

					if (___items0_i_ValueNative != NULL)
					{
						___items0_i_Staging.set_value_1(il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___items0_i_ValueNative, Il2CppComObject_il2cpp_TypeInfo_var));
					}
					else
					{
						___items0_i_Staging.set_value_1(NULL);
					}

					if (___items0_i_ValueNative != NULL)
					{
						(___items0_i_ValueNative)->Release();
						___items0_i_ValueNative = NULL;
					}

					____items0_i__unmarshaled = ___items0_i_Staging;
				}
			}
			(____items0_unmarshaled)->SetAtUnchecked(static_cast<il2cpp_array_size_t>(i), ____items0_i__unmarshaled);
		}
	}

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::Clear() */, ICollection_1_t990263635_il2cpp_TypeInfo_var, __thisValue);
		if (____items0_unmarshaled != NULL)
		{
			il2cpp_array_size_t itemsInCollection = ____items0_unmarshaled->max_length;
			for (il2cpp_array_size_t i = 0; i < itemsInCollection; i++)
			{
				InterfaceActionInvoker1< KeyValuePair_2_t2457078697  >::Invoke(2 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::Add(T) */, ICollection_1_t990263635_il2cpp_TypeInfo_var, __thisValue, (____items0_unmarshaled)->GetAtUnchecked(static_cast<il2cpp_array_size_t>(i)));
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Windows.Foundation.Collections.IIterator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>> adapter
struct IIterator_1_t331222170_Adapter IL2CPP_FINAL : il2cpp::vm::NonCachedCCWBase<IIterator_1_t331222170_Adapter>, IIterator_1_t331222170
{
	inline IIterator_1_t331222170_Adapter(RuntimeObject* obj) : il2cpp::vm::NonCachedCCWBase<IIterator_1_t331222170_Adapter>(obj), _initialized(false), _hasCurrent(false) {}

	virtual il2cpp_hresult_t STDCALL QueryInterface(const Il2CppGuid& iid, void** object) IL2CPP_OVERRIDE
	{
		if (::memcmp(&iid, &Il2CppIUnknown::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIInspectable::IID, sizeof(Il2CppGuid)) == 0
		 || ::memcmp(&iid, &Il2CppIAgileObject::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = GetIdentity();
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIManagedObjectHolder::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIManagedObjectHolder*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &IIterator_1_t331222170::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<IIterator_1_t331222170*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		if (::memcmp(&iid, &Il2CppIMarshal::IID, sizeof(Il2CppGuid)) == 0)
		{
			*object = static_cast<Il2CppIMarshal*>(this);
			AddRefImpl();
			return IL2CPP_S_OK;
		}

		*object = NULL;
		return IL2CPP_E_NOINTERFACE;
	}

	virtual uint32_t STDCALL AddRef() IL2CPP_OVERRIDE
	{
		return AddRefImpl();
	}

	virtual uint32_t STDCALL Release() IL2CPP_OVERRIDE
	{
		return ReleaseImpl();
	}

	virtual il2cpp_hresult_t STDCALL GetIids(uint32_t* iidCount, Il2CppGuid** iids) IL2CPP_OVERRIDE
	{
		Il2CppGuid* interfaceIds = il2cpp_codegen_marshal_allocate_array<Il2CppGuid>(1);
		interfaceIds[0] = IIterator_1_t331222170::IID;

		*iidCount = 1;
		*iids = interfaceIds;
		return IL2CPP_S_OK;
	}

	virtual il2cpp_hresult_t STDCALL GetRuntimeClassName(Il2CppHString* className) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetRuntimeClassName(className);
	}

	virtual il2cpp_hresult_t STDCALL GetTrustLevel(int32_t* trustLevel) IL2CPP_OVERRIDE
	{
		return ComObjectBase::GetTrustLevel(trustLevel);
	}
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_Current_m3355334578(IKeyValuePair_2_t3481798315** comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_get_HasCurrent_m940628351(bool* comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_MoveNext_m1278101282(bool* comReturnValue) IL2CPP_OVERRIDE;
	virtual il2cpp_hresult_t STDCALL IIterator_1_GetMany_m253528417(uint32_t ___items0ArraySize, IKeyValuePair_2_t3481798315** ___items0, uint32_t* comReturnValue) IL2CPP_OVERRIDE;
private:
	bool _initialized;
	bool _hasCurrent;
	il2cpp_hresult_t Initialize();
	il2cpp_hresult_t GetCurrent(IKeyValuePair_2_t3481798315** comReturnValue);
	il2cpp_hresult_t MoveNext(bool* comReturnValue);
};
il2cpp_hresult_t IIterator_1_t331222170_Adapter::IIterator_1_get_Current_m3355334578(IKeyValuePair_2_t3481798315** comReturnValue)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		*comReturnValue = NULL;
		return hr;
	}
	return GetCurrent(comReturnValue);
}
il2cpp_hresult_t IIterator_1_t331222170_Adapter::IIterator_1_get_HasCurrent_m940628351(bool* comReturnValue)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		*comReturnValue = false;
		return hr;
	}
	*comReturnValue = _hasCurrent;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t331222170_Adapter::IIterator_1_MoveNext_m1278101282(bool* comReturnValue)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		*comReturnValue = false;
		return hr;
	}
	hr = MoveNext(&_hasCurrent);
	*comReturnValue = _hasCurrent;
	return hr;
}
il2cpp_hresult_t IIterator_1_t331222170_Adapter::IIterator_1_GetMany_m253528417(uint32_t ___items0ArraySize, IKeyValuePair_2_t3481798315** ___items0, uint32_t* comReturnValue)
{
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;
	il2cpp_hresult_t hr = Initialize();
	if (IL2CPP_HR_FAILED(hr))
	{
		*comReturnValue = 0;
		return hr;
	}
	uint32_t count = 0;
	for (; _hasCurrent && (count < ___items0ArraySize); ++count)
	{
		hr = GetCurrent(___items0 + count);
		if (IL2CPP_HR_FAILED(hr))
		{
			*comReturnValue = count;
			return hr;
		}
		hr = MoveNext(&_hasCurrent);
		if (IL2CPP_HR_FAILED(hr))
		{
			*comReturnValue = count + 1;
			return hr;
		}
	}
	*comReturnValue = count;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t331222170_Adapter::Initialize()
{
	if (_initialized)
	{
		return IL2CPP_S_OK;
	}
	il2cpp_hresult_t hr = MoveNext(&_hasCurrent);
	_initialized = IL2CPP_HR_SUCCEEDED(hr);
	return hr;
}
il2cpp_hresult_t IIterator_1_t331222170_Adapter::GetCurrent(IKeyValuePair_2_t3481798315** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterator_1_t331222170_Adapter_GetCurrent_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Managed method invocation
	KeyValuePair_2_t2457078697  returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)GetManagedObjectInline();
		returnValue = InterfaceFuncInvoker0< KeyValuePair_2_t2457078697  >::Invoke(0 /* T System.Collections.Generic.IEnumerator`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Current() */, IEnumerator_1_t2889649165_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return (ex.ex->hresult == IL2CPP_COR_E_INVALIDOPERATION) ? IL2CPP_E_BOUNDS : ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IKeyValuePair_2_t3481798315* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IKeyValuePair_2_t3481798315>(Box(KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var, &returnValue));

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
il2cpp_hresult_t IIterator_1_t331222170_Adapter::MoveNext(bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterator_1_t331222170_Adapter_MoveNext_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)GetManagedObjectInline();
		returnValue = InterfaceFuncInvoker0< bool >::Invoke(0 /* System.Boolean System.Collections.IEnumerator::MoveNext() */, IEnumerator_t1853284238_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for Windows.Foundation.Collections.IIterator`1<T> Windows.Foundation.Collections.IIterable`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::First()
il2cpp_hresult_t IIterable_1_First_m817385671_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IIterator_1_t331222170** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IIterable_1_First_m817385671_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0 /* System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.IEnumerable`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::GetEnumerator() */, IEnumerable_1_t1436931586_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = (returnValue != NULL) ? IIterator_1_t331222170_Adapter::__CreateInstance(returnValue) : NULL;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for T Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::GetAt(System.UInt32)
il2cpp_hresult_t IVectorView_1_GetAt_m3476973415_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___index0, IKeyValuePair_2_t3481798315** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetAt_m3476973415_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	KeyValuePair_2_t2457078697  returnValue;
	try
	{
		try
		{
			returnValue = InterfaceFuncInvoker1< KeyValuePair_2_t2457078697 , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Item(System.Int32) */, IReadOnlyList_1_t3021501603_il2cpp_TypeInfo_var, __this, ___index0);
		}
		catch (const Il2CppExceptionWrapper& ex)
		{
			if (IsInst(ex.ex, ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var))
			{
				ex.ex->hresult = -2147483637; // E_BOUNDS
			}

			throw;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IKeyValuePair_2_t3481798315* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IKeyValuePair_2_t3481798315>(Box(KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var, &returnValue));

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Size()
il2cpp_hresult_t IVectorView_1_get_Size_m1565795300_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_get_Size_m1565795300_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Count() */, IReadOnlyCollection_1_t2460194634_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::IndexOf(T,System.UInt32&)
il2cpp_hresult_t IVectorView_1_IndexOf_m836020600_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IKeyValuePair_2_t3481798315* ___value0, uint32_t* ___index1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_IndexOf_m836020600_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___value0' to managed representation
	KeyValuePair_2_t2457078697  ____value0_unmarshaled;
	memset(&____value0_unmarshaled, 0, sizeof(____value0_unmarshaled));
	NullCheck(___value0);

	{
		Il2CppIManagedObjectHolder* ___value0_imanagedObject = NULL;
		il2cpp_hresult_t hr = (___value0)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&___value0_imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			____value0_unmarshaled = *static_cast<KeyValuePair_2_t2457078697 *>(UnBox(___value0_imanagedObject->GetManagedObject(), KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var));
			___value0_imanagedObject->Release();
		}
		else
		{
			KeyValuePair_2_t2457078697  ___value0Staging;
			uint32_t ___value0KeyNative = 0;
			hr = (___value0)->IKeyValuePair_2_get_Key_m2175672871(&___value0KeyNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			___value0Staging.set_key_0(___value0KeyNative);

			Il2CppIInspectable* ___value0ValueNative = NULL;
			hr = (___value0)->IKeyValuePair_2_get_Value_m3078130594(&___value0ValueNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (___value0ValueNative != NULL)
			{
				___value0Staging.set_value_1(il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value0ValueNative, Il2CppComObject_il2cpp_TypeInfo_var));
			}
			else
			{
				___value0Staging.set_value_1(NULL);
			}

			if (___value0ValueNative != NULL)
			{
				(___value0ValueNative)->Release();
				___value0ValueNative = NULL;
			}

			____value0_unmarshaled = ___value0Staging;
		}
	}

	// Marshaling of parameter '___index1' to managed representation
	uint32_t ____index1_empty = 0;

	// Managed method invocation
	bool returnValue;
	try
	{
		____index1_empty = 0;
		returnValue = false;

		int elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Count() */, IReadOnlyCollection_1_t2460194634_il2cpp_TypeInfo_var, __this);
		for (int i = 0; i < elementsInCollection; i++)
		{
			KeyValuePair_2_t2457078697  item = InterfaceFuncInvoker1< KeyValuePair_2_t2457078697 , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Item(System.Int32) */, IReadOnlyList_1_t3021501603_il2cpp_TypeInfo_var, __this, i);
			if (VirtFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Object::Equals(System.Object) */, Box(KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var, &item), Box(KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var, &____value0_unmarshaled)))
			{
				____index1_empty = static_cast<uint32_t>(i);
				returnValue = true;
				break;
			}
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___index1' back from managed representation
	*___index1 = ____index1_empty;

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IVectorView`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::GetMany(System.UInt32,T[])
il2cpp_hresult_t IVectorView_1_GetMany_m2658557676_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___startIndex0, uint32_t ___items1ArraySize, IKeyValuePair_2_t3481798315** ___items1, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IVectorView_1_GetMany_m2658557676_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		uint32_t elementsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Count() */, IReadOnlyCollection_1_t2460194634_il2cpp_TypeInfo_var, __this);
		if (___startIndex0 != elementsInCollection && ___items1 != NULL)
		{
			if (___startIndex0 > elementsInCollection || ___startIndex0 > 2147483647)
			{
				ArgumentOutOfRangeException_t777629997 * exception = (ArgumentOutOfRangeException_t777629997*)il2cpp_codegen_object_new(ArgumentOutOfRangeException_t777629997_il2cpp_TypeInfo_var);
				ArgumentOutOfRangeException__ctor_m3628145864(exception, _stringLiteral797640427, NULL);
				Exception_set_HResult_m3489164646(exception, -2147483637, NULL); // E_BOUNDS
				IL2CPP_RAISE_MANAGED_EXCEPTION(exception,NULL);
			}
			returnValue = std::min(___items1ArraySize, elementsInCollection - ___startIndex0);
			for (uint32_t i = 0; i < returnValue; i++)
			{
				KeyValuePair_2_t2457078697  itemManaged = InterfaceFuncInvoker1< KeyValuePair_2_t2457078697 , int32_t >::Invoke(0 /* T System.Collections.Generic.IReadOnlyList`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Item(System.Int32) */, IReadOnlyList_1_t3021501603_il2cpp_TypeInfo_var, __this, i + ___startIndex0);
				___items1[i] = il2cpp_codegen_com_get_or_create_ccw<IKeyValuePair_2_t3481798315>(Box(KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var, &itemManaged));
			}
		}
		else
		{
			returnValue = 0;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.String,System.Object>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m2993729319_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m2993729319_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Object>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t3281331859_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.String,System.Object>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m2008534305_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m2008534305_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count() */, IReadOnlyCollection_1_t971183271_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.String,System.Object>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m3205845981_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m3205845981_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Object>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t3281331859_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.String,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m1626200424_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t319371831** ___first0, IMapView_2_t319371831** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m1626200424_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Object>>::get_Count() */, IReadOnlyCollection_1_t971183271_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t2396221982 * splittableMap = (ConstantSplittableMap_2_t2396221982 *)IsInstSealed(__this, ConstantSplittableMap_2_t2396221982_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t2396221982*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t2396221982_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m245620443(splittableMap, __this, ConstantSplittableMap_2__ctor_m245620443_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m1997543296(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m1997543296_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t319371831::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t319371831>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t319371831::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t319371831>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Object>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m2750152149_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m2750152149_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m4184817181((KeyValuePair_2_t2530217319*)UnBox(__thisValue, KeyValuePair_2_t2530217319_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m4184817181_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Object>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m2672088708_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m2672088708_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m1132502692((KeyValuePair_2_t2530217319*)UnBox(__thisValue, KeyValuePair_2_t2530217319_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m1132502692_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m1731177585_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m1731177585_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t2891363839_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m3704454125_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m3704454125_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, ICollection_1_t1063402257_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m2433635512_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m2433635512_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, IDictionary_2_t2891363839_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::GetView()
il2cpp_hresult_t IMap_2_GetView_m2883253156_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1881521816** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m2883253156_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t548514548_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t3426852175 * readOnlyDictionary = (ReadOnlyDictionary_2_t3426852175*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t3426852175_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m3044404427(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m3044404427_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t1881521816* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t1881521816::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1881521816>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m335884934_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m335884934_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Marshaling of parameter '___value1' to managed representation
	RuntimeObject * ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, IDictionary_2_t2891363839_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< RuntimeObject *, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t2891363839_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m3274472395_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m3274472395_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Object>::Remove(TKey) */, IDictionary_2_t2891363839_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Object>::Clear()
il2cpp_hresult_t IMap_2_Clear_m112521936_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m112521936_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear() */, ICollection_1_t1063402257_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Object,System.Object>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m354916185_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m354916185_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t548514548_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Object,System.Object>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m1307357424_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m1307357424_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, IReadOnlyCollection_1_t2533333256_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Object,System.Object>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m1226002878_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m1226002878_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Object>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t548514548_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Object,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m3017881906_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1881521816** ___first0, IMapView_2_t1881521816** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m3017881906_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Count() */, IReadOnlyCollection_1_t2533333256_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t3958371967 * splittableMap = (ConstantSplittableMap_2_t3958371967 *)IsInstSealed(__this, ConstantSplittableMap_2_t3958371967_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t3958371967*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t3958371967_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m4259417880(splittableMap, __this, ConstantSplittableMap_2__ctor_m4259417880_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m2998943571(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m2998943571_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t1881521816::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1881521816>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t1881521816::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1881521816>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Object>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m3523589551_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m3523589551_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m2973773633((KeyValuePair_2_t968067334*)UnBox(__thisValue, KeyValuePair_2_t968067334_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m2973773633_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"),NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Object>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m3279123715_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m3279123715_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m2151159939((KeyValuePair_2_t968067334*)UnBox(__thisValue, KeyValuePair_2_t968067334_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m2151159939_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Guid,System.Type>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m372021310_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, Type_t ** comReturnValue)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Guid,System.Type>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m4209346384_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m4209346384_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Type>>::get_Count() */, ICollection_1_t2463819398_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Guid,System.Type>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m2767397819_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m2767397819_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, Guid_t  >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Guid,System.Type>::ContainsKey(TKey) */, IDictionary_2_t4291780980_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Guid,System.Type>::GetView()
il2cpp_hresult_t IMap_2_GetView_m3956818822_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3281938957** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m3956818822_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t1948931689_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t532302020 * readOnlyDictionary = (ReadOnlyDictionary_2_t532302020*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t532302020_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m3720374228(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m3720374228_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t3281938957* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t3281938957::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3281938957>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Guid,System.Type>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m52862695_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, Type_t * ___value1, bool* comReturnValue)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Guid,System.Type>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m441912298_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m441912298_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, Guid_t  >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Guid,System.Type>::Remove(TKey) */, IDictionary_2_t4291780980_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Guid,System.Type>::Clear()
il2cpp_hresult_t IMap_2_Clear_m1518512299_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m1518512299_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Type>>::Clear() */, ICollection_1_t2463819398_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Guid,System.Type>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m3896662699_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, Type_t ** comReturnValue)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Guid,System.Type>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m2349127300_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m2349127300_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Type>>::get_Count() */, IReadOnlyCollection_1_t3933750397_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Guid,System.Type>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m1382000797_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m1382000797_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, Guid_t  >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Guid,System.Type>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t1948931689_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Guid,System.Type>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m2592840147_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3281938957** ___first0, IMapView_2_t3281938957** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m2592840147_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Type>>::get_Count() */, IReadOnlyCollection_1_t3933750397_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t1063821812 * splittableMap = (ConstantSplittableMap_2_t1063821812 *)IsInstSealed(__this, ConstantSplittableMap_2_t1063821812_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t1063821812*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t1063821812_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m4057205974(splittableMap, __this, ConstantSplittableMap_2__ctor_m4057205974_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m4122198191(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m4122198191_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t3281938957::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3281938957>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t3281938957::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3281938957>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Guid,System.Object>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m3324945768_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t * comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m3324945768_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	Guid_t  returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m4294704491((KeyValuePair_2_t231828568*)UnBox(__thisValue, KeyValuePair_2_t231828568_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m4294704491_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = {};
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Guid,System.Object>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m52124236_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m52124236_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m2666064688((KeyValuePair_2_t231828568*)UnBox(__thisValue, KeyValuePair_2_t231828568_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m2666064688_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Guid,System.Object>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m3068028334_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m3068028334_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, Guid_t , RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t592975088_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Guid,System.Object>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m1704379977_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m1704379977_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>::get_Count() */, ICollection_1_t3059980802_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Guid,System.Object>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m2236943020_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m2236943020_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, Guid_t  >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::ContainsKey(TKey) */, IDictionary_2_t592975088_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Guid,System.Object>::GetView()
il2cpp_hresult_t IMap_2_GetView_m3237694789_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3878100361** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m3237694789_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t2545093093_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t1128463424 * readOnlyDictionary = (ReadOnlyDictionary_2_t1128463424*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t1128463424_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m2119190349(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m2119190349_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t3878100361* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t3878100361::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3878100361>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Guid,System.Object>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m1575381716_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m1575381716_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	RuntimeObject * ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, Guid_t  >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::ContainsKey(TKey) */, IDictionary_2_t592975088_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< Guid_t , RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t592975088_il2cpp_TypeInfo_var, __this, ___key0, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Guid,System.Object>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m3289693839_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m3289693839_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, Guid_t  >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Guid,System.Object>::Remove(TKey) */, IDictionary_2_t592975088_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Guid,System.Object>::Clear()
il2cpp_hresult_t IMap_2_Clear_m2519350850_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m2519350850_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>::Clear() */, ICollection_1_t3059980802_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Guid,System.Object>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m3331997343_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m3331997343_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, Guid_t , RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Guid,System.Object>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t2545093093_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Guid,System.Object>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m3858358881_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m3858358881_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>::get_Count() */, IReadOnlyCollection_1_t234944505_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Guid,System.Object>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m3111850129_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t  ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m3111850129_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, Guid_t  >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Guid,System.Object>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t2545093093_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Guid,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m3394162196_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3878100361** ___first0, IMapView_2_t3878100361** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m3394162196_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Guid,System.Object>>::get_Count() */, IReadOnlyCollection_1_t234944505_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t1659983216 * splittableMap = (ConstantSplittableMap_2_t1659983216 *)IsInstSealed(__this, ConstantSplittableMap_2_t1659983216_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t1659983216*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t1659983216_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m2413510944(splittableMap, __this, ConstantSplittableMap_2__ctor_m2413510944_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m3822801152(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m3822801152_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t3878100361::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3878100361>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t3878100361::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3878100361>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Guid,System.Type>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m1247672299_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Guid_t * comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m1247672299_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	Guid_t  returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m1325471274((KeyValuePair_2_t3930634460*)UnBox(__thisValue, KeyValuePair_2_t3930634460_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m1325471274_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = {};
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Guid,System.Type>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m3450640679_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Type_t ** comReturnValue)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m2451726409_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m2451726409_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t432670886_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m2259249674_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m2259249674_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Count() */, ICollection_1_t2899676600_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m4208301656_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m4208301656_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::ContainsKey(TKey) */, IDictionary_2_t432670886_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::GetView()
il2cpp_hresult_t IMap_2_GetView_m3361060608_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3717796159** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m3361060608_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t2384788891_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t968159222 * readOnlyDictionary = (ReadOnlyDictionary_2_t968159222*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t968159222_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m3621257446(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m3621257446_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t3717796159* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t3717796159::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3717796159>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m490092833_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m490092833_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	RuntimeObject * ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::ContainsKey(TKey) */, IDictionary_2_t432670886_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< int32_t, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t432670886_il2cpp_TypeInfo_var, __this, ___key0, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m1067146362_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m1067146362_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, int32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int32,System.Object>::Remove(TKey) */, IDictionary_2_t432670886_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int32,System.Object>::Clear()
il2cpp_hresult_t IMap_2_Clear_m3558300509_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m3558300509_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::Clear() */, ICollection_1_t2899676600_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Int32,System.Object>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m3742065343_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m3742065343_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int32_t, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Object>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t2384788891_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Int32,System.Object>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m1359240774_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m1359240774_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Count() */, IReadOnlyCollection_1_t74640303_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Int32,System.Object>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m973232472_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m973232472_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int32,System.Object>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t2384788891_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Int32,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m842968636_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3717796159** ___first0, IMapView_2_t3717796159** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m842968636_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int32,System.Object>>::get_Count() */, IReadOnlyCollection_1_t74640303_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t1499679014 * splittableMap = (ConstantSplittableMap_2_t1499679014 *)IsInstSealed(__this, ConstantSplittableMap_2_t1499679014_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t1499679014*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t1499679014_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m3772921655(splittableMap, __this, ConstantSplittableMap_2__ctor_m3772921655_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m2176297438(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m2176297438_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t3717796159::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3717796159>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t3717796159::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3717796159>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Object>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m2186241555_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m2186241555_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m1839753989((KeyValuePair_2_t71524366*)UnBox(__thisValue, KeyValuePair_2_t71524366_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m1839753989_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Object>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m210688108_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m210688108_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m3495598764((KeyValuePair_2_t71524366*)UnBox(__thisValue, KeyValuePair_2_t71524366_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m3495598764_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.String,System.String>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m3419416962_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m3419416962_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	String_t* returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&) */, IDictionary_2_t96558379_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"),NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.String,System.String>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m3747204495_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m3747204495_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, ICollection_1_t2563564093_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.String>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m1327307936_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m1327307936_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IDictionary_2_t96558379_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.String,System.String>::GetView()
il2cpp_hresult_t IMap_2_GetView_m1648969448_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3381683652** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m1648969448_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t2048676384_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t632046715 * readOnlyDictionary = (ReadOnlyDictionary_2_t632046715*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t632046715_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m461640262(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m461640262_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t3381683652* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t3381683652::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3381683652>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.String>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m3135696435_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppHString ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m3135696435_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Marshaling of parameter '___value1' to managed representation
	String_t* ____value1_unmarshaled = NULL;
	____value1_unmarshaled = il2cpp_codegen_marshal_hstring_result(___value1);

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IDictionary_2_t96558379_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< String_t*, String_t* >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.String>::set_Item(TKey,TValue) */, IDictionary_2_t96558379_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.String>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m3800098948_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m3800098948_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.String>::Remove(TKey) */, IDictionary_2_t96558379_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.String>::Clear()
il2cpp_hresult_t IMap_2_Clear_m3867596926_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m3867596926_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::Clear() */, ICollection_1_t2563564093_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.String,System.String>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m1783676987_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m1783676987_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	String_t* returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, String_t** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t2048676384_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"),NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.String,System.String>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m3316105878_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m3316105878_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, IReadOnlyCollection_1_t4033495092_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.String,System.String>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m1003035185_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m1003035185_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.String>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t2048676384_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.String,System.String>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m978754527_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3381683652** ___first0, IMapView_2_t3381683652** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m978754527_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.String>>::get_Count() */, IReadOnlyCollection_1_t4033495092_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t1163566507 * splittableMap = (ConstantSplittableMap_2_t1163566507 *)IsInstSealed(__this, ConstantSplittableMap_2_t1163566507_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t1163566507*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t1163566507_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m2462269511(splittableMap, __this, ConstantSplittableMap_2__ctor_m2462269511_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m890587491(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m890587491_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t3381683652::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3381683652>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t3381683652::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3381683652>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.String>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m3013852749_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m3013852749_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m865914345((KeyValuePair_2_t4030379155*)UnBox(__thisValue, KeyValuePair_2_t4030379155_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m865914345_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"),NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.String>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m2003745203_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m2003745203_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m1897740815((KeyValuePair_2_t4030379155*)UnBox(__thisValue, KeyValuePair_2_t4030379155_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m1897740815_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"),NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.String,System.Type>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m3058979306_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Type_t ** comReturnValue)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.String,System.Type>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m732615070_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m732615070_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>>::get_Count() */, ICollection_1_t3200058164_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Type>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m3062070663_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m3062070663_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Type>::ContainsKey(TKey) */, IDictionary_2_t733052450_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.String,System.Type>::GetView()
il2cpp_hresult_t IMap_2_GetView_m160940274_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t4018177723** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m160940274_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t2685170455_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t1268540786 * readOnlyDictionary = (ReadOnlyDictionary_2_t1268540786*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t1268540786_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m515128087(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m515128087_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t4018177723* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t4018177723::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t4018177723>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Type>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m610774430_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Type_t * ___value1, bool* comReturnValue)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Type>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m3871291260_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m3871291260_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Type>::Remove(TKey) */, IDictionary_2_t733052450_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Type>::Clear()
il2cpp_hresult_t IMap_2_Clear_m2457687352_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m2457687352_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>>::Clear() */, ICollection_1_t3200058164_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.String,System.Type>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m594002932_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Type_t ** comReturnValue)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.String,System.Type>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m3065552575_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m3065552575_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>>::get_Count() */, IReadOnlyCollection_1_t375021867_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.String,System.Type>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m1694676420_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m1694676420_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Type>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t2685170455_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.String,System.Type>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m3605358933_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t4018177723** ___first0, IMapView_2_t4018177723** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m3605358933_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Type>>::get_Count() */, IReadOnlyCollection_1_t375021867_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t1800060578 * splittableMap = (ConstantSplittableMap_2_t1800060578 *)IsInstSealed(__this, ConstantSplittableMap_2_t1800060578_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t1800060578*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t1800060578_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m137017575(splittableMap, __this, ConstantSplittableMap_2__ctor_m137017575_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m3390560063(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m3390560063_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t4018177723::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t4018177723>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t4018177723::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t4018177723>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Type>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m2199926285_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m2199926285_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m2656778124((KeyValuePair_2_t371905930*)UnBox(__thisValue, KeyValuePair_2_t371905930_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m2656778124_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"),NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Type>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m1427991677_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Type_t ** comReturnValue)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m2400282917_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m2400282917_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	int32_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, int32_t* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m3320579976_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m3320579976_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count() */, ICollection_1_t3667059157_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m3055190088_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m3055190088_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int32>::ContainsKey(TKey) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::GetView()
il2cpp_hresult_t IMap_2_GetView_m3605659067_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t190211420** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m3605659067_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t3152171448_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t1735541779 * readOnlyDictionary = (ReadOnlyDictionary_2_t1735541779*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t1735541779_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m2131144993(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m2131144993_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t190211420* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t190211420::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t190211420>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m48626576_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, int32_t ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m48626576_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int32>::ContainsKey(TKey) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< String_t*, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m2564332326_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m2564332326_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int32>::Remove(TKey) */, IDictionary_2_t1200053443_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Int32>::Clear()
il2cpp_hresult_t IMap_2_Clear_m1499398795_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m1499398795_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::Clear() */, ICollection_1_t3667059157_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.String,System.Int32>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m1298530599_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m1298530599_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	int32_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, int32_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Int32>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t3152171448_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.String,System.Int32>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m546192505_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m546192505_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count() */, IReadOnlyCollection_1_t842022860_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.String,System.Int32>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m3322124696_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m3322124696_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Int32>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t3152171448_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.String,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m96786832_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t190211420** ___first0, IMapView_2_t190211420** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m96786832_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int32>>::get_Count() */, IReadOnlyCollection_1_t842022860_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t2267061571 * splittableMap = (ConstantSplittableMap_2_t2267061571 *)IsInstSealed(__this, ConstantSplittableMap_2_t2267061571_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t2267061571*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t2267061571_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m2347350877(splittableMap, __this, ConstantSplittableMap_2__ctor_m2347350877_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m3256786513(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m3256786513_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t190211420::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t190211420>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t190211420::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t190211420>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Int32>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m1066766749_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m1066766749_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m1055012466((KeyValuePair_2_t2401056908*)UnBox(__thisValue, KeyValuePair_2_t2401056908_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m1055012466_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Int32>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m269040038_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m269040038_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m1308554439((KeyValuePair_2_t2401056908*)UnBox(__thisValue, KeyValuePair_2_t2401056908_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m1308554439_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m4271171535_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m4271171535_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	int32_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, int32_t* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&) */, IDictionary_2_t2762203428_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m672085459_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m672085459_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count() */, ICollection_1_t934241846_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m377757278_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m377757278_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::ContainsKey(TKey) */, IDictionary_2_t2762203428_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::GetView()
il2cpp_hresult_t IMap_2_GetView_m2992416671_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1752361405** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m2992416671_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t419354137_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t3297691764 * readOnlyDictionary = (ReadOnlyDictionary_2_t3297691764*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t3297691764_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m2579745724(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m2579745724_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t1752361405* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t1752361405::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1752361405>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m3186075525_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, int32_t ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m3186075525_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::ContainsKey(TKey) */, IDictionary_2_t2762203428_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< RuntimeObject *, int32_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::set_Item(TKey,TValue) */, IDictionary_2_t2762203428_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m1560976792_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m1560976792_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int32>::Remove(TKey) */, IDictionary_2_t2762203428_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Int32>::Clear()
il2cpp_hresult_t IMap_2_Clear_m1661948797_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m1661948797_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::Clear() */, ICollection_1_t934241846_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Object,System.Int32>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m877167602_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m877167602_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	int32_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, int32_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Int32>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t419354137_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Object,System.Int32>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m3871500701_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m3871500701_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count() */, IReadOnlyCollection_1_t2404172845_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Object,System.Int32>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m1872447125_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m1872447125_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Int32>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t419354137_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Object,System.Int32>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m4061037733_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1752361405** ___first0, IMapView_2_t1752361405** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m4061037733_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int32>>::get_Count() */, IReadOnlyCollection_1_t2404172845_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t3829211556 * splittableMap = (ConstantSplittableMap_2_t3829211556 *)IsInstSealed(__this, ConstantSplittableMap_2_t3829211556_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t3829211556*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t3829211556_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m2528261516(splittableMap, __this, ConstantSplittableMap_2__ctor_m2528261516_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m1776544164(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m1776544164_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t1752361405::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1752361405>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t1752361405::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1752361405>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Int32>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m599934735_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m599934735_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m3340370308((KeyValuePair_2_t838906923*)UnBox(__thisValue, KeyValuePair_2_t838906923_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m3340370308_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"),NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Int32>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m2337749369_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m2337749369_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m692097207((KeyValuePair_2_t838906923*)UnBox(__thisValue, KeyValuePair_2_t838906923_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m692097207_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.String,System.Boolean>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m356884552_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m356884552_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, bool* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::TryGetValue(TKey,TValue&) */, IDictionary_2_t2641362951_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.String,System.Boolean>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m2116548387_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m2116548387_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Count() */, ICollection_1_t813401369_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Boolean>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m650644540_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m650644540_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_t2641362951_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.String,System.Boolean>::GetView()
il2cpp_hresult_t IMap_2_GetView_m1023461368_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1631520928** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m1023461368_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t298513660_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t3176851287 * readOnlyDictionary = (ReadOnlyDictionary_2_t3176851287*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t3176851287_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m1629022071(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m1629022071_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t1631520928* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t1631520928::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1631520928>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Boolean>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m2357915180_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m2357915180_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_t2641362951_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< String_t*, bool >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::set_Item(TKey,TValue) */, IDictionary_2_t2641362951_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Boolean>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m2388588850_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m2388588850_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Boolean>::Remove(TKey) */, IDictionary_2_t2641362951_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Boolean>::Clear()
il2cpp_hresult_t IMap_2_Clear_m3448822397_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m3448822397_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::Clear() */, ICollection_1_t813401369_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.String,System.Boolean>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m818349798_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m818349798_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, bool* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Boolean>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t298513660_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.String,System.Boolean>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m1396842905_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m1396842905_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_t2283332368_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.String,System.Boolean>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m2200864154_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m2200864154_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Boolean>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t298513660_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.String,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m22494317_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1631520928** ___first0, IMapView_2_t1631520928** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m22494317_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_t2283332368_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t3708371079 * splittableMap = (ConstantSplittableMap_2_t3708371079 *)IsInstSealed(__this, ConstantSplittableMap_2_t3708371079_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t3708371079*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t3708371079_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m1702516145(splittableMap, __this, ConstantSplittableMap_2__ctor_m1702516145_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m3288519233(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m3288519233_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t1631520928::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1631520928>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t1631520928::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1631520928>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Boolean>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m1916408783_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m1916408783_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m2106922848((KeyValuePair_2_t3842366416*)UnBox(__thisValue, KeyValuePair_2_t3842366416_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m2106922848_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Boolean>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m3611222262_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m3611222262_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m1669764045((KeyValuePair_2_t3842366416*)UnBox(__thisValue, KeyValuePair_2_t3842366416_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m1669764045_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m2791672174_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m2791672174_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, bool* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&) */, IDictionary_2_t4203512936_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m521129328_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m521129328_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Count() */, ICollection_1_t2375551354_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m3863327211_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m3863327211_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_t4203512936_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::GetView()
il2cpp_hresult_t IMap_2_GetView_m1166070801_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3193670913** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m1166070801_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t1860663645_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t444033976 * readOnlyDictionary = (ReadOnlyDictionary_2_t444033976*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t444033976_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m4089905679(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m4089905679_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t3193670913* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t3193670913::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3193670913>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m3431746527_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m3431746527_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::ContainsKey(TKey) */, IDictionary_2_t4203512936_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< RuntimeObject *, bool >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::set_Item(TKey,TValue) */, IDictionary_2_t4203512936_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m1939883922_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m1939883922_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Boolean>::Remove(TKey) */, IDictionary_2_t4203512936_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Boolean>::Clear()
il2cpp_hresult_t IMap_2_Clear_m403209908_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m403209908_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::Clear() */, ICollection_1_t2375551354_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Object,System.Boolean>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m4048973909_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m4048973909_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, bool* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Boolean>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t1860663645_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Object,System.Boolean>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m516432122_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m516432122_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_t3845482353_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Object,System.Boolean>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m1413942596_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m1413942596_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Boolean>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t1860663645_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Object,System.Boolean>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m2647546983_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t3193670913** ___first0, IMapView_2_t3193670913** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m2647546983_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Boolean>>::get_Count() */, IReadOnlyCollection_1_t3845482353_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t975553768 * splittableMap = (ConstantSplittableMap_2_t975553768 *)IsInstSealed(__this, ConstantSplittableMap_2_t975553768_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t975553768*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t975553768_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m1584615223(splittableMap, __this, ConstantSplittableMap_2__ctor_m1584615223_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m3318364013(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m3318364013_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t3193670913::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3193670913>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t3193670913::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t3193670913>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Boolean>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m2534079307_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m2534079307_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m1816659530((KeyValuePair_2_t2280216431*)UnBox(__thisValue, KeyValuePair_2_t2280216431_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m1816659530_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"),NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Boolean>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m2353902038_ComCallableWrapperProjectedMethod(RuntimeObject* __this, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m2353902038_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m608750205((KeyValuePair_2_t2280216431*)UnBox(__thisValue, KeyValuePair_2_t2280216431_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m608750205_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Int32>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m2344176952_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m2344176952_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m2635782095((KeyValuePair_2_t4237331251*)UnBox(__thisValue, KeyValuePair_2_t4237331251_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m2635782095_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Int32,System.Int32>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m1590219272_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m1590219272_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	int32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m1804680087((KeyValuePair_2_t4237331251*)UnBox(__thisValue, KeyValuePair_2_t4237331251_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m1804680087_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m1090581803_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, IKeyValuePair_2_t3554936937** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m1090581803_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	KeyValuePair_2_t2530217319  returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, KeyValuePair_2_t2530217319 * >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&) */, IDictionary_2_t2341474994_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IKeyValuePair_2_t3554936937* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IKeyValuePair_2_t3554936937>(Box(KeyValuePair_2_t2530217319_il2cpp_TypeInfo_var, &returnValue));

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m2333900912_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m2333900912_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_Count() */, ICollection_1_t513513412_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m2357583497_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m2357583497_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey) */, IDictionary_2_t2341474994_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::GetView()
il2cpp_hresult_t IMap_2_GetView_m1550708224_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1331632971** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m1550708224_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t4293592999_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t2876963330 * readOnlyDictionary = (ReadOnlyDictionary_2_t2876963330*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t2876963330_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m1424822176(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m1424822176_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t1331632971* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t1331632971::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1331632971>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m4126452847_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, IKeyValuePair_2_t3554936937* ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m4126452847_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Marshaling of parameter '___value1' to managed representation
	KeyValuePair_2_t2530217319  ____value1_unmarshaled;
	memset(&____value1_unmarshaled, 0, sizeof(____value1_unmarshaled));
	NullCheck(___value1);

	{
		Il2CppIManagedObjectHolder* ___value1_imanagedObject = NULL;
		il2cpp_hresult_t hr = (___value1)->QueryInterface(Il2CppIManagedObjectHolder::IID, reinterpret_cast<void**>(&___value1_imanagedObject));
		if (IL2CPP_HR_SUCCEEDED(hr))
		{
			____value1_unmarshaled = *static_cast<KeyValuePair_2_t2530217319 *>(UnBox(___value1_imanagedObject->GetManagedObject(), KeyValuePair_2_t2530217319_il2cpp_TypeInfo_var));
			___value1_imanagedObject->Release();
		}
		else
		{
			KeyValuePair_2_t2530217319  ___value1Staging;
			Il2CppIInspectable* ___value1KeyNative = NULL;
			hr = (___value1)->IKeyValuePair_2_get_Key_m2750152149(&___value1KeyNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (___value1KeyNative != NULL)
			{
				___value1Staging.set_key_0(il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1KeyNative, Il2CppComObject_il2cpp_TypeInfo_var));
			}
			else
			{
				___value1Staging.set_key_0(NULL);
			}

			if (___value1KeyNative != NULL)
			{
				(___value1KeyNative)->Release();
				___value1KeyNative = NULL;
			}

			Il2CppIInspectable* ___value1ValueNative = NULL;
			hr = (___value1)->IKeyValuePair_2_get_Value_m2672088708(&___value1ValueNative);
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (___value1ValueNative != NULL)
			{
				___value1Staging.set_value_1(il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1ValueNative, Il2CppComObject_il2cpp_TypeInfo_var));
			}
			else
			{
				___value1Staging.set_value_1(NULL);
			}

			if (___value1ValueNative != NULL)
			{
				(___value1ValueNative)->Release();
				___value1ValueNative = NULL;
			}

			____value1_unmarshaled = ___value1Staging;
		}
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey) */, IDictionary_2_t2341474994_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< RuntimeObject *, KeyValuePair_2_t2530217319  >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::set_Item(TKey,TValue) */, IDictionary_2_t2341474994_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m1838696614_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m1838696614_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Remove(TKey) */, IDictionary_2_t2341474994_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Clear()
il2cpp_hresult_t IMap_2_Clear_m3139968190_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m3139968190_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::Clear() */, ICollection_1_t513513412_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m620925806_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, IKeyValuePair_2_t3554936937** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m620925806_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	KeyValuePair_2_t2530217319  returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, KeyValuePair_2_t2530217319 * >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t4293592999_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IKeyValuePair_2_t3554936937* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IKeyValuePair_2_t3554936937>(Box(KeyValuePair_2_t2530217319_il2cpp_TypeInfo_var, &returnValue));

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m428097518_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m428097518_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_Count() */, IReadOnlyCollection_1_t1983444411_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m2416144552_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m2416144552_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t4293592999_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m1339964017_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1331632971** ___first0, IMapView_2_t1331632971** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m1339964017_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>>::get_Count() */, IReadOnlyCollection_1_t1983444411_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t3408483122 * splittableMap = (ConstantSplittableMap_2_t3408483122 *)IsInstSealed(__this, ConstantSplittableMap_2_t3408483122_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t3408483122*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t3408483122_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m2597123826(splittableMap, __this, ConstantSplittableMap_2__ctor_m2597123826_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m524797523(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m524797523_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t1331632971::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1331632971>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t1331632971::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1331632971>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m2178856022_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m2178856022_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m2436713626((KeyValuePair_2_t1980328474*)UnBox(__thisValue, KeyValuePair_2_t1980328474_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m2436713626_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Collections.Generic.KeyValuePair`2<System.Object,System.Object>>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m2884691945_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IKeyValuePair_2_t3554936937** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m2884691945_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	KeyValuePair_2_t2530217319  returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m2095377930((KeyValuePair_2_t1980328474*)UnBox(__thisValue, KeyValuePair_2_t1980328474_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m2095377930_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IKeyValuePair_2_t3554936937* _returnValue_marshaled = NULL;
	_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IKeyValuePair_2_t3554936937>(Box(KeyValuePair_2_t2530217319_il2cpp_TypeInfo_var, &returnValue));

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.String,System.Int64>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m1932774643_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, int64_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m1932774643_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	int64_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, int64_t* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int64>::TryGetValue(TKey,TValue&) */, IDictionary_2_t1985674994_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.String,System.Int64>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m3030780019_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m3030780019_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Count() */, ICollection_1_t157713412_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Int64>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m551338849_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m551338849_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int64>::ContainsKey(TKey) */, IDictionary_2_t1985674994_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.String,System.Int64>::GetView()
il2cpp_hresult_t IMap_2_GetView_m296988736_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t975832971** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m296988736_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t3937792999_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t2521163330 * readOnlyDictionary = (ReadOnlyDictionary_2_t2521163330*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t2521163330_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m480558215(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m480558215_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t975832971* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t975832971::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t975832971>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Int64>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m1829518757_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, int64_t ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m1829518757_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int64>::ContainsKey(TKey) */, IDictionary_2_t1985674994_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< String_t*, int64_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Int64>::set_Item(TKey,TValue) */, IDictionary_2_t1985674994_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Int64>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m3915764709_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m3915764709_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Int64>::Remove(TKey) */, IDictionary_2_t1985674994_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Int64>::Clear()
il2cpp_hresult_t IMap_2_Clear_m487165348_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m487165348_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::Clear() */, ICollection_1_t157713412_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.String,System.Int64>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m4051343361_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, int64_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m4051343361_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	int64_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, int64_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Int64>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t3937792999_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.String,System.Int64>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m1325984944_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m1325984944_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Count() */, IReadOnlyCollection_1_t1627644411_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.String,System.Int64>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m3018735158_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m3018735158_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Int64>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t3937792999_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.String,System.Int64>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m3264766995_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t975832971** ___first0, IMapView_2_t975832971** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m3264766995_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Int64>>::get_Count() */, IReadOnlyCollection_1_t1627644411_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t3052683122 * splittableMap = (ConstantSplittableMap_2_t3052683122 *)IsInstSealed(__this, ConstantSplittableMap_2_t3052683122_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t3052683122*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t3052683122_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m1114701518(splittableMap, __this, ConstantSplittableMap_2__ctor_m1114701518_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m2922592133(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m2922592133_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t975832971::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t975832971>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t975832971::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t975832971>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Int64>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m676269419_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m676269419_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m1351363758((KeyValuePair_2_t3186678459*)UnBox(__thisValue, KeyValuePair_2_t3186678459_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m1351363758_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Int64>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m4114789852_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int64_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m4114789852_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	int64_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m3718382948((KeyValuePair_2_t3186678459*)UnBox(__thisValue, KeyValuePair_2_t3186678459_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m3718382948_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Object,System.Int64>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m2749605711_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, int64_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m2749605711_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	int64_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, int64_t* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&) */, IDictionary_2_t3547824979_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Object,System.Int64>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m4220192820_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m4220192820_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Count() */, ICollection_1_t1719863397_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Int64>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m1523217296_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m1523217296_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::ContainsKey(TKey) */, IDictionary_2_t3547824979_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Object,System.Int64>::GetView()
il2cpp_hresult_t IMap_2_GetView_m2101267589_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t2537982956** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m2101267589_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t1204975688_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t4083313315 * readOnlyDictionary = (ReadOnlyDictionary_2_t4083313315*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t4083313315_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m1275927908(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m1275927908_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t2537982956* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t2537982956::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t2537982956>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Int64>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m89651347_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, int64_t ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m89651347_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::ContainsKey(TKey) */, IDictionary_2_t3547824979_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< RuntimeObject *, int64_t >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::set_Item(TKey,TValue) */, IDictionary_2_t3547824979_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Int64>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m286177173_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m286177173_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Int64>::Remove(TKey) */, IDictionary_2_t3547824979_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Int64>::Clear()
il2cpp_hresult_t IMap_2_Clear_m3252333872_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m3252333872_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::Clear() */, ICollection_1_t1719863397_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Object,System.Int64>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m2925402872_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, int64_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m2925402872_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	int64_t returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, int64_t* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Int64>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t1204975688_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Object,System.Int64>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m152831722_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m152831722_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Count() */, IReadOnlyCollection_1_t3189794396_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Object,System.Int64>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m2105716713_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m2105716713_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Int64>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t1204975688_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Object,System.Int64>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m2758594792_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t2537982956** ___first0, IMapView_2_t2537982956** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m2758594792_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Int64>>::get_Count() */, IReadOnlyCollection_1_t3189794396_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t319865811 * splittableMap = (ConstantSplittableMap_2_t319865811 *)IsInstSealed(__this, ConstantSplittableMap_2_t319865811_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t319865811*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t319865811_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m46244548(splittableMap, __this, ConstantSplittableMap_2__ctor_m46244548_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m564838166(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m564838166_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t2537982956::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t2537982956>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t2537982956::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t2537982956>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Int64>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m1283560117_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m1283560117_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m4089679062((KeyValuePair_2_t1624528474*)UnBox(__thisValue, KeyValuePair_2_t1624528474_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m4089679062_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"),NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Int64>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m3012986135_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int64_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m3012986135_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	int64_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m3349579743((KeyValuePair_2_t1624528474*)UnBox(__thisValue, KeyValuePair_2_t1624528474_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m3349579743_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Type,System.Type>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m4154434452_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Type_t * ___key0, Type_t ** comReturnValue)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Type,System.Type>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m1325865584_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m1325865584_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Type>>::get_Count() */, ICollection_1_t1564181633_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Type,System.Type>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m2230142782_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Type_t * ___key0, bool* comReturnValue)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Type,System.Type>::GetView()
il2cpp_hresult_t IMap_2_GetView_m3149330040_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t2382301192** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m3149330040_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t1049293924_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t3927631551 * readOnlyDictionary = (ReadOnlyDictionary_2_t3927631551*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t3927631551_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m1324428410(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m1324428410_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t2382301192* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t2382301192::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t2382301192>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Type,System.Type>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m4189730454_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Type_t * ___key0, Type_t * ___value1, bool* comReturnValue)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Type,System.Type>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m1267624818_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Type_t * ___key0)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Type,System.Type>::Clear()
il2cpp_hresult_t IMap_2_Clear_m2235974657_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m2235974657_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Type>>::Clear() */, ICollection_1_t1564181633_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Type,System.Type>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m580708534_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Type_t * ___key0, Type_t ** comReturnValue)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Type,System.Type>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m2678681203_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m2678681203_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Type>>::get_Count() */, IReadOnlyCollection_1_t3034112632_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Type,System.Type>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m1363070300_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Type_t * ___key0, bool* comReturnValue)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Type,System.Type>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m964547936_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t2382301192** ___first0, IMapView_2_t2382301192** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m964547936_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Type,System.Type>>::get_Count() */, IReadOnlyCollection_1_t3034112632_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t164184047 * splittableMap = (ConstantSplittableMap_2_t164184047 *)IsInstSealed(__this, ConstantSplittableMap_2_t164184047_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t164184047*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t164184047_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m2711158636(splittableMap, __this, ConstantSplittableMap_2__ctor_m2711158636_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m829232429(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m829232429_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t2382301192::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t2382301192>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t2382301192::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t2382301192>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Type,System.Type>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m2294505739_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Type_t ** comReturnValue)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Type,System.Type>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m1073902776_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Type_t ** comReturnValue)
{
	IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_marshal_directive_exception("Cannot marshal type 'System.Type'."),NULL);
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Int16,System.Object>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m1377426718_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int16_t ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m1377426718_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int16_t, RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int16,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t3734264692_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Int16,System.Object>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m2007020954_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m2007020954_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>>::get_Count() */, ICollection_1_t1906303110_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int16,System.Object>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m1075586825_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int16_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m1075586825_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int16_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int16,System.Object>::ContainsKey(TKey) */, IDictionary_2_t3734264692_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Int16,System.Object>::GetView()
il2cpp_hresult_t IMap_2_GetView_m804961895_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t2724422669** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m804961895_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t1391415401_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t4269753028 * readOnlyDictionary = (ReadOnlyDictionary_2_t4269753028*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t4269753028_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m119515751(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m119515751_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t2724422669* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t2724422669::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t2724422669>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int16,System.Object>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m4079130092_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int16_t ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m4079130092_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	RuntimeObject * ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, int16_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int16,System.Object>::ContainsKey(TKey) */, IDictionary_2_t3734264692_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< int16_t, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int16,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t3734264692_il2cpp_TypeInfo_var, __this, ___key0, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int16,System.Object>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m3581067814_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int16_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m3581067814_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, int16_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int16,System.Object>::Remove(TKey) */, IDictionary_2_t3734264692_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int16,System.Object>::Clear()
il2cpp_hresult_t IMap_2_Clear_m869510232_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m869510232_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>>::Clear() */, ICollection_1_t1906303110_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Int16,System.Object>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m2413624234_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int16_t ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m2413624234_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int16_t, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int16,System.Object>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t1391415401_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Int16,System.Object>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m902359432_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m902359432_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>>::get_Count() */, IReadOnlyCollection_1_t3376234109_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Int16,System.Object>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m376069899_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int16_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m376069899_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int16_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int16,System.Object>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t1391415401_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Int16,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m1121423689_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t2724422669** ___first0, IMapView_2_t2724422669** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m1121423689_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int16,System.Object>>::get_Count() */, IReadOnlyCollection_1_t3376234109_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t506305524 * splittableMap = (ConstantSplittableMap_2_t506305524 *)IsInstSealed(__this, ConstantSplittableMap_2_t506305524_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t506305524*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t506305524_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m3254295153(splittableMap, __this, ConstantSplittableMap_2__ctor_m3254295153_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m1257898454(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m1257898454_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t2724422669::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t2724422669>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t2724422669::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t2724422669>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Int16,System.Object>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m2077915680_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int16_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m2077915680_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	int16_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m3277879993((KeyValuePair_2_t3373118172*)UnBox(__thisValue, KeyValuePair_2_t3373118172_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m3277879993_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Int16,System.Object>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m693116984_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m693116984_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m1448500413((KeyValuePair_2_t3373118172*)UnBox(__thisValue, KeyValuePair_2_t3373118172_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m1448500413_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.String,System.Char>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m1226578202_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppChar* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m1226578202_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	Il2CppChar returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, Il2CppChar* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Char>::TryGetValue(TKey,TValue&) */, IDictionary_2_t1883568160_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0x0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.String,System.Char>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m953287421_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m953287421_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>::get_Count() */, ICollection_1_t55606578_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Char>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m3168229620_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m3168229620_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Char>::ContainsKey(TKey) */, IDictionary_2_t1883568160_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.String,System.Char>::GetView()
il2cpp_hresult_t IMap_2_GetView_m3012284534_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t873726137** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m3012284534_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t3835686165_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t2419056496 * readOnlyDictionary = (ReadOnlyDictionary_2_t2419056496*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t2419056496_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m2491777098(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m2491777098_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t873726137* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t873726137::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t873726137>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.String,System.Char>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m2426351234_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppChar ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m2426351234_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Char>::ContainsKey(TKey) */, IDictionary_2_t1883568160_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< String_t*, Il2CppChar >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.String,System.Char>::set_Item(TKey,TValue) */, IDictionary_2_t1883568160_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Char>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m3659944873_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m3659944873_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, String_t* >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.String,System.Char>::Remove(TKey) */, IDictionary_2_t1883568160_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.String,System.Char>::Clear()
il2cpp_hresult_t IMap_2_Clear_m3161566146_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m3161566146_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>::Clear() */, ICollection_1_t55606578_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.String,System.Char>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m399377357_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, Il2CppChar* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m399377357_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	Il2CppChar returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, String_t*, Il2CppChar* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Char>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t3835686165_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0x0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.String,System.Char>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m3246206294_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m3246206294_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>::get_Count() */, IReadOnlyCollection_1_t1525537577_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.String,System.Char>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m2413362274_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m2413362274_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	String_t* ____key0_unmarshaled = NULL;
	____key0_unmarshaled = il2cpp_codegen_marshal_hstring_result(___key0);

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, String_t* >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.String,System.Char>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t3835686165_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.String,System.Char>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m2948761159_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t873726137** ___first0, IMapView_2_t873726137** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m2948761159_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.String,System.Char>>::get_Count() */, IReadOnlyCollection_1_t1525537577_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t2950576288 * splittableMap = (ConstantSplittableMap_2_t2950576288 *)IsInstSealed(__this, ConstantSplittableMap_2_t2950576288_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t2950576288*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t2950576288_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m872198931(splittableMap, __this, ConstantSplittableMap_2__ctor_m872198931_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m52071581(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m52071581_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t873726137::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t873726137>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t873726137::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t873726137>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Char>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m1046287378_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m1046287378_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m347998276((KeyValuePair_2_t3084571625*)UnBox(__thisValue, KeyValuePair_2_t3084571625_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m347998276_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Object,System.Char>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m547158090_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppChar* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m547158090_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	Il2CppChar returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m3672048595((KeyValuePair_2_t3084571625*)UnBox(__thisValue, KeyValuePair_2_t3084571625_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m3672048595_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0x0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Object,System.Char>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m1957260505_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, Il2CppChar* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m1957260505_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	Il2CppChar returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, Il2CppChar* >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Char>::TryGetValue(TKey,TValue&) */, IDictionary_2_t3445718145_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0x0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Object,System.Char>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m4154899271_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m4154899271_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::get_Count() */, ICollection_1_t1617756563_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Char>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m3146129820_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m3146129820_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Char>::ContainsKey(TKey) */, IDictionary_2_t3445718145_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Object,System.Char>::GetView()
il2cpp_hresult_t IMap_2_GetView_m402110412_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t2435876122** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m402110412_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t1102868854_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t3981206481 * readOnlyDictionary = (ReadOnlyDictionary_2_t3981206481*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t3981206481_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m163702474(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m163702474_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t2435876122* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t2435876122::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t2435876122>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Object,System.Char>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m2496848365_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, Il2CppChar ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m2496848365_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Char>::ContainsKey(TKey) */, IDictionary_2_t3445718145_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);
		InterfaceActionInvoker2< RuntimeObject *, Il2CppChar >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Object,System.Char>::set_Item(TKey,TValue) */, IDictionary_2_t3445718145_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, ___value1);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Char>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m175080439_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m175080439_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Object,System.Char>::Remove(TKey) */, IDictionary_2_t3445718145_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Object,System.Char>::Clear()
il2cpp_hresult_t IMap_2_Clear_m1829911841_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m1829911841_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::Clear() */, ICollection_1_t1617756563_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Object,System.Char>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m1265563177_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, Il2CppChar* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m1265563177_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	Il2CppChar returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, RuntimeObject *, Il2CppChar* >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Char>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t1102868854_il2cpp_TypeInfo_var, __this, ____key0_unmarshaled, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0x0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Object,System.Char>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m1806056645_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m1806056645_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::get_Count() */, IReadOnlyCollection_1_t3087687562_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Object,System.Char>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m1994695022_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable* ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m1994695022_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___key0' to managed representation
	RuntimeObject * ____key0_unmarshaled = NULL;
	if (___key0 != NULL)
	{
		____key0_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___key0, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____key0_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, RuntimeObject * >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Object,System.Char>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t1102868854_il2cpp_TypeInfo_var, __thisValue, ____key0_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Object,System.Char>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m551954581_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t2435876122** ___first0, IMapView_2_t2435876122** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m551954581_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Object,System.Char>>::get_Count() */, IReadOnlyCollection_1_t3087687562_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t217758977 * splittableMap = (ConstantSplittableMap_2_t217758977 *)IsInstSealed(__this, ConstantSplittableMap_2_t217758977_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t217758977*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t217758977_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m982374164(splittableMap, __this, ConstantSplittableMap_2__ctor_m982374164_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m769420026(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m769420026_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t2435876122::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t2435876122>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t2435876122::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t2435876122>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Char>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m980420821_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppHString* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m980420821_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	String_t* returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m1256714359((KeyValuePair_2_t1522421640*)UnBox(__thisValue, KeyValuePair_2_t1522421640_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m1256714359_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppHString _returnValue_marshaled = NULL;
	if (returnValue == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("returnValue"),NULL);
	}
	_returnValue_marshaled = il2cpp_codegen_create_hstring(returnValue);

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.String,System.Char>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m1390024704_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppChar* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m1390024704_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	Il2CppChar returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m4279551231((KeyValuePair_2_t1522421640*)UnBox(__thisValue, KeyValuePair_2_t1522421640_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m4279551231_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0x0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.Int64,System.Object>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m367753107_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int64_t ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m367753107_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int64_t, RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t2606597339_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.Int64,System.Object>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m137360363_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m137360363_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Count() */, ICollection_1_t778635757_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int64,System.Object>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m663731653_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int64_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m663731653_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int64_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::ContainsKey(TKey) */, IDictionary_2_t2606597339_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.Int64,System.Object>::GetView()
il2cpp_hresult_t IMap_2_GetView_m1077656533_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1596755316** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m1077656533_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t263748048_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t3142085675 * readOnlyDictionary = (ReadOnlyDictionary_2_t3142085675*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t3142085675_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m2780183003(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m2780183003_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t1596755316* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t1596755316::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1596755316>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.Int64,System.Object>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m2086881606_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int64_t ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m2086881606_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	RuntimeObject * ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, int64_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::ContainsKey(TKey) */, IDictionary_2_t2606597339_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< int64_t, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t2606597339_il2cpp_TypeInfo_var, __this, ___key0, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int64,System.Object>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m2064551222_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int64_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m2064551222_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, int64_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.Int64,System.Object>::Remove(TKey) */, IDictionary_2_t2606597339_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.Int64,System.Object>::Clear()
il2cpp_hresult_t IMap_2_Clear_m156915013_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m156915013_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::Clear() */, ICollection_1_t778635757_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.Int64,System.Object>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m2833276555_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int64_t ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m2833276555_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, int64_t, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int64,System.Object>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t263748048_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.Int64,System.Object>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m2657859418_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m2657859418_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Count() */, IReadOnlyCollection_1_t2248566756_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.Int64,System.Object>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m1129223030_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int64_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m1129223030_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, int64_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.Int64,System.Object>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t263748048_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.Int64,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m2875932391_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1596755316** ___first0, IMapView_2_t1596755316** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m2875932391_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.Int64,System.Object>>::get_Count() */, IReadOnlyCollection_1_t2248566756_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t3673605467 * splittableMap = (ConstantSplittableMap_2_t3673605467 *)IsInstSealed(__this, ConstantSplittableMap_2_t3673605467_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t3673605467*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t3673605467_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m3856857150(splittableMap, __this, ConstantSplittableMap_2__ctor_m3856857150_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m882408943(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m882408943_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t1596755316::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1596755316>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t1596755316::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1596755316>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.Int64,System.Object>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m1937891137_ComCallableWrapperProjectedMethod(RuntimeObject* __this, int64_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m1937891137_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	int64_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m635992374((KeyValuePair_2_t2245450819*)UnBox(__thisValue, KeyValuePair_2_t2245450819_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m635992374_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.Int64,System.Object>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m1356929877_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m1356929877_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m392474074((KeyValuePair_2_t2245450819*)UnBox(__thisValue, KeyValuePair_2_t2245450819_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m392474074_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMap`2<System.UInt32,System.Object>::Lookup(K)
il2cpp_hresult_t IMap_2_Lookup_m2631401358_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Lookup_m2631401358_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, uint32_t, RuntimeObject ** >::Invoke(7 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Object>::TryGetValue(TKey,TValue&) */, IDictionary_2_t2818225217_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMap`2<System.UInt32,System.Object>::get_Size()
il2cpp_hresult_t IMap_2_get_Size_m3107625399_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_get_Size_m3107625399_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Count() */, ICollection_1_t990263635_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.UInt32,System.Object>::HasKey(K)
il2cpp_hresult_t IMap_2_HasKey_m1140347487_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_HasKey_m1140347487_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Object>::ContainsKey(TKey) */, IDictionary_2_t2818225217_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Collections.Generic.IReadOnlyDictionary`2<K,V> Windows.Foundation.Collections.IMap`2<System.UInt32,System.Object>::GetView()
il2cpp_hresult_t IMap_2_GetView_m1344022084_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1808383194** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_GetView_m1344022084_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject* returnValue;
	try
	{
		RuntimeObject* __thisValue = __this;
		if (IsInst(__thisValue, IReadOnlyDictionary_2_t475375926_il2cpp_TypeInfo_var))
		{
			returnValue = __thisValue;
		}
		else
		{
			ReadOnlyDictionary_2_t3353713553 * readOnlyDictionary = (ReadOnlyDictionary_2_t3353713553*)il2cpp_codegen_object_new(ReadOnlyDictionary_2_t3353713553_il2cpp_TypeInfo_var);
			ReadOnlyDictionary_2__ctor_m3549648522(readOnlyDictionary, __thisValue, ReadOnlyDictionary_2__ctor_m3549648522_RuntimeMethod_var);
			returnValue = readOnlyDictionary;
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	IMapView_2_t1808383194* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(IMapView_2_t1808383194::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1808383194>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMap`2<System.UInt32,System.Object>::Insert(K,V)
il2cpp_hresult_t IMap_2_Insert_m3454051178_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, Il2CppIInspectable* ___value1, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Insert_m3454051178_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___value1' to managed representation
	RuntimeObject * ____value1_unmarshaled = NULL;
	if (___value1 != NULL)
	{
		____value1_unmarshaled = il2cpp_codegen_com_get_or_create_rcw_from_iinspectable<RuntimeObject>(___value1, Il2CppComObject_il2cpp_TypeInfo_var);
	}
	else
	{
		____value1_unmarshaled = NULL;
	}

	// Managed method invocation
	bool returnValue;
	try
	{
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(4 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Object>::ContainsKey(TKey) */, IDictionary_2_t2818225217_il2cpp_TypeInfo_var, __this, ___key0);
		InterfaceActionInvoker2< uint32_t, RuntimeObject * >::Invoke(1 /* System.Void System.Collections.Generic.IDictionary`2<System.UInt32,System.Object>::set_Item(TKey,TValue) */, IDictionary_2_t2818225217_il2cpp_TypeInfo_var, __this, ___key0, ____value1_unmarshaled);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.UInt32,System.Object>::Remove(K)
il2cpp_hresult_t IMap_2_Remove_m1413378520_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Remove_m1413378520_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		bool removed = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(6 /* System.Boolean System.Collections.Generic.IDictionary`2<System.UInt32,System.Object>::Remove(TKey) */, IDictionary_2_t2818225217_il2cpp_TypeInfo_var, __this, ___key0);

		if (!removed)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMap`2<System.UInt32,System.Object>::Clear()
il2cpp_hresult_t IMap_2_Clear_m3255529802_ComCallableWrapperProjectedMethod(RuntimeObject* __this)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMap_2_Clear_m3255529802_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		InterfaceActionInvoker0::Invoke(3 /* System.Void System.Collections.Generic.ICollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::Clear() */, ICollection_1_t990263635_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Object>::Lookup(K)
il2cpp_hresult_t IMapView_2_Lookup_m3822737838_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Lookup_m3822737838_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		bool keyFound = InterfaceFuncInvoker2< bool, uint32_t, RuntimeObject ** >::Invoke(1 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.Object>::TryGetValue(TKey,TValue&) */, IReadOnlyDictionary_2_t475375926_il2cpp_TypeInfo_var, __this, ___key0, (&returnValue));

		if (!keyFound)
		{
			KeyNotFoundException_t2292407383 * e = (KeyNotFoundException_t2292407383*)il2cpp_codegen_object_new(KeyNotFoundException_t2292407383_il2cpp_TypeInfo_var);
			KeyNotFoundException__ctor_m2696589580(e, _stringLiteral4076297504, NULL);
			Exception_set_HResult_m3489164646(e, -2147483637, NULL); // E_BOUNDS
			IL2CPP_RAISE_MANAGED_EXCEPTION(e,NULL);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.UInt32 Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Object>::get_Size()
il2cpp_hresult_t IMapView_2_get_Size_m142448920_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_get_Size_m142448920_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Count() */, IReadOnlyCollection_1_t2460194634_il2cpp_TypeInfo_var, __thisValue);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Boolean Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Object>::HasKey(K)
il2cpp_hresult_t IMapView_2_HasKey_m2107050039_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t ___key0, bool* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_HasKey_m2107050039_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	bool returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = InterfaceFuncInvoker1< bool, uint32_t >::Invoke(0 /* System.Boolean System.Collections.Generic.IReadOnlyDictionary`2<System.UInt32,System.Object>::ContainsKey(TKey) */, IReadOnlyDictionary_2_t475375926_il2cpp_TypeInfo_var, __thisValue, ___key0);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = false;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for System.Void Windows.Foundation.Collections.IMapView`2<System.UInt32,System.Object>::Split(System.Collections.Generic.IReadOnlyDictionary`2<K,V>&,System.Collections.Generic.IReadOnlyDictionary`2<K,V>&)
il2cpp_hresult_t IMapView_2_Split_m4049158937_ComCallableWrapperProjectedMethod(RuntimeObject* __this, IMapView_2_t1808383194** ___first0, IMapView_2_t1808383194** ___second1)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IMapView_2_Split_m4049158937_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Marshaling of parameter '___first0' to managed representation
	RuntimeObject* ____first0_empty = NULL;

	// Marshaling of parameter '___second1' to managed representation
	RuntimeObject* ____second1_empty = NULL;

	// Managed method invocation
	try
	{
		int32_t itemsInCollection = InterfaceFuncInvoker0< int32_t >::Invoke(0 /* System.Int32 System.Collections.Generic.IReadOnlyCollection`1<System.Collections.Generic.KeyValuePair`2<System.UInt32,System.Object>>::get_Count() */, IReadOnlyCollection_1_t2460194634_il2cpp_TypeInfo_var, __this);
		if (itemsInCollection > 1)
		{
			ConstantSplittableMap_2_t3885233345 * splittableMap = (ConstantSplittableMap_2_t3885233345 *)IsInstSealed(__this, ConstantSplittableMap_2_t3885233345_il2cpp_TypeInfo_var);

			if (splittableMap == NULL)
			{
				splittableMap = (ConstantSplittableMap_2_t3885233345*)il2cpp_codegen_object_new(ConstantSplittableMap_2_t3885233345_il2cpp_TypeInfo_var);
				ConstantSplittableMap_2__ctor_m4144945432(splittableMap, __this, ConstantSplittableMap_2__ctor_m4144945432_RuntimeMethod_var);
			}

			ConstantSplittableMap_2_Split_m277985157(splittableMap, (&____first0_empty), (&____second1_empty), ConstantSplittableMap_2_Split_m277985157_RuntimeMethod_var);
		}
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of parameter '___first0' back from managed representation
	if (____first0_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____first0_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____first0_empty)->identity->QueryInterface(IMapView_2_t1808383194::IID, reinterpret_cast<void**>(&*___first0));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___first0 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1808383194>(____first0_empty);
		}
	}
	else
	{
		*___first0 = NULL;
	}

	// Marshaling of parameter '___second1' back from managed representation
	if (____second1_empty != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(____second1_empty))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)____second1_empty)->identity->QueryInterface(IMapView_2_t1808383194::IID, reinterpret_cast<void**>(&*___second1));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			*___second1 = il2cpp_codegen_com_get_or_create_ccw<IMapView_2_t1808383194>(____second1_empty);
		}
	}
	else
	{
		*___second1 = NULL;
	}

	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for K Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Object>::get_Key()
il2cpp_hresult_t IKeyValuePair_2_get_Key_m2175672871_ComCallableWrapperProjectedMethod(RuntimeObject* __this, uint32_t* comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Key_m2175672871_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	uint32_t returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Key_m1662296104((KeyValuePair_2_t2457078697*)UnBox(__thisValue, KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var), KeyValuePair_2_get_Key_m1662296104_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = 0;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	*comReturnValue = returnValue;
	return IL2CPP_S_OK;
}
// Projected COM callable wrapper method for V Windows.Foundation.Collections.IKeyValuePair`2<System.UInt32,System.Object>::get_Value()
il2cpp_hresult_t IKeyValuePair_2_get_Value_m3078130594_ComCallableWrapperProjectedMethod(RuntimeObject* __this, Il2CppIInspectable** comReturnValue)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (IKeyValuePair_2_get_Value_m3078130594_ComCallableWrapperProjectedMethod_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	il2cpp_native_wrapper_vm_thread_attacher _vmThreadHelper;

	// Managed method invocation
	RuntimeObject * returnValue;
	try
	{
		RuntimeObject* __thisValue = (RuntimeObject*)__this;
		returnValue = KeyValuePair_2_get_Value_m1484005982((KeyValuePair_2_t2457078697*)UnBox(__thisValue, KeyValuePair_2_t2457078697_il2cpp_TypeInfo_var), KeyValuePair_2_get_Value_m1484005982_RuntimeMethod_var);
	}
	catch (const Il2CppExceptionWrapper& ex)
	{
		*comReturnValue = NULL;
		String_t* exceptionStr = NULL;
		try
		{
			exceptionStr = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, ex.ex);
		}
		catch (const Il2CppExceptionWrapper&)
		{
			exceptionStr = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->get_Empty_5();
		}
		il2cpp_codegen_store_exception_info(ex.ex, exceptionStr);
		return ex.ex->hresult;
	}

	// Marshaling of return value back from managed representation
	Il2CppIInspectable* _returnValue_marshaled = NULL;
	if (returnValue != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(returnValue))
		{
			il2cpp_hresult_t hr = ((Il2CppComObject *)returnValue)->identity->QueryInterface(Il2CppIInspectable::IID, reinterpret_cast<void**>(&_returnValue_marshaled));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);
		}
		else
		{
			_returnValue_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(returnValue);
		}
	}
	else
	{
		_returnValue_marshaled = NULL;
	}

	*comReturnValue = _returnValue_marshaled;
	return IL2CPP_S_OK;
}
