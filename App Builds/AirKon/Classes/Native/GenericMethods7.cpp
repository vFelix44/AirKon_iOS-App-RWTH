﻿#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>


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
template <typename R, typename T1, typename T2>
struct VirtFuncInvoker2
{
	typedef R (*Func)(void*, T1, T2, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1, T2 p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, p2, invokeData.method);
	}
};

// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>>
struct CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6;
// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo>
struct CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE;
// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo>
struct ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32>
struct Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable>
struct Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352;
// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F;
// System.Collections.Generic.HashSet`1<System.Object>
struct HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0;
// System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>
struct IEnumerable_1_tF5978845C2912DCA5471ADD9480357E32BB03D1E;
// System.Collections.Generic.IEqualityComparer`1<System.Linq.Expressions.ParameterExpression>
struct IEqualityComparer_1_t25F6568124205E1DCEEEFEF9FFD485B340114892;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5;
// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B;
// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958;
// System.Collections.Generic.Stack`1<System.Object>
struct Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981;
// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>[]
struct HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275;
// System.Collections.Generic.HashSet`1/Slot<System.Linq.Expressions.ParameterExpression>[]
struct SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E;
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
// System.IntPtr[]
struct IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6;
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147;
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
// System.Diagnostics.StackTrace[]
struct StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971;
// System.Type[]
struct TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755;
// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E;
// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00;
// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8;
// System.Reflection.Binder
struct Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30;
// System.Exception
struct Exception_t;
// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660;
// UnityEngine.GlobalJavaObjectRef
struct GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289;
// System.Collections.IDictionary
struct IDictionary_t99871C56B8EC2452AC5C4CF3831695E617B89D3A;
// System.Linq.Expressions.Interpreter.InterpretedFrame
struct InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474;
// System.Reflection.MemberFilter
struct MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81;
// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE;
// System.Runtime.Serialization.SafeSerializationManager
struct SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F;
// System.Runtime.Serialization.SerializationInfo
struct SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1;
// System.String
struct String_t;
// System.Text.StringBuilder
struct StringBuilder_t;
// System.Type
struct Type_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627;
// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE;

IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringBuilder_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral121FF5564E1B93612CC7A3748FAD95C919EF04E2;
IL2CPP_EXTERN_C String_t* _stringLiteral24CC8D396132365E532646F936DFC8579E2299B2;
IL2CPP_EXTERN_C String_t* _stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D;
IL2CPP_EXTERN_C String_t* _stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C;
IL2CPP_EXTERN_C String_t* _stringLiteral68C1CA2959BA9A4A0F4FC3A15F854C304C716D2C;
IL2CPP_EXTERN_C String_t* _stringLiteral6CF91F6B7DE6325C51CD043CCC47AFED4D93DDFE;
IL2CPP_EXTERN_C String_t* _stringLiteral9322B0066DF9816B83486A4449B3C467CE58EB78;
IL2CPP_EXTERN_C String_t* _stringLiteral9AEE74398EBD8002DAB30FB04C4295D7A22DA0FB;
IL2CPP_EXTERN_C String_t* _stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914;
IL2CPP_EXTERN_C const RuntimeMethod* Array_Empty_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_m8FAF2226E6288860C1D3C92AB793820D17F32D71_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_Add_mC5D74D70A6B9B4BC082AEB0EC771879B842C7708_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mE4C9B3F15E5D5168479F4E7227A000B97C871A30_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_GetIndexData_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m2E0E902D84857549A19F7E675EB5767D21BC8C19_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_GetIndexData_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m7546561C94E85FE1C5EAFE9923A29A79B808E02F_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_GetVertexData_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mF73139A474DE63BC44CA1D6C548CE4462485706C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* MeshData_GetVertexData_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mC879F60D7A7863A2E9E05333177CFFFF3DFFEC20_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m67885FB92D65381C9570857BCD66D9A5377C9FC2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m353E485413995A0C209B6FAA96D368CF72FB4592_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m2F4CBB579C50AAAF7EF6FBC73C5FC304A87A60EE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD3EDB3217478F469F150970E33043F80EF1BA3CB_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* String_t_0_0_0_var;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120;
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C;
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726;
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34;
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB;
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD;
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32;
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6;
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE;
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147;
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7;
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA;
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Object


// System.EmptyArray`1<System.Object>
struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4  : public RuntimeObject
{
public:

public:
};

struct EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields
{
public:
	// T[] System.EmptyArray`1::Value
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___Value_0;

public:
	inline static int32_t get_offset_of_Value_0() { return static_cast<int32_t>(offsetof(EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields, ___Value_0)); }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* get_Value_0() const { return ___Value_0; }
	inline ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE** get_address_of_Value_0() { return &___Value_0; }
	inline void set_Value_0(ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* value)
	{
		___Value_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Value_0), (void*)value);
	}
};


// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>
struct HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0  : public RuntimeObject
{
public:
	// System.Int32[] System.Collections.Generic.HashSet`1::_buckets
	Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* ____buckets_7;
	// System.Collections.Generic.HashSet`1/Slot<T>[] System.Collections.Generic.HashSet`1::_slots
	SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E* ____slots_8;
	// System.Int32 System.Collections.Generic.HashSet`1::_count
	int32_t ____count_9;
	// System.Int32 System.Collections.Generic.HashSet`1::_lastIndex
	int32_t ____lastIndex_10;
	// System.Int32 System.Collections.Generic.HashSet`1::_freeList
	int32_t ____freeList_11;
	// System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::_comparer
	RuntimeObject* ____comparer_12;
	// System.Int32 System.Collections.Generic.HashSet`1::_version
	int32_t ____version_13;
	// System.Runtime.Serialization.SerializationInfo System.Collections.Generic.HashSet`1::_siInfo
	SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * ____siInfo_14;

public:
	inline static int32_t get_offset_of__buckets_7() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____buckets_7)); }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* get__buckets_7() const { return ____buckets_7; }
	inline Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32** get_address_of__buckets_7() { return &____buckets_7; }
	inline void set__buckets_7(Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* value)
	{
		____buckets_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____buckets_7), (void*)value);
	}

	inline static int32_t get_offset_of__slots_8() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____slots_8)); }
	inline SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E* get__slots_8() const { return ____slots_8; }
	inline SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E** get_address_of__slots_8() { return &____slots_8; }
	inline void set__slots_8(SlotU5BU5D_tAF315AD110D3AD4FBD91B25289AFC6FB963DC31E* value)
	{
		____slots_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____slots_8), (void*)value);
	}

	inline static int32_t get_offset_of__count_9() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____count_9)); }
	inline int32_t get__count_9() const { return ____count_9; }
	inline int32_t* get_address_of__count_9() { return &____count_9; }
	inline void set__count_9(int32_t value)
	{
		____count_9 = value;
	}

	inline static int32_t get_offset_of__lastIndex_10() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____lastIndex_10)); }
	inline int32_t get__lastIndex_10() const { return ____lastIndex_10; }
	inline int32_t* get_address_of__lastIndex_10() { return &____lastIndex_10; }
	inline void set__lastIndex_10(int32_t value)
	{
		____lastIndex_10 = value;
	}

	inline static int32_t get_offset_of__freeList_11() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____freeList_11)); }
	inline int32_t get__freeList_11() const { return ____freeList_11; }
	inline int32_t* get_address_of__freeList_11() { return &____freeList_11; }
	inline void set__freeList_11(int32_t value)
	{
		____freeList_11 = value;
	}

	inline static int32_t get_offset_of__comparer_12() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____comparer_12)); }
	inline RuntimeObject* get__comparer_12() const { return ____comparer_12; }
	inline RuntimeObject** get_address_of__comparer_12() { return &____comparer_12; }
	inline void set__comparer_12(RuntimeObject* value)
	{
		____comparer_12 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____comparer_12), (void*)value);
	}

	inline static int32_t get_offset_of__version_13() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____version_13)); }
	inline int32_t get__version_13() const { return ____version_13; }
	inline int32_t* get_address_of__version_13() { return &____version_13; }
	inline void set__version_13(int32_t value)
	{
		____version_13 = value;
	}

	inline static int32_t get_offset_of__siInfo_14() { return static_cast<int32_t>(offsetof(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0, ____siInfo_14)); }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * get__siInfo_14() const { return ____siInfo_14; }
	inline SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 ** get_address_of__siInfo_14() { return &____siInfo_14; }
	inline void set__siInfo_14(SerializationInfo_t097DA64D9DB49ED7F2458E964BE8CCCF63FC67C1 * value)
	{
		____siInfo_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____siInfo_14), (void*)value);
	}
};


// System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>
struct List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B, ____items_1)); }
	inline ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* get__items_1() const { return ____items_1; }
	inline ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B_StaticFields, ____emptyArray_5)); }
	inline ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* get__emptyArray_5() const { return ____emptyArray_5; }
	inline ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>
struct Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.Stack`1::_array
	HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275* ____array_0;
	// System.Int32 System.Collections.Generic.Stack`1::_size
	int32_t ____size_1;
	// System.Int32 System.Collections.Generic.Stack`1::_version
	int32_t ____version_2;
	// System.Object System.Collections.Generic.Stack`1::_syncRoot
	RuntimeObject * ____syncRoot_3;

public:
	inline static int32_t get_offset_of__array_0() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____array_0)); }
	inline HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275* get__array_0() const { return ____array_0; }
	inline HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275** get_address_of__array_0() { return &____array_0; }
	inline void set__array_0(HashSet_1U5BU5D_tE80AA7A58195958A441A5F7F80D36F0F00AD9275* value)
	{
		____array_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____array_0), (void*)value);
	}

	inline static int32_t get_offset_of__size_1() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____size_1)); }
	inline int32_t get__size_1() const { return ____size_1; }
	inline int32_t* get_address_of__size_1() { return &____size_1; }
	inline void set__size_1(int32_t value)
	{
		____size_1 = value;
	}

	inline static int32_t get_offset_of__version_2() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____version_2)); }
	inline int32_t get__version_2() const { return ____version_2; }
	inline int32_t* get_address_of__version_2() { return &____version_2; }
	inline void set__version_2(int32_t value)
	{
		____version_2 = value;
	}

	inline static int32_t get_offset_of__syncRoot_3() { return static_cast<int32_t>(offsetof(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958, ____syncRoot_3)); }
	inline RuntimeObject * get__syncRoot_3() const { return ____syncRoot_3; }
	inline RuntimeObject ** get_address_of__syncRoot_3() { return &____syncRoot_3; }
	inline void set__syncRoot_3(RuntimeObject * value)
	{
		____syncRoot_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_3), (void*)value);
	}
};


// UnityEngine.AndroidJavaObject
struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E  : public RuntimeObject
{
public:
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jobject
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jobject_1;
	// UnityEngine.GlobalJavaObjectRef UnityEngine.AndroidJavaObject::m_jclass
	GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * ___m_jclass_2;

public:
	inline static int32_t get_offset_of_m_jobject_1() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jobject_1)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jobject_1() const { return ___m_jobject_1; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jobject_1() { return &___m_jobject_1; }
	inline void set_m_jobject_1(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jobject_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jobject_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_jclass_2() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E, ___m_jclass_2)); }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * get_m_jclass_2() const { return ___m_jclass_2; }
	inline GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 ** get_address_of_m_jclass_2() { return &___m_jclass_2; }
	inline void set_m_jclass_2(GlobalJavaObjectRef_t04A7D04EB0317C286F089E4DB4444EC4F2D78289 * value)
	{
		___m_jclass_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_jclass_2), (void*)value);
	}
};

struct AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields
{
public:
	// System.Boolean UnityEngine.AndroidJavaObject::enableDebugPrints
	bool ___enableDebugPrints_0;

public:
	inline static int32_t get_offset_of_enableDebugPrints_0() { return static_cast<int32_t>(offsetof(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_StaticFields, ___enableDebugPrints_0)); }
	inline bool get_enableDebugPrints_0() const { return ___enableDebugPrints_0; }
	inline bool* get_address_of_enableDebugPrints_0() { return &___enableDebugPrints_0; }
	inline void set_enableDebugPrints_0(bool value)
	{
		___enableDebugPrints_0 = value;
	}
};


// System.Linq.Expressions.Expression
struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660  : public RuntimeObject
{
public:

public:
};

struct Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields
{
public:
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Reflection.MethodInfo> System.Linq.Expressions.Expression::s_lambdaDelegateCache
	CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * ___s_lambdaDelegateCache_0;
	// System.Dynamic.Utils.CacheDict`2<System.Type,System.Func`5<System.Linq.Expressions.Expression,System.String,System.Boolean,System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ParameterExpression>,System.Linq.Expressions.LambdaExpression>> modreq(System.Runtime.CompilerServices.IsVolatile) System.Linq.Expressions.Expression::s_lambdaFactories
	CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * ___s_lambdaFactories_1;
	// System.Runtime.CompilerServices.ConditionalWeakTable`2<System.Linq.Expressions.Expression,System.Linq.Expressions.Expression/ExtensionInfo> System.Linq.Expressions.Expression::s_legacyCtorSupportTable
	ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * ___s_legacyCtorSupportTable_2;

public:
	inline static int32_t get_offset_of_s_lambdaDelegateCache_0() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaDelegateCache_0)); }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * get_s_lambdaDelegateCache_0() const { return ___s_lambdaDelegateCache_0; }
	inline CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE ** get_address_of_s_lambdaDelegateCache_0() { return &___s_lambdaDelegateCache_0; }
	inline void set_s_lambdaDelegateCache_0(CacheDict_2_t23833FEB97C42D87EBF4B5FE3B56AA1336D7B3CE * value)
	{
		___s_lambdaDelegateCache_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaDelegateCache_0), (void*)value);
	}

	inline static int32_t get_offset_of_s_lambdaFactories_1() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_lambdaFactories_1)); }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * get_s_lambdaFactories_1() const { return ___s_lambdaFactories_1; }
	inline CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 ** get_address_of_s_lambdaFactories_1() { return &___s_lambdaFactories_1; }
	inline void set_s_lambdaFactories_1(CacheDict_2_t9FD97836EA998D29FFE492313652BD241E48F2C6 * value)
	{
		___s_lambdaFactories_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_lambdaFactories_1), (void*)value);
	}

	inline static int32_t get_offset_of_s_legacyCtorSupportTable_2() { return static_cast<int32_t>(offsetof(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660_StaticFields, ___s_legacyCtorSupportTable_2)); }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * get_s_legacyCtorSupportTable_2() const { return ___s_legacyCtorSupportTable_2; }
	inline ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 ** get_address_of_s_legacyCtorSupportTable_2() { return &___s_legacyCtorSupportTable_2; }
	inline void set_s_legacyCtorSupportTable_2(ConditionalWeakTable_2_t53315BD762B310982B9C8EEAA1BEB06E4E8D0815 * value)
	{
		___s_legacyCtorSupportTable_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_legacyCtorSupportTable_2), (void*)value);
	}
};


// System.Linq.Expressions.ExpressionVisitor
struct ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4  : public RuntimeObject
{
public:

public:
};


// System.Reflection.MemberInfo
struct MemberInfo_t  : public RuntimeObject
{
public:

public:
};


// System.String
struct String_t  : public RuntimeObject
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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.StringBuilder
struct StringBuilder_t  : public RuntimeObject
{
public:
	// System.Char[] System.Text.StringBuilder::m_ChunkChars
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___m_ChunkChars_0;
	// System.Text.StringBuilder System.Text.StringBuilder::m_ChunkPrevious
	StringBuilder_t * ___m_ChunkPrevious_1;
	// System.Int32 System.Text.StringBuilder::m_ChunkLength
	int32_t ___m_ChunkLength_2;
	// System.Int32 System.Text.StringBuilder::m_ChunkOffset
	int32_t ___m_ChunkOffset_3;
	// System.Int32 System.Text.StringBuilder::m_MaxCapacity
	int32_t ___m_MaxCapacity_4;

public:
	inline static int32_t get_offset_of_m_ChunkChars_0() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkChars_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_m_ChunkChars_0() const { return ___m_ChunkChars_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_m_ChunkChars_0() { return &___m_ChunkChars_0; }
	inline void set_m_ChunkChars_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___m_ChunkChars_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkChars_0), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkPrevious_1() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkPrevious_1)); }
	inline StringBuilder_t * get_m_ChunkPrevious_1() const { return ___m_ChunkPrevious_1; }
	inline StringBuilder_t ** get_address_of_m_ChunkPrevious_1() { return &___m_ChunkPrevious_1; }
	inline void set_m_ChunkPrevious_1(StringBuilder_t * value)
	{
		___m_ChunkPrevious_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_ChunkPrevious_1), (void*)value);
	}

	inline static int32_t get_offset_of_m_ChunkLength_2() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkLength_2)); }
	inline int32_t get_m_ChunkLength_2() const { return ___m_ChunkLength_2; }
	inline int32_t* get_address_of_m_ChunkLength_2() { return &___m_ChunkLength_2; }
	inline void set_m_ChunkLength_2(int32_t value)
	{
		___m_ChunkLength_2 = value;
	}

	inline static int32_t get_offset_of_m_ChunkOffset_3() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_ChunkOffset_3)); }
	inline int32_t get_m_ChunkOffset_3() const { return ___m_ChunkOffset_3; }
	inline int32_t* get_address_of_m_ChunkOffset_3() { return &___m_ChunkOffset_3; }
	inline void set_m_ChunkOffset_3(int32_t value)
	{
		___m_ChunkOffset_3 = value;
	}

	inline static int32_t get_offset_of_m_MaxCapacity_4() { return static_cast<int32_t>(offsetof(StringBuilder_t, ___m_MaxCapacity_4)); }
	inline int32_t get_m_MaxCapacity_4() const { return ___m_MaxCapacity_4; }
	inline int32_t* get_address_of_m_MaxCapacity_4() { return &___m_MaxCapacity_4; }
	inline void set_m_MaxCapacity_4(int32_t value)
	{
		___m_MaxCapacity_4 = value;
	}
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider
struct SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9  : public RuntimeObject
{
public:
	// System.Boolean UnityEngine.SubsystemsImplementation.SubsystemProvider::m_Running
	bool ___m_Running_0;

public:
	inline static int32_t get_offset_of_m_Running_0() { return static_cast<int32_t>(offsetof(SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9, ___m_Running_0)); }
	inline bool get_m_Running_0() const { return ___m_Running_0; }
	inline bool* get_address_of_m_Running_0() { return &___m_Running_0; }
	inline void set_m_Running_0(bool value)
	{
		___m_Running_0 = value;
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// UnityEngine._AndroidJNIHelper
struct _AndroidJNIHelper_t664F535B46589884A627F66F98A451D1CD48F76B  : public RuntimeObject
{
public:

public:
};


// UnityEngine.SubsystemsImplementation.SubsystemProvider`1<UnityEngine.XR.ARSubsystems.XRPlaneSubsystem>
struct SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816  : public SubsystemProvider_t39E89FB8DB1EF1D2B0AF93796AEDB19D76A665F9
{
public:

public:
};


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Char
struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14 
{
public:
	// System.Char System.Char::m_value
	Il2CppChar ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14, ___m_value_0)); }
	inline Il2CppChar get_m_value_0() const { return ___m_value_0; }
	inline Il2CppChar* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(Il2CppChar value)
	{
		___m_value_0 = value;
	}
};

struct Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields
{
public:
	// System.Byte[] System.Char::categoryForLatin1
	ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* ___categoryForLatin1_3;

public:
	inline static int32_t get_offset_of_categoryForLatin1_3() { return static_cast<int32_t>(offsetof(Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_StaticFields, ___categoryForLatin1_3)); }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* get_categoryForLatin1_3() const { return ___categoryForLatin1_3; }
	inline ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726** get_address_of_categoryForLatin1_3() { return &___categoryForLatin1_3; }
	inline void set_categoryForLatin1_3(ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* value)
	{
		___categoryForLatin1_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___categoryForLatin1_3), (void*)value);
	}
};


// System.Double
struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181 
{
public:
	// System.Double System.Double::m_value
	double ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181, ___m_value_0)); }
	inline double get_m_value_0() const { return ___m_value_0; }
	inline double* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(double value)
	{
		___m_value_0 = value;
	}
};

struct Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields
{
public:
	// System.Double System.Double::NegativeZero
	double ___NegativeZero_7;

public:
	inline static int32_t get_offset_of_NegativeZero_7() { return static_cast<int32_t>(offsetof(Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_StaticFields, ___NegativeZero_7)); }
	inline double get_NegativeZero_7() const { return ___NegativeZero_7; }
	inline double* get_address_of_NegativeZero_7() { return &___NegativeZero_7; }
	inline void set_NegativeZero_7(double value)
	{
		___NegativeZero_7 = value;
	}
};


// System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA  : public ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52
{
public:

public:
};

struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t23B90B40F60E677A8025267341651C94AE079CDA_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t23B90B40F60E677A8025267341651C94AE079CDA_marshaled_com
{
};

// System.Int16
struct Int16_tD0F031114106263BB459DA1F099FF9F42691295A 
{
public:
	// System.Int16 System.Int16::m_value
	int16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int16_tD0F031114106263BB459DA1F099FF9F42691295A, ___m_value_0)); }
	inline int16_t get_m_value_0() const { return ___m_value_0; }
	inline int16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int32
struct Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


// System.Int64
struct Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3 
{
public:
	// System.Int64 System.Int64::m_value
	int64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3, ___m_value_0)); }
	inline int64_t get_m_value_0() const { return ___m_value_0; }
	inline int64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int64_t value)
	{
		___m_value_0 = value;
	}
};


// System.IntPtr
struct IntPtr_t 
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


// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::_body
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ____body_3;

public:
	inline static int32_t get_offset_of__body_3() { return static_cast<int32_t>(offsetof(LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474, ____body_3)); }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * get__body_3() const { return ____body_3; }
	inline Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 ** get_address_of__body_3() { return &____body_3; }
	inline void set__body_3(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * value)
	{
		____body_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____body_3), (void*)value);
	}
};


// System.Linq.Expressions.ParameterExpression
struct ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE  : public Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660
{
public:
	// System.String System.Linq.Expressions.ParameterExpression::<Name>k__BackingField
	String_t* ___U3CNameU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CNameU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE, ___U3CNameU3Ek__BackingField_3)); }
	inline String_t* get_U3CNameU3Ek__BackingField_3() const { return ___U3CNameU3Ek__BackingField_3; }
	inline String_t** get_address_of_U3CNameU3Ek__BackingField_3() { return &___U3CNameU3Ek__BackingField_3; }
	inline void set_U3CNameU3Ek__BackingField_3(String_t* value)
	{
		___U3CNameU3Ek__BackingField_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CNameU3Ek__BackingField_3), (void*)value);
	}
};


// System.SByte
struct SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B 
{
public:
	// System.SByte System.SByte::m_value
	int8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B, ___m_value_0)); }
	inline int8_t get_m_value_0() const { return ___m_value_0; }
	inline int8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Single
struct Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt64
struct UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281 
{
public:
	// System.UInt64 System.UInt64::m_value
	uint64_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281, ___m_value_0)); }
	inline uint64_t get_m_value_0() const { return ___m_value_0; }
	inline uint64_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint64_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor
struct QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627  : public ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4
{
public:
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Int32> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_definedParameters
	Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * ____definedParameters_0;
	// System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression> System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::_hoistedParameters
	HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * ____hoistedParameters_1;

public:
	inline static int32_t get_offset_of__definedParameters_0() { return static_cast<int32_t>(offsetof(QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627, ____definedParameters_0)); }
	inline Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * get__definedParameters_0() const { return ____definedParameters_0; }
	inline Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 ** get_address_of__definedParameters_0() { return &____definedParameters_0; }
	inline void set__definedParameters_0(Dictionary_2_t557635FBDBCB4F09E0827F01D69D76FF503D03A7 * value)
	{
		____definedParameters_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____definedParameters_0), (void*)value);
	}

	inline static int32_t get_offset_of__hoistedParameters_1() { return static_cast<int32_t>(offsetof(QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627, ____hoistedParameters_1)); }
	inline HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * get__hoistedParameters_1() const { return ____hoistedParameters_1; }
	inline HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 ** get_address_of__hoistedParameters_1() { return &____hoistedParameters_1; }
	inline void set__hoistedParameters_1(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * value)
	{
		____hoistedParameters_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____hoistedParameters_1), (void*)value);
	}
};


// System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter
struct ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE  : public ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4
{
public:
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.Interpreter.LocalVariable> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_variables
	Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * ____variables_0;
	// System.Linq.Expressions.Interpreter.InterpretedFrame System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_frame
	InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * ____frame_1;
	// System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::_shadowedVars
	Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * ____shadowedVars_2;

public:
	inline static int32_t get_offset_of__variables_0() { return static_cast<int32_t>(offsetof(ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE, ____variables_0)); }
	inline Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * get__variables_0() const { return ____variables_0; }
	inline Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 ** get_address_of__variables_0() { return &____variables_0; }
	inline void set__variables_0(Dictionary_2_tAE9216CE6245A2FBEA94860E5D55598909B27352 * value)
	{
		____variables_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____variables_0), (void*)value);
	}

	inline static int32_t get_offset_of__frame_1() { return static_cast<int32_t>(offsetof(ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE, ____frame_1)); }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * get__frame_1() const { return ____frame_1; }
	inline InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 ** get_address_of__frame_1() { return &____frame_1; }
	inline void set__frame_1(InterpretedFrame_tC7B57503A639148EB56B34F5464120D4B42627E2 * value)
	{
		____frame_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____frame_1), (void*)value);
	}

	inline static int32_t get_offset_of__shadowedVars_2() { return static_cast<int32_t>(offsetof(ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE, ____shadowedVars_2)); }
	inline Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * get__shadowedVars_2() const { return ____shadowedVars_2; }
	inline Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 ** get_address_of__shadowedVars_2() { return &____shadowedVars_2; }
	inline void set__shadowedVars_2(Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * value)
	{
		____shadowedVars_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____shadowedVars_2), (void*)value);
	}
};


// System.Linq.Expressions.Expression`1<System.Object>
struct Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F  : public LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474
{
public:

public:
};


// Unity.Collections.Allocator
struct Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05 
{
public:
	// System.Int32 Unity.Collections.Allocator::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(Allocator_t9888223DEF4F46F3419ECFCCD0753599BEE52A05, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Reflection.BindingFlags
struct BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733 
{
public:
	// System.Int32 System.Reflection.BindingFlags::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(BindingFlags_tAAAB07D9AC588F0D55D844E51D7035E96DF94733, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.Exception
struct Exception_t  : public RuntimeObject
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	// System.Diagnostics.StackTrace[] System.Exception::captured_traces
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	// System.IntPtr[] System.Exception::native_trace_ips
	IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* ___native_trace_ips_15;

public:
	inline static int32_t get_offset_of__className_1() { return static_cast<int32_t>(offsetof(Exception_t, ____className_1)); }
	inline String_t* get__className_1() const { return ____className_1; }
	inline String_t** get_address_of__className_1() { return &____className_1; }
	inline void set__className_1(String_t* value)
	{
		____className_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____className_1), (void*)value);
	}

	inline static int32_t get_offset_of__message_2() { return static_cast<int32_t>(offsetof(Exception_t, ____message_2)); }
	inline String_t* get__message_2() const { return ____message_2; }
	inline String_t** get_address_of__message_2() { return &____message_2; }
	inline void set__message_2(String_t* value)
	{
		____message_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____message_2), (void*)value);
	}

	inline static int32_t get_offset_of__data_3() { return static_cast<int32_t>(offsetof(Exception_t, ____data_3)); }
	inline RuntimeObject* get__data_3() const { return ____data_3; }
	inline RuntimeObject** get_address_of__data_3() { return &____data_3; }
	inline void set__data_3(RuntimeObject* value)
	{
		____data_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____data_3), (void*)value);
	}

	inline static int32_t get_offset_of__innerException_4() { return static_cast<int32_t>(offsetof(Exception_t, ____innerException_4)); }
	inline Exception_t * get__innerException_4() const { return ____innerException_4; }
	inline Exception_t ** get_address_of__innerException_4() { return &____innerException_4; }
	inline void set__innerException_4(Exception_t * value)
	{
		____innerException_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____innerException_4), (void*)value);
	}

	inline static int32_t get_offset_of__helpURL_5() { return static_cast<int32_t>(offsetof(Exception_t, ____helpURL_5)); }
	inline String_t* get__helpURL_5() const { return ____helpURL_5; }
	inline String_t** get_address_of__helpURL_5() { return &____helpURL_5; }
	inline void set__helpURL_5(String_t* value)
	{
		____helpURL_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____helpURL_5), (void*)value);
	}

	inline static int32_t get_offset_of__stackTrace_6() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTrace_6)); }
	inline RuntimeObject * get__stackTrace_6() const { return ____stackTrace_6; }
	inline RuntimeObject ** get_address_of__stackTrace_6() { return &____stackTrace_6; }
	inline void set__stackTrace_6(RuntimeObject * value)
	{
		____stackTrace_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTrace_6), (void*)value);
	}

	inline static int32_t get_offset_of__stackTraceString_7() { return static_cast<int32_t>(offsetof(Exception_t, ____stackTraceString_7)); }
	inline String_t* get__stackTraceString_7() const { return ____stackTraceString_7; }
	inline String_t** get_address_of__stackTraceString_7() { return &____stackTraceString_7; }
	inline void set__stackTraceString_7(String_t* value)
	{
		____stackTraceString_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____stackTraceString_7), (void*)value);
	}

	inline static int32_t get_offset_of__remoteStackTraceString_8() { return static_cast<int32_t>(offsetof(Exception_t, ____remoteStackTraceString_8)); }
	inline String_t* get__remoteStackTraceString_8() const { return ____remoteStackTraceString_8; }
	inline String_t** get_address_of__remoteStackTraceString_8() { return &____remoteStackTraceString_8; }
	inline void set__remoteStackTraceString_8(String_t* value)
	{
		____remoteStackTraceString_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____remoteStackTraceString_8), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____dynamicMethods_10), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&____source_12), (void*)value);
	}

	inline static int32_t get_offset_of__safeSerializationManager_13() { return static_cast<int32_t>(offsetof(Exception_t, ____safeSerializationManager_13)); }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * get__safeSerializationManager_13() const { return ____safeSerializationManager_13; }
	inline SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F ** get_address_of__safeSerializationManager_13() { return &____safeSerializationManager_13; }
	inline void set__safeSerializationManager_13(SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * value)
	{
		____safeSerializationManager_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____safeSerializationManager_13), (void*)value);
	}

	inline static int32_t get_offset_of_captured_traces_14() { return static_cast<int32_t>(offsetof(Exception_t, ___captured_traces_14)); }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* get_captured_traces_14() const { return ___captured_traces_14; }
	inline StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971** get_address_of_captured_traces_14() { return &___captured_traces_14; }
	inline void set_captured_traces_14(StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* value)
	{
		___captured_traces_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___captured_traces_14), (void*)value);
	}

	inline static int32_t get_offset_of_native_trace_ips_15() { return static_cast<int32_t>(offsetof(Exception_t, ___native_trace_ips_15)); }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* get_native_trace_ips_15() const { return ___native_trace_ips_15; }
	inline IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6** get_address_of_native_trace_ips_15() { return &___native_trace_ips_15; }
	inline void set_native_trace_ips_15(IntPtrU5BU5D_t27FC72B0409D75AAF33EC42498E8094E95FEE9A6* value)
	{
		___native_trace_ips_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___native_trace_ips_15), (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)(&___s_EDILock_0), (void*)value);
	}
};

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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
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
	SafeSerializationManager_tDE44F029589A028F8A3053C5C06153FAB4AAE29F * ____safeSerializationManager_13;
	StackTraceU5BU5D_t4AD999C288CB6D1F38A299D12B1598D606588971* ___captured_traces_14;
	Il2CppSafeArray/*NONE*/* ___native_trace_ips_15;
};

// Unity.Collections.NativeArrayOptions
struct NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3 
{
public:
	// System.Int32 Unity.Collections.NativeArrayOptions::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(NativeArrayOptions_t181E2A9B49F6D62868DE6428E4CDF148AEF558E3, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// System.RuntimeTypeHandle
struct RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 
{
public:
	// System.IntPtr System.RuntimeTypeHandle::value
	intptr_t ___value_0;

public:
	inline static int32_t get_offset_of_value_0() { return static_cast<int32_t>(offsetof(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9, ___value_0)); }
	inline intptr_t get_value_0() const { return ___value_0; }
	inline intptr_t* get_address_of_value_0() { return &___value_0; }
	inline void set_value_0(intptr_t value)
	{
		___value_0 = value;
	}
};


// UnityEngine.Mesh/MeshData
struct MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 
{
public:
	// System.IntPtr UnityEngine.Mesh/MeshData::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};


// UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider
struct Provider_t6CB5B1036B0AAED1379F3828D695A6942B72BA12  : public SubsystemProvider_1_tF2F3B0C041BDD07A00CD49B25AE6016B61F24816
{
public:

public:
};


// Unity.Collections.NativeArray`1<System.UInt16>
struct NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<System.UInt32>
struct NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector2>
struct NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// Unity.Collections.NativeArray`1<UnityEngine.Vector3>
struct NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 
{
public:
	// System.Void* Unity.Collections.NativeArray`1::m_Buffer
	void* ___m_Buffer_0;
	// System.Int32 Unity.Collections.NativeArray`1::m_Length
	int32_t ___m_Length_1;
	// Unity.Collections.Allocator Unity.Collections.NativeArray`1::m_AllocatorLabel
	int32_t ___m_AllocatorLabel_2;

public:
	inline static int32_t get_offset_of_m_Buffer_0() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Buffer_0)); }
	inline void* get_m_Buffer_0() const { return ___m_Buffer_0; }
	inline void** get_address_of_m_Buffer_0() { return &___m_Buffer_0; }
	inline void set_m_Buffer_0(void* value)
	{
		___m_Buffer_0 = value;
	}

	inline static int32_t get_offset_of_m_Length_1() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_Length_1)); }
	inline int32_t get_m_Length_1() const { return ___m_Length_1; }
	inline int32_t* get_address_of_m_Length_1() { return &___m_Length_1; }
	inline void set_m_Length_1(int32_t value)
	{
		___m_Length_1 = value;
	}

	inline static int32_t get_offset_of_m_AllocatorLabel_2() { return static_cast<int32_t>(offsetof(NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52, ___m_AllocatorLabel_2)); }
	inline int32_t get_m_AllocatorLabel_2() const { return ___m_AllocatorLabel_2; }
	inline int32_t* get_address_of_m_AllocatorLabel_2() { return &___m_AllocatorLabel_2; }
	inline void set_m_AllocatorLabel_2(int32_t value)
	{
		___m_AllocatorLabel_2 = value;
	}
};


// System.SystemException
struct SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62  : public Exception_t
{
public:

public:
};


// System.Type
struct Type_t  : public MemberInfo_t
{
public:
	// System.RuntimeTypeHandle System.Type::_impl
	RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ____impl_9;

public:
	inline static int32_t get_offset_of__impl_9() { return static_cast<int32_t>(offsetof(Type_t, ____impl_9)); }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  get__impl_9() const { return ____impl_9; }
	inline RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 * get_address_of__impl_9() { return &____impl_9; }
	inline void set__impl_9(RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  value)
	{
		____impl_9 = value;
	}
};

struct Type_t_StaticFields
{
public:
	// System.Reflection.MemberFilter System.Type::FilterAttribute
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterAttribute_0;
	// System.Reflection.MemberFilter System.Type::FilterName
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterName_1;
	// System.Reflection.MemberFilter System.Type::FilterNameIgnoreCase
	MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * ___FilterNameIgnoreCase_2;
	// System.Object System.Type::Missing
	RuntimeObject * ___Missing_3;
	// System.Char System.Type::Delimiter
	Il2CppChar ___Delimiter_4;
	// System.Type[] System.Type::EmptyTypes
	TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* ___EmptyTypes_5;
	// System.Reflection.Binder System.Type::defaultBinder
	Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * ___defaultBinder_6;

public:
	inline static int32_t get_offset_of_FilterAttribute_0() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterAttribute_0)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterAttribute_0() const { return ___FilterAttribute_0; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterAttribute_0() { return &___FilterAttribute_0; }
	inline void set_FilterAttribute_0(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterAttribute_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterAttribute_0), (void*)value);
	}

	inline static int32_t get_offset_of_FilterName_1() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterName_1)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterName_1() const { return ___FilterName_1; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterName_1() { return &___FilterName_1; }
	inline void set_FilterName_1(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterName_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterName_1), (void*)value);
	}

	inline static int32_t get_offset_of_FilterNameIgnoreCase_2() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___FilterNameIgnoreCase_2)); }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * get_FilterNameIgnoreCase_2() const { return ___FilterNameIgnoreCase_2; }
	inline MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 ** get_address_of_FilterNameIgnoreCase_2() { return &___FilterNameIgnoreCase_2; }
	inline void set_FilterNameIgnoreCase_2(MemberFilter_t48D0AA10105D186AF42428FA532D4B4332CF8B81 * value)
	{
		___FilterNameIgnoreCase_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FilterNameIgnoreCase_2), (void*)value);
	}

	inline static int32_t get_offset_of_Missing_3() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Missing_3)); }
	inline RuntimeObject * get_Missing_3() const { return ___Missing_3; }
	inline RuntimeObject ** get_address_of_Missing_3() { return &___Missing_3; }
	inline void set_Missing_3(RuntimeObject * value)
	{
		___Missing_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Missing_3), (void*)value);
	}

	inline static int32_t get_offset_of_Delimiter_4() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___Delimiter_4)); }
	inline Il2CppChar get_Delimiter_4() const { return ___Delimiter_4; }
	inline Il2CppChar* get_address_of_Delimiter_4() { return &___Delimiter_4; }
	inline void set_Delimiter_4(Il2CppChar value)
	{
		___Delimiter_4 = value;
	}

	inline static int32_t get_offset_of_EmptyTypes_5() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___EmptyTypes_5)); }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* get_EmptyTypes_5() const { return ___EmptyTypes_5; }
	inline TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755** get_address_of_EmptyTypes_5() { return &___EmptyTypes_5; }
	inline void set_EmptyTypes_5(TypeU5BU5D_t85B10489E46F06CEC7C4B1CCBD0E01FAB6649755* value)
	{
		___EmptyTypes_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___EmptyTypes_5), (void*)value);
	}

	inline static int32_t get_offset_of_defaultBinder_6() { return static_cast<int32_t>(offsetof(Type_t_StaticFields, ___defaultBinder_6)); }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * get_defaultBinder_6() const { return ___defaultBinder_6; }
	inline Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 ** get_address_of_defaultBinder_6() { return &___defaultBinder_6; }
	inline void set_defaultBinder_6(Binder_t2BEE27FD84737D1E79BC47FD67F6D3DD2F2DDA30 * value)
	{
		___defaultBinder_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultBinder_6), (void*)value);
	}
};


// System.ArgumentException
struct ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00  : public SystemException_tC551B4D6EE3772B5F32C71EE8C719F4B43ECCC62
{
public:
	// System.String System.ArgumentException::m_paramName
	String_t* ___m_paramName_17;

public:
	inline static int32_t get_offset_of_m_paramName_17() { return static_cast<int32_t>(offsetof(ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00, ___m_paramName_17)); }
	inline String_t* get_m_paramName_17() const { return ___m_paramName_17; }
	inline String_t** get_address_of_m_paramName_17() { return &___m_paramName_17; }
	inline void set_m_paramName_17(String_t* value)
	{
		___m_paramName_17 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_paramName_17), (void*)value);
	}
};


// System.ArgumentOutOfRangeException
struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8  : public ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00
{
public:
	// System.Object System.ArgumentOutOfRangeException::m_actualValue
	RuntimeObject * ___m_actualValue_19;

public:
	inline static int32_t get_offset_of_m_actualValue_19() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8, ___m_actualValue_19)); }
	inline RuntimeObject * get_m_actualValue_19() const { return ___m_actualValue_19; }
	inline RuntimeObject ** get_address_of_m_actualValue_19() { return &___m_actualValue_19; }
	inline void set_m_actualValue_19(RuntimeObject * value)
	{
		___m_actualValue_19 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_actualValue_19), (void*)value);
	}
};

struct ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields
{
public:
	// System.String modreq(System.Runtime.CompilerServices.IsVolatile) System.ArgumentOutOfRangeException::_rangeMessage
	String_t* ____rangeMessage_18;

public:
	inline static int32_t get_offset_of__rangeMessage_18() { return static_cast<int32_t>(offsetof(ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_StaticFields, ____rangeMessage_18)); }
	inline String_t* get__rangeMessage_18() const { return ____rangeMessage_18; }
	inline String_t** get_address_of__rangeMessage_18() { return &____rangeMessage_18; }
	inline void set__rangeMessage_18(String_t* value)
	{
		____rangeMessage_18 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____rangeMessage_18), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.String[]
struct StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// UnityEngine.AndroidJavaObject[]
struct AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * m_Items[1];

public:
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Int32[]
struct Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32  : public RuntimeArray
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
// System.Boolean[]
struct BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) bool m_Items[1];

public:
	inline bool GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline bool* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, bool value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline bool GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline bool* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, bool value)
	{
		m_Items[index] = value;
	}
};
// System.Byte[]
struct ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) uint8_t m_Items[1];

public:
	inline uint8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, uint8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline uint8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, uint8_t value)
	{
		m_Items[index] = value;
	}
};
// System.SByte[]
struct SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) int8_t m_Items[1];

public:
	inline int8_t GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline int8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, int8_t value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline int8_t GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline int8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, int8_t value)
	{
		m_Items[index] = value;
	}
};
// System.Int16[]
struct Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD  : public RuntimeArray
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
// System.Int64[]
struct Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6  : public RuntimeArray
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
// System.Single[]
struct SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA  : public RuntimeArray
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
// System.Double[]
struct DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB  : public RuntimeArray
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
// System.Char[]
struct CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) Il2CppChar m_Items[1];

public:
	inline Il2CppChar GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, Il2CppChar value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
	}
	inline Il2CppChar GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline Il2CppChar* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, Il2CppChar value)
	{
		m_Items[index] = value;
	}
};
// System.Object[]
struct ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE  : public RuntimeArray
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
// System.Linq.Expressions.ParameterExpression[]
struct ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147  : public RuntimeArray
{
public:
	ALIGN_FIELD (8) ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * m_Items[1];

public:
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * GetAt(il2cpp_array_size_t index) const
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items[index];
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + index;
	}
	inline void SetAt(il2cpp_array_size_t index, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * GetAtUnchecked(il2cpp_array_size_t index) const
	{
		return m_Items[index];
	}
	inline ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE ** GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + index;
	}
	inline void SetAtUnchecked(il2cpp_array_size_t index, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * value)
	{
		m_Items[index] = value;
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};


// !!0[] System.Array::Empty<System.Object>()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, int32_t ___capacity0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::Add(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared (List_1_t3F94120C77410A62EAE48421CF166B83AB95A2F5 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetIndexData<System.UInt16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  MeshData_GetIndexData_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m2E0E902D84857549A19F7E675EB5767D21BC8C19_gshared (MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetIndexData<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  MeshData_GetIndexData_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m7546561C94E85FE1C5EAFE9923A29A79B808E02F_gshared (MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 * __this, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetVertexData<UnityEngine.Vector2>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  MeshData_GetVertexData_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mF73139A474DE63BC44CA1D6C548CE4462485706C_gshared (MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 * __this, int32_t ___stream0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetVertexData<UnityEngine.Vector3>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  MeshData_GetVertexData_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mC879F60D7A7863A2E9E05333177CFFFF3DFFEC20_gshared (MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 * __this, int32_t ___stream0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.HashSet`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.HashSet`1<System.Object>::Add(T)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared (HashSet_1_t680119C7ED8D82AED56CDB83DF6F0E9149852A9B * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// System.Void System.Collections.Generic.Stack`1<System.Object>::Push(!0)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, RuntimeObject * ___item0, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Object>::Pop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared (Stack_1_t92AC5F573A3C00899B24B775A71B4327D588E981 * __this, const RuntimeMethod* method);
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method);
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729_gshared (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method);

// System.Type System.Type::GetTypeFromHandle(System.RuntimeTypeHandle)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t * Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E (RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  ___handle0, const RuntimeMethod* method);
// System.Boolean UnityEngine.AndroidReflection::IsPrimitive(System.Type)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D (Type_t * ___t0, const RuntimeMethod* method);
// System.Int32[] UnityEngine.AndroidJNISafe::FromIntArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703 (intptr_t ___array0, const RuntimeMethod* method);
// System.Boolean[] UnityEngine.AndroidJNISafe::FromBooleanArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF (intptr_t ___array0, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogWarning(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Byte[] UnityEngine.AndroidJNISafe::FromByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8 (intptr_t ___array0, const RuntimeMethod* method);
// System.SByte[] UnityEngine.AndroidJNISafe::FromSByteArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D (intptr_t ___array0, const RuntimeMethod* method);
// System.Int16[] UnityEngine.AndroidJNISafe::FromShortArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD (intptr_t ___array0, const RuntimeMethod* method);
// System.Int64[] UnityEngine.AndroidJNISafe::FromLongArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA (intptr_t ___array0, const RuntimeMethod* method);
// System.Single[] UnityEngine.AndroidJNISafe::FromFloatArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D (intptr_t ___array0, const RuntimeMethod* method);
// System.Double[] UnityEngine.AndroidJNISafe::FromDoubleArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8 (intptr_t ___array0, const RuntimeMethod* method);
// System.Char[] UnityEngine.AndroidJNISafe::FromCharArray(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305 (intptr_t ___array0, const RuntimeMethod* method);
// System.Int32 UnityEngine.AndroidJNISafe::GetArrayLength(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56 (intptr_t ___array0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNI::GetObjectArrayElement(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18 (intptr_t ___array0, int32_t ___index1, const RuntimeMethod* method);
// System.String UnityEngine.AndroidJNISafe::GetStringChars(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8 (intptr_t ___str0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJNISafe::DeleteLocalRef(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39 (intptr_t ___localref0, const RuntimeMethod* method);
// System.Void UnityEngine.AndroidJavaObject::.ctor(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3 (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * __this, intptr_t ___jobject0, const RuntimeMethod* method);
// System.String System.String::Concat(System.String,System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44 (String_t* ___str00, String_t* ___str11, String_t* ___str22, const RuntimeMethod* method);
// System.Void System.Exception::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11 (Exception_t * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.AndroidJNIHelper::GetMethodID(System.IntPtr,System.String,System.String,System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535 (intptr_t ___javaClass0, String_t* ___methodName1, String_t* ___signature2, bool ___isStatic3, const RuntimeMethod* method);
// System.Void System.Text.StringBuilder::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9 (StringBuilder_t * __this, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.Char)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E (StringBuilder_t * __this, Il2CppChar ___value0, const RuntimeMethod* method);
// System.String UnityEngine._AndroidJNIHelper::GetSignature(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C (RuntimeObject * ___obj0, const RuntimeMethod* method);
// System.Text.StringBuilder System.Text.StringBuilder::Append(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t * StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1 (StringBuilder_t * __this, String_t* ___value0, const RuntimeMethod* method);
// !!0[] System.Array::Empty<System.Linq.Expressions.ParameterExpression>()
inline ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* Array_Empty_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_m8FAF2226E6288860C1D3C92AB793820D17F32D71_inline (const RuntimeMethod* method)
{
	return ((  ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* (*) (const RuntimeMethod*))Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline)(method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::.ctor(System.Int32)
inline void List_1__ctor_mE4C9B3F15E5D5168479F4E7227A000B97C871A30 (List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B * __this, int32_t ___capacity0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B *, int32_t, const RuntimeMethod*))List_1__ctor_mFEB2301A6F28290A828A979BA9CC847B16B3D538_gshared)(__this, ___capacity0, method);
}
// System.Void System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>::Add(!0)
inline void List_1_Add_mC5D74D70A6B9B4BC082AEB0EC771879B842C7708 (List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___item0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B *, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, const RuntimeMethod*))List_1_Add_mE5B3CBB3A625606D9BC4337FEAAF1D66BCB6F96E_gshared)(__this, ___item0, method);
}
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PushParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PushParameters_m7AAC447E0627A0AD1A5EBAB7A7AFFD5F239CC0ED (QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 * __this, RuntimeObject* ___parameters0, const RuntimeMethod* method);
// System.Void System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::PopParameters(System.Collections.Generic.IEnumerable`1<System.Linq.Expressions.ParameterExpression>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void QuoteVisitor_PopParameters_m88C9C499B152E0333072D63BFD2908F2D710495A (QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 * __this, RuntimeObject* ___parameters0, const RuntimeMethod* method);
// System.UInt64 UnityEngine.Mesh/MeshData::GetIndexDataSize(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MeshData_GetIndexDataSize_m13CB694AE2A934360D2C5A6537974533AC5933E2 (intptr_t ___self0, const RuntimeMethod* method);
// System.String System.String::Format(System.String,System.Object,System.Object,System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6 (String_t* ___format0, RuntimeObject * ___arg01, RuntimeObject * ___arg12, RuntimeObject * ___arg23, const RuntimeMethod* method);
// System.Void System.ArgumentException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * __this, String_t* ___message0, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Mesh/MeshData::GetIndexDataPtr(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MeshData_GetIndexDataPtr_m21AAFD14A21AD52B43A5169F5F7E8B4950857380 (intptr_t ___self0, const RuntimeMethod* method);
// System.Void* System.IntPtr::op_Explicit(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD (intptr_t ___value0, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetIndexData<System.UInt16>()
inline NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  MeshData_GetIndexData_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m2E0E902D84857549A19F7E675EB5767D21BC8C19 (MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  (*) (MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 *, const RuntimeMethod*))MeshData_GetIndexData_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m2E0E902D84857549A19F7E675EB5767D21BC8C19_gshared)(__this, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetIndexData<System.UInt32>()
inline NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  MeshData_GetIndexData_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m7546561C94E85FE1C5EAFE9923A29A79B808E02F (MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 * __this, const RuntimeMethod* method)
{
	return ((  NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  (*) (MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 *, const RuntimeMethod*))MeshData_GetIndexData_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m7546561C94E85FE1C5EAFE9923A29A79B808E02F_gshared)(__this, method);
}
// System.Int32 UnityEngine.Mesh/MeshData::get_vertexBufferCount()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t MeshData_get_vertexBufferCount_m12BF0A0B2CC1176C160480CF8F72E7475F13058A (MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 * __this, const RuntimeMethod* method);
// System.Void System.ArgumentOutOfRangeException::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * __this, String_t* ___paramName0, const RuntimeMethod* method);
// System.UInt64 UnityEngine.Mesh/MeshData::GetVertexDataSize(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t MeshData_GetVertexDataSize_m498CB563CBFB7634EA3D8931828670E5A9BA2239 (intptr_t ___self0, int32_t ___stream1, const RuntimeMethod* method);
// System.IntPtr UnityEngine.Mesh/MeshData::GetVertexDataPtr(System.IntPtr,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t MeshData_GetVertexDataPtr_m533D02CF79768A7DE268AF060D9AF531D674AC9D (intptr_t ___self0, int32_t ___stream1, const RuntimeMethod* method);
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetVertexData<UnityEngine.Vector2>(System.Int32)
inline NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  MeshData_GetVertexData_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mF73139A474DE63BC44CA1D6C548CE4462485706C (MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 * __this, int32_t ___stream0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  (*) (MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 *, int32_t, const RuntimeMethod*))MeshData_GetVertexData_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mF73139A474DE63BC44CA1D6C548CE4462485706C_gshared)(__this, ___stream0, method);
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetVertexData<UnityEngine.Vector3>(System.Int32)
inline NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  MeshData_GetVertexData_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mC879F60D7A7863A2E9E05333177CFFFF3DFFEC20 (MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 * __this, int32_t ___stream0, const RuntimeMethod* method)
{
	return ((  NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  (*) (MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 *, int32_t, const RuntimeMethod*))MeshData_GetVertexData_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mC879F60D7A7863A2E9E05333177CFFFF3DFFEC20_gshared)(__this, ___stream0, method);
}
// System.Void System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::.ctor()
inline void HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * __this, const RuntimeMethod* method)
{
	((  void (*) (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, const RuntimeMethod*))HashSet_1__ctor_m2CDA40DEC2900A9CB00F8348FF386DF44ABD0EC7_gshared)(__this, method);
}
// System.Boolean System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>::Add(T)
inline bool HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * __this, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * ___item0, const RuntimeMethod* method)
{
	return ((  bool (*) (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, const RuntimeMethod*))HashSet_1_Add_mF670AD4C3F2685F0797E05C5491BC1841CEA9DBA_gshared)(__this, ___item0, method);
}
// System.Void System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Push(!0)
inline void Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * __this, HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * ___item0, const RuntimeMethod* method)
{
	((  void (*) (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *, HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *, const RuntimeMethod*))Stack_1_Push_m37749C6ED558EC2D89F38CF78C833D4EE8A2DF04_gshared)(__this, ___item0, method);
}
// System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.Stack`1<System.Collections.Generic.HashSet`1<System.Linq.Expressions.ParameterExpression>>::Pop()
inline HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769 (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * __this, const RuntimeMethod* method)
{
	return ((  HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * (*) (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *, const RuntimeMethod*))Stack_1_Pop_m9503124BACE0FDA402D22BC901708C5D99063C12_gshared)(__this, method);
}
// System.Boolean Unity.Collections.NativeArray`1<UnityEngine.Vector2>::get_IsCreated()
inline bool NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, const RuntimeMethod*))NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::Dispose()
inline void NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, const RuntimeMethod*))NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF_gshared)(__this, method);
}
// System.Void Unity.Collections.NativeArray`1<UnityEngine.Vector2>::.ctor(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArrayOptions)
inline void NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729 (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * __this, int32_t ___length0, int32_t ___allocator1, int32_t ___options2, const RuntimeMethod* method)
{
	((  void (*) (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *, int32_t, int32_t, int32_t, const RuntimeMethod*))NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729_gshared)(__this, ___length0, ___allocator1, ___options2, method);
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Int64>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t _AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m67885FB92D65381C9570857BCD66D9A5377C9FC2_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int64_t V_3 = 0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int64_t V_24 = 0;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(100 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (int64_t)((*(int64_t*)((int64_t*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m67885FB92D65381C9570857BCD66D9A5377C9FC2_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int64_t));
		int64_t L_107 = V_24;
		V_3 = (int64_t)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int64_t L_108 = V_3;
		return (int64_t)L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Object>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * _AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m353E485413995A0C209B6FAA96D368CF72FB4592_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	RuntimeObject * V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	RuntimeObject * V_24 = NULL;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(100 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (RuntimeObject *)((RuntimeObject *)Castclass((RuntimeObject*)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisRuntimeObject_m353E485413995A0C209B6FAA96D368CF72FB4592_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(RuntimeObject *));
		RuntimeObject * L_107 = V_24;
		V_3 = (RuntimeObject *)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		RuntimeObject * L_108 = V_3;
		return (RuntimeObject *)L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.SByte>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t _AndroidJNIHelper_ConvertFromJNIArray_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m2F4CBB579C50AAAF7EF6FBC73C5FC304A87A60EE_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	int8_t V_3 = 0x0;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	int8_t V_24 = 0x0;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(100 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (int8_t)((*(int8_t*)((int8_t*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m2F4CBB579C50AAAF7EF6FBC73C5FC304A87A60EE_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(int8_t));
		int8_t L_107 = V_24;
		V_3 = (int8_t)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		int8_t L_108 = V_3;
		return (int8_t)L_108;
	}
}
// ArrayType UnityEngine._AndroidJNIHelper::ConvertFromJNIArray<System.Single>(System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float _AndroidJNIHelper_ConvertFromJNIArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD3EDB3217478F469F150970E33043F80EF1BA3CB_gshared (intptr_t ___array0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2);
		s_Il2CppMethodInitialized = true;
	}
	Type_t * V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	float V_3 = 0.0f;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	bool V_9 = false;
	bool V_10 = false;
	bool V_11 = false;
	bool V_12 = false;
	int32_t V_13 = 0;
	StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* V_14 = NULL;
	int32_t V_15 = 0;
	intptr_t V_16;
	memset((&V_16), 0, sizeof(V_16));
	bool V_17 = false;
	bool V_18 = false;
	int32_t V_19 = 0;
	AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* V_20 = NULL;
	int32_t V_21 = 0;
	intptr_t V_22;
	memset((&V_22), 0, sizeof(V_22));
	bool V_23 = false;
	float V_24 = 0.0f;
	Type_t * G_B32_0 = NULL;
	String_t* G_B32_1 = NULL;
	Type_t * G_B31_0 = NULL;
	String_t* G_B31_1 = NULL;
	String_t* G_B33_0 = NULL;
	String_t* G_B33_1 = NULL;
	{
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_0 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_1;
		L_1 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_0, /*hidden argument*/NULL);
		NullCheck((Type_t *)L_1);
		Type_t * L_2;
		L_2 = VirtFuncInvoker0< Type_t * >::Invoke(100 /* System.Type System.Type::GetElementType() */, (Type_t *)L_1);
		V_0 = (Type_t *)L_2;
		Type_t * L_3 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(AndroidReflection_tEB6633FD5B7D2816E1AC6C711E11B2DD33822F16_il2cpp_TypeInfo_var);
		bool L_4;
		L_4 = AndroidReflection_IsPrimitive_mDD6A4050793DF2FA1EDF58010982C64A3F17376D((Type_t *)L_3, /*hidden argument*/NULL);
		V_1 = (bool)L_4;
		bool L_5 = V_1;
		if (!L_5)
		{
			goto IL_0173;
		}
	}
	{
		Type_t * L_6 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_7 = { reinterpret_cast<intptr_t> (Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_8;
		L_8 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_7, /*hidden argument*/NULL);
		V_2 = (bool)((((RuntimeObject*)(Type_t *)L_6) == ((RuntimeObject*)(Type_t *)L_8))? 1 : 0);
		bool L_9 = V_2;
		if (!L_9)
		{
			goto IL_0041;
		}
	}
	{
		intptr_t L_10 = ___array0;
		Int32U5BU5D_t70F1BDC14B1786481B176D6139A5E3B87DC54C32* L_11;
		L_11 = AndroidJNISafe_FromIntArray_mBF0C0B4309BA525BBA12D7FD3C2790C8FA7C4703((intptr_t)L_10, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_11, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0041:
	{
		Type_t * L_12 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_13 = { reinterpret_cast<intptr_t> (Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_14;
		L_14 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_13, /*hidden argument*/NULL);
		V_4 = (bool)((((RuntimeObject*)(Type_t *)L_12) == ((RuntimeObject*)(Type_t *)L_14))? 1 : 0);
		bool L_15 = V_4;
		if (!L_15)
		{
			goto IL_0065;
		}
	}
	{
		intptr_t L_16 = ___array0;
		BooleanU5BU5D_tEC7BAF93C44F875016DAADC8696EE3A465644D3C* L_17;
		L_17 = AndroidJNISafe_FromBooleanArray_m77A66C34FCB94ADB1AD5E1D88262500C930A5DBF((intptr_t)L_16, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_17, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0065:
	{
		Type_t * L_18 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_19 = { reinterpret_cast<intptr_t> (Byte_t0111FAB8B8685667EDDAF77683F0D8F86B659056_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_20;
		L_20 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_19, /*hidden argument*/NULL);
		V_5 = (bool)((((RuntimeObject*)(Type_t *)L_18) == ((RuntimeObject*)(Type_t *)L_20))? 1 : 0);
		bool L_21 = V_5;
		if (!L_21)
		{
			goto IL_0095;
		}
	}
	{
		IL2CPP_RUNTIME_CLASS_INIT(Debug_tEB68BCBEB8EFD60F8043C67146DC05E7F50F374B_il2cpp_TypeInfo_var);
		Debug_LogWarning_m24085D883C9E74D7AB423F0625E13259923960E7((RuntimeObject *)_stringLiteral24CC8D396132365E532646F936DFC8579E2299B2, /*hidden argument*/NULL);
		intptr_t L_22 = ___array0;
		ByteU5BU5D_tDBBEB0E8362242FA7223000D978B0DD19D4B0726* L_23;
		L_23 = AndroidJNISafe_FromByteArray_m81760A688AECE368E1CFF7DAAC8E141F1B8FA8A8((intptr_t)L_22, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_23, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0095:
	{
		Type_t * L_24 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_25 = { reinterpret_cast<intptr_t> (SByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_26;
		L_26 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_25, /*hidden argument*/NULL);
		V_6 = (bool)((((RuntimeObject*)(Type_t *)L_24) == ((RuntimeObject*)(Type_t *)L_26))? 1 : 0);
		bool L_27 = V_6;
		if (!L_27)
		{
			goto IL_00b9;
		}
	}
	{
		intptr_t L_28 = ___array0;
		SByteU5BU5D_t7D94C53295E6116625EA7CC7DEA21FEDC39869E7* L_29;
		L_29 = AndroidJNISafe_FromSByteArray_m01F6539AF10F86B3927436955B57CC809C52416D((intptr_t)L_28, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_29, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00b9:
	{
		Type_t * L_30 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_31 = { reinterpret_cast<intptr_t> (Int16_tD0F031114106263BB459DA1F099FF9F42691295A_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_32;
		L_32 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_31, /*hidden argument*/NULL);
		V_7 = (bool)((((RuntimeObject*)(Type_t *)L_30) == ((RuntimeObject*)(Type_t *)L_32))? 1 : 0);
		bool L_33 = V_7;
		if (!L_33)
		{
			goto IL_00dd;
		}
	}
	{
		intptr_t L_34 = ___array0;
		Int16U5BU5D_tD134F1E6F746D4C09C987436805256C210C2FFCD* L_35;
		L_35 = AndroidJNISafe_FromShortArray_mCDF5B796D950D31035BD35A2E463D41509E4A5CD((intptr_t)L_34, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_35, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_00dd:
	{
		Type_t * L_36 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_37 = { reinterpret_cast<intptr_t> (Int64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_38;
		L_38 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_37, /*hidden argument*/NULL);
		V_8 = (bool)((((RuntimeObject*)(Type_t *)L_36) == ((RuntimeObject*)(Type_t *)L_38))? 1 : 0);
		bool L_39 = V_8;
		if (!L_39)
		{
			goto IL_0101;
		}
	}
	{
		intptr_t L_40 = ___array0;
		Int64U5BU5D_tCA61E42872C63A4286B24EEE6E0650143B43DCE6* L_41;
		L_41 = AndroidJNISafe_FromLongArray_m0E7C56CB8CFD0EC240F0D86ECBBFD635FFE55CDA((intptr_t)L_40, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_41, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0101:
	{
		Type_t * L_42 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_43 = { reinterpret_cast<intptr_t> (Single_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_44;
		L_44 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_43, /*hidden argument*/NULL);
		V_9 = (bool)((((RuntimeObject*)(Type_t *)L_42) == ((RuntimeObject*)(Type_t *)L_44))? 1 : 0);
		bool L_45 = V_9;
		if (!L_45)
		{
			goto IL_0125;
		}
	}
	{
		intptr_t L_46 = ___array0;
		SingleU5BU5D_t47E8DBF5B597C122478D1FFBD9DD57399A0650FA* L_47;
		L_47 = AndroidJNISafe_FromFloatArray_mF6A63CA1B7C10BC27EEC033F0E390772DFDD652D((intptr_t)L_46, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_47, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0125:
	{
		Type_t * L_48 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_49 = { reinterpret_cast<intptr_t> (Double_t42821932CB52DE2057E685D0E1AF3DE5033D2181_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_50;
		L_50 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_49, /*hidden argument*/NULL);
		V_10 = (bool)((((RuntimeObject*)(Type_t *)L_48) == ((RuntimeObject*)(Type_t *)L_50))? 1 : 0);
		bool L_51 = V_10;
		if (!L_51)
		{
			goto IL_0149;
		}
	}
	{
		intptr_t L_52 = ___array0;
		DoubleU5BU5D_t8E1B42EB2ABB79FBD193A6B8C8D97A7CDE44A4FB* L_53;
		L_53 = AndroidJNISafe_FromDoubleArray_m9438B5668E8B2DB3B18CACFF0CC9CAEAB5EC73C8((intptr_t)L_52, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_53, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0149:
	{
		Type_t * L_54 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_55 = { reinterpret_cast<intptr_t> (Char_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_56;
		L_56 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_55, /*hidden argument*/NULL);
		V_11 = (bool)((((RuntimeObject*)(Type_t *)L_54) == ((RuntimeObject*)(Type_t *)L_56))? 1 : 0);
		bool L_57 = V_11;
		if (!L_57)
		{
			goto IL_016d;
		}
	}
	{
		intptr_t L_58 = ___array0;
		CharU5BU5D_t7B7FC5BC8091AA3B9CB0B29CDD80B5EE9254AA34* L_59;
		L_59 = AndroidJNISafe_FromCharArray_mA49DB27755EF3B2AE81487E0FCFE06E23F617305((intptr_t)L_58, /*hidden argument*/NULL);
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_59, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_016d:
	{
		goto IL_0265;
	}

IL_0173:
	{
		Type_t * L_60 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_61 = { reinterpret_cast<intptr_t> (String_t_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_62;
		L_62 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_61, /*hidden argument*/NULL);
		V_12 = (bool)((((RuntimeObject*)(Type_t *)L_60) == ((RuntimeObject*)(Type_t *)L_62))? 1 : 0);
		bool L_63 = V_12;
		if (!L_63)
		{
			goto IL_01dc;
		}
	}
	{
		intptr_t L_64 = ___array0;
		int32_t L_65;
		L_65 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_64, /*hidden argument*/NULL);
		V_13 = (int32_t)L_65;
		int32_t L_66 = V_13;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_67 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)SZArrayNew(StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A_il2cpp_TypeInfo_var, (uint32_t)L_66);
		V_14 = (StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A*)L_67;
		V_15 = (int32_t)0;
		goto IL_01c3;
	}

IL_019d:
	{
		intptr_t L_68 = ___array0;
		int32_t L_69 = V_15;
		intptr_t L_70;
		L_70 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_68, (int32_t)L_69, /*hidden argument*/NULL);
		V_16 = (intptr_t)L_70;
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_71 = V_14;
		int32_t L_72 = V_15;
		intptr_t L_73 = V_16;
		String_t* L_74;
		L_74 = AndroidJNISafe_GetStringChars_mD59FFDE4192F837E1380B51569B5803E09BE58C8((intptr_t)L_73, /*hidden argument*/NULL);
		NullCheck(L_71);
		ArrayElementTypeCheck (L_71, L_74);
		(L_71)->SetAt(static_cast<il2cpp_array_size_t>(L_72), (String_t*)L_74);
		intptr_t L_75 = V_16;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_75, /*hidden argument*/NULL);
		int32_t L_76 = V_15;
		V_15 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_76, (int32_t)1));
	}

IL_01c3:
	{
		int32_t L_77 = V_15;
		int32_t L_78 = V_13;
		V_17 = (bool)((((int32_t)L_77) < ((int32_t)L_78))? 1 : 0);
		bool L_79 = V_17;
		if (L_79)
		{
			goto IL_019d;
		}
	}
	{
		StringU5BU5D_tACEBFEDE350025B554CD507C9AE8FFE49359549A* L_80 = V_14;
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_80, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_01dc:
	{
		Type_t * L_81 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_82 = { reinterpret_cast<intptr_t> (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_0_0_0_var) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_83;
		L_83 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_82, /*hidden argument*/NULL);
		V_18 = (bool)((((RuntimeObject*)(Type_t *)L_81) == ((RuntimeObject*)(Type_t *)L_83))? 1 : 0);
		bool L_84 = V_18;
		if (!L_84)
		{
			goto IL_0242;
		}
	}
	{
		intptr_t L_85 = ___array0;
		int32_t L_86;
		L_86 = AndroidJNISafe_GetArrayLength_m3015C191DBFC246946A88592731441A934507B56((intptr_t)L_85, /*hidden argument*/NULL);
		V_19 = (int32_t)L_86;
		int32_t L_87 = V_19;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_88 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)SZArrayNew(AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120_il2cpp_TypeInfo_var, (uint32_t)L_87);
		V_20 = (AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120*)L_88;
		V_21 = (int32_t)0;
		goto IL_022c;
	}

IL_0206:
	{
		intptr_t L_89 = ___array0;
		int32_t L_90 = V_21;
		intptr_t L_91;
		L_91 = AndroidJNI_GetObjectArrayElement_m502026BF77232EE45D03661E4923C2E5E99FDE18((intptr_t)L_89, (int32_t)L_90, /*hidden argument*/NULL);
		V_22 = (intptr_t)L_91;
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_92 = V_20;
		int32_t L_93 = V_21;
		intptr_t L_94 = V_22;
		AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E * L_95 = (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)il2cpp_codegen_object_new(AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E_il2cpp_TypeInfo_var);
		AndroidJavaObject__ctor_m880F6533139DF0BD36C6EF428E45E9F44B6534A3(L_95, (intptr_t)L_94, /*hidden argument*/NULL);
		NullCheck(L_92);
		ArrayElementTypeCheck (L_92, L_95);
		(L_92)->SetAt(static_cast<il2cpp_array_size_t>(L_93), (AndroidJavaObject_t10188D5695DCD09C9F621B44B0A8C93A2281236E *)L_95);
		intptr_t L_96 = V_22;
		AndroidJNISafe_DeleteLocalRef_m7AB242A76D13A3BF4C04831D77960C020D6ADA39((intptr_t)L_96, /*hidden argument*/NULL);
		int32_t L_97 = V_21;
		V_21 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_97, (int32_t)1));
	}

IL_022c:
	{
		int32_t L_98 = V_21;
		int32_t L_99 = V_19;
		V_23 = (bool)((((int32_t)L_98) < ((int32_t)L_99))? 1 : 0);
		bool L_100 = V_23;
		if (L_100)
		{
			goto IL_0206;
		}
	}
	{
		AndroidJavaObjectU5BU5D_tEE28563C9013906CEB39794019A55F4BA5B06120* L_101 = V_20;
		V_3 = (float)((*(float*)((float*)UnBox((RuntimeObject *)L_101, IL2CPP_RGCTX_DATA(method->rgctx_data, 1)))));
		goto IL_0272;
	}

IL_0242:
	{
		Type_t * L_102 = V_0;
		Type_t * L_103 = (Type_t *)L_102;
		G_B31_0 = L_103;
		G_B31_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
		if (L_103)
		{
			G_B32_0 = L_103;
			G_B32_1 = ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral51253131B895C2F8066BCC47E62D44F18F43446C));
			goto IL_0250;
		}
	}
	{
		G_B33_0 = ((String_t*)(NULL));
		G_B33_1 = G_B31_1;
		goto IL_0255;
	}

IL_0250:
	{
		NullCheck((RuntimeObject *)G_B32_0);
		String_t* L_104;
		L_104 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)G_B32_0);
		G_B33_0 = L_104;
		G_B33_1 = G_B32_1;
	}

IL_0255:
	{
		String_t* L_105;
		L_105 = String_Concat_m89EAB4C6A96B0E5C3F87300D6BE78D386B9EFC44((String_t*)G_B33_1, (String_t*)G_B33_0, (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral42646B33B50B6AA15E22733C8900716F0FE19E1D)), /*hidden argument*/NULL);
		Exception_t * L_106 = (Exception_t *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)));
		Exception__ctor_m8ECDE8ACA7F2E0EF1144BD1200FB5DB2870B5F11(L_106, (String_t*)L_105, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_106, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_AndroidJNIHelper_ConvertFromJNIArray_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_mD3EDB3217478F469F150970E33043F80EF1BA3CB_RuntimeMethod_var)));
	}

IL_0265:
	{
		il2cpp_codegen_initobj((&V_24), sizeof(float));
		float L_107 = V_24;
		V_3 = (float)L_107;
		goto IL_0272;
	}

IL_0272:
	{
		float L_108 = V_3;
		return (float)L_108;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Boolean>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mA6A3AB087792C0011A244BF219EB013D009592B2_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Char>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mF091800677E029891EFE21CF853FAF7A59EAA5EB_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Double>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_m2AC2F0071B32B0242BD624B60ED4DF0989C8FA51_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int16>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m75B0CDC857E28490BBB6B93E24923ECA7D896754_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int32>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m74985872D44523341B02768E3167C022A0BB74C0_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Int64>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m94135D9C37BCAFBC5C814AB2EB52A4A2B46A92A4_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Object>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisRuntimeObject_mE923D006BD57E879AAE0EF692E8D0045CF7E0748_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.SByte>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_m33DBC436D5D48BD8B087CC4D6BDC0FF2B658D402_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.IntPtr UnityEngine._AndroidJNIHelper::GetMethodID<System.Single>(System.IntPtr,System.String,System.Object[],System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t _AndroidJNIHelper_GetMethodID_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m056304D259B1FDB717A6CEE1A2262C45CE33DEBC_gshared (intptr_t ___jclass0, String_t* ___methodName1, ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args2, bool ___isStatic3, const RuntimeMethod* method)
{
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		intptr_t L_0 = ___jclass0;
		String_t* L_1 = ___methodName1;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_2 = ___args2;
		String_t* L_3;
		L_3 = ((  String_t* (*) (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_2, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		bool L_4 = ___isStatic3;
		intptr_t L_5;
		L_5 = AndroidJNIHelper_GetMethodID_m2B5E7C9B05905F6C6B60A735B8A6E97BBA468535((intptr_t)L_0, (String_t*)L_1, (String_t*)L_3, (bool)L_4, /*hidden argument*/NULL);
		V_0 = (intptr_t)L_5;
		goto IL_0012;
	}

IL_0012:
	{
		intptr_t L_6 = V_0;
		return (intptr_t)L_6;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Boolean>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisBoolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_mBD54DD62EF90673A4806A2CEFA031CFE3C998274_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Char>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisChar_tFF60D8E7E89A20BE2294A003734341BD1DF43E14_mB636DED19D226BEDFC17AE941CAD220377CA0584_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Double>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisDouble_t42821932CB52DE2057E685D0E1AF3DE5033D2181_mD09A1E6993B600273E5DA6DD5A610B0A45E10035_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int16>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt16_tD0F031114106263BB459DA1F099FF9F42691295A_m53EA03473D7F4C2525577E0D9E0999F78F5E7F7B_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int32>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_m83D9133FDC0884534CE97F82ED983AC5AE9465CA_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Int64>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisInt64_t378EE0D608BD3107E77238E85F30D2BBD46981F3_m413740B31E01EB314EE0D3A2B1CF91DAD24A9659_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Object>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisRuntimeObject_mC6BEA8EDE34CA523E26ACA072A4E246C7FF6DB25_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.SByte>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSByte_t928712DD662DC29BA4FAAE8CE2230AFB23447F0B_mA275B45366DA25AFB161A011BC8F1888F54B0BF2_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.String UnityEngine._AndroidJNIHelper::GetSignature<System.Single>(System.Object[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* _AndroidJNIHelper_GetSignature_TisSingle_tE07797BA3C98D4CA9B5A19413C19A76688AB899E_m82A85440F4B906A83640CA6939D1BC0D1BDEB2C3_gshared (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* ___args0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringBuilder_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	StringBuilder_t * V_0 = NULL;
	ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* V_1 = NULL;
	int32_t V_2 = 0;
	RuntimeObject * V_3 = NULL;
	String_t* V_4 = NULL;
	{
		StringBuilder_t * L_0 = (StringBuilder_t *)il2cpp_codegen_object_new(StringBuilder_t_il2cpp_TypeInfo_var);
		StringBuilder__ctor_m5A81DE19E748F748E19FF13FB6FFD2547F9212D9(L_0, /*hidden argument*/NULL);
		V_0 = (StringBuilder_t *)L_0;
		StringBuilder_t * L_1 = V_0;
		NullCheck((StringBuilder_t *)L_1);
		StringBuilder_t * L_2;
		L_2 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_1, (Il2CppChar)((int32_t)40), /*hidden argument*/NULL);
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_3 = ___args0;
		V_1 = (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_3;
		V_2 = (int32_t)0;
		goto IL_002e;
	}

IL_0017:
	{
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_4 = V_1;
		int32_t L_5 = V_2;
		NullCheck(L_4);
		int32_t L_6 = L_5;
		RuntimeObject * L_7 = (L_4)->GetAt(static_cast<il2cpp_array_size_t>(L_6));
		V_3 = (RuntimeObject *)L_7;
		StringBuilder_t * L_8 = V_0;
		RuntimeObject * L_9 = V_3;
		String_t* L_10;
		L_10 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_9, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_8);
		StringBuilder_t * L_11;
		L_11 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_8, (String_t*)L_10, /*hidden argument*/NULL);
		int32_t L_12 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_12, (int32_t)1));
	}

IL_002e:
	{
		int32_t L_13 = V_2;
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_14 = V_1;
		NullCheck(L_14);
		if ((((int32_t)L_13) < ((int32_t)((int32_t)((int32_t)(((RuntimeArray*)L_14)->max_length))))))
		{
			goto IL_0017;
		}
	}
	{
		StringBuilder_t * L_15 = V_0;
		NullCheck((StringBuilder_t *)L_15);
		StringBuilder_t * L_16;
		L_16 = StringBuilder_Append_m1ADA3C16E40BF253BCDB5F9579B4DBA9C3E5B22E((StringBuilder_t *)L_15, (Il2CppChar)((int32_t)41), /*hidden argument*/NULL);
		StringBuilder_t * L_17 = V_0;
		RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9  L_18 = { reinterpret_cast<intptr_t> (IL2CPP_RGCTX_TYPE(method->rgctx_data, 0)) };
		IL2CPP_RUNTIME_CLASS_INIT(Type_t_il2cpp_TypeInfo_var);
		Type_t * L_19;
		L_19 = Type_GetTypeFromHandle_m8BB57524FF7F9DB1803BC561D2B3A4DBACEB385E((RuntimeTypeHandle_tC33965ADA3E041E0C94AF05E5CB527B56482CEF9 )L_18, /*hidden argument*/NULL);
		String_t* L_20;
		L_20 = _AndroidJNIHelper_GetSignature_m4A272D66518BF9A4C746B02B91AAB1361293232C((RuntimeObject *)L_19, /*hidden argument*/NULL);
		NullCheck((StringBuilder_t *)L_17);
		StringBuilder_t * L_21;
		L_21 = StringBuilder_Append_mD02AB0C74C6F55E3E330818C77EC147E22096FB1((StringBuilder_t *)L_17, (String_t*)L_20, /*hidden argument*/NULL);
		StringBuilder_t * L_22 = V_0;
		NullCheck((RuntimeObject *)L_22);
		String_t* L_23;
		L_23 = VirtFuncInvoker0< String_t* >::Invoke(3 /* System.String System.Object::ToString() */, (RuntimeObject *)L_22);
		V_4 = (String_t*)L_23;
		goto IL_005d;
	}

IL_005d:
	{
		String_t* L_24 = V_4;
		return (String_t*)L_24;
	}
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.LightCompiler/QuoteVisitor::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * QuoteVisitor_VisitLambda_TisRuntimeObject_mF0A4AC2198AACA7CB1D4527BC7E79D3D9DAF8F72_gshared (QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 * __this, Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Array_Empty_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_m8FAF2226E6288860C1D3C92AB793820D17F32D71_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_Add_mC5D74D70A6B9B4BC082AEB0EC771879B842C7708_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1__ctor_mE4C9B3F15E5D5168479F4E7227A000B97C871A30_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B * V_2 = NULL;
	int32_t V_3 = 0;
	{
		ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* L_0;
		L_0 = Array_Empty_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_m8FAF2226E6288860C1D3C92AB793820D17F32D71_inline(/*hidden argument*/Array_Empty_TisParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE_m8FAF2226E6288860C1D3C92AB793820D17F32D71_RuntimeMethod_var);
		V_0 = (RuntimeObject*)L_0;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_1 = ___node0;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_1);
		int32_t L_2;
		L_2 = VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_1);
		V_1 = (int32_t)L_2;
		int32_t L_3 = V_1;
		if ((((int32_t)L_3) <= ((int32_t)0)))
		{
			goto IL_0033;
		}
	}
	{
		int32_t L_4 = V_1;
		List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B * L_5 = (List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B *)il2cpp_codegen_object_new(List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B_il2cpp_TypeInfo_var);
		List_1__ctor_mE4C9B3F15E5D5168479F4E7227A000B97C871A30(L_5, (int32_t)L_4, /*hidden argument*/List_1__ctor_mE4C9B3F15E5D5168479F4E7227A000B97C871A30_RuntimeMethod_var);
		V_2 = (List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B *)L_5;
		V_3 = (int32_t)0;
		goto IL_002d;
	}

IL_001c:
	{
		List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B * L_6 = V_2;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_7 = ___node0;
		int32_t L_8 = V_3;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_7);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_9;
		L_9 = VirtFuncInvoker1< ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_7, (int32_t)L_8);
		NullCheck((List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B *)L_6);
		List_1_Add_mC5D74D70A6B9B4BC082AEB0EC771879B842C7708((List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B *)L_6, (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_9, /*hidden argument*/List_1_Add_mC5D74D70A6B9B4BC082AEB0EC771879B842C7708_RuntimeMethod_var);
		int32_t L_10 = V_3;
		V_3 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002d:
	{
		int32_t L_11 = V_3;
		int32_t L_12 = V_1;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001c;
		}
	}
	{
		List_1_tCDDF33E8793E2DD752E38CC326B13F8F35B1493B * L_13 = V_2;
		V_0 = (RuntimeObject*)L_13;
	}

IL_0033:
	{
		RuntimeObject* L_14 = V_0;
		NullCheck((QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 *)__this);
		QuoteVisitor_PushParameters_m7AAC447E0627A0AD1A5EBAB7A7AFFD5F239CC0ED((QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 *)__this, (RuntimeObject*)L_14, /*hidden argument*/NULL);
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_15 = ___node0;
		NullCheck((ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 *)__this);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_16;
		L_16 = ((  Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * (*) (ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 *, Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F *, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)((ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 *)__this, (Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F *)L_15, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		RuntimeObject* L_17 = V_0;
		NullCheck((QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 *)__this);
		QuoteVisitor_PopParameters_m88C9C499B152E0333072D63BFD2908F2D710495A((QuoteVisitor_tFE404B4C826642C3FC245A108AEC9E94D691E627 *)__this, (RuntimeObject*)L_17, /*hidden argument*/NULL);
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_18 = ___node0;
		return (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_18;
	}
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetIndexData<System.UInt16>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  MeshData_GetIndexData_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m2E0E902D84857549A19F7E675EB5767D21BC8C19_gshared (MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	bool V_3 = false;
	NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		intptr_t L_0 = (intptr_t)__this->get_m_Ptr_0();
		uint64_t L_1;
		L_1 = MeshData_GetIndexDataSize_m13CB694AE2A934360D2C5A6537974533AC5933E2((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (uint64_t)L_1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (uint64_t)((int64_t)((int64_t)L_2));
		uint64_t L_3 = V_0;
		uint64_t L_4 = V_1;
		V_3 = (bool)((!(((uint64_t)((int64_t)((uint64_t)(int64_t)L_3%(uint64_t)(int64_t)L_4))) <= ((uint64_t)((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		uint64_t L_6 = V_0;
		uint64_t L_7 = L_6;
		RuntimeObject * L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)), &L_7);
		uint64_t L_9 = V_1;
		uint64_t L_10 = L_9;
		RuntimeObject * L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)), &L_10);
		String_t* L_12;
		L_12 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral121FF5564E1B93612CC7A3748FAD95C919EF04E2)), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68C1CA2959BA9A4A0F4FC3A15F854C304C716D2C)), (RuntimeObject *)L_8, (RuntimeObject *)L_11, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, (String_t*)L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_GetIndexData_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m2E0E902D84857549A19F7E675EB5767D21BC8C19_RuntimeMethod_var)));
	}

IL_0040:
	{
		uint64_t L_14 = V_0;
		uint64_t L_15 = V_1;
		V_2 = (uint64_t)((int64_t)((uint64_t)(int64_t)L_14/(uint64_t)(int64_t)L_15));
		intptr_t L_16 = (intptr_t)__this->get_m_Ptr_0();
		intptr_t L_17;
		L_17 = MeshData_GetIndexDataPtr_m21AAFD14A21AD52B43A5169F5F7E8B4950857380((intptr_t)L_16, /*hidden argument*/NULL);
		void* L_18;
		L_18 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_17, /*hidden argument*/NULL);
		uint64_t L_19 = V_2;
		NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  L_20;
		L_20 = ((  NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((void*)(void*)L_18, (int32_t)((int32_t)((int32_t)L_19)), (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_4 = (NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A )L_20;
		NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  L_21 = V_4;
		V_5 = (NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A )L_21;
		goto IL_0065;
	}

IL_0065:
	{
		NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  L_22 = V_5;
		return (NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A )L_22;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  MeshData_GetIndexData_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m2E0E902D84857549A19F7E675EB5767D21BC8C19_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 * _thisAdjusted = reinterpret_cast<MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 *>(__this + _offset);
	NativeArray_1_t7203C36524CBF9E07ED2D6B86C410B21B422626A  _returnValue;
	_returnValue = MeshData_GetIndexData_TisUInt16_t894EA9D4FB7C799B244E7BBF2DF0EEEDBC77A8BD_m2E0E902D84857549A19F7E675EB5767D21BC8C19(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetIndexData<System.UInt32>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  MeshData_GetIndexData_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m7546561C94E85FE1C5EAFE9923A29A79B808E02F_gshared (MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 * __this, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	bool V_3 = false;
	NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  V_4;
	memset((&V_4), 0, sizeof(V_4));
	NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  V_5;
	memset((&V_5), 0, sizeof(V_5));
	{
		intptr_t L_0 = (intptr_t)__this->get_m_Ptr_0();
		uint64_t L_1;
		L_1 = MeshData_GetIndexDataSize_m13CB694AE2A934360D2C5A6537974533AC5933E2((intptr_t)L_0, /*hidden argument*/NULL);
		V_0 = (uint64_t)L_1;
		int32_t L_2;
		L_2 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (uint64_t)((int64_t)((int64_t)L_2));
		uint64_t L_3 = V_0;
		uint64_t L_4 = V_1;
		V_3 = (bool)((!(((uint64_t)((int64_t)((uint64_t)(int64_t)L_3%(uint64_t)(int64_t)L_4))) <= ((uint64_t)((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_5 = V_3;
		if (!L_5)
		{
			goto IL_0040;
		}
	}
	{
		uint64_t L_6 = V_0;
		uint64_t L_7 = L_6;
		RuntimeObject * L_8 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)), &L_7);
		uint64_t L_9 = V_1;
		uint64_t L_10 = L_9;
		RuntimeObject * L_11 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)), &L_10);
		String_t* L_12;
		L_12 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral121FF5564E1B93612CC7A3748FAD95C919EF04E2)), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral68C1CA2959BA9A4A0F4FC3A15F854C304C716D2C)), (RuntimeObject *)L_8, (RuntimeObject *)L_11, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_13 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_13, (String_t*)L_12, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_13, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_GetIndexData_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m7546561C94E85FE1C5EAFE9923A29A79B808E02F_RuntimeMethod_var)));
	}

IL_0040:
	{
		uint64_t L_14 = V_0;
		uint64_t L_15 = V_1;
		V_2 = (uint64_t)((int64_t)((uint64_t)(int64_t)L_14/(uint64_t)(int64_t)L_15));
		intptr_t L_16 = (intptr_t)__this->get_m_Ptr_0();
		intptr_t L_17;
		L_17 = MeshData_GetIndexDataPtr_m21AAFD14A21AD52B43A5169F5F7E8B4950857380((intptr_t)L_16, /*hidden argument*/NULL);
		void* L_18;
		L_18 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_17, /*hidden argument*/NULL);
		uint64_t L_19 = V_2;
		NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  L_20;
		L_20 = ((  NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((void*)(void*)L_18, (int32_t)((int32_t)((int32_t)L_19)), (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_4 = (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A )L_20;
		NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  L_21 = V_4;
		V_5 = (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A )L_21;
		goto IL_0065;
	}

IL_0065:
	{
		NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  L_22 = V_5;
		return (NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A )L_22;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  MeshData_GetIndexData_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m7546561C94E85FE1C5EAFE9923A29A79B808E02F_AdjustorThunk (RuntimeObject * __this, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 * _thisAdjusted = reinterpret_cast<MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 *>(__this + _offset);
	NativeArray_1_tCE3FBA37C1D711DDDD473E84C32A9F5C60F2577A  _returnValue;
	_returnValue = MeshData_GetIndexData_TisUInt32_tE60352A06233E4E69DD198BCC67142159F686B15_m7546561C94E85FE1C5EAFE9923A29A79B808E02F(_thisAdjusted, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetVertexData<UnityEngine.Vector2>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  MeshData_GetVertexData_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mF73139A474DE63BC44CA1D6C548CE4462485706C_gshared (MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 * __this, int32_t ___stream0, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  V_5;
	memset((&V_5), 0, sizeof(V_5));
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___stream0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___stream0;
		int32_t L_2;
		L_2 = MeshData_get_vertexBufferCount_m12BF0A0B2CC1176C160480CF8F72E7475F13058A((MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 *)(MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 *)__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_3 = (bool)G_B3_0;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4;
		L_4 = MeshData_get_vertexBufferCount_m12BF0A0B2CC1176C160480CF8F72E7475F13058A((MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 *)(MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 *)__this, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_5);
		int32_t L_7 = ___stream0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6CF91F6B7DE6325C51CD043CCC47AFED4D93DDFE)), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), (RuntimeObject *)L_6, (RuntimeObject *)L_9, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_11 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_11, (String_t*)L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_GetVertexData_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mF73139A474DE63BC44CA1D6C548CE4462485706C_RuntimeMethod_var)));
	}

IL_003e:
	{
		intptr_t L_12 = (intptr_t)__this->get_m_Ptr_0();
		int32_t L_13 = ___stream0;
		uint64_t L_14;
		L_14 = MeshData_GetVertexDataSize_m498CB563CBFB7634EA3D8931828670E5A9BA2239((intptr_t)L_12, (int32_t)L_13, /*hidden argument*/NULL);
		V_0 = (uint64_t)L_14;
		int32_t L_15;
		L_15 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (uint64_t)((int64_t)((int64_t)L_15));
		uint64_t L_16 = V_0;
		uint64_t L_17 = V_1;
		V_4 = (bool)((!(((uint64_t)((int64_t)((uint64_t)(int64_t)L_16%(uint64_t)(int64_t)L_17))) <= ((uint64_t)((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0080;
		}
	}
	{
		uint64_t L_19 = V_0;
		uint64_t L_20 = L_19;
		RuntimeObject * L_21 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)), &L_20);
		uint64_t L_22 = V_1;
		uint64_t L_23 = L_22;
		RuntimeObject * L_24 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)), &L_23);
		String_t* L_25;
		L_25 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AEE74398EBD8002DAB30FB04C4295D7A22DA0FB)), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9322B0066DF9816B83486A4449B3C467CE58EB78)), (RuntimeObject *)L_21, (RuntimeObject *)L_24, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_26 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_26, (String_t*)L_25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_GetVertexData_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mF73139A474DE63BC44CA1D6C548CE4462485706C_RuntimeMethod_var)));
	}

IL_0080:
	{
		uint64_t L_27 = V_0;
		uint64_t L_28 = V_1;
		V_2 = (uint64_t)((int64_t)((uint64_t)(int64_t)L_27/(uint64_t)(int64_t)L_28));
		intptr_t L_29 = (intptr_t)__this->get_m_Ptr_0();
		int32_t L_30 = ___stream0;
		intptr_t L_31;
		L_31 = MeshData_GetVertexDataPtr_m533D02CF79768A7DE268AF060D9AF531D674AC9D((intptr_t)L_29, (int32_t)L_30, /*hidden argument*/NULL);
		void* L_32;
		L_32 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_31, /*hidden argument*/NULL);
		uint64_t L_33 = V_2;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_34;
		L_34 = ((  NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((void*)(void*)L_32, (int32_t)((int32_t)((int32_t)L_33)), (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_5 = (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 )L_34;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_35 = V_5;
		V_6 = (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 )L_35;
		goto IL_00a6;
	}

IL_00a6:
	{
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_36 = V_6;
		return (NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 )L_36;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  MeshData_GetVertexData_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mF73139A474DE63BC44CA1D6C548CE4462485706C_AdjustorThunk (RuntimeObject * __this, int32_t ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 * _thisAdjusted = reinterpret_cast<MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 *>(__this + _offset);
	NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  _returnValue;
	_returnValue = MeshData_GetVertexData_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_mF73139A474DE63BC44CA1D6C548CE4462485706C(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// Unity.Collections.NativeArray`1<T> UnityEngine.Mesh/MeshData::GetVertexData<UnityEngine.Vector3>(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  MeshData_GetVertexData_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mC879F60D7A7863A2E9E05333177CFFFF3DFFEC20_gshared (MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 * __this, int32_t ___stream0, const RuntimeMethod* method)
{
	uint64_t V_0 = 0;
	uint64_t V_1 = 0;
	uint64_t V_2 = 0;
	bool V_3 = false;
	bool V_4 = false;
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  V_5;
	memset((&V_5), 0, sizeof(V_5));
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  V_6;
	memset((&V_6), 0, sizeof(V_6));
	int32_t G_B3_0 = 0;
	{
		int32_t L_0 = ___stream0;
		if ((((int32_t)L_0) < ((int32_t)0)))
		{
			goto IL_0013;
		}
	}
	{
		int32_t L_1 = ___stream0;
		int32_t L_2;
		L_2 = MeshData_get_vertexBufferCount_m12BF0A0B2CC1176C160480CF8F72E7475F13058A((MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 *)(MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 *)__this, /*hidden argument*/NULL);
		G_B3_0 = ((((int32_t)((((int32_t)L_1) < ((int32_t)L_2))? 1 : 0)) == ((int32_t)0))? 1 : 0);
		goto IL_0014;
	}

IL_0013:
	{
		G_B3_0 = 1;
	}

IL_0014:
	{
		V_3 = (bool)G_B3_0;
		bool L_3 = V_3;
		if (!L_3)
		{
			goto IL_003e;
		}
	}
	{
		int32_t L_4;
		L_4 = MeshData_get_vertexBufferCount_m12BF0A0B2CC1176C160480CF8F72E7475F13058A((MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 *)(MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 *)__this, /*hidden argument*/NULL);
		int32_t L_5 = L_4;
		RuntimeObject * L_6 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_5);
		int32_t L_7 = ___stream0;
		int32_t L_8 = L_7;
		RuntimeObject * L_9 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_tFDE5F8CD43D10453F6A2E0C77FE48C6CC7009046_il2cpp_TypeInfo_var)), &L_8);
		String_t* L_10;
		L_10 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral6CF91F6B7DE6325C51CD043CCC47AFED4D93DDFE)), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF7E6C53D86D8ADC0DB8EFC0A2CD9877CC8BC9914)), (RuntimeObject *)L_6, (RuntimeObject *)L_9, /*hidden argument*/NULL);
		ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 * L_11 = (ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tFAF23713820951D4A09ABBFE5CC091E445A6F3D8_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_m329C2882A4CB69F185E98D0DD7E853AA9220960A(L_11, (String_t*)L_10, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_11, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_GetVertexData_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mC879F60D7A7863A2E9E05333177CFFFF3DFFEC20_RuntimeMethod_var)));
	}

IL_003e:
	{
		intptr_t L_12 = (intptr_t)__this->get_m_Ptr_0();
		int32_t L_13 = ___stream0;
		uint64_t L_14;
		L_14 = MeshData_GetVertexDataSize_m498CB563CBFB7634EA3D8931828670E5A9BA2239((intptr_t)L_12, (int32_t)L_13, /*hidden argument*/NULL);
		V_0 = (uint64_t)L_14;
		int32_t L_15;
		L_15 = ((  int32_t (*) (const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0)->methodPointer)(/*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		V_1 = (uint64_t)((int64_t)((int64_t)L_15));
		uint64_t L_16 = V_0;
		uint64_t L_17 = V_1;
		V_4 = (bool)((!(((uint64_t)((int64_t)((uint64_t)(int64_t)L_16%(uint64_t)(int64_t)L_17))) <= ((uint64_t)((int64_t)((int64_t)0)))))? 1 : 0);
		bool L_18 = V_4;
		if (!L_18)
		{
			goto IL_0080;
		}
	}
	{
		uint64_t L_19 = V_0;
		uint64_t L_20 = L_19;
		RuntimeObject * L_21 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)), &L_20);
		uint64_t L_22 = V_1;
		uint64_t L_23 = L_22;
		RuntimeObject * L_24 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&UInt64_tEC57511B3E3CA2DBA1BEBD434C6983E31C943281_il2cpp_TypeInfo_var)), &L_23);
		String_t* L_25;
		L_25 = String_Format_m039737CCD992C5BFC8D16DFD681F5E8786E87FA6((String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9AEE74398EBD8002DAB30FB04C4295D7A22DA0FB)), (RuntimeObject *)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9322B0066DF9816B83486A4449B3C467CE58EB78)), (RuntimeObject *)L_21, (RuntimeObject *)L_24, /*hidden argument*/NULL);
		ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 * L_26 = (ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00 *)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_t505FA8C11E883F2D96C797AD9D396490794DEE00_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m2D35EAD113C2ADC99EB17B940A2097A93FD23EFC(L_26, (String_t*)L_25, /*hidden argument*/NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_26, ((RuntimeMethod*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&MeshData_GetVertexData_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mC879F60D7A7863A2E9E05333177CFFFF3DFFEC20_RuntimeMethod_var)));
	}

IL_0080:
	{
		uint64_t L_27 = V_0;
		uint64_t L_28 = V_1;
		V_2 = (uint64_t)((int64_t)((uint64_t)(int64_t)L_27/(uint64_t)(int64_t)L_28));
		intptr_t L_29 = (intptr_t)__this->get_m_Ptr_0();
		int32_t L_30 = ___stream0;
		intptr_t L_31;
		L_31 = MeshData_GetVertexDataPtr_m533D02CF79768A7DE268AF060D9AF531D674AC9D((intptr_t)L_29, (int32_t)L_30, /*hidden argument*/NULL);
		void* L_32;
		L_32 = IntPtr_op_Explicit_mE8B472FDC632CBD121F7ADF4F94546D6610BACDD((intptr_t)L_31, /*hidden argument*/NULL);
		uint64_t L_33 = V_2;
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  L_34;
		L_34 = ((  NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  (*) (void*, int32_t, int32_t, const RuntimeMethod*))IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1)->methodPointer)((void*)(void*)L_32, (int32_t)((int32_t)((int32_t)L_33)), (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 1));
		V_5 = (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 )L_34;
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  L_35 = V_5;
		V_6 = (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 )L_35;
		goto IL_00a6;
	}

IL_00a6:
	{
		NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  L_36 = V_6;
		return (NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52 )L_36;
	}
}
IL2CPP_EXTERN_C  NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  MeshData_GetVertexData_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mC879F60D7A7863A2E9E05333177CFFFF3DFFEC20_AdjustorThunk (RuntimeObject * __this, int32_t ___stream0, const RuntimeMethod* method)
{
	int32_t _offset = 1;
	MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 * _thisAdjusted = reinterpret_cast<MeshData_tBFF99C0C82DBC04BDB83209CDE690A0B4303D6D1 *>(__this + _offset);
	NativeArray_1_t2577BCA09CA248EFB78BD7FDA7F09D5C395DFF52  _returnValue;
	_returnValue = MeshData_GetVertexData_TisVector3_t65B972D6A585A0A5B63153CF1177A90D3C90D65E_mC879F60D7A7863A2E9E05333177CFFFF3DFFEC20(_thisAdjusted, ___stream0, method);
	return _returnValue;
}
// System.Linq.Expressions.Expression System.Linq.Expressions.Interpreter.QuoteInstruction/ExpressionQuoter::VisitLambda<System.Object>(System.Linq.Expressions.Expression`1<T>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * ExpressionQuoter_VisitLambda_TisRuntimeObject_m35F891348C1626D5AB57E495CE369CC7865BF436_gshared (ExpressionQuoter_t174D328A07E522775BA6B19ADF09DBEAF13098FE * __this, Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * ___node0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var);
		s_Il2CppMethodInitialized = true;
	}
	Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * V_0 = NULL;
	HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * V_1 = NULL;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	{
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_0 = ___node0;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_0);
		int32_t L_1;
		L_1 = VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_0);
		if ((((int32_t)L_1) <= ((int32_t)0)))
		{
			goto IL_003c;
		}
	}
	{
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_2 = (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)il2cpp_codegen_object_new(HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0_il2cpp_TypeInfo_var);
		HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B(L_2, /*hidden argument*/HashSet_1__ctor_m7E015D0E7832B3967403CAEE703C819D77AE741B_RuntimeMethod_var);
		V_1 = (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)L_2;
		V_2 = (int32_t)0;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_3 = ___node0;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_3);
		int32_t L_4;
		L_4 = VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_3);
		V_3 = (int32_t)L_4;
		goto IL_002c;
	}

IL_001a:
	{
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_5 = V_1;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_6 = ___node0;
		int32_t L_7 = V_2;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_6);
		ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE * L_8;
		L_8 = VirtFuncInvoker1< ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *, int32_t >::Invoke(16 /* System.Linq.Expressions.ParameterExpression System.Linq.Expressions.LambdaExpression::GetParameter(System.Int32) */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_6, (int32_t)L_7);
		NullCheck((HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)L_5);
		bool L_9;
		L_9 = HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE((HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)L_5, (ParameterExpression_tA7B24F1DE0F013DA4BD55F76DB43B06DB33D8BEE *)L_8, /*hidden argument*/HashSet_1_Add_m97A1CDFD6C8F09EC6D4C676F183FBAF06EC20CDE_RuntimeMethod_var);
		int32_t L_10 = V_2;
		V_2 = (int32_t)((int32_t)il2cpp_codegen_add((int32_t)L_10, (int32_t)1));
	}

IL_002c:
	{
		int32_t L_11 = V_2;
		int32_t L_12 = V_3;
		if ((((int32_t)L_11) < ((int32_t)L_12)))
		{
			goto IL_001a;
		}
	}
	{
		Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * L_13 = (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)__this->get__shadowedVars_2();
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_14 = V_1;
		NullCheck((Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)L_13);
		Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C((Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)L_13, (HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 *)L_14, /*hidden argument*/Stack_1_Push_m97F7795161150F81DB993EFB230CD48A2B2A369C_RuntimeMethod_var);
	}

IL_003c:
	{
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_15 = ___node0;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_15);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_16;
		L_16 = LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_15, /*hidden argument*/NULL);
		NullCheck((ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 *)__this);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_17;
		L_17 = VirtFuncInvoker1< Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * >::Invoke(4 /* System.Linq.Expressions.Expression System.Linq.Expressions.ExpressionVisitor::Visit(System.Linq.Expressions.Expression) */, (ExpressionVisitor_tD098DE8A366FBBB58C498C4EFF8B003FCA726DF4 *)__this, (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_16);
		V_0 = (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_17;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_18 = ___node0;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_18);
		int32_t L_19;
		L_19 = VirtFuncInvoker0< int32_t >::Invoke(17 /* System.Int32 System.Linq.Expressions.LambdaExpression::get_ParameterCount() */, (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_18);
		if ((((int32_t)L_19) <= ((int32_t)0)))
		{
			goto IL_005e;
		}
	}
	{
		Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 * L_20 = (Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)__this->get__shadowedVars_2();
		NullCheck((Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)L_20);
		HashSet_1_t42A3AC337CA15FAC250AA5DA438F909806C72CB0 * L_21;
		L_21 = Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769((Stack_1_t438C22E9DF33740A9BDB48CF9504B6E044484958 *)L_20, /*hidden argument*/Stack_1_Pop_mE1B2B7343AEB424CD56DCD92DE34D64249A26769_RuntimeMethod_var);
	}

IL_005e:
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_22 = V_0;
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_23 = ___node0;
		NullCheck((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_23);
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_24;
		L_24 = LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline((LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 *)L_23, /*hidden argument*/NULL);
		if ((!(((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_22) == ((RuntimeObject*)(Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_24))))
		{
			goto IL_0069;
		}
	}
	{
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_25 = ___node0;
		return (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_25;
	}

IL_0069:
	{
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_26 = ___node0;
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_27 = V_0;
		NullCheck((Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F *)L_26);
		Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F * L_28;
		L_28 = VirtFuncInvoker2< Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F *, Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *, ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147* >::Invoke(18 /* System.Linq.Expressions.Expression`1<TDelegate> System.Linq.Expressions.Expression`1<System.Object>::Rewrite(System.Linq.Expressions.Expression,System.Linq.Expressions.ParameterExpression[]) */, (Expression_1_t01B093F396848A065BE827B0C58E6F20E760FB6F *)L_26, (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_27, (ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)(ParameterExpressionU5BU5D_tCF3EAA6D8556513C4937E1126F65AA08DF4DB147*)NULL);
		return (Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 *)L_28;
	}
}
// System.Void UnityEngine.XR.ARSubsystems.XRPlaneSubsystem/Provider::CreateOrResizeNativeArrayIfNecessary<UnityEngine.Vector2>(System.Int32,Unity.Collections.Allocator,Unity.Collections.NativeArray`1<T>&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Provider_CreateOrResizeNativeArrayIfNecessary_TisVector2_tBB32F2736AEC229A7BFBCE18197EC0F6AC7EC2D9_m2DB299A15665775F0B5BDFF92CF4FA10166B614A_gshared (int32_t ___length0, int32_t ___allocator1, NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * ___array2, const RuntimeMethod* method)
{
	{
		// if (array.IsCreated)
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_0 = ___array2;
		bool L_1;
		L_1 = NativeArray_1_get_IsCreated_mF82CF064C6050394DEAC11047A6308998101A4AE((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_0, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 0));
		if (!L_1)
		{
			goto IL_0026;
		}
	}
	{
		// if (array.Length != length)
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_2 = ___array2;
		int32_t L_3;
		L_3 = IL2CPP_NATIVEARRAY_GET_LENGTH(((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_2)->___m_Length_1);
		int32_t L_4 = ___length0;
		if ((((int32_t)L_3) == ((int32_t)L_4)))
		{
			goto IL_0034;
		}
	}
	{
		// array.Dispose();
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_5 = ___array2;
		NativeArray_1_Dispose_mE737DADB8C5E4B02C2FB6CB36E86AC6371D806BF((NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_5, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 2));
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_6 = ___array2;
		int32_t L_7 = ___length0;
		int32_t L_8 = ___allocator1;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_9;
		memset((&L_9), 0, sizeof(L_9));
		NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729((&L_9), (int32_t)L_7, (int32_t)L_8, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_6 = L_9;
		// }
		return;
	}

IL_0026:
	{
		// array = new NativeArray<T>(length, allocator);
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 * L_10 = ___array2;
		int32_t L_11 = ___length0;
		int32_t L_12 = ___allocator1;
		NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0  L_13;
		memset((&L_13), 0, sizeof(L_13));
		NativeArray_1__ctor_m53A2E0E5DDF506B8508EAC444CAF3DB70F874729((&L_13), (int32_t)L_11, (int32_t)L_12, (int32_t)1, /*hidden argument*/IL2CPP_RGCTX_METHOD_INFO(method->rgctx_data, 4));
		*(NativeArray_1_t431C85F30275831D1F5D458AB73DFCE050693BC0 *)L_10 = L_13;
	}

IL_0034:
	{
		// }
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042_inline (LambdaExpression_t26BF905E97E6D94F81F17D60F4F4F47F8E93B474 * __this, const RuntimeMethod* method)
{
	{
		Expression_t30A004209C10C2D9A9785B2F74EEED431A4D4660 * L_0 = __this->get__body_3();
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* Array_Empty_TisRuntimeObject_m1FBC21243DF3542384C523801E8CA8A97606C747_gshared_inline (const RuntimeMethod* method)
{
	{
		IL2CPP_RUNTIME_CLASS_INIT(IL2CPP_RGCTX_DATA(method->rgctx_data, 0));
		ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE* L_0 = ((EmptyArray_1_tBF73225DFA890366D579424FE8F40073BF9FBAD4_StaticFields*)il2cpp_codegen_static_fields_for(IL2CPP_RGCTX_DATA(method->rgctx_data, 0)))->get_Value_0();
		return (ObjectU5BU5D_tC1F4EE0DB0B7300255F5FD4AF64FE4C585CF5ADE*)L_0;
	}
}
