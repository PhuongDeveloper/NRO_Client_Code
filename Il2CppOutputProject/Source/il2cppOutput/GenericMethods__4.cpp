#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif




template <typename R>
struct VirtualFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};
template <typename R, typename T1>
struct VirtualFuncInvoker1
{
	typedef R (*Func)(void*, T1, const RuntimeMethod*);

	static inline R Invoke (Il2CppMethodSlot slot, RuntimeObject* obj, T1 p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_virtual_invoke_data(slot, obj);
		return ((Func)invokeData.methodPtr)(obj, p1, invokeData.method);
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
template <typename T1>
struct InterfaceActionInvoker1Invoker;
template <typename T1>
struct InterfaceActionInvoker1Invoker<T1*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1* p1)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[1] = { p1 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker;
template <typename T1, typename T2>
struct InterfaceActionInvoker2Invoker<T1, T2*>
{
	static inline void Invoke (Il2CppMethodSlot slot, RuntimeClass* declaringInterface, RuntimeObject* obj, T1 p1, T2* p2)
	{
		const VirtualInvokeData& invokeData = il2cpp_codegen_get_interface_invoke_data(slot, obj, declaringInterface);
		void* params[2] = { &p1, p2 };
		invokeData.method->invoker_method(il2cpp_codegen_get_method_pointer(invokeData.method), invokeData.method, obj, params, params[1]);
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
template <typename T1>
struct InvokerActionInvoker1;
template <typename T1>
struct InvokerActionInvoker1<T1*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1)
	{
		void* params[1] = { p1 };
		method->invoker_method(methodPtr, method, obj, params, params[0]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2;
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2)
	{
		void* params[2] = { &p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2>
struct InvokerActionInvoker2<T1*, T2*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2)
	{
		void* params[2] = { p1, p2 };
		method->invoker_method(methodPtr, method, obj, params, params[1]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3;
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2 p2, T3* p3)
	{
		void* params[3] = { p1, &p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3>
struct InvokerActionInvoker3<T1*, T2*, T3*>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3)
	{
		void* params[3] = { p1, p2, p3 };
		method->invoker_method(methodPtr, method, obj, params, params[2]);
	}
};
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4;
template <typename T1, typename T2, typename T3, typename T4>
struct InvokerActionInvoker4<T1, T2*, T3, T4>
{
	static inline void Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1 p1, T2* p2, T3 p3, T4 p4)
	{
		void* params[4] = { &p1, p2, &p3, &p4 };
		method->invoker_method(methodPtr, method, obj, params, params[3]);
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5>
struct InvokerFuncInvoker5<R, T1*, T2*, T3*, T4*, T5>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5 p5)
	{
		R ret;
		void* params[5] = { p1, p2, p3, p4, &p5 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6>
struct InvokerFuncInvoker6<R, T1*, T2*, T3*, T4*, T5*, T6>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6 p6)
	{
		R ret;
		void* params[6] = { p1, p2, p3, p4, p5, &p6 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7;
template <typename R, typename T1, typename T2, typename T3, typename T4, typename T5, typename T6, typename T7>
struct InvokerFuncInvoker7<R, T1*, T2*, T3*, T4*, T5*, T6*, T7>
{
	static inline R Invoke (Il2CppMethodPointer methodPtr, const RuntimeMethod* method, void* obj, T1* p1, T2* p2, T3* p3, T4* p4, T5* p5, T6* p6, T7 p7)
	{
		R ret;
		void* params[7] = { p1, p2, p3, p4, p5, p6, &p7 };
		method->invoker_method(methodPtr, method, obj, params, &ret);
		return ret;
	}
};
template <typename R>
struct ConstrainedFuncInvoker0
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj)
	{
		R ret;
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, NULL, &ret);
		return ret;
	}
};
template <typename R, typename T1, typename T2>
struct ConstrainedFuncInvoker2;
template <typename R, typename T1, typename T2>
struct ConstrainedFuncInvoker2<R, T1*, T2*>
{
	static inline R Invoke (RuntimeClass* type, const RuntimeMethod* constrainedMethod, void* boxBuffer, void* obj, T1* p1, T2* p2)
	{
		R ret;
		void* params[2] = { p1, p2 };
		il2cpp_codegen_runtime_constrained_call(type, constrainedMethod, boxBuffer, obj, params, &ret);
		return ret;
	}
};

struct U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29;
struct U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9;
struct Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780;
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87;
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99;
struct ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF;
struct ConcurrentDictionary_2_t889EC4BD07B5DCB6087E2226ACC8A5E5590E48AB;
struct ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91;
struct ContinuationResultTaskFromTask_1_tA9D2C0C95B63D2D2939F5296F7BD35D23B849493;
struct Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3;
struct Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55;
struct Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28;
struct EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A;
struct Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985;
struct Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB;
struct Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2;
struct Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B;
struct Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C;
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD;
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4;
struct Func_1_t41D01DF7E7DCF728A5AC2E27578C9EF76548EF27;
struct Func_1_t35CA8359B05764A8BDAC8FE106B7288508C45185;
struct Func_1_t9EB8CE9DFD9B703BC79F2087B16EA394B7A9F9A1;
struct Func_1_t0CA4D46E5CA022D9CB87FD09DBA3CCC56AD63B73;
struct Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC;
struct Func_1_tBB4369E1B40CFC6872EA9A0B73B958E474BE3CF2;
struct Func_1_t704C051013549CDD77A31AEC405EA270221633B3;
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431;
struct Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1;
struct Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706;
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00;
struct Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9;
struct Func_2_tBB0D7C02FB04CB15F2B32B7ED20E9B69E87AF505;
struct Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22;
struct Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D;
struct Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799;
struct Func_5_tA07BEDDD813173420A179C25AEDEA235CEB634BB;
struct Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9;
struct IConstructorWithCount_1_tC3042548D942C583F578CE19FEE25F9677510768;
struct IConstructor_1_t943F43022B5DD77D92BF54CCD22377BDC30F631E;
struct IConstructor_1_tB4817FCBFD3A44F10C3F86B2C4E1B216E1FCEDB5;
struct IConstructor_1_t5F6E2B4293606962F689E382293BFEA5BAFA4D7B;
struct IConstructor_1_tF408ED285A722109CD256529A452F0C8B90C2101;
struct IConstructor_1_tD7B6D5CB4C166AECE81DFE2E93550110CB916F83;
struct IConstructor_1_t6FA853DE1714937284489E312FC02C6D71684DC5;
struct IConstructor_1_t7F6FD109056FB1FE5D7570824C6DF7CF8CF22DD1;
struct IConstructor_1_tCAAA8904A519EE31D72C324815D1EB2AE1787D35;
struct IConstructor_1_t4631143593FC24BBF94A4E795827088BD3DA703F;
struct IConstructor_1_tBE817905EB5CBB305A5EC9728AFE0557F4D8593A;
struct IConstructor_1_tB61A6DC28CC36BDA676C6269DEA6667BC2224C2B;
struct IConstructor_1_t0A1BDA41023F58D7C236102BED6FD1C1B1D69338;
struct IEnumerable_1_t71A46277DBD73BD4009B2B20885D2B7057593A1A;
struct IEnumerable_1_tF95C9E01A913DD50575531C8305932628663D9E9;
struct IEnumerable_1_t29E7244AE33B71FA0981E50D5BC73B7938F35C66;
struct IEnumerator_1_t239F6ACD0FC026E7FA70965FDE161517CD367AED;
struct IEnumerator_1_t43D2E4BA9246755F293DFA74F001FB1A70A648FD;
struct IEnumerator_1_t75CB2681E18F7F2791528FA2CA60361FDB5DA08D;
struct IEqualityComparer_1_t0C79004BFE79D9DBCE6C2250109D31D468A9A68E;
struct IPropertyBag_1_t36BB94A0E64BDC3C7B44E3C33CD0562C77748D3F;
struct ITypeConstructor_1_t81670FEA206550EF92A986F4A63FC5302AB1D638;
struct ITypeConstructor_1_t3B0FE01881012CC548F6EE132D9D04AA93EDE092;
struct ITypeConstructor_1_t2957C3F3F922000D05C6AE59163AF0088BB8D2E4;
struct ITypeConstructor_1_t73C3366FF37ECFD1CC6142A80D1A0E31E89DDB04;
struct ITypeConstructor_1_t0FE2B73907C0A0AEB0E84716E021DD7420B23A2B;
struct ITypeConstructor_1_t5E4FD8D127EC0F24B375DF611109A9783C9949D0;
struct ITypeConstructor_1_tCC196E183FB5A7CF798C682F9C3B70CDDA50CFFF;
struct ITypeConstructor_1_tADCE5163310B602EB1878CA0050295BFB0F6B542;
struct ITypeConstructor_1_t61D5D3D9EDD28391B0FE316A5641A34D7FF16FD0;
struct ITypeConstructor_1_t5B814DBA70C191660AF27E38032998417073D7A2;
struct ITypeConstructor_1_t63AA3F84ED218C4C0589371B74758F62E3EFCF85;
struct ITypeConstructor_1_t38B0D0EFBEAA57884DFAE0A863E841E681DE2224;
struct List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73;
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D;
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A;
struct ObjectPool_1_tA6230762362A6BA6FEB38B9912D0463FB059A05A;
struct Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12;
struct Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED;
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178;
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947;
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B;
struct SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A;
struct Tables_t6037A68AF76F1F1F11530A3316850BA0C19358EC;
struct TaskFactory_1_t6D562D6E02741F0C7D98C590754714C6D6429450;
struct TaskFactory_1_t3B055CB72CA2D1BEF08BD1C91FFB09DB3268521E;
struct TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0;
struct TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3;
struct TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B;
struct TaskFactory_1_t4BEAD6CE2527DBE682C128CEAA0FF2A79483E96C;
struct TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D;
struct Task_1_t8923214371A3F5BC070C6DE37A05405486B5D868;
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043;
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D;
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2;
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17;
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9;
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6;
struct Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8;
struct Tuple_3_t76B18FDDE87BFB452CF969BC16B10789E225FCF6;
struct Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF;
struct Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB;
struct TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695;
struct TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B;
struct TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084;
struct TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878;
struct TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF;
struct TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16;
struct TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353;
struct TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947;
struct TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC;
struct TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B;
struct TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA;
struct TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6;
struct UnwrapPromise_1_tEE3DD92946C85E16C4E468CE517515B0A532C43E;
struct KeyValuePair_2U5BU5D_t146564E6A49A4F28A57A5ED01FB1A805D98D62E6;
struct ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031;
struct CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB;
struct DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771;
struct DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE;
struct Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C;
struct IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832;
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24;
struct TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB;
struct UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA;
struct UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;
struct PowerOvflU5BU5D_t8BB6F43AF19F1F7C7558815B4684875BC320735B;
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263;
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129;
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F;
struct AsyncCallback_t7FEF460CBDCFB9C5FA2EF776984778B9A4145F4C;
struct BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0;
struct BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F;
struct Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235;
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3;
struct Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B;
struct CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B;
struct CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57;
struct ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0;
struct DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A;
struct Delegate_t;
struct DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E;
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2;
struct Exception_t;
struct IAsyncResult_t7B9B5A0ECB35DCEC31B8A8122C37D687369253B5;
struct IDictionary_t6D03155AF1FA9083817AA5B6AD7DEEACC26AB220;
struct IFormatProvider_tC202922D43BFF3525109ABF3FB79625F5646AB52;
struct IPropertyBag_t602D45F19F9BFA3E370929AC5023258AAF62E8C2;
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C;
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB;
struct Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7;
struct ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158;
struct MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553;
struct MethodInfo_t;
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A;
struct NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472;
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662;
struct PropertyInfo_t;
struct SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6;
struct SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E;
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C;
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99;
struct StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352;
struct String_t;
struct StringBuilder_t;
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572;
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0;
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E;
struct TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4;
struct Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1;
struct Type_t;
struct UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7;
struct UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4;
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915;
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3;
struct ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540;
struct TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB;
struct ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08;
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F;

IL2CPP_EXTERN_C RuntimeClass* ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Exception_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* RuntimeObject_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* String_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Type_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* bd_t18A7563F8C3F808C28EBC54FDA33440FCD3EF7B7_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral07624473F417C06C74D59C64840A1532FCE2C626;
IL2CPP_EXTERN_C String_t* _stringLiteral1502EDED1093B03DA1C847BC5F555B62BD858FDC;
IL2CPP_EXTERN_C String_t* _stringLiteral15E225CE8944EBE206A0078FF31CBE46CB76F145;
IL2CPP_EXTERN_C String_t* _stringLiteral19A31E86A38AA893D1D6991C5FA6FB47D954D756;
IL2CPP_EXTERN_C String_t* _stringLiteral1FFBA8CC2A329F0612696574F8F4DD7FBA8E3BE0;
IL2CPP_EXTERN_C String_t* _stringLiteral295C1C91484E27E03B860FDA8F1EE84730518E64;
IL2CPP_EXTERN_C String_t* _stringLiteral3477F5F15DC74EADC79ED337F3988716EE1670E9;
IL2CPP_EXTERN_C String_t* _stringLiteral594659CCEF5C8AEAE51D2422107933CCDADAF292;
IL2CPP_EXTERN_C String_t* _stringLiteral5B07E023AB167988DB1C8B236730B3DAD4F81BC4;
IL2CPP_EXTERN_C String_t* _stringLiteral63D67EDF1DFC329AF697D485FCB2431349E3E836;
IL2CPP_EXTERN_C String_t* _stringLiteral7AD319493499620E43634FF644A0CEF1624086AD;
IL2CPP_EXTERN_C String_t* _stringLiteral7C32FB7BD7AFDE19CE5858E4EC392FADC0892DBC;
IL2CPP_EXTERN_C String_t* _stringLiteral9D6051EE0B0E7A4A891B022B8543BFD0EC71F3EE;
IL2CPP_EXTERN_C String_t* _stringLiteralA75CF6F408A626E601212712FB539C300D88CDBE;
IL2CPP_EXTERN_C String_t* _stringLiteralAD09D7F3EF55024FAD7E2FA0D742C8EED6E7353C;
IL2CPP_EXTERN_C String_t* _stringLiteralB17952A14247828F6A41642FA1C04CD14AE7C12A;
IL2CPP_EXTERN_C String_t* _stringLiteralB382FDA4B30D0397739E8EC9B987AB66568010F7;
IL2CPP_EXTERN_C String_t* _stringLiteralB9E39E6666EEBD98BA9B0F0CC91867E890B97377;
IL2CPP_EXTERN_C String_t* _stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775;
IL2CPP_EXTERN_C String_t* _stringLiteralC895D35FFD929D7E5DAA151ECE907C423791FFE9;
IL2CPP_EXTERN_C String_t* _stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62;
IL2CPP_EXTERN_C String_t* _stringLiteralDF29F6D97E24431ECD5F1657989D9AD6B5FF2A0E;
IL2CPP_EXTERN_C String_t* _stringLiteralE1EDA87E9ED31C4E7C14E0517587FE44416755AE;
IL2CPP_EXTERN_C String_t* _stringLiteralE310274B02A605A3985345944A620D7D2E019A1A;
IL2CPP_EXTERN_C String_t* _stringLiteralE8257F1161E944C1A643F7FF3ABD8946B2F7558E;
IL2CPP_EXTERN_C String_t* _stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB;
IL2CPP_EXTERN_C String_t* _stringLiteralF1A902BAD5B9128E503E43473944346B65454351;
IL2CPP_EXTERN_C String_t* _stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D;
IL2CPP_EXTERN_C String_t* _stringLiteralF5F6CA609FD7E424D80133DE3BA7D5A6FE53EED3;
IL2CPP_EXTERN_C String_t* _stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267;
IL2CPP_EXTERN_C String_t* _stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6;
IL2CPP_EXTERN_C String_t* _stringLiteralFE06E08E1B43E6E2C5FE926335FB3B8053CC3751;
IL2CPP_EXTERN_C const RuntimeMethod* ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeType* BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var;
IL2CPP_EXTERN_C const RuntimeType* Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com;
struct CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com;
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke;
struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct Exception_t_marshaled_com;
struct Exception_t_marshaled_pinvoke;

struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918;
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248;
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
struct U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29  : public RuntimeObject
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___callBack;
};
struct U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9  : public RuntimeObject
{
	Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___callBack;
};
struct ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91  : public RuntimeObject
{
	Tables_t6037A68AF76F1F1F11530A3316850BA0C19358EC* ____tables;
	RuntimeObject* ____comparer;
	bool ____growLockArray;
	int32_t ____budget;
	KeyValuePair_2U5BU5D_t146564E6A49A4F28A57A5ED01FB1A805D98D62E6* ____serializationArray;
	int32_t ____serializationConcurrencyLevel;
	int32_t ____serializationCapacity;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D  : public RuntimeObject
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A  : public RuntimeObject
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ____items;
	int32_t ____size;
	int32_t ____version;
	RuntimeObject* ____syncRoot;
};
struct Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6  : public RuntimeObject
{
	RuntimeObject* ___m_Item1;
	RuntimeObject* ___m_Item2;
};
struct Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8 : public RuntimeObject {};
struct Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF  : public RuntimeObject
{
	RuntimeObject* ___m_Item1;
	RuntimeObject* ___m_Item2;
	RuntimeObject* ___m_Item3;
};
struct Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB : public RuntimeObject {};
struct TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695  : public RuntimeObject
{
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* ___m_ExplicitConstructor;
	Func_1_t3FCE602A80D3F788D4898853BA8282C009C88FE2* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B  : public RuntimeObject
{
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* ___m_ExplicitConstructor;
	Func_1_t32EEA16CED0DB34319C289C678DEADF9C939FD0B* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084  : public RuntimeObject
{
	Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* ___m_ExplicitConstructor;
	Func_1_t6810F34C7AB650D465D2B9B6A1F0B277DAA46A3C* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878  : public RuntimeObject
{
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___m_ExplicitConstructor;
	Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF  : public RuntimeObject
{
	Func_1_t41D01DF7E7DCF728A5AC2E27578C9EF76548EF27* ___m_ExplicitConstructor;
	Func_1_t41D01DF7E7DCF728A5AC2E27578C9EF76548EF27* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16  : public RuntimeObject
{
	Func_1_t35CA8359B05764A8BDAC8FE106B7288508C45185* ___m_ExplicitConstructor;
	Func_1_t35CA8359B05764A8BDAC8FE106B7288508C45185* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353  : public RuntimeObject
{
	Func_1_t9EB8CE9DFD9B703BC79F2087B16EA394B7A9F9A1* ___m_ExplicitConstructor;
	Func_1_t9EB8CE9DFD9B703BC79F2087B16EA394B7A9F9A1* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947  : public RuntimeObject
{
	Func_1_t0CA4D46E5CA022D9CB87FD09DBA3CCC56AD63B73* ___m_ExplicitConstructor;
	Func_1_t0CA4D46E5CA022D9CB87FD09DBA3CCC56AD63B73* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC  : public RuntimeObject
{
	Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* ___m_ExplicitConstructor;
	Func_1_t58C51DB29153B53A9136AE397958F3FCC1F596EC* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B  : public RuntimeObject
{
	Func_1_tBB4369E1B40CFC6872EA9A0B73B958E474BE3CF2* ___m_ExplicitConstructor;
	Func_1_tBB4369E1B40CFC6872EA9A0B73B958E474BE3CF2* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA  : public RuntimeObject
{
	Func_1_t704C051013549CDD77A31AEC405EA270221633B3* ___m_ExplicitConstructor;
	Func_1_t704C051013549CDD77A31AEC405EA270221633B3* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6  : public RuntimeObject
{
	Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___m_ExplicitConstructor;
	Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___m_ImplicitConstructor;
	RuntimeObject* ___m_OverrideConstructor;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0  : public RuntimeObject
{
	bool ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	bool ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	String_t* ___m_name;
	String_t* ___englishname;
	String_t* ___nativename;
	String_t* ___iso3lang;
	String_t* ___iso2lang;
	String_t* ___win3lang;
	String_t* ___territory;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___parent_culture;
	bool ___constructed;
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D* ___m_cultureData;
	bool ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	char* ___m_name;
	char* ___englishname;
	char* ___nativename;
	char* ___iso3lang;
	char* ___iso2lang;
	char* ___win3lang;
	char* ___territory;
	char** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_pinvoke* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_pinvoke* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com
{
	int32_t ___m_isReadOnly;
	int32_t ___cultureID;
	int32_t ___parent_lcid;
	int32_t ___datetime_index;
	int32_t ___number_index;
	int32_t ___default_calendar_type;
	int32_t ___m_useUserOverride;
	NumberFormatInfo_t8E26808B202927FEBF9064FCFEEA4D6E076E6472* ___numInfo;
	DateTimeFormatInfo_t0457520F9FA7B5C8EAAEB3AD50413B6AEEB7458A* ___dateTimeInfo;
	TextInfo_tD3BAFCFD77418851E7D5CB8D2588F47019E414B4* ___textInfo;
	Il2CppChar* ___m_name;
	Il2CppChar* ___englishname;
	Il2CppChar* ___nativename;
	Il2CppChar* ___iso3lang;
	Il2CppChar* ___iso2lang;
	Il2CppChar* ___win3lang;
	Il2CppChar* ___territory;
	Il2CppChar** ___native_calendar_names;
	CompareInfo_t1B1A6AC3486B570C76ABA52149C9BD4CD82F9E57* ___compareInfo;
	void* ___textinfo_data;
	int32_t ___m_dataItem;
	Calendar_t0A117CC7532A54C17188C2EFEA1F79DB20DF3A3B* ___calendar;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_marshaled_com* ___parent_culture;
	int32_t ___constructed;
	Il2CppSafeArray* ___cached_serialized_form;
	CultureData_tEEFDCF4ECA1BBF6C0C8C94EB3541657245598F9D_marshaled_com* ___m_cultureData;
	int32_t ___m_isInherited;
};
struct MemberInfo_t  : public RuntimeObject
{
};
struct SpriteDataAccessExtensions_t3E42874762D049E221636AD9A719EBAE7F9C9980  : public RuntimeObject
{
};
struct String_t  : public RuntimeObject
{
	int32_t ____stringLength;
	Il2CppChar ____firstChar;
};
struct StringBuilder_t  : public RuntimeObject
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___m_ChunkChars;
	StringBuilder_t* ___m_ChunkPrevious;
	int32_t ___m_ChunkLength;
	int32_t ___m_ChunkOffset;
	int32_t ___m_MaxCapacity;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572  : public RuntimeObject
{
	int32_t ___m_taskId;
	Delegate_t* ___m_action;
	RuntimeObject* ___m_stateObject;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_taskScheduler;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_parent;
	int32_t ___m_stateFlags;
	RuntimeObject* ___m_continuationObject;
	ContingentProperties_t3FA59480914505CEA917B1002EC675F29D0CB540* ___m_contingentProperties;
};
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E  : public RuntimeObject
{
	int32_t ___m_taskSchedulerId;
};
struct TaskToApm_t85E4852EFE616610E8B037ECB1926B91DEA7D458  : public RuntimeObject
{
};
struct ThreadPool_t1EE413B12D8BD9F25602041645272351A26711FC  : public RuntimeObject
{
};
struct ThrowHelper_tDAFF1075E5B21B120EF09F3F2EAD51037DAB6F73  : public RuntimeObject
{
};
struct Tuple_tB9DB3180F4853E781BFDDC3093798F56B27AB03F  : public RuntimeObject
{
};
struct TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03  : public RuntimeObject
{
};
struct Unsafe_t013486CBD5A88F5F394651AB34F2AC5AE97E71E4  : public RuntimeObject
{
};
struct Unsafe_t7A5BFA4CCC4DE54D6A25FB6312C3DB95A35D2B9E  : public RuntimeObject
{
};
struct UnsafeUtility_tC3E6B7D52A973A81739E8BD97D6E757BA8371D46  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F  : public RuntimeObject
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_pinvoke
{
};
struct ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F_marshaled_com
{
};
struct Vector_t246EF05F1CA5F494FB8B48AB2724DFCD2C2C5A9A  : public RuntimeObject
{
};
struct Volatile_tC26FEDFD254742AD25E4B908FA81293FBBF4ECB0  : public RuntimeObject
{
};
struct bd_t18A7563F8C3F808C28EBC54FDA33440FCD3EF7B7  : public RuntimeObject
{
};
struct sh_tA2444320AC478E10834AC1F0839E1764A5FD4537  : public RuntimeObject
{
};
struct sv_t5A54B1F3DCA22DF9C299C7F5DFD1A0AE467CC44C  : public RuntimeObject
{
};
struct TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB  : public RuntimeObject
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___Task;
	RuntimeObject* ____state;
	bool ____completedSynchronously;
};
struct TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F  : public RuntimeObject
{
	RuntimeObject* ___TypeConstructor;
};
struct AlignOfHelper_1_t77D164DCA1370DB06991787EC849693AD5DE98F8 
{
	uint8_t ___dummy;
	bool ___data;
};
struct AlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2 
{
	uint8_t ___dummy;
	uint8_t ___data;
};
struct AlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3 
{
	uint8_t ___dummy;
	int32_t ___data;
};
struct Cache_1_t3D5B27BB72DB559823D975C81EB8746985435377 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t6A09774E9EC924515184CB0FBF6689D74CD57526 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t1EC3F18F5B6510EED65B625CE37A6C73B0F46377 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_tB8D73F5DFD6D8711956A5D57AEEA41C64DD59FE6 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t60D29BA616C245A5283CB0B5BD4B19DCB7EDCF1C 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t4ED442C7D3A39C62CE6AD3207C2A7F04760D2F3C 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_tC0A5B4DEAAD4F636D5EB7222F76AFA30C44BD765 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t1734B78F91A5E97A0376AADF017CDD9C28F0D1E8 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t165F6C79CDB8F92D5632BF06B4D2859B4F8CB803 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t9D717A73959DD798ED20109ED37309FA61F9047D 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_t2AE8DCA73B885EC1BE3528F43866A2B28BA27459 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36 
{
	union
	{
		struct
		{
		};
		uint8_t Cache_1_tB7C8F25DA26549A8A98B68AFB46FBDD5723178DA__padding[1];
	};
};
struct Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
#define Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com_define
struct Memory_1_t56F63672B8E752B13E0BBBBD034BA3C1F6CFDC17_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 
{
	uint8_t* ___m_Buffer;
	int32_t ___m_Stride;
	int32_t ___m_Length;
};
struct ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399 
{
	RuntimeObject* ____object;
	int32_t ____index;
	int32_t ____length;
};
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_pinvoke
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
#ifndef ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
#define ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com_define
struct ReadOnlyMemory_1_t766DD3EE24B08138FB23CBC5B315D83C6E1272F5_marshaled_com
{
	Il2CppIUnknown* ____object;
	int32_t ____index;
	int32_t ____length;
};
#endif
struct TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E 
{
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* ___m_task;
};
struct TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA 
{
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_task;
};
struct TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_task;
};
struct Task_1_t8923214371A3F5BC070C6DE37A05405486B5D868  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* ___m_result;
};
struct Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* ___m_result;
};
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	bool ___m_result;
};
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	int32_t ___m_result;
};
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	RuntimeObject* ___m_result;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};
struct ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 
{
	bool ___Item1;
};
struct ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 
{
	RuntimeObject* ___Item1;
	int32_t ___Item2;
	int32_t ___Item3;
};
struct Account_tEEC69E981115B22CFB24D4EE23BCC01309F318F4 
{
	String_t* ___jci;
	String_t* ___jcj;
};
struct Account_tEEC69E981115B22CFB24D4EE23BCC01309F318F4_marshaled_pinvoke
{
	char* ___jci;
	char* ___jcj;
};
struct Account_tEEC69E981115B22CFB24D4EE23BCC01309F318F4_marshaled_com
{
	Il2CppChar* ___jci;
	Il2CppChar* ___jcj;
};
struct BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D 
{
	BatchDrawCommand_t9DAB9B739DA9EBC6B1BB0D2DD51AF65B12F66BF0* ___drawCommands;
	int32_t* ___visibleInstances;
	BatchDrawRange_t736D745E918A629658B80A0F7D2D17DAFBA6172F* ___drawRanges;
	float* ___instanceSortingPositions;
	int32_t* ___drawCommandPickingInstanceIDs;
	int32_t ___drawCommandCount;
	int32_t ___visibleInstanceCount;
	int32_t ___drawRangeCount;
	int32_t ___instanceSortingPositionFloatCount;
};
struct BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F 
{
	float ___m_Weight0;
	float ___m_Weight1;
	float ___m_Weight2;
	float ___m_Weight3;
	int32_t ___m_BoneIndex0;
	int32_t ___m_BoneIndex1;
	int32_t ___m_BoneIndex2;
	int32_t ___m_BoneIndex3;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22 
{
	bool ___m_value;
};
struct Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3 
{
	uint8_t ___m_value;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED 
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_pinvoke
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_marshaled_com
{
	CancellationTokenSource_tAAE1E0033BCFC233801F8CB4CED5C852B350CB7B* ____source;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17 
{
	Il2CppChar ___m_value;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___flags;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___flags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___hi_OffsetPadding[4];
			int32_t ___hi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___hi_OffsetPadding_forAlignmentOnly[4];
			int32_t ___hi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___lo_OffsetPadding[8];
			int32_t ___lo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___lo_OffsetPadding_forAlignmentOnly[8];
			int32_t ___lo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___mid_OffsetPadding[12];
			int32_t ___mid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___mid_OffsetPadding_forAlignmentOnly[12];
			int32_t ___mid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
};
struct Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F 
{
	double ___m_value;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2  : public ValueType_t6D9B272BD21782F0A9A14F2E41F85A50E97A986F
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_pinvoke
{
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_marshaled_com
{
};
struct GroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8 
{
	String_t* ___NameGroup;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___IdMaps;
};
struct GroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8_marshaled_pinvoke
{
	char* ___NameGroup;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___IdMaps;
};
struct GroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8_marshaled_com
{
	Il2CppChar* ___NameGroup;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___IdMaps;
};
struct GroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388 
{
	String_t* ___NameGroup;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___IdMaps;
};
struct GroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388_marshaled_pinvoke
{
	char* ___NameGroup;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___IdMaps;
};
struct GroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388_marshaled_com
{
	Il2CppChar* ___NameGroup;
	List_1_t05915E9237850A58106982B7FE4BC5DA4E872E73* ___IdMaps;
};
struct Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175 
{
	int16_t ___m_value;
};
struct Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C 
{
	int32_t ___m_value;
};
struct Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3 
{
	int64_t ___m_value;
};
struct IntPtr_t 
{
	void* ___m_value;
};
struct ItemAuto_tAD6C1784205B0369AA061ED726253FAE4736C74A 
{
	int32_t ___iconID;
	int32_t ___id;
};
struct JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 
{
	uint64_t ___jobGroup;
	int32_t ___version;
};
struct LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 
{
	float ___m_red;
	float ___m_green;
	float ___m_blue;
	float ___m_intensity;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 
{
	float ___m00;
	float ___m10;
	float ___m20;
	float ___m30;
	float ___m01;
	float ___m11;
	float ___m21;
	float ___m31;
	float ___m02;
	float ___m12;
	float ___m22;
	float ___m32;
	float ___m03;
	float ___m13;
	float ___m23;
	float ___m33;
};
struct MethodBase_t  : public MemberInfo_t
{
};
struct PropertyInfo_t  : public MemberInfo_t
{
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t ___byte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t ___byte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_1_OffsetPadding[1];
			uint8_t ___byte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_1_OffsetPadding_forAlignmentOnly[1];
			uint8_t ___byte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_2_OffsetPadding[2];
			uint8_t ___byte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_2_OffsetPadding_forAlignmentOnly[2];
			uint8_t ___byte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_3_OffsetPadding[3];
			uint8_t ___byte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_3_OffsetPadding_forAlignmentOnly[3];
			uint8_t ___byte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_4_OffsetPadding[4];
			uint8_t ___byte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_4_OffsetPadding_forAlignmentOnly[4];
			uint8_t ___byte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_5_OffsetPadding[5];
			uint8_t ___byte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_5_OffsetPadding_forAlignmentOnly[5];
			uint8_t ___byte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_6_OffsetPadding[6];
			uint8_t ___byte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_6_OffsetPadding_forAlignmentOnly[6];
			uint8_t ___byte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_7_OffsetPadding[7];
			uint8_t ___byte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_7_OffsetPadding_forAlignmentOnly[7];
			uint8_t ___byte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_8_OffsetPadding[8];
			uint8_t ___byte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_8_OffsetPadding_forAlignmentOnly[8];
			uint8_t ___byte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_9_OffsetPadding[9];
			uint8_t ___byte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_9_OffsetPadding_forAlignmentOnly[9];
			uint8_t ___byte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_10_OffsetPadding[10];
			uint8_t ___byte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_10_OffsetPadding_forAlignmentOnly[10];
			uint8_t ___byte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_11_OffsetPadding[11];
			uint8_t ___byte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_11_OffsetPadding_forAlignmentOnly[11];
			uint8_t ___byte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_12_OffsetPadding[12];
			uint8_t ___byte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_12_OffsetPadding_forAlignmentOnly[12];
			uint8_t ___byte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_13_OffsetPadding[13];
			uint8_t ___byte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_13_OffsetPadding_forAlignmentOnly[13];
			uint8_t ___byte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_14_OffsetPadding[14];
			uint8_t ___byte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_14_OffsetPadding_forAlignmentOnly[14];
			uint8_t ___byte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___byte_15_OffsetPadding[15];
			uint8_t ___byte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___byte_15_OffsetPadding_forAlignmentOnly[15];
			uint8_t ___byte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int8_t ___sbyte_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int8_t ___sbyte_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_1_OffsetPadding[1];
			int8_t ___sbyte_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_1_OffsetPadding_forAlignmentOnly[1];
			int8_t ___sbyte_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_2_OffsetPadding[2];
			int8_t ___sbyte_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_2_OffsetPadding_forAlignmentOnly[2];
			int8_t ___sbyte_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_3_OffsetPadding[3];
			int8_t ___sbyte_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_3_OffsetPadding_forAlignmentOnly[3];
			int8_t ___sbyte_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_4_OffsetPadding[4];
			int8_t ___sbyte_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_4_OffsetPadding_forAlignmentOnly[4];
			int8_t ___sbyte_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_5_OffsetPadding[5];
			int8_t ___sbyte_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_5_OffsetPadding_forAlignmentOnly[5];
			int8_t ___sbyte_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_6_OffsetPadding[6];
			int8_t ___sbyte_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_6_OffsetPadding_forAlignmentOnly[6];
			int8_t ___sbyte_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_7_OffsetPadding[7];
			int8_t ___sbyte_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_7_OffsetPadding_forAlignmentOnly[7];
			int8_t ___sbyte_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_8_OffsetPadding[8];
			int8_t ___sbyte_8;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_8_OffsetPadding_forAlignmentOnly[8];
			int8_t ___sbyte_8_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_9_OffsetPadding[9];
			int8_t ___sbyte_9;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_9_OffsetPadding_forAlignmentOnly[9];
			int8_t ___sbyte_9_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_10_OffsetPadding[10];
			int8_t ___sbyte_10;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_10_OffsetPadding_forAlignmentOnly[10];
			int8_t ___sbyte_10_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_11_OffsetPadding[11];
			int8_t ___sbyte_11;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_11_OffsetPadding_forAlignmentOnly[11];
			int8_t ___sbyte_11_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_12_OffsetPadding[12];
			int8_t ___sbyte_12;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_12_OffsetPadding_forAlignmentOnly[12];
			int8_t ___sbyte_12_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_13_OffsetPadding[13];
			int8_t ___sbyte_13;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_13_OffsetPadding_forAlignmentOnly[13];
			int8_t ___sbyte_13_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_14_OffsetPadding[14];
			int8_t ___sbyte_14;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_14_OffsetPadding_forAlignmentOnly[14];
			int8_t ___sbyte_14_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___sbyte_15_OffsetPadding[15];
			int8_t ___sbyte_15;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___sbyte_15_OffsetPadding_forAlignmentOnly[15];
			int8_t ___sbyte_15_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint16_t ___uint16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint16_t ___uint16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_1_OffsetPadding[2];
			uint16_t ___uint16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_1_OffsetPadding_forAlignmentOnly[2];
			uint16_t ___uint16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_2_OffsetPadding[4];
			uint16_t ___uint16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_2_OffsetPadding_forAlignmentOnly[4];
			uint16_t ___uint16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_3_OffsetPadding[6];
			uint16_t ___uint16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_3_OffsetPadding_forAlignmentOnly[6];
			uint16_t ___uint16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_4_OffsetPadding[8];
			uint16_t ___uint16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_4_OffsetPadding_forAlignmentOnly[8];
			uint16_t ___uint16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_5_OffsetPadding[10];
			uint16_t ___uint16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_5_OffsetPadding_forAlignmentOnly[10];
			uint16_t ___uint16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_6_OffsetPadding[12];
			uint16_t ___uint16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_6_OffsetPadding_forAlignmentOnly[12];
			uint16_t ___uint16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint16_7_OffsetPadding[14];
			uint16_t ___uint16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint16_7_OffsetPadding_forAlignmentOnly[14];
			uint16_t ___uint16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int16_t ___int16_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int16_t ___int16_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_1_OffsetPadding[2];
			int16_t ___int16_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_1_OffsetPadding_forAlignmentOnly[2];
			int16_t ___int16_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_2_OffsetPadding[4];
			int16_t ___int16_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_2_OffsetPadding_forAlignmentOnly[4];
			int16_t ___int16_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_3_OffsetPadding[6];
			int16_t ___int16_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_3_OffsetPadding_forAlignmentOnly[6];
			int16_t ___int16_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_4_OffsetPadding[8];
			int16_t ___int16_4;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_4_OffsetPadding_forAlignmentOnly[8];
			int16_t ___int16_4_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_5_OffsetPadding[10];
			int16_t ___int16_5;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_5_OffsetPadding_forAlignmentOnly[10];
			int16_t ___int16_5_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_6_OffsetPadding[12];
			int16_t ___int16_6;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_6_OffsetPadding_forAlignmentOnly[12];
			int16_t ___int16_6_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int16_7_OffsetPadding[14];
			int16_t ___int16_7;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int16_7_OffsetPadding_forAlignmentOnly[14];
			int16_t ___int16_7_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uint32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uint32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_1_OffsetPadding[4];
			uint32_t ___uint32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_1_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uint32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_2_OffsetPadding[8];
			uint32_t ___uint32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_2_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___uint32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint32_3_OffsetPadding[12];
			uint32_t ___uint32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint32_3_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___uint32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int32_t ___int32_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int32_t ___int32_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_1_OffsetPadding[4];
			int32_t ___int32_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_1_OffsetPadding_forAlignmentOnly[4];
			int32_t ___int32_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_2_OffsetPadding[8];
			int32_t ___int32_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_2_OffsetPadding_forAlignmentOnly[8];
			int32_t ___int32_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int32_3_OffsetPadding[12];
			int32_t ___int32_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int32_3_OffsetPadding_forAlignmentOnly[12];
			int32_t ___int32_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			uint64_t ___uint64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint64_t ___uint64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uint64_1_OffsetPadding[8];
			uint64_t ___uint64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uint64_1_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___uint64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			int64_t ___int64_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			int64_t ___int64_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___int64_1_OffsetPadding[8];
			int64_t ___int64_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___int64_1_OffsetPadding_forAlignmentOnly[8];
			int64_t ___int64_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			float ___single_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			float ___single_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_1_OffsetPadding[4];
			float ___single_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_1_OffsetPadding_forAlignmentOnly[4];
			float ___single_1_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_2_OffsetPadding[8];
			float ___single_2;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_2_OffsetPadding_forAlignmentOnly[8];
			float ___single_2_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___single_3_OffsetPadding[12];
			float ___single_3;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___single_3_OffsetPadding_forAlignmentOnly[12];
			float ___single_3_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			double ___double_0;
		};
		#pragma pack(pop, tp)
		struct
		{
			double ___double_0_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___double_1_OffsetPadding[8];
			double ___double_1;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___double_1_OffsetPadding_forAlignmentOnly[8];
			double ___double_1_forAlignmentOnly;
		};
	};
};
struct RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A 
{
	int32_t ___U3CsizeU3Ek__BackingField;
	int32_t ___U3CoffsetObjectToWorldU3Ek__BackingField;
	int32_t ___U3CoffsetPrevObjectToWorldU3Ek__BackingField;
	int32_t ___U3CoffsetRenderingLayerMaskU3Ek__BackingField;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 
{
	RuntimeObject* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_pinvoke
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_marshaled_com
{
	Il2CppIUnknown* ____value;
	int32_t ____dataPos;
};
struct SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5 
{
	int8_t ___m_value;
};
struct Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C 
{
	float ___m_value;
};
struct UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455 
{
	uint16_t ___m_value;
};
struct UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B 
{
	uint32_t ___m_value;
};
struct UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF 
{
	uint64_t ___m_value;
};
struct UIntPtr_t 
{
	void* ____pointer;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 
{
	float ___x;
	float ___y;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 
{
	float ___x;
	float ___y;
	float ___z;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct Void_t4861ACF8F4594C3437BB48B6E56783494B843915 
{
	union
	{
		struct
		{
		};
		uint8_t Void_t4861ACF8F4594C3437BB48B6E56783494B843915__padding[1];
	};
};
struct VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC 
{
	union
	{
		struct
		{
		};
		uint8_t VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC__padding[1];
	};
};
struct float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E 
{
	float ___x;
	float ___y;
	float ___z;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E 
{
	float ___x;
	float ___y;
	float ___z;
	float ___w;
};
struct int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A 
{
	int32_t ___x;
	int32_t ___y;
};
struct AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 
{
	uint16_t ___Index;
	uint16_t ___Version;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 
{
	int32_t ___order;
	UnityAction_t11A1F3B953B365C072A5DCC32677EE1796A962A7* ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_pinvoke
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_marshaled_com
{
	int32_t ___order;
	Il2CppMethodPointer ___callback;
};
struct DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint32_t ___uflags;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint32_t ___uflags_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___uhi_OffsetPadding[4];
			uint32_t ___uhi;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___uhi_OffsetPadding_forAlignmentOnly[4];
			uint32_t ___uhi_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulo_OffsetPadding[8];
			uint32_t ___ulo;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulo_OffsetPadding_forAlignmentOnly[8];
			uint32_t ___ulo_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___umid_OffsetPadding[12];
			uint32_t ___umid;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___umid_OffsetPadding_forAlignmentOnly[12];
			uint32_t ___umid_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___ulomidLE_OffsetPadding[8];
			uint64_t ___ulomidLE;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___ulomidLE_OffsetPadding_forAlignmentOnly[8];
			uint64_t ___ulomidLE_forAlignmentOnly;
		};
	};
};
struct Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310 
{
	union
	{
		struct
		{
		};
		uint8_t Unmanaged_t06043455F062B5BBF755BE852B0A7AB1876E3310__padding[1];
	};
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC 
{
	Il2CppChar ___First;
	Il2CppChar ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_pinvoke
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_marshaled_com
{
	uint8_t ___First;
	uint8_t ___Last;
};
struct MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84 
{
	uint8_t* ___m_pointer;
	int64_t ___m_bytes;
	int64_t ___m_current;
	int64_t ___m_allocations;
};
struct CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 
{
	String_t* ___category;
	String_t* ___entry;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite;
};
struct CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_marshaled_pinvoke
{
	char* ___category;
	char* ___entry;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite;
};
struct CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_marshaled_com
{
	Il2CppChar* ___category;
	Il2CppChar* ___entry;
	Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___sprite;
};
struct TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 
{
	String_t* ___fullName;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform;
};
struct TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_marshaled_pinvoke
{
	char* ___fullName;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform;
};
struct TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_marshaled_com
{
	Il2CppChar* ___fullName;
	Transform_tB27202C6F4E36D225EE28A13E4D662BF99785DB1* ___transform;
};
struct TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 
{
	int32_t ___transformIndex;
	int32_t ___refCount;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 
{
	SendOrPostCallback_t5C292A12062F24027A98492F52ECFE9802AA6F0E* ___m_DelagateCallback;
	RuntimeObject* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_pinvoke
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_marshaled_com
{
	Il2CppMethodPointer ___m_DelagateCallback;
	Il2CppIUnknown* ___m_DelagateState;
	ManualResetEvent_t63959486AA41A113A4353D0BF4A68E77EBA0A158* ___m_WaitHandle;
};
struct U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11 
{
	union
	{
		struct
		{
			int32_t ___FixedElementField;
		};
		uint8_t U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11__padding[8192];
	};
};
struct VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041 
{
	bool ___Value;
};
struct VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshaled_pinvoke
{
	int32_t ___Value;
};
struct VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_marshaled_com
{
	int32_t ___Value;
};
struct VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693 
{
	int32_t ___Value;
};
struct VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_marshaled_pinvoke
{
	int32_t ___Value;
};
struct VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_marshaled_com
{
	int32_t ___Value;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99 
{
	RuntimeObject* ___Value;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_pinvoke
{
	RuntimeObject* ___Value;
};
struct VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_marshaled_com
{
	RuntimeObject* ___Value;
};
struct Array_t3B8F006A80A48C83471DE3516556F1AFE6873381 
{
	union
	{
		struct
		{
		};
		uint8_t Array_t3B8F006A80A48C83471DE3516556F1AFE6873381__padding[1];
	};
};
struct DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA 
{
	union
	{
		struct
		{
		};
		uint8_t DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA__padding[102];
	};
};
struct AlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285 
{
	uint8_t ___dummy;
	BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___data;
};
struct AlignOfHelper_1_tEAFB355EAD711C8A0A6C9253A911701A3A1811A3 
{
	uint8_t ___dummy;
	BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F ___data;
};
struct AlignOfHelper_1_tA1D9D36CBE8FF25BF6FFF35C56E697C87CBC2432 
{
	uint8_t ___dummy;
	intptr_t ___data;
};
struct AlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC 
{
	uint8_t ___dummy;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___data;
};
struct AlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56 
{
	uint8_t ___dummy;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___data;
};
struct AlignOfHelper_1_t011E0A6A1CE5BB662014F6F7D560D62F3044E227 
{
	uint8_t ___dummy;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___data;
};
struct AlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269 
{
	uint8_t ___dummy;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___data;
};
struct AlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2 
{
	uint8_t ___dummy;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___data;
};
struct AlignOfHelper_1_t4FC0676786D4504DFB463E079B49B98660853217 
{
	uint8_t ___dummy;
	float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___data;
};
struct AlignOfHelper_1_tFA851D5782D452C4B2E6265604AD87D652390B55 
{
	uint8_t ___dummy;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___data;
};
struct AlignOfHelper_1_t8BCA7BF89790AD2881377ABB090D9BFDE5669990 
{
	uint8_t ___dummy;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___data;
};
struct AlignOfHelper_1_t68C3D8AC24508C31F35B828E6206CA7933E9B711 
{
	uint8_t ___dummy;
	MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84 ___data;
};
struct ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 
{
	intptr_t ____value;
};
struct ContinuationResultTaskFromTask_1_tA9D2C0C95B63D2D2939F5296F7BD35D23B849493  : public Task_1_t824317F4B958F7512E8F7300511752937A6C6043
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___m_antecedent;
};
struct ContinuationResultTaskFromTask_1_t1976F69FEC571EFB163944A4437C69446E2BECB3 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};
struct NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_t0D6722C6A546C76474543C10D2E576E494D019A8 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 
{
	intptr_t ___data;
	int32_t ___length;
	int32_t ___stride;
};
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17  : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572
{
	VoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC ___m_result;
};
struct TransformJobData_t7017FC063B433EE93203EDB06EA021B1A1032CE9 
{
	intptr_t ___TransformAccessArray;
	int32_t ___IsReadOnly;
};
struct TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC 
{
	intptr_t ___TransformAccessArray;
	int32_t ___IsReadOnly;
};
struct Tuple_3_t76B18FDDE87BFB452CF969BC16B10789E225FCF6  : public RuntimeObject
{
	RuntimeObject* ___m_Item1;
	Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___m_Item2;
	RuntimeObject* ___m_Item3;
};
struct UnsafeHashMap_2_tF148BDABD8837248BF870827F7C8D84039007E0E 
{
	UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___m_Buffer;
	AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___m_AllocatorLabel;
};
struct UnwrapPromise_1_tEE3DD92946C85E16C4E468CE517515B0A532C43E  : public Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2
{
	uint8_t ____state;
	bool ____lookForOce;
};
struct UnwrapPromise_1_t056E9AD8CFB7AFD55E9D63549F5F68C2827ABDB1 : public Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572 {};
struct ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	bool ___Item5;
};
struct ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 
{
	intptr_t ___Item1;
	int32_t ___Item2;
	intptr_t ___Item3;
	int32_t ___Item4;
	intptr_t ___Item5;
	int32_t ___Item6;
	bool ___Item7;
	ValueTuple_1_tBFF71B8F72F9D197DB09CFE88F0C8C7FE97CEF75 ___Rest;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 
{
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A ___register;
};
struct Allocator_t996642592271AAD9EE688F142741D512C07B5824 
{
	int32_t ___value__;
};
struct BindingFlags_t5DC2835E4AE9C1862B3AD172EF35B6A5F4F1812C 
{
	int32_t ___value__;
};
struct Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Center;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Extents;
};
struct CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___sphereCenter;
	float ___sphereRadius;
	int32_t ___cullingPlaneOffset;
	int32_t ___cullingPlaneCount;
	float ___cascadeBlendCullingFactor;
	float ___nearPlane;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___cullingMatrix;
};
struct Delegate_t  : public RuntimeObject
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	RuntimeObject* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	bool ___method_is_virtual;
};
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr;
	intptr_t ___invoke_impl;
	Il2CppIUnknown* ___m_target;
	intptr_t ___method;
	intptr_t ___delegate_trampoline;
	intptr_t ___extra_arg;
	intptr_t ___method_code;
	intptr_t ___interp_method;
	intptr_t ___interp_invoke_impl;
	MethodInfo_t* ___method_info;
	MethodInfo_t* ___original_method_info;
	DelegateData_t9B286B493293CD2D23A5B2B5EF0E5B1324C2B77E* ___data;
	int32_t ___method_is_virtual;
};
struct Exception_t  : public RuntimeObject
{
	String_t* ____className;
	String_t* ____message;
	RuntimeObject* ____data;
	Exception_t* ____innerException;
	String_t* ____helpURL;
	RuntimeObject* ____stackTrace;
	String_t* ____stackTraceString;
	String_t* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	RuntimeObject* ____dynamicMethods;
	int32_t ____HResult;
	String_t* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	IntPtrU5BU5D_tFD177F8C806A6921AD7150264CCC62FA00CAD832* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_pinvoke
{
	char* ____className;
	char* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_pinvoke* ____innerException;
	char* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	char* ____stackTraceString;
	char* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	char* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct Exception_t_marshaled_com
{
	Il2CppChar* ____className;
	Il2CppChar* ____message;
	RuntimeObject* ____data;
	Exception_t_marshaled_com* ____innerException;
	Il2CppChar* ____helpURL;
	Il2CppIUnknown* ____stackTrace;
	Il2CppChar* ____stackTraceString;
	Il2CppChar* ____remoteStackTraceString;
	int32_t ____remoteStackIndex;
	Il2CppIUnknown* ____dynamicMethods;
	int32_t ____HResult;
	Il2CppChar* ____source;
	SafeSerializationManager_tCBB85B95DFD1634237140CD892E82D06ECB3F5E6* ____safeSerializationManager;
	StackTraceU5BU5D_t32FBCB20930EAF5BAE3F450FF75228E5450DA0DF* ___captured_traces;
	Il2CppSafeArray* ___native_trace_ips;
	int32_t ___caught_in_unmanaged;
};
struct ExceptionArgument_t60E7F8D9DE5362CBE9365893983C30302D83B778 
{
	int32_t ___value__;
};
struct FalloffType_tE9BECCB411DA63109760103AF7476F422A01376D 
{
	uint8_t ___value__;
};
struct Int32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C 
{
	int32_t ___value__;
};
struct InternalTaskOptions_tCE714823C2244D02E68D3F0EB682AD5C95EBBEAB 
{
	int32_t ___value__;
};
struct LightMode_t058E4E7AAE5689BCFF46BB8E0259D90D227E7FF9 
{
	uint8_t ___value__;
};
struct LightType_t97C5050F2F742FBF050FEB8FC5131A9A8DB50D26 
{
	uint8_t ___value__;
};
struct MethodInfo_t  : public MethodBase_t
{
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C  : public RuntimeObject
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr;
};
struct Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C_marshaled_com
{
	intptr_t ___m_CachedPtr;
};
struct PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 
{
	int32_t ___deformVerticesStartPos;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___bindPosesIndex;
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___verticesIndex;
};
struct Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___m_Normal;
	float ___m_Distance;
};
struct PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___tangent;
};
struct PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
};
struct RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B 
{
	intptr_t ___value;
};
struct SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA 
{
	intptr_t ___m_Buffer;
	int32_t ___m_Count;
	int32_t ___m_Offset;
	int32_t ___m_Stride;
};
struct StackCrawlMark_t95CDBA5EE7D71D392741A5533D7EB93341DFC730 
{
	int32_t ___value__;
};
struct TaskContinuationOptions_tF334758E3027B6DCFA9A814B17CE878029537814 
{
	int32_t ___value__;
};
struct TaskCreationOptions_tB15CB42D61B8958640A7C702A79097B56D5C7ABA 
{
	int32_t ___value__;
};
struct TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4 
{
	intptr_t ___m_TransformArray;
};
struct UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4 
{
	union
	{
		#pragma pack(push, tp, 1)
		struct
		{
			uint8_t* ___values;
		};
		#pragma pack(pop, tp)
		struct
		{
			uint8_t* ___values_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keys_OffsetPadding[8];
			uint8_t* ___keys;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keys_OffsetPadding_forAlignmentOnly[8];
			uint8_t* ___keys_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___next_OffsetPadding[16];
			uint8_t* ___next;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___next_OffsetPadding_forAlignmentOnly[16];
			uint8_t* ___next_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___buckets_OffsetPadding[24];
			uint8_t* ___buckets;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___buckets_OffsetPadding_forAlignmentOnly[24];
			uint8_t* ___buckets_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___keyCapacity_OffsetPadding[32];
			int32_t ___keyCapacity;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___keyCapacity_OffsetPadding_forAlignmentOnly[32];
			int32_t ___keyCapacity_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding[36];
			int32_t ___bucketCapacityMask;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___bucketCapacityMask_OffsetPadding_forAlignmentOnly[36];
			int32_t ___bucketCapacityMask_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding[40];
			int32_t ___allocatedIndexLength;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___allocatedIndexLength_OffsetPadding_forAlignmentOnly[40];
			int32_t ___allocatedIndexLength_forAlignmentOnly;
		};
		#pragma pack(push, tp, 1)
		struct
		{
			char ___firstFreeTLS_OffsetPadding[64];
			U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11 ___firstFreeTLS;
		};
		#pragma pack(pop, tp)
		struct
		{
			char ___firstFreeTLS_OffsetPadding_forAlignmentOnly[64];
			U3CfirstFreeTLSU3Ee__FixedBuffer_tB5D033343517E3E37219A27C7757D645091EFF11 ___firstFreeTLS_forAlignmentOnly;
		};
	};
};
struct VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6 
{
	int32_t ___value__;
};
struct X509ChainStatusFlags_t57C80D7C1F4C319F6D6B9FBDEA402E3023E6C769 
{
	int32_t ___value__;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c0;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c1;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c2;
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___c3;
};
struct sk_tFA3A37F74DB1CFE3BE71E133FAFD9879965F799A 
{
	int32_t ___value__;
};
struct sy_t228564D4C3B76C2F045FF0BF4DBCC2DFBBC8C9E1 
{
	int32_t ___value__;
};
struct TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE 
{
	intptr_t ___function;
	intptr_t ___state;
};
struct AlignOfHelper_1_t6864EB88E23CEEC413BB947FF5D6F7B523DFD63E 
{
	uint8_t ___dummy;
	Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___data;
};
struct AlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A 
{
	uint8_t ___dummy;
	CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___data;
};
struct AlignOfHelper_1_t3A1BED5F39B5F62BB069F44DF1E7D56297566819 
{
	uint8_t ___dummy;
	PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 ___data;
};
struct AlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328 
{
	uint8_t ___dummy;
	Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___data;
};
struct AlignOfHelper_1_t600295FA5C38F4F394A0301527136058CD27614C 
{
	uint8_t ___dummy;
	PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C ___data;
};
struct AlignOfHelper_1_t50F261D3D99DB1091DC5FADAFCE1736E30517A33 
{
	uint8_t ___dummy;
	PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 ___data;
};
struct AlignOfHelper_1_t44748AC00241E124F016371B08CF251CC22577D4 
{
	uint8_t ___dummy;
	UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4 ___data;
};
struct AlignOfHelper_1_t6184AB8A4DDD7E3615F65119999BE030DC55BB69 
{
	uint8_t ___dummy;
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___data;
};
struct Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F 
{
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f0;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f1;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f2;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f3;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f4;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f5;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f6;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f7;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f8;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f9;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f10;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f11;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f12;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f13;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f14;
	TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE ___f15;
};
struct NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 
{
	void* ___m_Buffer;
	int32_t ___m_Length;
	int32_t ___m_AllocatorLabel;
};
struct NativeHashMap_2_t51E18C6F46B061FC0AAA109B32DF45C92BC78D4C 
{
	UnsafeHashMap_2_tF148BDABD8837248BF870827F7C8D84039007E0E ___m_HashMapData;
};
struct Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D 
{
	ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 ____pointer;
	int32_t ____length;
};
struct LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 
{
	int32_t ___instanceID;
	int32_t ___cookieID;
	float ___cookieScale;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___color;
	LinearColor_t60964F15C567D7FE5442C29298DCF20ABD8816C7 ___indirectColor;
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___orientation;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___position;
	float ___range;
	float ___coneAngle;
	float ___innerConeAngle;
	float ___shape0;
	float ___shape1;
	uint8_t ___type;
	uint8_t ___mode;
	uint8_t ___shadow;
	uint8_t ___falloff;
};
struct MapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2 
{
	int32_t ___MapID;
	int32_t ___Type;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Info;
};
struct MapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2_marshaled_pinvoke
{
	int32_t ___MapID;
	int32_t ___Type;
	Il2CppSafeArray* ___Info;
};
struct MapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2_marshaled_com
{
	int32_t ___MapID;
	int32_t ___Type;
	Il2CppSafeArray* ___Info;
};
struct MapNext2_t6A27779B29B776853D509373D32E4E84649242AB 
{
	int32_t ___MapID;
	int32_t ___Type;
	Int32U5BU5D_t19C97395396A72ECAF310612F0760F165060314C* ___Info;
};
struct MapNext2_t6A27779B29B776853D509373D32E4E84649242AB_marshaled_pinvoke
{
	int32_t ___MapID;
	int32_t ___Type;
	Il2CppSafeArray* ___Info;
};
struct MapNext2_t6A27779B29B776853D509373D32E4E84649242AB_marshaled_com
{
	int32_t ___MapID;
	int32_t ___Type;
	Il2CppSafeArray* ___Info;
};
struct MulticastDelegate_t  : public Delegate_t
{
	DelegateU5BU5D_tC5AB7E8F745616680F337909D3A8E6C722CDF771* ___delegates;
};
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates;
};
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates;
};
struct Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99  : public Object_tC12DECB6760A7F2CBF65D9DCF18D044C2D97152C
{
};
struct SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 
{
	NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 ___vertices;
	NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B ___boneWeights;
	NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 ___bindPoses;
	NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 ___tangents;
	bool ___hasTangents;
	int32_t ___spriteVertexStreamSize;
	int32_t ___spriteVertexCount;
	int32_t ___tangentVertexOffset;
	int32_t ___deformVerticesStartPos;
	int32_t ___transformId;
	NativeCustomSlice_1_t0D6722C6A546C76474543C10D2E576E494D019A8 ___boneTransformId;
};
struct SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_marshaled_pinvoke
{
	NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 ___vertices;
	NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B ___boneWeights;
	NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 ___bindPoses;
	NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 ___tangents;
	int32_t ___hasTangents;
	int32_t ___spriteVertexStreamSize;
	int32_t ___spriteVertexCount;
	int32_t ___tangentVertexOffset;
	int32_t ___deformVerticesStartPos;
	int32_t ___transformId;
	NativeCustomSlice_1_t0D6722C6A546C76474543C10D2E576E494D019A8 ___boneTransformId;
};
struct SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_marshaled_com
{
	NativeCustomSlice_1_t553B89694440B1C5C7DF7F314D7A0711AE7A0783 ___vertices;
	NativeCustomSlice_1_t00144D7121E64139E2BBFAEB4BA01FB646F1A71B ___boneWeights;
	NativeCustomSlice_1_tB3DF9F46AA60E8412DC5B89CC7878A4BE49ABA45 ___bindPoses;
	NativeCustomSlice_1_t1BD4A99A5C57F16086ACE5EED91D969C19693921 ___tangents;
	int32_t ___hasTangents;
	int32_t ___spriteVertexStreamSize;
	int32_t ___spriteVertexCount;
	int32_t ___tangentVertexOffset;
	int32_t ___deformVerticesStartPos;
	int32_t ___transformId;
	NativeCustomSlice_1_t0D6722C6A546C76474543C10D2E576E494D019A8 ___boneTransformId;
};
struct SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295  : public Exception_t
{
};
struct TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0  : public RuntimeObject
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___m_defaultCancellationToken;
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___m_defaultScheduler;
	int32_t ___m_defaultCreationOptions;
	int32_t ___m_defaultContinuationOptions;
};
struct Type_t  : public MemberInfo_t
{
	RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ____impl;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D 
{
	int32_t ___status;
	String_t* ___info;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_pinvoke
{
	int32_t ___status;
	char* ___info;
};
struct X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_marshaled_com
{
	int32_t ___status;
	Il2CppChar* ___info;
};
struct Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780  : public MulticastDelegate_t
{
};
struct Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87  : public MulticastDelegate_t
{
};
struct Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99  : public MulticastDelegate_t
{
};
struct AlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18 
{
	uint8_t ___dummy;
	LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___data;
};
struct AlignOfHelper_1_t41BC3A9B75E657E395EC5E35CBD5426B52AE4D90 
{
	uint8_t ___dummy;
	SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 ___data;
};
struct Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 
{
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f0;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f1;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f2;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f3;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f4;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f5;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f6;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f7;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f8;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f9;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f10;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f11;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f12;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f13;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f14;
	Array16_1_tD7DC1805EB67B07DF30FB4A25D3C1D0D5C0F9A9F ___f15;
};
struct Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985  : public MulticastDelegate_t
{
};
struct Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB  : public MulticastDelegate_t
{
};
struct Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD  : public MulticastDelegate_t
{
};
struct Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4  : public MulticastDelegate_t
{
};
struct Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431  : public MulticastDelegate_t
{
};
struct Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706  : public MulticastDelegate_t
{
};
struct Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00  : public MulticastDelegate_t
{
};
struct Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9  : public MulticastDelegate_t
{
};
struct Func_2_tBB0D7C02FB04CB15F2B32B7ED20E9B69E87AF505  : public MulticastDelegate_t
{
};
struct Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22  : public MulticastDelegate_t
{
};
struct Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D  : public MulticastDelegate_t
{
};
struct Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799  : public MulticastDelegate_t
{
};
struct Func_5_tA07BEDDD813173420A179C25AEDEA235CEB634BB  : public MulticastDelegate_t
{
};
struct Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9  : public MulticastDelegate_t
{
};
struct SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178  : public MulticastDelegate_t
{
};
struct SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947  : public MulticastDelegate_t
{
};
struct SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B  : public MulticastDelegate_t
{
};
struct SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A  : public MulticastDelegate_t
{
};
struct ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	String_t* ____paramName;
};
struct BoneDeformBatchedJob_tECC24BCC1429F1A7A21DE9B5C2B878AE44A8A434 
{
	NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A ___boneTransform;
	NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A ___rootTransform;
	NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___boneLookupData;
	NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 ___spriteSkinData;
	NativeHashMap_2_t51E18C6F46B061FC0AAA109B32DF45C92BC78D4C ___rootTransformIndex;
	NativeHashMap_2_t51E18C6F46B061FC0AAA109B32DF45C92BC78D4C ___boneTransformIndex;
	NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A ___finalBoneTransforms;
};
struct CalculateSpriteSkinAABBJob_t14A401B8ADB5F3145732B405400C4599C2A2A05F 
{
	NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA ___vertices;
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___isSpriteSkinValidForDeformArray;
	NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 ___spriteSkinData;
	NativeArray_1_t596D8D9BF28AE72A671779EB28469319AC3F1147 ___bounds;
};
struct CopySpriteRendererBuffersJob_t6C9FBD58B318CD701CDDD287B9F7BF2F16A4D9DD 
{
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___isSpriteSkinValidForDeformArray;
	NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 ___spriteSkinData;
	intptr_t ___ptrVertices;
	NativeArray_1_t170B62D6C147DD05888D56F029D4D828DF487EC9 ___buffers;
	NativeArray_1_tA833EB7E3E1C9AF82C37976AD964B8D4BAC38B2C ___bufferSizes;
};
struct FillPerSkinJobSingleThread_t18EBD362E24245E224D6A1A63C54C1B3AEACC756 
{
	PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 ___combinedSkinBatch;
	NativeArray_1_t107C57D0357BCF9956A60495CD8FAADDF1D26AFB ___isSpriteSkinValidForDeformArray;
	NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 ___spriteSkinDataArray;
	NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE ___perSkinJobDataArray;
	NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE ___combinedSkinBatchArray;
};
struct InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct LocalToWorldTransformAccessJob_tB7517F597E417ED9F96F75B2ED813D4E1A56EC8B 
{
	NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A ___outMatrix;
};
struct NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
};
struct OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662  : public SystemException_tCC48D868298F4C0705279823E34B00F4FBDB7295
{
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ____cancellationToken;
};
struct PrepareDeformJob_t3FF43C57F822925D3C7727BA524AAB67872F5284 
{
	NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE ___perSkinJobData;
	int32_t ___batchDataSize;
	NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___boneLookupData;
	NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___vertexLookupData;
};
struct SkinDeformBatchedJob_tD600876406B2767D1228D665A1154C92234AD2BB 
{
	NativeSlice_1_tCEC4B2B900638EC1820BB61FE436766204DFD8DA ___vertices;
	NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A ___finalBoneTransforms;
	NativeArray_1_t170B72C5ED52FD874165AC26A8FB1CFE1A93C4CE ___perSkinJobData;
	NativeArray_1_tC6F9C4831D5B3C255A767235D6B58B1A6492C5C1 ___spriteSkinData;
	NativeArray_1_tE86585F07CF10FCD01AA2652A104B149336F7EC2 ___vertexLookupData;
};
struct TransformAccessJob_tAE459E37A0EB73C9200C7FE7E86918DA6EEE01E3  : public RuntimeObject
{
	TransformU5BU5D_tBB9C5F5686CAE82E3D97D43DF0F3D68ABF75EC24* ___m_Transform;
	TransformAccessArray_t104EDE5BB3DC7E294332BB1D2AA508CAEDEE83D4 ___m_TransformAccessArray;
	NativeHashMap_2_t51E18C6F46B061FC0AAA109B32DF45C92BC78D4C ___m_TransformData;
	NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A ___m_TransformMatrix;
	bool ___m_Dirty;
	JobHandle_t5DF5F99902FED3C801A81C05205CEA6CE039EF08 ___m_JobHandle;
};
struct WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3  : public MulticastDelegate_t
{
};
struct WorldToLocalTransformAccessJob_tFE2332659D5ADE233AC4C8E613ACE9D442FA1EE2 
{
	NativeArray_1_t63326FF687E26631308829A9CDB0C51D523D4E9A ___outMatrix;
};
struct Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 
{
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f0;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f1;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f2;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f3;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f4;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f5;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f6;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f7;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f8;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f9;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f10;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f11;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f12;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f13;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f14;
	Array256_1_t5410033DC9920374048839AA4B80BA4420373D59 ___f15;
};
struct ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
};
struct ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F  : public ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263
{
	RuntimeObject* ____actualValue;
};
struct Array32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6 
{
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f0;
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f1;
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f2;
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f3;
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f4;
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f5;
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f6;
	Array4096_1_t97465F61B5971FE36BADFE9A629DEB33EF47E8D8 ___f7;
};
struct ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91_StaticFields
{
	bool ___s_isValueWriteAtomic;
};
struct List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D_StaticFields
{
	ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* ___s_emptyArray;
};
struct List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A_StaticFields
{
	__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* ___s_emptyArray;
};
struct CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_StaticFields
{
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___invariant_culture_info;
	RuntimeObject* ___shared_table_lock;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___default_current_culture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentUICulture;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_DefaultThreadCurrentCulture;
	Dictionary_2_t9FA6D82CAFC18769F7515BB51D1C56DAE09381C3* ___shared_by_number;
	Dictionary_2_tE1603CE612C16451D1E56FF4D4859D4FE4087C28* ___shared_by_name;
	CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* ___s_UserPreferredCultureInfoInAppX;
	bool ___IsTaiwanSku;
};
struct String_t_StaticFields
{
	String_t* ___Empty;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields
{
	int32_t ___s_taskIdCounter;
	RuntimeObject* ___s_taskCompletionSentinel;
	bool ___s_asyncDebuggingEnabled;
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_taskCancelCallback;
	Func_1_tD59A12717D79BFB403BF973694B1BE5B85474BD1* ___s_createContingentProperties;
	TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* ___U3CFactoryU3Ek__BackingField;
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___U3CCompletedTaskU3Ek__BackingField;
	Predicate_1_t7F48518B008C1472339EEEBABA3DE203FE1F26ED* ___s_IsExceptionObservedByParentPredicate;
	ContextCallback_tE8AFBDBFCC040FDA8DA8C1EEFE9BD66B16BDA007* ___s_ecCallback;
	Predicate_1_t8342C85FF4E41CD1F7024AC0CDC3E5312A32CB12* ___s_IsTaskContinuationNullPredicate;
	Dictionary_2_t403063CE4960B4F46C688912237C6A27E550FF55* ___s_currentActiveTasks;
	RuntimeObject* ___s_activeTasksLock;
};
struct Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_ThreadStaticFields
{
	Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___t_currentTask;
	StackGuard_tACE063A1B7374BDF4AD472DE4585D05AD8745352* ___t_stackGuard;
};
struct TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields
{
	TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___s_defaultTaskScheduler;
	int32_t ___s_taskSchedulerIdCounter;
	EventHandler_1_tE698654C3F437D97ABCCA3FD0AD8F86E776DC77A* ____unobservedTaskException;
	Lock_t529C04C831C120E5FFD6039EC3CB76F9956BCDD7* ____unobservedTaskExceptionLockObject;
};
struct TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields
{
	ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* ___s_TypeConstructors;
	MethodInfo_t* ___s_CreateTypeConstructor;
	ConcurrentDictionary_2_t889EC4BD07B5DCB6087E2226ACC8A5E5590E48AB* ___s_CachedResolvedName;
	ObjectPool_1_tA6230762362A6BA6FEB38B9912D0463FB059A05A* ___s_Builders;
	RuntimeObject* ___syncedPoolObject;
};
struct bd_t18A7563F8C3F808C28EBC54FDA33440FCD3EF7B7_StaticFields
{
	bool ___jdd;
};
struct sh_tA2444320AC478E10834AC1F0839E1764A5FD4537_StaticFields
{
	bool ___zin;
	bool ___zio;
	bool ___zip;
	bool ___ziq;
	bool ___zir;
	int32_t ___zis;
};
struct sv_t5A54B1F3DCA22DF9C299C7F5DFD1A0AE467CC44C_StaticFields
{
	bool ___zmm;
	bool ___zmn;
	bool ___zmo;
	bool ___zmp;
	bool ___zmq;
	int32_t ___zmr;
};
struct Cache_1_t3D5B27BB72DB559823D975C81EB8746985435377_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t6A09774E9EC924515184CB0FBF6689D74CD57526_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t1EC3F18F5B6510EED65B625CE37A6C73B0F46377_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_tB8D73F5DFD6D8711956A5D57AEEA41C64DD59FE6_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t60D29BA616C245A5283CB0B5BD4B19DCB7EDCF1C_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t4ED442C7D3A39C62CE6AD3207C2A7F04760D2F3C_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_tC0A5B4DEAAD4F636D5EB7222F76AFA30C44BD765_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t1734B78F91A5E97A0376AADF017CDD9C28F0D1E8_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t165F6C79CDB8F92D5632BF06B4D2859B4F8CB803_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t9D717A73959DD798ED20109ED37309FA61F9047D_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_t2AE8DCA73B885EC1BE3528F43866A2B28BA27459_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields
{
	RuntimeObject* ___TypeConstructor;
};
struct Task_1_t8923214371A3F5BC070C6DE37A05405486B5D868_StaticFields
{
	TaskFactory_1_t6D562D6E02741F0C7D98C590754714C6D6429450* ___s_defaultFactory;
};
struct Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266_StaticFields
{
	TaskFactory_1_t3B055CB72CA2D1BEF08BD1C91FFB09DB3268521E* ___s_defaultFactory;
};
struct Task_1_t824317F4B958F7512E8F7300511752937A6C6043_StaticFields
{
	TaskFactory_1_tFAEAC22A1E986463E6956C344A78A7C7197288E0* ___s_defaultFactory;
};
struct Task_1_t4C228DE57804012969575431CFF12D57C875552D_StaticFields
{
	TaskFactory_1_t0BEF06D58E44525B9135AB0B22D016856EE69FF3* ___s_defaultFactory;
};
struct Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_StaticFields
{
	TaskFactory_1_t6F188FE70F3006B0386002E392B799D85100732B* ___s_defaultFactory;
};
struct Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9_StaticFields
{
	TaskFactory_1_tF4CDC5BDA20AE9BD3F65B6146CDCD3F753003E1D* ___s_defaultFactory;
};
struct Boolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_StaticFields
{
	String_t* ___TrueString;
	String_t* ___FalseString;
};
struct CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_StaticFields
{
	Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___s_actionToActionObjShunt;
};
struct Char_t521A6F19B456D956AF452D926C32709DC03D6B17_StaticFields
{
	ByteU5BU5D_tA6237BF417AE52AD70CFB4EF24A7A82613DF9031* ___s_categoryForLatin1;
};
struct Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F_StaticFields
{
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___Zero;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___One;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinusOne;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MaxValue;
	Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F ___MinValue;
};
struct Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2_StaticFields
{
	CharU5BU5D_t799905CF001DD5F13F7DBB310181FC4D8B7D0AAB* ___enumSeperatorCharArray;
};
struct IntPtr_t_StaticFields
{
	intptr_t ___Zero;
};
struct Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_StaticFields
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___zeroMatrix;
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___identityMatrix;
};
struct Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_StaticFields
{
	Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___identityQuaternion;
};
struct UIntPtr_t_StaticFields
{
	uintptr_t ___Zero;
};
struct Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_StaticFields
{
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___zeroVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___oneVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___upVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___downVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___leftVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___rightVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___positiveInfinityVector;
	Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___negativeInfinityVector;
};
struct Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_StaticFields
{
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___zeroVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___oneVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___upVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___downVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___leftVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___rightVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___forwardVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___backVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___positiveInfinityVector;
	Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___negativeInfinityVector;
};
struct Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_StaticFields
{
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___zeroVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___oneVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___positiveInfinityVector;
	Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___negativeInfinityVector;
};
struct float4_t89D9A294E7A79BD81BFBDD18654508532958555E_StaticFields
{
	float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___zero;
};
struct int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_StaticFields
{
	int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___zero;
};
struct DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9_StaticFields
{
	UInt32U5BU5D_t02FBD658AD156A17574ECE6106CF1FBFCC9807FA* ___s_powers10;
	UInt64U5BU5D_tAB1A62450AC0899188486EDB9FC066B8BEED9299* ___s_ulongPowers10;
	DoubleU5BU5D_tCC308475BD3B8229DB2582938669EF2F9ECC1FEE* ___s_doublePowers10;
	PowerOvflU5BU5D_t8BB6F43AF19F1F7C7558815B4684875BC320735B* ___PowerOvflValues;
};
struct Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17_StaticFields
{
	TaskFactory_1_t4BEAD6CE2527DBE682C128CEAA0FF2A79483E96C* ___s_defaultFactory;
};
struct Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields
{
	int32_t ___s_count;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_zero;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_one;
	Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___s_allOnes;
};
struct Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A_StaticFields
{
	int32_t ___s_count;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_zero;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_one;
	Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A ___s_allOnes;
};
struct Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2_StaticFields
{
	int32_t ___s_count;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_zero;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_one;
	Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___s_allOnes;
};
struct Exception_t_StaticFields
{
	RuntimeObject* ___s_EDILock;
};
struct float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_StaticFields
{
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___identity;
	float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___zero;
};
struct Type_t_StaticFields
{
	Binder_t91BFCE95A7057FADF4D8A1A342AFE52872246235* ___s_defaultBinder;
	Il2CppChar ___Delimiter;
	TypeU5BU5D_t97234E1129B564EB38B8D85CAC2AD8B5B9522FFB* ___EmptyTypes;
	RuntimeObject* ___Missing;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterAttribute;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterName;
	MemberFilter_tF644F1AE82F611B677CE1964D5A3277DDA21D553* ___FilterNameIgnoreCase;
};
#ifdef __clang__
#pragma clang diagnostic pop
#endif
struct ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918  : public RuntimeArray
{
	ALIGN_FIELD (8) RuntimeObject* m_Items[1];

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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
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
		Il2CppCodeGenWriteBarrier((void**)m_Items + index, (void*)value);
	}
};
struct __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC  : public RuntimeArray
{
	ALIGN_FIELD (8) uint8_t m_Items[1];

	inline uint8_t* GetAddressAt(il2cpp_array_size_t index)
	{
		IL2CPP_ARRAY_BOUNDS_CHECK(index, (uint32_t)(this)->max_length);
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
	inline uint8_t* GetAddressAtUnchecked(il2cpp_array_size_t index)
	{
		return m_Items + il2cpp_array_calc_byte_offset(this, index);
	}
};
struct StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248  : public RuntimeArray
{
	ALIGN_FIELD (8) String_t* m_Items[1];

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


IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mC616C20F98C18ADE02810AB4A6005DB6F19B2231_gshared (int32_t ___0_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m9744FD59328829552BE4130D1C9F68FFCB11E34C_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFD6C53B2AC2CBE5550C3945139F0A79D9D2D6850_gshared (int32_t ___0_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m633DAEBC11F916CAC6408C5B1B105D222E015213_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13358A837F48F4EBF20D240912AA387837EFE018_gshared (int32_t ___0_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0D7F29872ED8CEEAABA4DFDCC488F4F8D00601D0_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB27DCB146CDAD183C3D17F0715F34CF1CBBD3893_gshared (int32_t ___0_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m72AA26CED781FF9A097F5FE29A1FB66E946FAD31_gshared (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_gshared_inline (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_gshared_inline (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_gshared_inline (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_JoinCore_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF8A3DA305336681152E11ADCDA63193C02C6769E_gshared (Il2CppChar* ___0_separator, int32_t ___1_separatorLength, RuntimeObject* ___2_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_JoinCore_TisRuntimeObject_m010137B76A888B4A77A0C668F0CAB952CF3D4E71_gshared (Il2CppChar* ___0_separator, int32_t ___1_separatorLength, RuntimeObject* ___2_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_ContinueWith_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m410879F23CD33ABB2F1482B116733C5A23824DE9_gshared (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Func_2_tBB0D7C02FB04CB15F2B32B7ED20E9B69E87AF505* ___0_continuationFunction, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___1_scheduler, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_continuationOptions, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ContinuationResultTaskFromTask_1__ctor_m3429704518F1F1E63420A7A815A9A6E0B9A6F24A_gshared (ContinuationResultTaskFromTask_1_tA9D2C0C95B63D2D2939F5296F7BD35D23B849493* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_antecedent, Delegate_t* ___1_function, RuntimeObject* ___2_state, int32_t ___3_creationOptions, int32_t ___4_internalOptions, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64EF24758B483A0F2026841BAF84240470F23DE4_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromCancellation_TisRuntimeObject_m38025C544CE91D455E63358AB2EAA1F2D173FCE6_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m912F5F25BF780F1B743BCB5FC21FEB08BB05ED52_gshared (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, bool ___0_canceled, bool ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mFF72C62F161EF9AFEBD8257BD0D74339D29166CB_gshared (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, bool ___0_canceled, int32_t ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m08841FDA6AA08B68DFA36125A81DA6C7B54D0B99_gshared (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m3EAE7A8F72CB23D824923E6757C64465533BBC22_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, bool ___0_canceled, RuntimeObject* ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m323D56E98AFD8C95866A2866CF440831DA74657D_gshared (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_m2A3A26E17D6BE69CEEC048C0599F76FE4C6D24A0_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mB3888CE20043DB96B5E044DF7193D494B41E3DA2_gshared (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, int32_t ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_1__ctor_mB819988054745A0A3BFB8F02517E248B69573289_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, RuntimeObject* ___0_result, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_1_StartNew_mDC1CAEBA1AA1140287E893D3F292AC0F99017377_gshared (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_parent, Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ___1_function, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_creationOptions, int32_t ___4_internalOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___5_scheduler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_Run_TisRuntimeObject_mE6EC478769A44E9987615F4858FF2C8470005FF0_gshared (Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985* ___0_function, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskFactory_StartNew_TisRuntimeObject_m14FDB1694FEE097B11C3119BD89F3C350F7DE51B_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_function, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, int32_t ___2_creationOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___3_scheduler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnwrapPromise_1__ctor_m444AC846B8EBC766BB59B1E3C44A2A07330D3089_gshared (UnwrapPromise_1_tEE3DD92946C85E16C4E468CE517515B0A532C43E* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_outerTask, bool ___1_lookForOce, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisRuntimeObject_m15A3FDB23C39585CED64D8702F8DEAEA3D853C9F_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, RuntimeObject* ___2_arg1, RuntimeObject* ___3_state, int32_t ___4_creationOptions, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m07D8893FAE82409A470EEFE74C72A56D88F6DFFC_gshared (Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D* ___0_beginMethod, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706* ___1_endFunction, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___2_endAction, RuntimeObject* ___3_arg1, RuntimeObject* ___4_state, int32_t ___5_creationOptions, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1D52B923BD701D21EA3025AA8766D95C2463D02B_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_tA07BEDDD813173420A179C25AEDEA235CEB634BB* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, RuntimeObject* ___2_arg1, int32_t ___3_arg2, RuntimeObject* ___4_state, int32_t ___5_creationOptions, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7D9FA6F2A19B70C8115DB6EE2ECCE8FDEAAEB482_gshared (Func_5_tA07BEDDD813173420A179C25AEDEA235CEB634BB* ___0_beginMethod, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706* ___1_endFunction, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___2_endAction, RuntimeObject* ___3_arg1, int32_t ___4_arg2, RuntimeObject* ___5_state, int32_t ___6_creationOptions, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_1_StartNew_m0057E0BA0B7F816CAAB48423DB419286E5634431_gshared (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_parent, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___1_function, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_creationOptions, int32_t ___4_internalOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___5_scheduler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_1_StartNew_m3716C9AEC763488A7E54F556F38450E878DF829A_gshared (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_parent, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_function, RuntimeObject* ___2_state, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, int32_t ___4_creationOptions, int32_t ___5_internalOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___6_scheduler, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_gshared (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_gshared (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void U3CU3Ec__DisplayClass17_0_1__ctor_m5CA33CA454BC6B0EDE091B120839E1203DFBDDE9_gshared (U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489_gshared (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3__ctor_mD9AAD1E691AD4F828FF40E1E30DBFCD821DDA70C_gshared (Tuple_3_t76B18FDDE87BFB452CF969BC16B10789E225FCF6* __this, RuntimeObject* ___0_item1, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___1_item2, RuntimeObject* ___2_item3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Tuple_3__ctor_m6AEF789D0F9924D31EF4C5A29232A093E1D05D4A_gshared (Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF* __this, RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, RuntimeObject* ___2_item3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mA44AE4CA2839F2717B9950321247E9AA135D7B5C_gshared (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ConcurrentDictionary_2_set_Item_m95DD60ECF2EBCA55F2EC3B0AC122FE0C0D7D4E39_gshared (ConcurrentDictionary_2_tF598E45B2A3ECB23FD311D829FB0AB32B1201ACF* __this, RuntimeObject* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mBDEC850104319B918A6CBE0A5FC8CF72FE449073_gshared (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m59D284115DFA693528774482859F9EAE2D2574A3_gshared (TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m02302139520CED9AE781B727D6E067D5D860B16E_gshared (TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mD1ED26178C74371350CCA90F7F0AA542DA05C0D2_gshared (TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m57EBE4991938D5FD61C4CC1CBA2995AD683397E0_gshared (TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_m74203C1B59EBD226404F82D4FE8ECCE279763902_gshared (TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mDE1389C84380C4456818EB59CA7C49951026B1D6_gshared (TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mF487A9F2F4B6893A278DDD2CA281144354953FB1_gshared (TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mDAFDA633F7A4D154406F63CE7E031CA7299715DE_gshared (TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructor_1__ctor_mE6B1A176CB56765080C95ECB263601E5ECC97ADB_gshared (TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_GetTypeConstructor_TisRuntimeObject_m16C0BB9AC6C9E7396BA85526EC8A55AF216579DB_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mC69CF5F77034B30127E3A3CE8A94210AB31737A7_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m37642672DB5CD7B67DB139840F4726D718053FA2_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_gshared (uint8_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285_m36333D7DA62EC901BF7F5593E1C61159F6FE176E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m012D9D895FCD4DFB1B9CD8A5C7DA209064892673_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEAFB355EAD711C8A0A6C9253A911701A3A1811A3_m2C55A5FA6211209E949A2D0432016F3691BD1979_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mEFCBE2CF7FA5F05ACDFD7B04B7BAF4F558B2D2E1_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t77D164DCA1370DB06991787EC849693AD5DE98F8_mD5B9EC6615744171560BC7D3B1EC5B6BB1536EF9_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6864EB88E23CEEC413BB947FF5D6F7B523DFD63E_m018E07080C6819DE13199CF6FFD8A7A005260001_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mD2F34AAB2050E90842D914F6E4ACCC10746C260D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2_mEC1CDBD0303261903CC17065EED96AF65D1B1613_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A_mF99262281A6D71ED25E8514C549FC0EA1AB98A8C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEE3DDAFA529F9402C6A7F47BFB9A6FF91410C2BE_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3_mBA38EFAD1B8A7BDB8EC1E91B633140F2EEDBA5E8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA1D9D36CBE8FF25BF6FFF35C56E697C87CBC2432_mE583CE23D33B55B88A444ED83330E581B444B03B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18_mB5B2CAC6A7BDCEEA6F8EBD2A77E6184121CC1C26_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mB02E6C828323C4B414AB855EA914B81EADADEB68_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC_m5386ED14552A503327F5B80EFD0A47BBC1DAEA36_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3E93E3D3F245D3AACCB1346E8FEFD7BAC2ABBC4C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t3A1BED5F39B5F62BB069F44DF1E7D56297566819_mD59C7C286BCDFE91575A2BF38DE2084D75C3732C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_m261E33D42C760ACF61B9CB887B8FAEFCA07DB43B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328_mEF523B86365836B22C21116B4D437CE2DA880EF6_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC98A334942D13D3EBBEAE20C5BB187A0A0ADF14E_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t600295FA5C38F4F394A0301527136058CD27614C_m3CCAF853FC0B73E27559210D07175B39C40C5D4D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m2D05EEE3FACF18840E1F713AA271F5B7B968C4F6_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t50F261D3D99DB1091DC5FADAFCE1736E30517A33_mA3279E5BB58B4A27F4990F6294EC9F26CC40AB87_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_mFE4197E975C1006D02005551269071807CA3EF78_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56_m203557A8987FE4C04012B390642F55416B593249_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DD322328DA83780B700E31BC9725EB652C968D_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t41BC3A9B75E657E395EC5E35CBD5426B52AE4D90_mF9E7F48C5EC348FF3B078B28856201CAE3B6769F_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mB7D37495508235F73EE531B6F13D8D862B0E4B05_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t44748AC00241E124F016371B08CF251CC22577D4_m06FDD1D387A81F0F868564BB74736F417418C2ED_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t011E0A6A1CE5BB662014F6F7D560D62F3044E227_m3A555507D3794AA55E2DA800BA4A3B615515BE59_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB95F2BE00B68117D1DF84661261D1FBCA90144D4_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269_mC54E2B7F10608DFB3EE95E30764C2B377DE5A296_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB2AF8CA03DEC485BAD3A37CCBE5CDEBA3C67758C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2_mC176BFF838A45ADE4211E6BF15C79073687F26FB_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4FC0676786D4504DFB463E079B49B98660853217_m50DBA733297972A955D96A533F2A1F3BE853BC38_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m3AD29AA7E6279412E3C8AA9DAA54CF2186113297_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tFA851D5782D452C4B2E6265604AD87D652390B55_m015C8659A60B24F46F8434AC0DB817AAF9EE260C_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m0BD2704CD677D45FAEDAD35D6C7208EE167961F7_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6184AB8A4DDD7E3615F65119999BE030DC55BB69_m9360663DE613AAE1D0A1DE71FA5E7694B5438C73_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m90780EC8030A711CE1682E39A74278F5F6BBD031_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8BCA7BF89790AD2881377ABB090D9BFDE5669990_mA7019F84732E6FF4708040D34A52D5C1A8AD2E53_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mC4FF8279635DE447534004C94461FC84DCECE5E6_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t68C3D8AC24508C31F35B828E6206CA7933E9B711_mFD97DC95FC388CD9482935B0A0B60279DA85D751_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_t7017FC063B433EE93203EDB06EA021B1A1032CE9_m4AC570CE30498ACB444F69795D2CBE09D49A7928_gshared (void* ___0_ptr, TransformJobData_t7017FC063B433EE93203EDB06EA021B1A1032CE9* ___1_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC_m973651D4A07FDB90F66530979DDA4DD3E44B669A_gshared (void* ___0_ptr, TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC* ___1_output, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_gshared_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared (uint8_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9_gshared (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3_gshared (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05_gshared (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method) ;

IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57 (RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B ___0_handle, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC (Type_t* ___0_left, Type_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8 (String_t* ___0_format, RuntimeObject* ___1_arg0, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162 (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987 (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, const RuntimeMethod* method) ;
inline void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mC616C20F98C18ADE02810AB4A6005DB6F19B2231 (int32_t ___0_channel, const RuntimeMethod* method)
{
	((  void (*) (int32_t, const RuntimeMethod*))SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mC616C20F98C18ADE02810AB4A6005DB6F19B2231_gshared)(___0_channel, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA SpriteDataAccessExtensions_GetChannelInfo_mFD515C42E45421F85D62EB47E5EEB5FE99A21CA3 (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, int32_t ___1_channel, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* SpriteChannelInfo_get_buffer_m897E681FF93F5EE652D9AB8D8E31062AB860FF15 (SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteChannelInfo_get_offset_m197B24414AEFF48823BF94AC6035C6D6D567383F (SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteChannelInfo_get_stride_m93347B66A199DB44E375BEB8275FD7D68728981F (SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t SpriteChannelInfo_get_count_m533E5BAABF579F8C67CB4272A71E699C3E161C18 (SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA* __this, const RuntimeMethod* method) ;
inline NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m9744FD59328829552BE4130D1C9F68FFCB11E34C (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m9744FD59328829552BE4130D1C9F68FFCB11E34C_gshared)(___0_dataPointer, ___1_stride, ___2_length, method);
}
inline void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFD6C53B2AC2CBE5550C3945139F0A79D9D2D6850 (int32_t ___0_channel, const RuntimeMethod* method)
{
	((  void (*) (int32_t, const RuntimeMethod*))SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFD6C53B2AC2CBE5550C3945139F0A79D9D2D6850_gshared)(___0_channel, method);
}
inline NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m633DAEBC11F916CAC6408C5B1B105D222E015213 (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m633DAEBC11F916CAC6408C5B1B105D222E015213_gshared)(___0_dataPointer, ___1_stride, ___2_length, method);
}
inline void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13358A837F48F4EBF20D240912AA387837EFE018 (int32_t ___0_channel, const RuntimeMethod* method)
{
	((  void (*) (int32_t, const RuntimeMethod*))SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13358A837F48F4EBF20D240912AA387837EFE018_gshared)(___0_channel, method);
}
inline NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0D7F29872ED8CEEAABA4DFDCC488F4F8D00601D0 (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0D7F29872ED8CEEAABA4DFDCC488F4F8D00601D0_gshared)(___0_dataPointer, ___1_stride, ___2_length, method);
}
inline void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB27DCB146CDAD183C3D17F0715F34CF1CBBD3893 (int32_t ___0_channel, const RuntimeMethod* method)
{
	((  void (*) (int32_t, const RuntimeMethod*))SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB27DCB146CDAD183C3D17F0715F34CF1CBBD3893_gshared)(___0_channel, method);
}
inline NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m72AA26CED781FF9A097F5FE29A1FB66E946FAD31 (void* ___0_dataPointer, int32_t ___1_stride, int32_t ___2_length, const RuntimeMethod* method)
{
	return ((  NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F (*) (void*, int32_t, int32_t, const RuntimeMethod*))NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m72AA26CED781FF9A097F5FE29A1FB66E946FAD31_gshared)(___0_dataPointer, ___1_stride, ___2_length, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* __this, String_t* ___0_paramName, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104 (int32_t ___0_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D (String_t* __this, const RuntimeMethod* method) ;
inline void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method)
{
	((  void (*) (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D*, Il2CppChar*, int32_t, const RuntimeMethod*))Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline)(__this, ___0_ptr, ___1_length, method);
}
inline void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_inline (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method)
{
	((  void (*) (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*))SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_gshared_inline)(__this, ___0_span, ___1_arg, method);
}
inline void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_inline (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method)
{
	((  void (*) (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*))SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_gshared_inline)(__this, ___0_span, ___1_arg, method);
}
inline void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_inline (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method)
{
	((  void (*) (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*))SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_gshared_inline)(__this, ___0_span, ___1_arg, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) ;
inline String_t* String_JoinCore_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF8A3DA305336681152E11ADCDA63193C02C6769E (Il2CppChar* ___0_separator, int32_t ___1_separatorLength, RuntimeObject* ___2_values, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Il2CppChar*, int32_t, RuntimeObject*, const RuntimeMethod*))String_JoinCore_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF8A3DA305336681152E11ADCDA63193C02C6769E_gshared)(___0_separator, ___1_separatorLength, ___2_values, method);
}
inline String_t* String_JoinCore_TisRuntimeObject_m010137B76A888B4A77A0C668F0CAB952CF3D4E71 (Il2CppChar* ___0_separator, int32_t ___1_separatorLength, RuntimeObject* ___2_values, const RuntimeMethod* method)
{
	return ((  String_t* (*) (Il2CppChar*, int32_t, RuntimeObject*, const RuntimeMethod*))String_JoinCore_TisRuntimeObject_m010137B76A888B4A77A0C668F0CAB952CF3D4E71_gshared)(___0_separator, ___1_separatorLength, ___2_values, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741 (RuntimeObject* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilderCache_Acquire_m1CF9421EC0F3431719E18A8EE78669748DF10892 (int32_t ___0_capacity, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D (StringBuilder_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_Append_m3B01AD486432033546C698FB95D3067DCB1A1448 (StringBuilder_t* __this, Il2CppChar* ___0_value, int32_t ___1_valueCount, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* StringBuilderCache_GetStringAndRelease_m4A7AB11554F7E80352AB8C3AC72D7AD4C7108FB0 (StringBuilder_t* ___0_sb, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5 (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Byte_ToString_m64EE358F20093EE61D30F9A21638D9E9EE8F87EC (uint8_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8 (int32_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE (uint32_t* __this, String_t* ___0_format, RuntimeObject* ___1_provider, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023 (const RuntimeMethod* method) ;
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_ContinueWith_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m410879F23CD33ABB2F1482B116733C5A23824DE9 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Func_2_tBB0D7C02FB04CB15F2B32B7ED20E9B69E87AF505* ___0_continuationFunction, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___1_scheduler, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_continuationOptions, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_2_tBB0D7C02FB04CB15F2B32B7ED20E9B69E87AF505*, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, const RuntimeMethod*))Task_ContinueWith_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m410879F23CD33ABB2F1482B116733C5A23824DE9_gshared)(__this, ___0_continuationFunction, ___1_scheduler, ___2_cancellationToken, ___3_continuationOptions, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_CreationOptionsFromContinuationOptions_mE9F785FA8B0E96211D327A83E154C2DF1DDDCEFF (int32_t ___0_continuationOptions, int32_t* ___1_creationOptions, int32_t* ___2_internalOptions, const RuntimeMethod* method) ;
inline void ContinuationResultTaskFromTask_1__ctor_m3429704518F1F1E63420A7A815A9A6E0B9A6F24A (ContinuationResultTaskFromTask_1_tA9D2C0C95B63D2D2939F5296F7BD35D23B849493* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_antecedent, Delegate_t* ___1_function, RuntimeObject* ___2_state, int32_t ___3_creationOptions, int32_t ___4_internalOptions, const RuntimeMethod* method)
{
	((  void (*) (ContinuationResultTaskFromTask_1_tA9D2C0C95B63D2D2939F5296F7BD35D23B849493*, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Delegate_t*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))ContinuationResultTaskFromTask_1__ctor_m3429704518F1F1E63420A7A815A9A6E0B9A6F24A_gshared)(__this, ___0_antecedent, ___1_function, ___2_state, ___3_creationOptions, ___4_internalOptions, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Task_ContinueWithCore_m257B705F98BF64DC7C346F06711A4B32F366D8D8 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_continuationTask, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___1_scheduler, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_options, const RuntimeMethod* method) ;
inline Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64EF24758B483A0F2026841BAF84240470F23DE4 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method)
{
	return ((  Task_1_t4C228DE57804012969575431CFF12D57C875552D* (*) (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64EF24758B483A0F2026841BAF84240470F23DE4_gshared)(___0_cancellationToken, method);
}
inline Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromCancellation_TisRuntimeObject_m38025C544CE91D455E63358AB2EAA1F2D173FCE6 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method)
{
	return ((  Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* (*) (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Task_FromCancellation_TisRuntimeObject_m38025C544CE91D455E63358AB2EAA1F2D173FCE6_gshared)(___0_cancellationToken, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350 (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED* __this, const RuntimeMethod* method) ;
inline void Task_1__ctor_m912F5F25BF780F1B743BCB5FC21FEB08BB05ED52 (Task_1_t824317F4B958F7512E8F7300511752937A6C6043* __this, bool ___0_canceled, bool ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*, bool, bool, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Task_1__ctor_m912F5F25BF780F1B743BCB5FC21FEB08BB05ED52_gshared)(__this, ___0_canceled, ___1_result, ___2_creationOptions, ___3_ct, method);
}
inline void Task_1__ctor_mFF72C62F161EF9AFEBD8257BD0D74339D29166CB (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, bool ___0_canceled, int32_t ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, bool, int32_t, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Task_1__ctor_mFF72C62F161EF9AFEBD8257BD0D74339D29166CB_gshared)(__this, ___0_canceled, ___1_result, ___2_creationOptions, ___3_ct, method);
}
inline void Task_1__ctor_m08841FDA6AA08B68DFA36125A81DA6C7B54D0B99 (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, const RuntimeMethod*))Task_1__ctor_m08841FDA6AA08B68DFA36125A81DA6C7B54D0B99_gshared)(__this, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_tokenToRecord, RuntimeObject* ___1_cancellationException, const RuntimeMethod* method) ;
inline void Task_1__ctor_m3EAE7A8F72CB23D824923E6757C64465533BBC22 (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, bool ___0_canceled, RuntimeObject* ___1_result, int32_t ___2_creationOptions, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_ct, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, bool, RuntimeObject*, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Task_1__ctor_m3EAE7A8F72CB23D824923E6757C64465533BBC22_gshared)(__this, ___0_canceled, ___1_result, ___2_creationOptions, ___3_ct, method);
}
inline void Task_1__ctor_m323D56E98AFD8C95866A2866CF440831DA74657D (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*, const RuntimeMethod*))Task_1__ctor_m323D56E98AFD8C95866A2866CF440831DA74657D_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, RuntimeObject* ___0_exceptionObject, const RuntimeMethod* method) ;
inline void Task_1__ctor_m2A3A26E17D6BE69CEEC048C0599F76FE4C6D24A0 (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, const RuntimeMethod*))Task_1__ctor_m2A3A26E17D6BE69CEEC048C0599F76FE4C6D24A0_gshared)(__this, method);
}
inline void Task_1__ctor_mB3888CE20043DB96B5E044DF7193D494B41E3DA2 (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, int32_t ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, int32_t, const RuntimeMethod*))Task_1__ctor_mB3888CE20043DB96B5E044DF7193D494B41E3DA2_gshared)(__this, ___0_result, method);
}
inline void Task_1__ctor_mB819988054745A0A3BFB8F02517E248B69573289 (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, RuntimeObject* ___0_result, const RuntimeMethod* method)
{
	((  void (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, RuntimeObject*, const RuntimeMethod*))Task_1__ctor_mB819988054745A0A3BFB8F02517E248B69573289_gshared)(__this, ___0_result, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline (const RuntimeMethod* method) ;
inline Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_1_StartNew_mDC1CAEBA1AA1140287E893D3F292AC0F99017377 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_parent, Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ___1_function, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_creationOptions, int32_t ___4_internalOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___5_scheduler, const RuntimeMethod* method)
{
	return ((  Task_1_t4C228DE57804012969575431CFF12D57C875552D* (*) (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, const RuntimeMethod*))Task_1_StartNew_mDC1CAEBA1AA1140287E893D3F292AC0F99017377_gshared)(___0_parent, ___1_function, ___2_cancellationToken, ___3_creationOptions, ___4_internalOptions, ___5_scheduler, method);
}
inline Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_Run_TisRuntimeObject_mE6EC478769A44E9987615F4858FF2C8470005FF0 (Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985* ___0_function, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method)
{
	return ((  Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* (*) (Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))Task_Run_TisRuntimeObject_mE6EC478769A44E9987615F4858FF2C8470005FF0_gshared)(___0_function, ___1_cancellationToken, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline (const RuntimeMethod* method) ;
inline Task_1_t8923214371A3F5BC070C6DE37A05405486B5D868* TaskFactory_StartNew_TisTask_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_m6CFE354FC68AC3EA0563F0C420D34B6F90D91444 (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985* ___0_function, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, int32_t ___2_creationOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___3_scheduler, const RuntimeMethod* method)
{
	return ((  Task_1_t8923214371A3F5BC070C6DE37A05405486B5D868* (*) (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0*, Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, const RuntimeMethod*))TaskFactory_StartNew_TisRuntimeObject_m14FDB1694FEE097B11C3119BD89F3C350F7DE51B_gshared)(__this, ___0_function, ___1_cancellationToken, ___2_creationOptions, ___3_scheduler, method);
}
inline void UnwrapPromise_1__ctor_m444AC846B8EBC766BB59B1E3C44A2A07330D3089 (UnwrapPromise_1_tEE3DD92946C85E16C4E468CE517515B0A532C43E* __this, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_outerTask, bool ___1_lookForOce, const RuntimeMethod* method)
{
	((  void (*) (UnwrapPromise_1_tEE3DD92946C85E16C4E468CE517515B0A532C43E*, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, bool, const RuntimeMethod*))UnwrapPromise_1__ctor_m444AC846B8EBC766BB59B1E3C44A2A07330D3089_gshared)(__this, ___0_outerTask, ___1_lookForOce, method);
}
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisRuntimeObject_m15A3FDB23C39585CED64D8702F8DEAEA3D853C9F (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, RuntimeObject* ___2_arg1, RuntimeObject* ___3_state, int32_t ___4_creationOptions, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0*, Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))TaskFactory_FromAsync_TisRuntimeObject_m15A3FDB23C39585CED64D8702F8DEAEA3D853C9F_gshared)(__this, ___0_beginMethod, ___1_endMethod, ___2_arg1, ___3_state, ___4_creationOptions, method);
}
inline Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m07D8893FAE82409A470EEFE74C72A56D88F6DFFC (Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D* ___0_beginMethod, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706* ___1_endFunction, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___2_endAction, RuntimeObject* ___3_arg1, RuntimeObject* ___4_state, int32_t ___5_creationOptions, const RuntimeMethod* method)
{
	return ((  Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* (*) (Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D*, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, RuntimeObject*, RuntimeObject*, int32_t, const RuntimeMethod*))TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m07D8893FAE82409A470EEFE74C72A56D88F6DFFC_gshared)(___0_beginMethod, ___1_endFunction, ___2_endAction, ___3_arg1, ___4_state, ___5_creationOptions, method);
}
inline Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1D52B923BD701D21EA3025AA8766D95C2463D02B (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_tA07BEDDD813173420A179C25AEDEA235CEB634BB* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, RuntimeObject* ___2_arg1, int32_t ___3_arg2, RuntimeObject* ___4_state, int32_t ___5_creationOptions, const RuntimeMethod* method)
{
	return ((  Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* (*) (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0*, Func_5_tA07BEDDD813173420A179C25AEDEA235CEB634BB*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, RuntimeObject*, int32_t, RuntimeObject*, int32_t, const RuntimeMethod*))TaskFactory_FromAsync_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1D52B923BD701D21EA3025AA8766D95C2463D02B_gshared)(__this, ___0_beginMethod, ___1_endMethod, ___2_arg1, ___3_arg2, ___4_state, ___5_creationOptions, method);
}
inline Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7D9FA6F2A19B70C8115DB6EE2ECCE8FDEAAEB482 (Func_5_tA07BEDDD813173420A179C25AEDEA235CEB634BB* ___0_beginMethod, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706* ___1_endFunction, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___2_endAction, RuntimeObject* ___3_arg1, int32_t ___4_arg2, RuntimeObject* ___5_state, int32_t ___6_creationOptions, const RuntimeMethod* method)
{
	return ((  Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* (*) (Func_5_tA07BEDDD813173420A179C25AEDEA235CEB634BB*, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, RuntimeObject*, int32_t, RuntimeObject*, int32_t, const RuntimeMethod*))TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7D9FA6F2A19B70C8115DB6EE2ECCE8FDEAAEB482_gshared)(___0_beginMethod, ___1_endFunction, ___2_endAction, ___3_arg1, ___4_arg2, ___5_state, ___6_creationOptions, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* Task_InternalCurrentIfAttached_mBF043F869DEB200F3129DB7CE48C64BA0A85B58C (int32_t ___0_creationOptions, const RuntimeMethod* method) ;
inline Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_1_StartNew_m0057E0BA0B7F816CAAB48423DB419286E5634431 (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_parent, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___1_function, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_creationOptions, int32_t ___4_internalOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___5_scheduler, const RuntimeMethod* method)
{
	return ((  Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* (*) (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, const RuntimeMethod*))Task_1_StartNew_m0057E0BA0B7F816CAAB48423DB419286E5634431_gshared)(___0_parent, ___1_function, ___2_cancellationToken, ___3_creationOptions, ___4_internalOptions, ___5_scheduler, method);
}
inline Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_1_StartNew_m3716C9AEC763488A7E54F556F38450E878DF829A (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* ___0_parent, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___1_function, RuntimeObject* ___2_state, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___3_cancellationToken, int32_t ___4_creationOptions, int32_t ___5_internalOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___6_scheduler, const RuntimeMethod* method)
{
	return ((  Task_1_t824317F4B958F7512E8F7300511752937A6C6043* (*) (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, const RuntimeMethod*))Task_1_StartNew_m3716C9AEC763488A7E54F556F38450E878DF829A_gshared)(___0_parent, ___1_function, ___2_state, ___3_cancellationToken, ___4_creationOptions, ___5_internalOptions, ___6_scheduler, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9 (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* __this, const RuntimeMethod* method) ;
inline TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843 (Task_1_t4C228DE57804012969575431CFF12D57C875552D* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E (*) (Task_1_t4C228DE57804012969575431CFF12D57C875552D*, const RuntimeMethod*))Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843_gshared)(__this, method);
}
inline int32_t TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80 (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E* __this, const RuntimeMethod* method)
{
	return ((  int32_t (*) (TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80_gshared)(__this, method);
}
inline TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3 (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* __this, const RuntimeMethod* method)
{
	return ((  TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA (*) (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*, const RuntimeMethod*))Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3_gshared)(__this, method);
}
inline RuntimeObject* TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA* __this, const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA*, const RuntimeMethod*))TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B_gshared)(__this, method);
}
inline void U3CU3Ec__DisplayClass17_0_1__ctor_m5CA33CA454BC6B0EDE091B120839E1203DFBDDE9 (U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29* __this, const RuntimeMethod* method)
{
	((  void (*) (U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29*, const RuntimeMethod*))U3CU3Ec__DisplayClass17_0_1__ctor_m5CA33CA454BC6B0EDE091B120839E1203DFBDDE9_gshared)(__this, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* __this, RuntimeObject* ___0_object, intptr_t ___1_method, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItemHelper_m5B98C28FB6C9379B8DDD302ABC3D1D1FC1779EDD (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* ___0_callBack, RuntimeObject* ___1_state, int32_t* ___2_stackMark, bool ___3_compressStack, bool ___4_forceGlobal, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC (int32_t ___0_argument, const RuntimeMethod* method) ;
inline void Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_array, int32_t ___1_newSize, const RuntimeMethod* method)
{
	((  void (*) (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**, int32_t, const RuntimeMethod*))Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E_gshared)(___0_array, ___1_newSize, method);
}
inline void List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, RuntimeObject* ___0_collection, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, RuntimeObject*, const RuntimeMethod*))List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424_gshared)(__this, ___0_collection, method);
}
inline void List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54 (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	((  void (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, int32_t, const RuntimeMethod*))List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54_gshared)(__this, ___0_index, method);
}
inline ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* __this, const RuntimeMethod* method)
{
	return ((  ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* (*) (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*, const RuntimeMethod*))List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F_gshared)(__this, method);
}
inline void Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489 (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* __this, RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, const RuntimeMethod* method)
{
	((  void (*) (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489_gshared)(__this, ___0_item1, ___1_item2, method);
}
inline void Tuple_3__ctor_mD9AAD1E691AD4F828FF40E1E30DBFCD821DDA70C (Tuple_3_t76B18FDDE87BFB452CF969BC16B10789E225FCF6* __this, RuntimeObject* ___0_item1, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___1_item2, RuntimeObject* ___2_item3, const RuntimeMethod* method)
{
	((  void (*) (Tuple_3_t76B18FDDE87BFB452CF969BC16B10789E225FCF6*, RuntimeObject*, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036, RuntimeObject*, const RuntimeMethod*))Tuple_3__ctor_mD9AAD1E691AD4F828FF40E1E30DBFCD821DDA70C_gshared)(__this, ___0_item1, ___1_item2, ___2_item3, method);
}
inline void Tuple_3__ctor_m6AEF789D0F9924D31EF4C5A29232A093E1D05D4A (Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF* __this, RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, RuntimeObject* ___2_item3, const RuntimeMethod* method)
{
	((  void (*) (Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF*, RuntimeObject*, RuntimeObject*, RuntimeObject*, const RuntimeMethod*))Tuple_3__ctor_m6AEF789D0F9924D31EF4C5A29232A093E1D05D4A_gshared)(__this, ___0_item1, ___1_item2, ___2_item3, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, const RuntimeMethod* method) ;
inline void TypeConstructor_1__ctor_mA44AE4CA2839F2717B9950321247E9AA135D7B5C (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695*, const RuntimeMethod*))TypeConstructor_1__ctor_mA44AE4CA2839F2717B9950321247E9AA135D7B5C_gshared)(__this, method);
}
inline void ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1 (ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* __this, Type_t* ___0_key, RuntimeObject* ___1_value, const RuntimeMethod* method)
{
	((  void (*) (ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91*, Type_t*, RuntimeObject*, const RuntimeMethod*))ConcurrentDictionary_2_set_Item_m95DD60ECF2EBCA55F2EC3B0AC122FE0C0D7D4E39_gshared)(__this, ___0_key, ___1_value, method);
}
inline void TypeConstructor_1__ctor_mBDEC850104319B918A6CBE0A5FC8CF72FE449073 (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B*, const RuntimeMethod*))TypeConstructor_1__ctor_mBDEC850104319B918A6CBE0A5FC8CF72FE449073_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_m59D284115DFA693528774482859F9EAE2D2574A3 (TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084*, const RuntimeMethod*))TypeConstructor_1__ctor_m59D284115DFA693528774482859F9EAE2D2574A3_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_m02302139520CED9AE781B727D6E067D5D860B16E (TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878*, const RuntimeMethod*))TypeConstructor_1__ctor_m02302139520CED9AE781B727D6E067D5D860B16E_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_mD1ED26178C74371350CCA90F7F0AA542DA05C0D2 (TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF*, const RuntimeMethod*))TypeConstructor_1__ctor_mD1ED26178C74371350CCA90F7F0AA542DA05C0D2_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_m57EBE4991938D5FD61C4CC1CBA2995AD683397E0 (TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16*, const RuntimeMethod*))TypeConstructor_1__ctor_m57EBE4991938D5FD61C4CC1CBA2995AD683397E0_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_m74203C1B59EBD226404F82D4FE8ECCE279763902 (TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353*, const RuntimeMethod*))TypeConstructor_1__ctor_m74203C1B59EBD226404F82D4FE8ECCE279763902_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_mDE1389C84380C4456818EB59CA7C49951026B1D6 (TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947*, const RuntimeMethod*))TypeConstructor_1__ctor_mDE1389C84380C4456818EB59CA7C49951026B1D6_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_mF487A9F2F4B6893A278DDD2CA281144354953FB1 (TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC*, const RuntimeMethod*))TypeConstructor_1__ctor_mF487A9F2F4B6893A278DDD2CA281144354953FB1_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_mDAFDA633F7A4D154406F63CE7E031CA7299715DE (TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B*, const RuntimeMethod*))TypeConstructor_1__ctor_mDAFDA633F7A4D154406F63CE7E031CA7299715DE_gshared)(__this, method);
}
inline void TypeConstructor_1__ctor_mE6B1A176CB56765080C95ECB263601E5ECC97ADB (TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA* __this, const RuntimeMethod* method)
{
	((  void (*) (TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA*, const RuntimeMethod*))TypeConstructor_1__ctor_mE6B1A176CB56765080C95ECB263601E5ECC97ADB_gshared)(__this, method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_GetTypeConstructor_m46157C15601C266EE0DB2324E834E1CE4CBFE1DC (Type_t* ___0_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_CheckIsAssignableFrom_m284900A7E86ACD68227E5E3DCC9430EEC7E1E03E (Type_t* ___0_type, Type_t* ___1_derivedType, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_CheckCanBeInstantiated_mB2C921D41DC94D83758FC5CFDFEE26911F62B14F (RuntimeObject* ___0_constructor, Type_t* ___1_type, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C (String_t* ___0_format, RuntimeObject* ___1_arg0, RuntimeObject* ___2_arg1, RuntimeObject* ___3_arg2, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465 (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* __this, String_t* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673 (Type_t* __this, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeArray* Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983 (Type_t* ___0_elementType, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* PropertyBagStore_GetPropertyBag_m90F2EBB48D60993594856358C572964C8011143E (Type_t* ___0_type, const RuntimeMethod* method) ;
inline RuntimeObject* TypeUtility_GetTypeConstructor_TisRuntimeObject_m16C0BB9AC6C9E7396BA85526EC8A55AF216579DB (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_GetTypeConstructor_TisRuntimeObject_m16C0BB9AC6C9E7396BA85526EC8A55AF216579DB_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D (void* ___0_value, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5 (int64_t ___0_size, int32_t ___1_align, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_allocator, const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline (int32_t ___0_x, const RuntimeMethod* method) ;
inline int32_t UnsafeHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mC69CF5F77034B30127E3A3CE8A94210AB31737A7 (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method)
{
	return ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))UnsafeHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mC69CF5F77034B30127E3A3CE8A94210AB31737A7_gshared)(___0_length, ___1_bucketLength, ___2_keyOffset, ___3_nextOffset, ___4_bucketOffset, method);
}
inline int32_t UnsafeUtility_SizeOf_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m37642672DB5CD7B67DB139840F4726D718053FA2_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m37642672DB5CD7B67DB139840F4726D718053FA2_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F (int32_t ___0_size, int32_t ___1_alignmentPowerOfTwo, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177 (void* ___0_destination, void* ___1_source, int64_t ___2_size, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method)
{
	return ((  int32_t (*) (void*, int32_t, const RuntimeMethod*))UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline)(___0_source, ___1_index, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295 (int32_t* __this, const RuntimeMethod* method) ;
inline void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271 (uint8_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method)
{
	((  void (*) (uint8_t*, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_gshared)(___0_pointer, ___1_allocator, method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285_m36333D7DA62EC901BF7F5593E1C61159F6FE176E_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285_m36333D7DA62EC901BF7F5593E1C61159F6FE176E_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m012D9D895FCD4DFB1B9CD8A5C7DA209064892673_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m012D9D895FCD4DFB1B9CD8A5C7DA209064892673_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEAFB355EAD711C8A0A6C9253A911701A3A1811A3_m2C55A5FA6211209E949A2D0432016F3691BD1979_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEAFB355EAD711C8A0A6C9253A911701A3A1811A3_m2C55A5FA6211209E949A2D0432016F3691BD1979_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mEFCBE2CF7FA5F05ACDFD7B04B7BAF4F558B2D2E1_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mEFCBE2CF7FA5F05ACDFD7B04B7BAF4F558B2D2E1_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t77D164DCA1370DB06991787EC849693AD5DE98F8_mD5B9EC6615744171560BC7D3B1EC5B6BB1536EF9_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t77D164DCA1370DB06991787EC849693AD5DE98F8_mD5B9EC6615744171560BC7D3B1EC5B6BB1536EF9_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6864EB88E23CEEC413BB947FF5D6F7B523DFD63E_m018E07080C6819DE13199CF6FFD8A7A005260001_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6864EB88E23CEEC413BB947FF5D6F7B523DFD63E_m018E07080C6819DE13199CF6FFD8A7A005260001_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mD2F34AAB2050E90842D914F6E4ACCC10746C260D_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mD2F34AAB2050E90842D914F6E4ACCC10746C260D_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2_mEC1CDBD0303261903CC17065EED96AF65D1B1613_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2_mEC1CDBD0303261903CC17065EED96AF65D1B1613_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A_mF99262281A6D71ED25E8514C549FC0EA1AB98A8C_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A_mF99262281A6D71ED25E8514C549FC0EA1AB98A8C_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEE3DDAFA529F9402C6A7F47BFB9A6FF91410C2BE_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEE3DDAFA529F9402C6A7F47BFB9A6FF91410C2BE_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3_mBA38EFAD1B8A7BDB8EC1E91B633140F2EEDBA5E8_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3_mBA38EFAD1B8A7BDB8EC1E91B633140F2EEDBA5E8_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA1D9D36CBE8FF25BF6FFF35C56E697C87CBC2432_mE583CE23D33B55B88A444ED83330E581B444B03B_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA1D9D36CBE8FF25BF6FFF35C56E697C87CBC2432_mE583CE23D33B55B88A444ED83330E581B444B03B_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18_mB5B2CAC6A7BDCEEA6F8EBD2A77E6184121CC1C26_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18_mB5B2CAC6A7BDCEEA6F8EBD2A77E6184121CC1C26_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mB02E6C828323C4B414AB855EA914B81EADADEB68_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mB02E6C828323C4B414AB855EA914B81EADADEB68_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC_m5386ED14552A503327F5B80EFD0A47BBC1DAEA36_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC_m5386ED14552A503327F5B80EFD0A47BBC1DAEA36_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3E93E3D3F245D3AACCB1346E8FEFD7BAC2ABBC4C_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3E93E3D3F245D3AACCB1346E8FEFD7BAC2ABBC4C_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t3A1BED5F39B5F62BB069F44DF1E7D56297566819_mD59C7C286BCDFE91575A2BF38DE2084D75C3732C_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t3A1BED5F39B5F62BB069F44DF1E7D56297566819_mD59C7C286BCDFE91575A2BF38DE2084D75C3732C_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_m261E33D42C760ACF61B9CB887B8FAEFCA07DB43B_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_m261E33D42C760ACF61B9CB887B8FAEFCA07DB43B_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328_mEF523B86365836B22C21116B4D437CE2DA880EF6_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328_mEF523B86365836B22C21116B4D437CE2DA880EF6_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC98A334942D13D3EBBEAE20C5BB187A0A0ADF14E_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC98A334942D13D3EBBEAE20C5BB187A0A0ADF14E_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t600295FA5C38F4F394A0301527136058CD27614C_m3CCAF853FC0B73E27559210D07175B39C40C5D4D_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t600295FA5C38F4F394A0301527136058CD27614C_m3CCAF853FC0B73E27559210D07175B39C40C5D4D_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m2D05EEE3FACF18840E1F713AA271F5B7B968C4F6_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m2D05EEE3FACF18840E1F713AA271F5B7B968C4F6_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t50F261D3D99DB1091DC5FADAFCE1736E30517A33_mA3279E5BB58B4A27F4990F6294EC9F26CC40AB87_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t50F261D3D99DB1091DC5FADAFCE1736E30517A33_mA3279E5BB58B4A27F4990F6294EC9F26CC40AB87_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_mFE4197E975C1006D02005551269071807CA3EF78_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_mFE4197E975C1006D02005551269071807CA3EF78_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56_m203557A8987FE4C04012B390642F55416B593249_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56_m203557A8987FE4C04012B390642F55416B593249_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DD322328DA83780B700E31BC9725EB652C968D_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DD322328DA83780B700E31BC9725EB652C968D_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t41BC3A9B75E657E395EC5E35CBD5426B52AE4D90_mF9E7F48C5EC348FF3B078B28856201CAE3B6769F_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t41BC3A9B75E657E395EC5E35CBD5426B52AE4D90_mF9E7F48C5EC348FF3B078B28856201CAE3B6769F_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mB7D37495508235F73EE531B6F13D8D862B0E4B05_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mB7D37495508235F73EE531B6F13D8D862B0E4B05_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t44748AC00241E124F016371B08CF251CC22577D4_m06FDD1D387A81F0F868564BB74736F417418C2ED_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t44748AC00241E124F016371B08CF251CC22577D4_m06FDD1D387A81F0F868564BB74736F417418C2ED_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t011E0A6A1CE5BB662014F6F7D560D62F3044E227_m3A555507D3794AA55E2DA800BA4A3B615515BE59_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t011E0A6A1CE5BB662014F6F7D560D62F3044E227_m3A555507D3794AA55E2DA800BA4A3B615515BE59_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB95F2BE00B68117D1DF84661261D1FBCA90144D4_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB95F2BE00B68117D1DF84661261D1FBCA90144D4_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269_mC54E2B7F10608DFB3EE95E30764C2B377DE5A296_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269_mC54E2B7F10608DFB3EE95E30764C2B377DE5A296_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB2AF8CA03DEC485BAD3A37CCBE5CDEBA3C67758C_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB2AF8CA03DEC485BAD3A37CCBE5CDEBA3C67758C_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2_mC176BFF838A45ADE4211E6BF15C79073687F26FB_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2_mC176BFF838A45ADE4211E6BF15C79073687F26FB_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4FC0676786D4504DFB463E079B49B98660853217_m50DBA733297972A955D96A533F2A1F3BE853BC38_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4FC0676786D4504DFB463E079B49B98660853217_m50DBA733297972A955D96A533F2A1F3BE853BC38_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m3AD29AA7E6279412E3C8AA9DAA54CF2186113297_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m3AD29AA7E6279412E3C8AA9DAA54CF2186113297_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tFA851D5782D452C4B2E6265604AD87D652390B55_m015C8659A60B24F46F8434AC0DB817AAF9EE260C_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_tFA851D5782D452C4B2E6265604AD87D652390B55_m015C8659A60B24F46F8434AC0DB817AAF9EE260C_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m0BD2704CD677D45FAEDAD35D6C7208EE167961F7_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m0BD2704CD677D45FAEDAD35D6C7208EE167961F7_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6184AB8A4DDD7E3615F65119999BE030DC55BB69_m9360663DE613AAE1D0A1DE71FA5E7694B5438C73_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6184AB8A4DDD7E3615F65119999BE030DC55BB69_m9360663DE613AAE1D0A1DE71FA5E7694B5438C73_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m90780EC8030A711CE1682E39A74278F5F6BBD031_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m90780EC8030A711CE1682E39A74278F5F6BBD031_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8BCA7BF89790AD2881377ABB090D9BFDE5669990_mA7019F84732E6FF4708040D34A52D5C1A8AD2E53_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8BCA7BF89790AD2881377ABB090D9BFDE5669990_mA7019F84732E6FF4708040D34A52D5C1A8AD2E53_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mC4FF8279635DE447534004C94461FC84DCECE5E6_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mC4FF8279635DE447534004C94461FC84DCECE5E6_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t68C3D8AC24508C31F35B828E6206CA7933E9B711_mFD97DC95FC388CD9482935B0A0B60279DA85D751_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisAlignOfHelper_1_t68C3D8AC24508C31F35B828E6206CA7933E9B711_mFD97DC95FC388CD9482935B0A0B60279DA85D751_gshared_inline)(method);
}
inline int32_t UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_gshared_inline)(method);
}
inline void UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_t7017FC063B433EE93203EDB06EA021B1A1032CE9_m4AC570CE30498ACB444F69795D2CBE09D49A7928 (void* ___0_ptr, TransformJobData_t7017FC063B433EE93203EDB06EA021B1A1032CE9* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, TransformJobData_t7017FC063B433EE93203EDB06EA021B1A1032CE9*, const RuntimeMethod*))UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_t7017FC063B433EE93203EDB06EA021B1A1032CE9_m4AC570CE30498ACB444F69795D2CBE09D49A7928_gshared)(___0_ptr, ___1_output, method);
}
inline void UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC_m973651D4A07FDB90F66530979DDA4DD3E44B669A (void* ___0_ptr, TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC* ___1_output, const RuntimeMethod* method)
{
	((  void (*) (void*, TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC*, const RuntimeMethod*))UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC_m973651D4A07FDB90F66530979DDA4DD3E44B669A_gshared)(___0_ptr, ___1_output, method);
}
inline Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method)
{
	return ((  Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7_gshared)(___0_value, method);
}
inline Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method)
{
	return ((  Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489, const RuntimeMethod*))Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_gshared_inline)(___0_left, ___1_right, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool bd_vz_m9378F1E85AC141435A560BBCBB007EF4F83E7995_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478 (String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Type_t* bd_we_m703096640BB78201CE1837FBB2F21F4751A3F94B (String_t* ___0_a, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PropertyInfo_t* Type_GetProperty_m6E63875E6098E89250149F4E76FAD40844708391 (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool PropertyInfo_op_Equality_m3BFC2276AECF2A16B66F171D65516817B4578B4F (PropertyInfo_t* ___0_left, PropertyInfo_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1 (MethodInfo_t* ___0_left, MethodInfo_t* ___1_right, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Delegate_t* Delegate_CreateDelegate_mDBC5DC9EA0E8CB940DAFFBAC763E586C48E115D6 (Type_t* ___0_type, MethodInfo_t* ___1_method, bool ___2_throwOnBindFailure, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1 (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m093934F71A9B351911EE46311674ED463B180006 (String_t* ___0_str0, String_t* ___1_str1, String_t* ___2_str2, String_t* ___3_str3, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MethodInfo_t* Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D (Type_t* __this, String_t* ___0_name, int32_t ___1_bindingAttr, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* ___0_values, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2 (RuntimeObject* ___0_message, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0 (String_t* __this, String_t* ___0_value, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE (String_t* __this, int32_t ___0_startIndex, int32_t ___1_length, const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A (RuntimeObject* ___0_value, Type_t* ___1_conversionType, const RuntimeMethod* method) ;
inline uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0 (uint8_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  uint8_t* (*) (uint8_t*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9 (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* (*) (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3 (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method)
{
	return ((  MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* (*) (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3_gshared)(___0_oldPointer, ___1_oldCount, ___2_newCount, ___3_allocator, method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared)(method);
}
inline RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9 (const RuntimeMethod* method)
{
	return ((  RuntimeObject* (*) (const RuntimeMethod*))TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9_gshared)(method);
}
inline int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380 (void* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, int64_t ___4_size, int32_t ___5_align, const RuntimeMethod* method) ;
inline int32_t UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05 (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05_gshared)(method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA (const RuntimeMethod* method) ;
inline int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline (const RuntimeMethod* method)
{
	return ((  int32_t (*) (const RuntimeMethod*))Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline)(method);
}
inline uint16_t Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, int32_t ___0_index, const RuntimeMethod* method)
{
	return ((  uint16_t (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, int32_t, const RuntimeMethod*))Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27_gshared)(__this, ___0_index, method);
}
inline bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method)
{
	return ((  bool (*) (uint16_t, uint16_t, const RuntimeMethod*))Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline)(___0_left, ___1_right, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline (const RuntimeMethod* method) ;
inline void Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3 (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, void* ___0_dataPointer, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, void*, const RuntimeMethod*))Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3_gshared)(__this, ___0_dataPointer, method);
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline (const RuntimeMethod* method) ;
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline (const RuntimeMethod* method) ;
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* __this, String_t* ___0_message, const RuntimeMethod* method) ;
inline void Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489* __this, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* ___0_existingRegister, const RuntimeMethod* method)
{
	((  void (*) (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*, Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A*, const RuntimeMethod*))Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A_gshared)(__this, ___0_existingRegister, method);
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFD6C53B2AC2CBE5550C3945139F0A79D9D2D6850_gshared (int32_t ___0_channel, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		V_0 = (bool)0;
		int32_t L_0 = ___0_channel;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_0065;
			}
			case 3:
			{
				goto IL_0081;
			}
			case 4:
			{
				goto IL_009d;
			}
			case 5:
			{
				goto IL_009d;
			}
			case 6:
			{
				goto IL_009d;
			}
			case 7:
			{
				goto IL_009d;
			}
			case 8:
			{
				goto IL_009d;
			}
			case 9:
			{
				goto IL_009d;
			}
			case 10:
			{
				goto IL_009d;
			}
			case 11:
			{
				goto IL_009d;
			}
			case 12:
			{
				goto IL_00b9;
			}
		}
	}
	{
		goto IL_00d5;
	}

IL_0046:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		V_0 = L_7;
		goto IL_00eb;
	}

IL_0065:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		V_0 = L_12;
		goto IL_00eb;
	}

IL_0081:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		V_0 = L_17;
		goto IL_00eb;
	}

IL_009d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		bool L_22;
		L_22 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_19, L_21, NULL);
		V_0 = L_22;
		goto IL_00eb;
	}

IL_00b9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_0_0_0_var) };
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		bool L_27;
		L_27 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_24, L_26, NULL);
		V_0 = L_27;
		goto IL_00eb;
	}

IL_00d5:
	{
		int32_t L_28 = ___0_channel;
		int32_t L_29 = L_28;
		RuntimeObject* L_30 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_29);
		String_t* L_31;
		L_31 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C32FB7BD7AFDE19CE5858E4EC392FADC0892DBC)), L_30, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_32 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_32, L_31, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, method);
	}

IL_00eb:
	{
		bool L_33 = V_0;
		V_3 = (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_3;
		if (!L_34)
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_35 = ___0_channel;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_36);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		NullCheck((MemberInfo_t*)L_39);
		String_t* L_40;
		L_40 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_39);
		String_t* L_41;
		L_41 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1502EDED1093B03DA1C847BC5F555B62BD858FDC)), L_37, (RuntimeObject*)L_40, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_42 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_42, L_41, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_0118:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13358A837F48F4EBF20D240912AA387837EFE018_gshared (int32_t ___0_channel, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		V_0 = (bool)0;
		int32_t L_0 = ___0_channel;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_0065;
			}
			case 3:
			{
				goto IL_0081;
			}
			case 4:
			{
				goto IL_009d;
			}
			case 5:
			{
				goto IL_009d;
			}
			case 6:
			{
				goto IL_009d;
			}
			case 7:
			{
				goto IL_009d;
			}
			case 8:
			{
				goto IL_009d;
			}
			case 9:
			{
				goto IL_009d;
			}
			case 10:
			{
				goto IL_009d;
			}
			case 11:
			{
				goto IL_009d;
			}
			case 12:
			{
				goto IL_00b9;
			}
		}
	}
	{
		goto IL_00d5;
	}

IL_0046:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		V_0 = L_7;
		goto IL_00eb;
	}

IL_0065:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		V_0 = L_12;
		goto IL_00eb;
	}

IL_0081:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		V_0 = L_17;
		goto IL_00eb;
	}

IL_009d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		bool L_22;
		L_22 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_19, L_21, NULL);
		V_0 = L_22;
		goto IL_00eb;
	}

IL_00b9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_0_0_0_var) };
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		bool L_27;
		L_27 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_24, L_26, NULL);
		V_0 = L_27;
		goto IL_00eb;
	}

IL_00d5:
	{
		int32_t L_28 = ___0_channel;
		int32_t L_29 = L_28;
		RuntimeObject* L_30 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_29);
		String_t* L_31;
		L_31 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C32FB7BD7AFDE19CE5858E4EC392FADC0892DBC)), L_30, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_32 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_32, L_31, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, method);
	}

IL_00eb:
	{
		bool L_33 = V_0;
		V_3 = (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_3;
		if (!L_34)
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_35 = ___0_channel;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_36);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		NullCheck((MemberInfo_t*)L_39);
		String_t* L_40;
		L_40 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_39);
		String_t* L_41;
		L_41 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1502EDED1093B03DA1C847BC5F555B62BD858FDC)), L_37, (RuntimeObject*)L_40, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_42 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_42, L_41, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_0118:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB27DCB146CDAD183C3D17F0715F34CF1CBBD3893_gshared (int32_t ___0_channel, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		V_0 = (bool)0;
		int32_t L_0 = ___0_channel;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_0065;
			}
			case 3:
			{
				goto IL_0081;
			}
			case 4:
			{
				goto IL_009d;
			}
			case 5:
			{
				goto IL_009d;
			}
			case 6:
			{
				goto IL_009d;
			}
			case 7:
			{
				goto IL_009d;
			}
			case 8:
			{
				goto IL_009d;
			}
			case 9:
			{
				goto IL_009d;
			}
			case 10:
			{
				goto IL_009d;
			}
			case 11:
			{
				goto IL_009d;
			}
			case 12:
			{
				goto IL_00b9;
			}
		}
	}
	{
		goto IL_00d5;
	}

IL_0046:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		V_0 = L_7;
		goto IL_00eb;
	}

IL_0065:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		V_0 = L_12;
		goto IL_00eb;
	}

IL_0081:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		V_0 = L_17;
		goto IL_00eb;
	}

IL_009d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		bool L_22;
		L_22 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_19, L_21, NULL);
		V_0 = L_22;
		goto IL_00eb;
	}

IL_00b9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_0_0_0_var) };
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		bool L_27;
		L_27 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_24, L_26, NULL);
		V_0 = L_27;
		goto IL_00eb;
	}

IL_00d5:
	{
		int32_t L_28 = ___0_channel;
		int32_t L_29 = L_28;
		RuntimeObject* L_30 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_29);
		String_t* L_31;
		L_31 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C32FB7BD7AFDE19CE5858E4EC392FADC0892DBC)), L_30, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_32 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_32, L_31, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, method);
	}

IL_00eb:
	{
		bool L_33 = V_0;
		V_3 = (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_3;
		if (!L_34)
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_35 = ___0_channel;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_36);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		NullCheck((MemberInfo_t*)L_39);
		String_t* L_40;
		L_40 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_39);
		String_t* L_41;
		L_41 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1502EDED1093B03DA1C847BC5F555B62BD858FDC)), L_37, (RuntimeObject*)L_40, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_42 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_42, L_41, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_0118:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisIl2CppFullySharedGenericAny_mF0922CAD095454417C8E17BCC7AFE746131A9275_gshared (int32_t ___0_channel, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	bool V_3 = false;
	{
		V_0 = (bool)0;
		int32_t L_0 = ___0_channel;
		V_2 = L_0;
		int32_t L_1 = V_2;
		V_1 = L_1;
		int32_t L_2 = V_1;
		switch (L_2)
		{
			case 0:
			{
				goto IL_0046;
			}
			case 1:
			{
				goto IL_0046;
			}
			case 2:
			{
				goto IL_0065;
			}
			case 3:
			{
				goto IL_0081;
			}
			case 4:
			{
				goto IL_009d;
			}
			case 5:
			{
				goto IL_009d;
			}
			case 6:
			{
				goto IL_009d;
			}
			case 7:
			{
				goto IL_009d;
			}
			case 8:
			{
				goto IL_009d;
			}
			case 9:
			{
				goto IL_009d;
			}
			case 10:
			{
				goto IL_009d;
			}
			case 11:
			{
				goto IL_009d;
			}
			case 12:
			{
				goto IL_00b9;
			}
		}
	}
	{
		goto IL_00d5;
	}

IL_0046:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_5 = { reinterpret_cast<intptr_t> (Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_0_0_0_var) };
		Type_t* L_6;
		L_6 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_5, NULL);
		bool L_7;
		L_7 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_4, L_6, NULL);
		V_0 = L_7;
		goto IL_00eb;
	}

IL_0065:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_8 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_9;
		L_9 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_8, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_10 = { reinterpret_cast<intptr_t> (Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_0_0_0_var) };
		Type_t* L_11;
		L_11 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_10, NULL);
		bool L_12;
		L_12 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_9, L_11, NULL);
		V_0 = L_12;
		goto IL_00eb;
	}

IL_0081:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (Color32_t73C5004937BF5BB8AD55323D51AAA40A898EF48B_0_0_0_var) };
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		bool L_17;
		L_17 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_14, L_16, NULL);
		V_0 = L_17;
		goto IL_00eb;
	}

IL_009d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_18 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_19;
		L_19 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_18, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_0_0_0_var) };
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		bool L_22;
		L_22 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_19, L_21, NULL);
		V_0 = L_22;
		goto IL_00eb;
	}

IL_00b9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_23 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_24;
		L_24 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_23, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_25 = { reinterpret_cast<intptr_t> (BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_0_0_0_var) };
		Type_t* L_26;
		L_26 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_25, NULL);
		bool L_27;
		L_27 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_24, L_26, NULL);
		V_0 = L_27;
		goto IL_00eb;
	}

IL_00d5:
	{
		int32_t L_28 = ___0_channel;
		int32_t L_29 = L_28;
		RuntimeObject* L_30 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_29);
		String_t* L_31;
		L_31 = String_Format_mA8DBB4C2516B9723C5A41E6CB1E2FAF4BBE96DD8(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7C32FB7BD7AFDE19CE5858E4EC392FADC0892DBC)), L_30, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_32 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_32, L_31, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_32, method);
	}

IL_00eb:
	{
		bool L_33 = V_0;
		V_3 = (bool)((((int32_t)L_33) == ((int32_t)0))? 1 : 0);
		bool L_34 = V_3;
		if (!L_34)
		{
			goto IL_0118;
		}
	}
	{
		int32_t L_35 = ___0_channel;
		int32_t L_36 = L_35;
		RuntimeObject* L_37 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&VertexAttribute_tF34C1B76F20CA4AEC9D606BCD37A8A0C4A24C9A6_il2cpp_TypeInfo_var)), &L_36);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_38 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_39;
		L_39 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_38, NULL);
		NullCheck((MemberInfo_t*)L_39);
		String_t* L_40;
		L_40 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_39);
		String_t* L_41;
		L_41 = String_Format_mFB7DA489BD99F4670881FF50EC017BFB0A5C0987(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1502EDED1093B03DA1C847BC5F555B62BD858FDC)), L_37, (RuntimeObject*)L_40, NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_42 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_42, L_41, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_42, method);
	}

IL_0118:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 SpriteDataAccessExtensions_GetVertexAttribute_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mE113D95D7B8893E1AE443F19948DDD6AEEC75975_gshared (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, int32_t ___1_channel, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = ___1_channel;
		SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mC616C20F98C18ADE02810AB4A6005DB6F19B2231(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___0_sprite;
		int32_t L_2 = ___1_channel;
		SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA L_3;
		L_3 = SpriteDataAccessExtensions_GetChannelInfo_mFD515C42E45421F85D62EB47E5EEB5FE99A21CA3(L_1, L_2, NULL);
		V_0 = L_3;
		void* L_4;
		L_4 = SpriteChannelInfo_get_buffer_m897E681FF93F5EE652D9AB8D8E31062AB860FF15((&V_0), NULL);
		int32_t L_5;
		L_5 = SpriteChannelInfo_get_offset_m197B24414AEFF48823BF94AC6035C6D6D567383F((&V_0), NULL);
		V_1 = (uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, L_5));
		uint8_t* L_6 = V_1;
		int32_t L_7;
		L_7 = SpriteChannelInfo_get_stride_m93347B66A199DB44E375BEB8275FD7D68728981F((&V_0), NULL);
		int32_t L_8;
		L_8 = SpriteChannelInfo_get_count_m533E5BAABF579F8C67CB4272A71E699C3E161C18((&V_0), NULL);
		NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 L_9;
		L_9 = NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m9744FD59328829552BE4130D1C9F68FFCB11E34C((void*)L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_9;
		NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 L_10 = V_2;
		V_3 = L_10;
		goto IL_0039;
	}

IL_0039:
	{
		NativeSlice_1_tCC36EBD5A623BDA3FF33D6F6B3F46F253AE626A8 L_11 = V_3;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF SpriteDataAccessExtensions_GetVertexAttribute_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m7CA697F0213ED4F06F7D03177BFED3DA37615CCD_gshared (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, int32_t ___1_channel, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = ___1_channel;
		SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mFD6C53B2AC2CBE5550C3945139F0A79D9D2D6850(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___0_sprite;
		int32_t L_2 = ___1_channel;
		SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA L_3;
		L_3 = SpriteDataAccessExtensions_GetChannelInfo_mFD515C42E45421F85D62EB47E5EEB5FE99A21CA3(L_1, L_2, NULL);
		V_0 = L_3;
		void* L_4;
		L_4 = SpriteChannelInfo_get_buffer_m897E681FF93F5EE652D9AB8D8E31062AB860FF15((&V_0), NULL);
		int32_t L_5;
		L_5 = SpriteChannelInfo_get_offset_m197B24414AEFF48823BF94AC6035C6D6D567383F((&V_0), NULL);
		V_1 = (uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, L_5));
		uint8_t* L_6 = V_1;
		int32_t L_7;
		L_7 = SpriteChannelInfo_get_stride_m93347B66A199DB44E375BEB8275FD7D68728981F((&V_0), NULL);
		int32_t L_8;
		L_8 = SpriteChannelInfo_get_count_m533E5BAABF579F8C67CB4272A71E699C3E161C18((&V_0), NULL);
		NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF L_9;
		L_9 = NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m633DAEBC11F916CAC6408C5B1B105D222E015213((void*)L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_9;
		NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF L_10 = V_2;
		V_3 = L_10;
		goto IL_0039;
	}

IL_0039:
	{
		NativeSlice_1_tBDD0B6C963222DE23BD34911416213E058F9FBAF L_11 = V_3;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A SpriteDataAccessExtensions_GetVertexAttribute_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m97992D4BCFA628DCB8FEF5900C0A3A8157B929A2_gshared (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, int32_t ___1_channel, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = ___1_channel;
		SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m13358A837F48F4EBF20D240912AA387837EFE018(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___0_sprite;
		int32_t L_2 = ___1_channel;
		SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA L_3;
		L_3 = SpriteDataAccessExtensions_GetChannelInfo_mFD515C42E45421F85D62EB47E5EEB5FE99A21CA3(L_1, L_2, NULL);
		V_0 = L_3;
		void* L_4;
		L_4 = SpriteChannelInfo_get_buffer_m897E681FF93F5EE652D9AB8D8E31062AB860FF15((&V_0), NULL);
		int32_t L_5;
		L_5 = SpriteChannelInfo_get_offset_m197B24414AEFF48823BF94AC6035C6D6D567383F((&V_0), NULL);
		V_1 = (uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, L_5));
		uint8_t* L_6 = V_1;
		int32_t L_7;
		L_7 = SpriteChannelInfo_get_stride_m93347B66A199DB44E375BEB8275FD7D68728981F((&V_0), NULL);
		int32_t L_8;
		L_8 = SpriteChannelInfo_get_count_m533E5BAABF579F8C67CB4272A71E699C3E161C18((&V_0), NULL);
		NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_9;
		L_9 = NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m0D7F29872ED8CEEAABA4DFDCC488F4F8D00601D0((void*)L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_9;
		NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_10 = V_2;
		V_3 = L_10;
		goto IL_0039;
	}

IL_0039:
	{
		NativeSlice_1_t4B5C42A704ED060AB92A8716135FE435B1E6C23A L_11 = V_3;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F SpriteDataAccessExtensions_GetVertexAttribute_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m5D2FCB716E12E2FDB71D2E19A3C638741DF5B45B_gshared (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, int32_t ___1_channel, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = ___1_channel;
		SpriteDataAccessExtensions_CheckAttributeTypeMatchesAndThrow_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB27DCB146CDAD183C3D17F0715F34CF1CBBD3893(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___0_sprite;
		int32_t L_2 = ___1_channel;
		SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA L_3;
		L_3 = SpriteDataAccessExtensions_GetChannelInfo_mFD515C42E45421F85D62EB47E5EEB5FE99A21CA3(L_1, L_2, NULL);
		V_0 = L_3;
		void* L_4;
		L_4 = SpriteChannelInfo_get_buffer_m897E681FF93F5EE652D9AB8D8E31062AB860FF15((&V_0), NULL);
		int32_t L_5;
		L_5 = SpriteChannelInfo_get_offset_m197B24414AEFF48823BF94AC6035C6D6D567383F((&V_0), NULL);
		V_1 = (uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, L_5));
		uint8_t* L_6 = V_1;
		int32_t L_7;
		L_7 = SpriteChannelInfo_get_stride_m93347B66A199DB44E375BEB8275FD7D68728981F((&V_0), NULL);
		int32_t L_8;
		L_8 = SpriteChannelInfo_get_count_m533E5BAABF579F8C67CB4272A71E699C3E161C18((&V_0), NULL);
		NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F L_9;
		L_9 = NativeSliceUnsafeUtility_ConvertExistingDataToNativeSlice_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m72AA26CED781FF9A097F5FE29A1FB66E946FAD31((void*)L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_9;
		NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F L_10 = V_2;
		V_3 = L_10;
		goto IL_0039;
	}

IL_0039:
	{
		NativeSlice_1_tA687F314957178F2A299D03D59B960DDC218680F L_11 = V_3;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 SpriteDataAccessExtensions_GetVertexAttribute_TisIl2CppFullySharedGenericStruct_m3561CDA5EA522FCB016AEF1FE7018DB3FC302E1C_gshared (Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* ___0_sprite, int32_t ___1_channel, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA V_0;
	memset((&V_0), 0, sizeof(V_0));
	uint8_t* V_1 = NULL;
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_2;
	memset((&V_2), 0, sizeof(V_2));
	NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 V_3;
	memset((&V_3), 0, sizeof(V_3));
	{
		int32_t L_0 = ___1_channel;
		((  void (*) (int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		Sprite_tAFF74BC83CD68037494CB0B4F28CBDF8971CAB99* L_1 = ___0_sprite;
		int32_t L_2 = ___1_channel;
		SpriteChannelInfo_t059F8D7ED52326BD2136B9AC41287F3E82FDE4CA L_3;
		L_3 = SpriteDataAccessExtensions_GetChannelInfo_mFD515C42E45421F85D62EB47E5EEB5FE99A21CA3(L_1, L_2, NULL);
		V_0 = L_3;
		void* L_4;
		L_4 = SpriteChannelInfo_get_buffer_m897E681FF93F5EE652D9AB8D8E31062AB860FF15((&V_0), NULL);
		int32_t L_5;
		L_5 = SpriteChannelInfo_get_offset_m197B24414AEFF48823BF94AC6035C6D6D567383F((&V_0), NULL);
		V_1 = (uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_4, L_5));
		uint8_t* L_6 = V_1;
		int32_t L_7;
		L_7 = SpriteChannelInfo_get_stride_m93347B66A199DB44E375BEB8275FD7D68728981F((&V_0), NULL);
		int32_t L_8;
		L_8 = SpriteChannelInfo_get_count_m533E5BAABF579F8C67CB4272A71E699C3E161C18((&V_0), NULL);
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_9;
		L_9 = ((  NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 (*) (void*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((void*)L_6, L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_9;
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_10 = V_2;
		V_3 = L_10;
		goto IL_0039;
	}

IL_0039:
	{
		NativeSlice_1_tA54E5D259EBCC7CD8512AA352C6F3709EB237B52 L_11 = V_3;
		return L_11;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987_mF6724B93867EE2A12D4053F46E75806CF9557C3B_gshared (int32_t ___0_length, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_state, SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* ___2_action, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	{
		SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* L_0 = ___2_action;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_length;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___0_length;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		int32_t L_6 = ___0_length;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* L_8 = ___2_action;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___0_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 L_13 = ___1_state;
		NullCheck(L_8);
		SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_inline(L_8, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		String_t* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57_mC8713BB789582FA498F3A9BDD075B77794145A53_gshared (int32_t ___0_length, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_state, SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* ___2_action, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	{
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* L_0 = ___2_action;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_length;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___0_length;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		int32_t L_6 = ___0_length;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* L_8 = ___2_action;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___0_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 L_13 = ___1_state;
		NullCheck(L_8);
		SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_inline(L_8, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		String_t* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85_m6F505BE8BEAF8A3324DDCED5C13F3EC1970BA9B2_gshared (int32_t ___0_length, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_state, SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* ___2_action, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	{
		SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* L_0 = ___2_action;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_length;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___0_length;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		int32_t L_6 = ___0_length;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* L_8 = ___2_action;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___0_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 L_13 = ___1_state;
		NullCheck(L_8);
		SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_inline(L_8, L_12, L_13, il2cpp_rgctx_method(method->rgctx_data, 2));
		String_t* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Create_TisIl2CppFullySharedGenericAny_m9AD9A2FD15EE0B25DC884BEF778D0D414364F9CA_gshared (int32_t ___0_length, Il2CppFullySharedGenericAny ___1_state, SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* ___2_action, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TState_tF86514A7FB385D80584CE625C93D41AE0EAEF433 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TState_tF86514A7FB385D80584CE625C93D41AE0EAEF433);
	String_t* V_0 = NULL;
	{
		SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* L_0 = ___2_action;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF9010398F7F524C05AB19445BDCE02E617A3E267)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		int32_t L_2 = ___0_length;
		if ((((int32_t)L_2) > ((int32_t)0)))
		{
			goto IL_0026;
		}
	}
	{
		int32_t L_3 = ___0_length;
		if (L_3)
		{
			goto IL_001b;
		}
	}
	{
		String_t* L_4 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		return L_4;
	}

IL_001b:
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_5 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE8744A8B8BD390EB66CA0CAE2376C973E6904FFB)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_0026:
	{
		int32_t L_6 = ___0_length;
		String_t* L_7;
		L_7 = String_FastAllocateString_m071BD33B9EFB2375443E1550C028861164D0F104(L_6, NULL);
		V_0 = L_7;
		SpanAction_2_tDD4C82B5E0425EE8AD03A2BB704E9D1FA491820A* L_8 = ___2_action;
		String_t* L_9 = V_0;
		NullCheck(L_9);
		Il2CppChar* L_10;
		L_10 = String_GetRawStringData_m87BC50B7B314C055E27A28032D1003D42FDE411D(L_9, NULL);
		int32_t L_11 = ___0_length;
		Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D L_12;
		memset((&L_12), 0, sizeof(L_12));
		Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_inline((&L_12), L_10, L_11, Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_RuntimeMethod_var);
		il2cpp_codegen_memcpy(L_13, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_state : &___1_state), SizeOf_TState_tF86514A7FB385D80584CE625C93D41AE0EAEF433);
		NullCheck(L_8);
		InvokerActionInvoker2< Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_8, L_12, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_13: *(void**)L_13));
		String_t* L_14 = V_0;
		return L_14;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mE767157BD5A8DFE4F70BFDFEA2D7346372BD9FF9_gshared (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Il2CppChar* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_separator;
		String_t* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
		G_B1_0 = L_1;
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		G_B2_0 = L_2;
	}

IL_000a:
	{
		___0_separator = G_B2_0;
		String_t* L_3 = ___0_separator;
		NullCheck(L_3);
		Il2CppChar* L_4 = (Il2CppChar*)(&L_3->____firstChar);
		V_0 = L_4;
		Il2CppChar* L_5 = V_0;
		String_t* L_6 = ___0_separator;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		RuntimeObject* L_8 = ___1_values;
		String_t* L_9;
		L_9 = String_JoinCore_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF8A3DA305336681152E11ADCDA63193C02C6769E((Il2CppChar*)((uintptr_t)L_5), L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisRuntimeObject_mA9B8DCEF92E54DCEE23246AC6EB15FA9BF740C02_gshared (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Il2CppChar* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_separator;
		String_t* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
		G_B1_0 = L_1;
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		G_B2_0 = L_2;
	}

IL_000a:
	{
		___0_separator = G_B2_0;
		String_t* L_3 = ___0_separator;
		NullCheck(L_3);
		Il2CppChar* L_4 = (Il2CppChar*)(&L_3->____firstChar);
		V_0 = L_4;
		Il2CppChar* L_5 = V_0;
		String_t* L_6 = ___0_separator;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		RuntimeObject* L_8 = ___1_values;
		String_t* L_9;
		L_9 = String_JoinCore_TisRuntimeObject_m010137B76A888B4A77A0C668F0CAB952CF3D4E71((Il2CppChar*)((uintptr_t)L_5), L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_Join_TisIl2CppFullySharedGenericAny_mAE51C2212CB6A91EA71F77D735FC3967F0ED5F20_gshared (String_t* ___0_separator, RuntimeObject* ___1_values, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Il2CppChar* V_0 = NULL;
	String_t* G_B2_0 = NULL;
	String_t* G_B1_0 = NULL;
	{
		String_t* L_0 = ___0_separator;
		String_t* L_1 = L_0;
		if (L_1)
		{
			G_B2_0 = L_1;
			goto IL_000a;
		}
		G_B1_0 = L_1;
	}
	{
		String_t* L_2 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
		G_B2_0 = L_2;
	}

IL_000a:
	{
		___0_separator = G_B2_0;
		String_t* L_3 = ___0_separator;
		NullCheck(L_3);
		Il2CppChar* L_4 = (Il2CppChar*)(&L_3->____firstChar);
		V_0 = L_4;
		Il2CppChar* L_5 = V_0;
		String_t* L_6 = ___0_separator;
		NullCheck(L_6);
		int32_t L_7;
		L_7 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_6, NULL);
		RuntimeObject* L_8 = ___1_values;
		String_t* L_9;
		L_9 = ((  String_t* (*) (Il2CppChar*, int32_t, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((Il2CppChar*)((uintptr_t)L_5), L_7, L_8, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_JoinCore_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mF8A3DA305336681152E11ADCDA63193C02C6769E_gshared (Il2CppChar* ___0_separator, int32_t ___1_separatorLength, RuntimeObject* ___2_values, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	int32_t V_1 = 0;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B10_0 = NULL;
	{
		RuntimeObject* L_0 = ___2_values;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___2_values;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ad:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_00b6;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_00b6:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_6 = V_0;
				NullCheck((RuntimeObject*)L_6);
				bool L_7;
				L_7 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				if (L_7)
				{
					goto IL_0029_1;
				}
			}
			{
				String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
				V_4 = L_8;
				goto IL_00b7;
			}

IL_0029_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				int32_t L_10;
				L_10 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 2), L_9);
				V_1 = L_10;
				goto IL_003b_1;
			}
			{
				G_B8_0 = ((String_t*)(NULL));
				goto IL_0048_1;
			}

IL_003b_1:
			{
				Il2CppFakeBox<int32_t> L_12(il2cpp_rgctx_data(method->rgctx_data, 4), (&V_1));
				String_t* L_13;
				L_13 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_12), NULL);
				G_B8_0 = L_13;
			}

IL_0048_1:
			{
				V_2 = G_B8_0;
				RuntimeObject* L_14 = V_0;
				NullCheck((RuntimeObject*)L_14);
				bool L_15;
				L_15 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_14);
				if (L_15)
				{
					goto IL_005f_1;
				}
			}
			{
				String_t* L_16 = V_2;
				String_t* L_17 = L_16;
				if (L_17)
				{
					G_B11_0 = L_17;
					goto IL_005b_1;
				}
				G_B10_0 = L_17;
			}
			{
				String_t* L_18 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
				G_B11_0 = L_18;
			}

IL_005b_1:
			{
				V_4 = G_B11_0;
				goto IL_00b7;
			}

IL_005f_1:
			{
				StringBuilder_t* L_19;
				L_19 = StringBuilderCache_Acquire_m1CF9421EC0F3431719E18A8EE78669748DF10892(((int32_t)16), NULL);
				V_3 = L_19;
				StringBuilder_t* L_20 = V_3;
				String_t* L_21 = V_2;
				NullCheck(L_20);
				StringBuilder_t* L_22;
				L_22 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_20, L_21, NULL);
			}

IL_006f_1:
			{
				RuntimeObject* L_23 = V_0;
				NullCheck(L_23);
				int32_t L_24;
				L_24 = InterfaceFuncInvoker0< int32_t >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 2), L_23);
				V_1 = L_24;
				StringBuilder_t* L_25 = V_3;
				Il2CppChar* L_26 = ___0_separator;
				int32_t L_27 = ___1_separatorLength;
				NullCheck(L_25);
				StringBuilder_t* L_28;
				L_28 = StringBuilder_Append_m3B01AD486432033546C698FB95D3067DCB1A1448(L_25, L_26, L_27, NULL);
			}
			{
				StringBuilder_t* L_30 = V_3;
				Il2CppFakeBox<int32_t> L_31(il2cpp_rgctx_data(method->rgctx_data, 4), (&V_1));
				String_t* L_32;
				L_32 = Enum_ToString_m946B0B83C4470457D0FF555D862022C72BB55741((Enum_t2A1A94B24E3B776EEF4E5E485E290BB9D4D072E2*)(&L_31), NULL);
				NullCheck(L_30);
				StringBuilder_t* L_33;
				L_33 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_30, L_32, NULL);
			}

IL_009b_1:
			{
				RuntimeObject* L_34 = V_0;
				NullCheck((RuntimeObject*)L_34);
				bool L_35;
				L_35 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_34);
				if (L_35)
				{
					goto IL_006f_1;
				}
			}
			{
				StringBuilder_t* L_36 = V_3;
				String_t* L_37;
				L_37 = StringBuilderCache_GetStringAndRelease_m4A7AB11554F7E80352AB8C3AC72D7AD4C7108FB0(L_36, NULL);
				V_4 = L_37;
				goto IL_00b7;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b7:
	{
		String_t* L_38 = V_4;
		return L_38;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_JoinCore_TisRuntimeObject_m010137B76A888B4A77A0C668F0CAB952CF3D4E71_gshared (Il2CppChar* ___0_separator, int32_t ___1_separatorLength, RuntimeObject* ___2_values, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B10_0 = NULL;
	{
		RuntimeObject* L_0 = ___2_values;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___2_values;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ad:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_00b6;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_00b6:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_6 = V_0;
				NullCheck((RuntimeObject*)L_6);
				bool L_7;
				L_7 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				if (L_7)
				{
					goto IL_0029_1;
				}
			}
			{
				String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
				V_4 = L_8;
				goto IL_00b7;
			}

IL_0029_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				RuntimeObject* L_10;
				L_10 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 2), L_9);
				V_1 = L_10;
				RuntimeObject* L_11 = V_1;
				if (L_11)
				{
					goto IL_003b_1;
				}
			}
			{
				G_B8_0 = ((String_t*)(NULL));
				goto IL_0048_1;
			}

IL_003b_1:
			{
				NullCheck((V_1));
				String_t* L_12;
				L_12 = VirtualFuncInvoker0< String_t* >::Invoke(3, (V_1));
				G_B8_0 = L_12;
			}

IL_0048_1:
			{
				V_2 = G_B8_0;
				RuntimeObject* L_13 = V_0;
				NullCheck((RuntimeObject*)L_13);
				bool L_14;
				L_14 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_13);
				if (L_14)
				{
					goto IL_005f_1;
				}
			}
			{
				String_t* L_15 = V_2;
				String_t* L_16 = L_15;
				if (L_16)
				{
					G_B11_0 = L_16;
					goto IL_005b_1;
				}
				G_B10_0 = L_16;
			}
			{
				String_t* L_17 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
				G_B11_0 = L_17;
			}

IL_005b_1:
			{
				V_4 = G_B11_0;
				goto IL_00b7;
			}

IL_005f_1:
			{
				StringBuilder_t* L_18;
				L_18 = StringBuilderCache_Acquire_m1CF9421EC0F3431719E18A8EE78669748DF10892(((int32_t)16), NULL);
				V_3 = L_18;
				StringBuilder_t* L_19 = V_3;
				String_t* L_20 = V_2;
				NullCheck(L_19);
				StringBuilder_t* L_21;
				L_21 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_19, L_20, NULL);
			}

IL_006f_1:
			{
				RuntimeObject* L_22 = V_0;
				NullCheck(L_22);
				RuntimeObject* L_23;
				L_23 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 2), L_22);
				V_1 = L_23;
				StringBuilder_t* L_24 = V_3;
				Il2CppChar* L_25 = ___0_separator;
				int32_t L_26 = ___1_separatorLength;
				NullCheck(L_24);
				StringBuilder_t* L_27;
				L_27 = StringBuilder_Append_m3B01AD486432033546C698FB95D3067DCB1A1448(L_24, L_25, L_26, NULL);
				RuntimeObject* L_28 = V_1;
				if (!L_28)
				{
					goto IL_009b_1;
				}
			}
			{
				StringBuilder_t* L_29 = V_3;
				NullCheck((V_1));
				String_t* L_30;
				L_30 = VirtualFuncInvoker0< String_t* >::Invoke(3, (V_1));
				NullCheck(L_29);
				StringBuilder_t* L_31;
				L_31 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_29, L_30, NULL);
			}

IL_009b_1:
			{
				RuntimeObject* L_32 = V_0;
				NullCheck((RuntimeObject*)L_32);
				bool L_33;
				L_33 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_32);
				if (L_33)
				{
					goto IL_006f_1;
				}
			}
			{
				StringBuilder_t* L_34 = V_3;
				String_t* L_35;
				L_35 = StringBuilderCache_GetStringAndRelease_m4A7AB11554F7E80352AB8C3AC72D7AD4C7108FB0(L_34, NULL);
				V_4 = L_35;
				goto IL_00b7;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b7:
	{
		String_t* L_36 = V_4;
		return L_36;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* String_JoinCore_TisIl2CppFullySharedGenericAny_mDBFE23C94396E507A53C312CA2737B4DC76D6D3B_gshared (Il2CppChar* ___0_separator, int32_t ___1_separatorLength, RuntimeObject* ___2_values, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&String_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t3DA0AC627DA3A3F5FB48377D1C699927DEF2899D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	void* L_13 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 4)));
	void* L_33 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 4)));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_T_t3DA0AC627DA3A3F5FB48377D1C699927DEF2899D);
	const Il2CppFullySharedGenericAny L_25 = L_10;
	const Il2CppFullySharedGenericAny L_11 = alloca(SizeOf_T_t3DA0AC627DA3A3F5FB48377D1C699927DEF2899D);
	const Il2CppFullySharedGenericAny L_30 = L_11;
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t3DA0AC627DA3A3F5FB48377D1C699927DEF2899D);
	memset(V_1, 0, SizeOf_T_t3DA0AC627DA3A3F5FB48377D1C699927DEF2899D);
	String_t* V_2 = NULL;
	StringBuilder_t* V_3 = NULL;
	String_t* V_4 = NULL;
	String_t* G_B8_0 = NULL;
	String_t* G_B11_0 = NULL;
	String_t* G_B10_0 = NULL;
	{
		RuntimeObject* L_0 = ___2_values;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFBFED6DEA5A92748E7B7A0A236B4FBA1EFEF38C6)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		RuntimeObject* L_2 = ___2_values;
		NullCheck(L_2);
		RuntimeObject* L_3;
		L_3 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_2);
		V_0 = L_3;
	}
	{
		auto __finallyBlock = il2cpp::utils::Finally([&]
		{

FINALLY_00ad:
			{
				{
					RuntimeObject* L_4 = V_0;
					if (!L_4)
					{
						goto IL_00b6;
					}
				}
				{
					RuntimeObject* L_5 = V_0;
					NullCheck((RuntimeObject*)L_5);
					InterfaceActionInvoker0::Invoke(0, IDisposable_t030E0496B4E0E4E4F086825007979AF51F7248C5_il2cpp_TypeInfo_var, (RuntimeObject*)L_5);
				}

IL_00b6:
				{
					return;
				}
			}
		});
		try
		{
			{
				RuntimeObject* L_6 = V_0;
				NullCheck((RuntimeObject*)L_6);
				bool L_7;
				L_7 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_6);
				if (L_7)
				{
					goto IL_0029_1;
				}
			}
			{
				String_t* L_8 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
				V_4 = L_8;
				goto IL_00b7;
			}

IL_0029_1:
			{
				RuntimeObject* L_9 = V_0;
				NullCheck(L_9);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 2), L_9, (Il2CppFullySharedGenericAny*)L_10);
				il2cpp_codegen_memcpy(V_1, L_10, SizeOf_T_t3DA0AC627DA3A3F5FB48377D1C699927DEF2899D);
				il2cpp_codegen_memcpy(L_11, V_1, SizeOf_T_t3DA0AC627DA3A3F5FB48377D1C699927DEF2899D);
				bool L_12 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_11);
				if (L_12)
				{
					goto IL_003b_1;
				}
			}
			{
				G_B8_0 = ((String_t*)(NULL));
				goto IL_0048_1;
			}

IL_003b_1:
			{
				String_t* L_14;
				L_14 = ConstrainedFuncInvoker0< String_t* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 4), il2cpp_rgctx_method(method->rgctx_data, 5), L_13, (void*)(Il2CppFullySharedGenericAny*)V_1);
				G_B8_0 = L_14;
			}

IL_0048_1:
			{
				V_2 = G_B8_0;
				RuntimeObject* L_15 = V_0;
				NullCheck((RuntimeObject*)L_15);
				bool L_16;
				L_16 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_15);
				if (L_16)
				{
					goto IL_005f_1;
				}
			}
			{
				String_t* L_17 = V_2;
				String_t* L_18 = L_17;
				if (L_18)
				{
					G_B11_0 = L_18;
					goto IL_005b_1;
				}
				G_B10_0 = L_18;
			}
			{
				String_t* L_19 = ((String_t_StaticFields*)il2cpp_codegen_static_fields_for(String_t_il2cpp_TypeInfo_var))->___Empty;
				G_B11_0 = L_19;
			}

IL_005b_1:
			{
				V_4 = G_B11_0;
				goto IL_00b7;
			}

IL_005f_1:
			{
				StringBuilder_t* L_20;
				L_20 = StringBuilderCache_Acquire_m1CF9421EC0F3431719E18A8EE78669748DF10892(((int32_t)16), NULL);
				V_3 = L_20;
				StringBuilder_t* L_21 = V_3;
				String_t* L_22 = V_2;
				NullCheck(L_21);
				StringBuilder_t* L_23;
				L_23 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_21, L_22, NULL);
			}

IL_006f_1:
			{
				RuntimeObject* L_24 = V_0;
				NullCheck(L_24);
				InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 2), L_24, (Il2CppFullySharedGenericAny*)L_25);
				il2cpp_codegen_memcpy(V_1, L_25, SizeOf_T_t3DA0AC627DA3A3F5FB48377D1C699927DEF2899D);
				StringBuilder_t* L_26 = V_3;
				Il2CppChar* L_27 = ___0_separator;
				int32_t L_28 = ___1_separatorLength;
				NullCheck(L_26);
				StringBuilder_t* L_29;
				L_29 = StringBuilder_Append_m3B01AD486432033546C698FB95D3067DCB1A1448(L_26, L_27, L_28, NULL);
				il2cpp_codegen_memcpy(L_30, V_1, SizeOf_T_t3DA0AC627DA3A3F5FB48377D1C699927DEF2899D);
				bool L_31 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_30);
				if (!L_31)
				{
					goto IL_009b_1;
				}
			}
			{
				StringBuilder_t* L_32 = V_3;
				String_t* L_34;
				L_34 = ConstrainedFuncInvoker0< String_t* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 4), il2cpp_rgctx_method(method->rgctx_data, 5), L_33, (void*)(Il2CppFullySharedGenericAny*)V_1);
				NullCheck(L_32);
				StringBuilder_t* L_35;
				L_35 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(L_32, L_34, NULL);
			}

IL_009b_1:
			{
				RuntimeObject* L_36 = V_0;
				NullCheck((RuntimeObject*)L_36);
				bool L_37;
				L_37 = InterfaceFuncInvoker0< bool >::Invoke(0, IEnumerator_t7B609C2FFA6EB5167D9C62A0C32A21DE2F666DAA_il2cpp_TypeInfo_var, (RuntimeObject*)L_36);
				if (L_37)
				{
					goto IL_006f_1;
				}
			}
			{
				StringBuilder_t* L_38 = V_3;
				String_t* L_39;
				L_39 = StringBuilderCache_GetStringAndRelease_m4A7AB11554F7E80352AB8C3AC72D7AD4C7108FB0(L_38, NULL);
				V_4 = L_39;
				goto IL_00b7;
			}
		}
		catch(Il2CppExceptionWrapper& e)
		{
			__finallyBlock.StoreException(e.ex);
		}
	}

IL_00b7:
	{
		String_t* L_40 = V_4;
		return L_40;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9C89D6A499A93EAEB46D21A005E7B7CDA8AF08DA_gshared (StringBuilder_t* __this, uint8_t ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = Byte_ToString_m64EE358F20093EE61D30F9A21638D9E9EE8F87EC((&___0_value), (String_t*)NULL, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7B15D251663E1D9C147CD9DA1A8908CACF877570_gshared (StringBuilder_t* __this, int32_t ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = Int32_ToString_mE871810BC163EE4EF88E7C7682A6AD39911173B8((&___0_value), (String_t*)NULL, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m61F274B553164EF6FB0CB7D16AED9687CE7CA5FC_gshared (StringBuilder_t* __this, uint32_t ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_1;
		L_1 = UInt32_ToString_m464396B0FE2115F3CEA38AEECDDB0FACC3AADADE((&___0_value), (String_t*)NULL, (RuntimeObject*)L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		StringBuilder_t* L_2;
		L_2 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_1, NULL);
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR StringBuilder_t* StringBuilder_AppendSpanFormattable_TisIl2CppFullySharedGenericAny_mF50A5C2F631F6F4450B612A08A50CA5E6DC58AEC_gshared (StringBuilder_t* __this, Il2CppFullySharedGenericAny ___0_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	void* L_1 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 0)));
	{
		il2cpp_codegen_runtime_class_init_inline(CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0_il2cpp_TypeInfo_var);
		CultureInfo_t9BA817D41AD55AC8BD07480DD8AC22F8FFA378E0* L_0;
		L_0 = CultureInfo_get_CurrentCulture_m8A4580F49DDD7E9DB34C699965423DB8E3BBA9A5(NULL);
		String_t* L_2;
		L_2 = ConstrainedFuncInvoker2< String_t*, String_t*, RuntimeObject* >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 0), il2cpp_rgctx_method(method->rgctx_data, 1), L_1, (void*)(Il2CppFullySharedGenericAny*)(il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_value : &___0_value), (String_t*)NULL, (RuntimeObject*)L_0);
		StringBuilder_t* L_3;
		L_3 = StringBuilder_Append_m08904D74E0C78E5F36DCD9C9303BDD07886D9F7D(__this, L_2, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_ContinueWith_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m08B98CF2205B5C95FCE31BCF347F3B560F407058_gshared (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Func_2_tBB0D7C02FB04CB15F2B32B7ED20E9B69E87AF505* ___0_continuationFunction, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Func_2_tBB0D7C02FB04CB15F2B32B7ED20E9B69E87AF505* L_0 = ___0_continuationFunction;
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_1;
		L_1 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = V_0;
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_3;
		L_3 = Task_ContinueWith_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m410879F23CD33ABB2F1482B116733C5A23824DE9(__this, L_0, L_1, L_2, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_ContinueWith_TisIl2CppFullySharedGenericAny_mE349C374FBD67F9F87A74035D3EB3F3CC41D95CE_gshared (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22* ___0_continuationFunction, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22* L_0 = ___0_continuationFunction;
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_1;
		L_1 = TaskScheduler_get_Current_m756F98A9A9E71B2C6FB6EC0955259F5D92465023(NULL);
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_2 = V_0;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3;
		L_3 = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22*, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(__this, L_0, L_1, L_2, (int32_t)0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_ContinueWith_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m410879F23CD33ABB2F1482B116733C5A23824DE9_gshared (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Func_2_tBB0D7C02FB04CB15F2B32B7ED20E9B69E87AF505* ___0_continuationFunction, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___1_scheduler, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_continuationOptions, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Task_1_t824317F4B958F7512E8F7300511752937A6C6043* V_2 = NULL;
	{
		Func_2_tBB0D7C02FB04CB15F2B32B7ED20E9B69E87AF505* L_0 = ___0_continuationFunction;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral295C1C91484E27E03B860FDA8F1EE84730518E64)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_2 = ___1_scheduler;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA75CF6F408A626E601212712FB539C300D88CDBE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001c:
	{
		int32_t L_4 = ___3_continuationOptions;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_CreationOptionsFromContinuationOptions_mE9F785FA8B0E96211D327A83E154C2DF1DDDCEFF(L_4, (&V_0), (&V_1), NULL);
		Func_2_tBB0D7C02FB04CB15F2B32B7ED20E9B69E87AF505* L_5 = ___0_continuationFunction;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		ContinuationResultTaskFromTask_1_tA9D2C0C95B63D2D2939F5296F7BD35D23B849493* L_8 = (ContinuationResultTaskFromTask_1_tA9D2C0C95B63D2D2939F5296F7BD35D23B849493*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		ContinuationResultTaskFromTask_1__ctor_m3429704518F1F1E63420A7A815A9A6E0B9A6F24A(L_8, __this, (Delegate_t*)L_5, NULL, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*)L_8;
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_9 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_10 = ___1_scheduler;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = ___2_cancellationToken;
		int32_t L_12 = ___3_continuationOptions;
		Task_ContinueWithCore_m257B705F98BF64DC7C346F06711A4B32F366D8D8(__this, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_9, L_10, L_11, L_12, NULL);
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_13 = V_2;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_ContinueWith_TisIl2CppFullySharedGenericAny_m1799A1B94805E52E52A11BFF9FDD873DE7C499C3_gshared (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* __this, Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22* ___0_continuationFunction, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___1_scheduler, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_continuationOptions, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_2 = NULL;
	{
		Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22* L_0 = ___0_continuationFunction;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral295C1C91484E27E03B860FDA8F1EE84730518E64)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_2 = ___1_scheduler;
		if (L_2)
		{
			goto IL_001c;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_3 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_3, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralA75CF6F408A626E601212712FB539C300D88CDBE)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_3, method);
	}

IL_001c:
	{
		int32_t L_4 = ___3_continuationOptions;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_CreationOptionsFromContinuationOptions_mE9F785FA8B0E96211D327A83E154C2DF1DDDCEFF(L_4, (&V_0), (&V_1), NULL);
		Func_2_tC80EBD402669FA7B2BD1805B8BCE9575CFCA7E22* L_5 = ___0_continuationFunction;
		int32_t L_6 = V_0;
		int32_t L_7 = V_1;
		ContinuationResultTaskFromTask_1_t1976F69FEC571EFB163944A4437C69446E2BECB3* L_8 = (ContinuationResultTaskFromTask_1_t1976F69FEC571EFB163944A4437C69446E2BECB3*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (ContinuationResultTaskFromTask_1_t1976F69FEC571EFB163944A4437C69446E2BECB3*, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Delegate_t*, RuntimeObject*, int32_t, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_8, __this, (Delegate_t*)L_5, NULL, L_6, L_7, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_2 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)L_8;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_9 = V_2;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_10 = ___1_scheduler;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_11 = ___2_cancellationToken;
		int32_t L_12 = ___3_continuationOptions;
		Task_ContinueWithCore_m257B705F98BF64DC7C346F06711A4B32F366D8D8(__this, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_9, L_10, L_11, L_12, NULL);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_13 = V_2;
		return L_13;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCanceled_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA70E6F7B6B65EE0810AB41C297EBB571258F3E7D_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = ___0_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_1;
		L_1 = Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64EF24758B483A0F2026841BAF84240470F23DE4(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromCanceled_TisRuntimeObject_mEABB42281A90E2575A296C1697DD207F67740AB2_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = ___0_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_1;
		L_1 = Task_FromCancellation_TisRuntimeObject_m38025C544CE91D455E63358AB2EAA1F2D173FCE6(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCanceled_TisIl2CppFullySharedGenericAny_m6FA2A9DC4ECF7A21441B961F86A94873F5C015C9_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = ___0_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_1;
		L_1 = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* Task_FromCancellation_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mB63359289167D8DDD29CD440525186BE9586873A_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___0_cancellationToken), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(bool));
		bool L_2 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___0_cancellationToken;
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_4 = (Task_1_t824317F4B958F7512E8F7300511752937A6C6043*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		Task_1__ctor_m912F5F25BF780F1B743BCB5FC21FEB08BB05ED52(L_4, (bool)1, L_2, (int32_t)0, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m64EF24758B483A0F2026841BAF84240470F23DE4_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___0_cancellationToken), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
		int32_t L_2 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___0_cancellationToken;
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_4 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		Task_1__ctor_mFF72C62F161EF9AFEBD8257BD0D74339D29166CB(L_4, (bool)1, L_2, (int32_t)0, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromCancellation_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mA2563A31BE4ECDB082688B267381538C65FA811B_gshared (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_2 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		Task_1__ctor_m08841FDA6AA08B68DFA36125A81DA6C7B54D0B99(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_3 = L_2;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_4 = ___0_exception;
		NullCheck(L_4);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5;
		L_5 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_4, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3);
		bool L_7;
		L_7 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, L_5, (RuntimeObject*)L_6, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromCancellation_TisRuntimeObject_m38025C544CE91D455E63358AB2EAA1F2D173FCE6_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___0_cancellationToken), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_2 = V_0;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___0_cancellationToken;
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_4 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		Task_1__ctor_m3EAE7A8F72CB23D824923E6757C64465533BBC22(L_4, (bool)1, L_2, (int32_t)0, L_3, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* Task_FromCancellation_TisVoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC_m3D0619EF0B707377DD0715DB44C2C3AA0530E99A_gshared (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_2 = (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		Task_1__ctor_m323D56E98AFD8C95866A2866CF440831DA74657D(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_3 = L_2;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_4 = ___0_exception;
		NullCheck(L_4);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5;
		L_5 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_4, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3);
		bool L_7;
		L_7 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, L_5, (RuntimeObject*)L_6, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCancellation_TisIl2CppFullySharedGenericAny_m8430FE61464A9242E9DFD47EA2551C8B3F5CD64F_gshared (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___0_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
	memset(V_0, 0, SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___0_cancellationToken), NULL);
		if (L_0)
		{
			goto IL_0014;
		}
	}
	{
		ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F* L_1 = (ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentOutOfRangeException_tEA2822DAF62B10EEED00E0E3A341D4BAF78CF85F_il2cpp_TypeInfo_var)));
		ArgumentOutOfRangeException__ctor_mBC1D5DEEA1BA41DE77228CB27D6BAFEB6DCCBF4A(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralC4ADC60D7B4D387FB421586A9B670B3D4B8A0775)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_0014:
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
		il2cpp_codegen_memcpy(L_2, V_0, SizeOf_TResult_t11213E145EA5AF73864F9DDC4AE028673420DB5B);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___0_cancellationToken;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		InvokerActionInvoker4< bool, Il2CppFullySharedGenericAny, int32_t, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_4, (bool)1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_2: *(void**)L_2), (int32_t)0, L_3);
		return L_4;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromCancellation_TisIl2CppFullySharedGenericAny_m2223C6E6E1675E311C66C5695E2F0728BED068E5_gshared (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3 = L_2;
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_4 = ___0_exception;
		NullCheck(L_4);
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_5;
		L_5 = OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline(L_4, NULL);
		OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* L_6 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3);
		bool L_7;
		L_7 = Task_TrySetCanceled_m8E24757A8DD3AE5A856B64D87B447E08395A0771((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, L_5, (RuntimeObject*)L_6, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromException_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m2512A0C4A3009B5078FC0B965B4D1E6C89A3DBD3_gshared (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_2 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		Task_1__ctor_m08841FDA6AA08B68DFA36125A81DA6C7B54D0B99(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_3 = L_2;
		Exception_t* L_4 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3);
		bool L_5;
		L_5 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, (RuntimeObject*)L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromException_TisRuntimeObject_m81649814701F78FC4AAB5BE79018C8DCC7227E6E_gshared (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_2 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		Task_1__ctor_m2A3A26E17D6BE69CEEC048C0599F76FE4C6D24A0(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_3 = L_2;
		Exception_t* L_4 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3);
		bool L_5;
		L_5 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, (RuntimeObject*)L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* Task_FromException_TisVoidTaskResult_t73B628B764C6668DAAAE2D37BD6FC07BCA27A5AC_m7594A0E6E26B701AD7D7F0E73F0A82019C3D2061_gshared (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_2 = (Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		Task_1__ctor_m323D56E98AFD8C95866A2866CF440831DA74657D(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_3 = L_2;
		Exception_t* L_4 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3);
		bool L_5;
		L_5 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, (RuntimeObject*)L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromException_TisIl2CppFullySharedGenericAny_m5424F2AE940D86E928CD58A721AA25BDAF2A7229_gshared (Exception_t* ___0_exception, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Exception_t* L_0 = ___0_exception;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralCF6D423D6F6C1327D40E616C52007CE750F00A62)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3 = L_2;
		Exception_t* L_4 = ___0_exception;
		NullCheck((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3);
		bool L_5;
		L_5 = Task_TrySetException_m8336BA31D11EA84916A89EB8A7A0044D2D0EE94D((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_3, (RuntimeObject*)L_4, NULL);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_FromResult_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mF151895F5C0BBB74AEE7600FA2F777D0A8D1EBC5_gshared (int32_t ___0_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		int32_t L_0 = ___0_result;
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_1 = (Task_1_t4C228DE57804012969575431CFF12D57C875552D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		Task_1__ctor_mB3888CE20043DB96B5E044DF7193D494B41E3DA2(L_1, L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_FromResult_TisRuntimeObject_m3CB407E4DC5135B06ECAFC88B9C4F06612E4B521_gshared (RuntimeObject* ___0_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_result;
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_1 = (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		Task_1__ctor_mB819988054745A0A3BFB8F02517E248B69573289(L_1, L_0, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_FromResult_TisIl2CppFullySharedGenericAny_m829FFC9F5B1DFAC382A3E6ABDED634066EADFB21_gshared (Il2CppFullySharedGenericAny ___0_result, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TResult_t0BA7C9EB0581C5FFDCC03982969E83426BAAB98E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_TResult_t0BA7C9EB0581C5FFDCC03982969E83426BAAB98E);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_result : &___0_result), SizeOf_TResult_t0BA7C9EB0581C5FFDCC03982969E83426BAAB98E);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_1 = (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		InvokerActionInvoker1< Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_0: *(void**)L_0));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t4C228DE57804012969575431CFF12D57C875552D* Task_Run_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m50BEC609748FB9846101BFA0A7F6D0537D0E1134_gshared (Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* ___0_function, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Func_1_tC288CCB64EFD1F5FD49C3F8DE91FE62905E44BCD* L_0 = ___0_function;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_2;
		L_2 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_3;
		L_3 = Task_1_StartNew_mDC1CAEBA1AA1140287E893D3F292AC0F99017377((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL, L_0, L_1, (int32_t)8, (int32_t)0, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_Run_TisRuntimeObject_m29C499E297585118D3D438731D61686FE3AC082B_gshared (Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985* ___0_function, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985* L_0 = ___0_function;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_2;
		L_2 = Task_Run_TisRuntimeObject_mE6EC478769A44E9987615F4858FF2C8470005FF0(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_Run_TisIl2CppFullySharedGenericAny_m9B8B1B2F2FE04689FD7BADCD0E57F38E4B5FBF69_gshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___0_function, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_0 = ___0_function;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_2;
		L_2 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_3;
		L_3 = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)NULL, L_0, L_1, (int32_t)8, (int32_t)0, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_Run_TisIl2CppFullySharedGenericAny_m25FB5A392FEACC714E85A5165A97701C1343B1C0_gshared (Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* ___0_function, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* L_0 = ___0_function;
		il2cpp_codegen_initobj((&V_0), sizeof(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED));
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_1 = V_0;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_2;
		L_2 = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* Task_Run_TisRuntimeObject_mE6EC478769A44E9987615F4858FF2C8470005FF0_gshared (Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985* ___0_function, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985* L_0 = ___0_function;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7AD319493499620E43634FF644A0CEF1624086AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___1_cancellationToken), NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___1_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_4;
		L_4 = Task_FromCancellation_TisRuntimeObject_m38025C544CE91D455E63358AB2EAA1F2D173FCE6(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_5;
		L_5 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Func_1_tF400708EEA4975A6298D8D1C9AC51877FA5FD985* L_6 = ___0_function;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___1_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_8;
		L_8 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		NullCheck(L_5);
		Task_1_t8923214371A3F5BC070C6DE37A05405486B5D868* L_9;
		L_9 = TaskFactory_StartNew_TisTask_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2_m6CFE354FC68AC3EA0563F0C420D34B6F90D91444(L_5, L_6, L_7, (int32_t)8, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		UnwrapPromise_1_tEE3DD92946C85E16C4E468CE517515B0A532C43E* L_10 = (UnwrapPromise_1_tEE3DD92946C85E16C4E468CE517515B0A532C43E*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		UnwrapPromise_1__ctor_m444AC846B8EBC766BB59B1E3C44A2A07330D3089(L_10, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_9, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		return (Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* Task_Run_TisIl2CppFullySharedGenericAny_mF39F8DFD4DC180998B23C404C0030D0856730D6C_gshared (Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* ___0_function, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* L_0 = ___0_function;
		if (L_0)
		{
			goto IL_000e;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_1 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_1, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral7AD319493499620E43634FF644A0CEF1624086AD)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_1, method);
	}

IL_000e:
	{
		il2cpp_codegen_runtime_class_init_inline(CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED_il2cpp_TypeInfo_var);
		bool L_2;
		L_2 = CancellationToken_get_IsCancellationRequested_m9744F7A1A82946FDD1DC68E905F1ED826471D350((&___1_cancellationToken), NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___1_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_4;
		L_4 = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_3, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_4;
	}

IL_001e:
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_5;
		L_5 = Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline(NULL);
		Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB* L_6 = ___0_function;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_7 = ___1_cancellationToken;
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_8;
		L_8 = TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline(NULL);
		NullCheck(L_5);
		Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266* L_9;
		L_9 = ((  Task_1_t7003EBCA625EB82970363E476E2ED456FCFF7266* (*) (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0*, Func_1_t6D66D6442C9219BEA0CD7C5B58720D294B5634BB*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(L_5, L_6, L_7, (int32_t)8, L_8, il2cpp_rgctx_method(method->rgctx_data, 3));
		UnwrapPromise_1_t056E9AD8CFB7AFD55E9D63549F5F68C2827ABDB1* L_10 = (UnwrapPromise_1_t056E9AD8CFB7AFD55E9D63549F5F68C2827ABDB1*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 5));
		((  void (*) (UnwrapPromise_1_t056E9AD8CFB7AFD55E9D63549F5F68C2827ABDB1*, Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, bool, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 6)))(L_10, (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_9, (bool)1, il2cpp_rgctx_method(method->rgctx_data, 6));
		return (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisRuntimeObject_m4BE298A12FD46EA87A91B6D05F3616DFD4116D81_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, RuntimeObject* ___2_arg1, RuntimeObject* ___3_state, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		RuntimeObject* L_2 = ___2_arg1;
		RuntimeObject* L_3 = ___3_state;
		int32_t L_4 = __this->___m_defaultCreationOptions;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = TaskFactory_FromAsync_TisRuntimeObject_m15A3FDB23C39585CED64D8702F8DEAEA3D853C9F(__this, L_0, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppFullySharedGenericAny_m04115576E6CC428982884D8F87DD3724A14DBF1A_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, Il2CppFullySharedGenericAny ___2_arg1, RuntimeObject* ___3_state, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TArg1_tB1C103A032CE9BD6E8BC9AC113B2D739B054F785 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TArg1_tB1C103A032CE9BD6E8BC9AC113B2D739B054F785);
	{
		Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg1 : &___2_arg1), SizeOf_TArg1_tB1C103A032CE9BD6E8BC9AC113B2D739B054F785);
		RuntimeObject* L_3 = ___3_state;
		int32_t L_4 = __this->___m_defaultCreationOptions;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_5;
		L_5 = InvokerFuncInvoker5< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppFullySharedGenericAny, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), __this, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_2: *(void**)L_2), L_3, L_4);
		return L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisRuntimeObject_m15A3FDB23C39585CED64D8702F8DEAEA3D853C9F_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, RuntimeObject* ___2_arg1, RuntimeObject* ___3_state, int32_t ___4_creationOptions, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Func_4_t52E8A0837DB4E6228CB49F92F452987A63FBEC4D* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		RuntimeObject* L_2 = ___2_arg1;
		RuntimeObject* L_3 = ___3_state;
		int32_t L_4 = ___4_creationOptions;
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_5;
		L_5 = TaskFactory_1_FromAsyncImpl_TisRuntimeObject_m07D8893FAE82409A470EEFE74C72A56D88F6DFFC(L_0, (Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*)NULL, L_1, L_2, L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 2));
		return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppFullySharedGenericAny_m4F65D83940E1B36D36E32537F53DDBD4EF7CDCD7_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, Il2CppFullySharedGenericAny ___2_arg1, RuntimeObject* ___3_state, int32_t ___4_creationOptions, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TArg1_tC08EB94AF45F8297A70909AB081D4BE051B78B49 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TArg1_tC08EB94AF45F8297A70909AB081D4BE051B78B49);
	{
		Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg1 : &___2_arg1), SizeOf_TArg1_tC08EB94AF45F8297A70909AB081D4BE051B78B49);
		RuntimeObject* L_3 = ___3_state;
		int32_t L_4 = ___4_creationOptions;
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_5;
		L_5 = InvokerFuncInvoker6< Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*, Func_4_t601AF6F2F5149E1FAFBFBEF804A1200A25072799*, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppFullySharedGenericAny, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)), il2cpp_rgctx_method(method->rgctx_data, 2), NULL, L_0, (Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*)NULL, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_2: *(void**)L_2), L_3, L_4);
		return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_5;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9F0B7197E1791E4B49DEB7271C267973AC699E94_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_tA07BEDDD813173420A179C25AEDEA235CEB634BB* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, RuntimeObject* ___2_arg1, int32_t ___3_arg2, RuntimeObject* ___4_state, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Func_5_tA07BEDDD813173420A179C25AEDEA235CEB634BB* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		RuntimeObject* L_2 = ___2_arg1;
		int32_t L_3 = ___3_arg2;
		RuntimeObject* L_4 = ___4_state;
		int32_t L_5 = __this->___m_defaultCreationOptions;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = TaskFactory_FromAsync_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1D52B923BD701D21EA3025AA8766D95C2463D02B(__this, L_0, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mDA4D7F2612BE37F888FDEBC6BCC9ABB0DCF93ED7_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, Il2CppFullySharedGenericAny ___2_arg1, Il2CppFullySharedGenericAny ___3_arg2, RuntimeObject* ___4_state, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TArg1_t21F6284D80A35C30C6EBF467D434A5A961962037 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_TArg2_t9DF84619D7F5C64775E8171C1DF9905463073DCB = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TArg1_t21F6284D80A35C30C6EBF467D434A5A961962037);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TArg2_t9DF84619D7F5C64775E8171C1DF9905463073DCB);
	{
		Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg1 : &___2_arg1), SizeOf_TArg1_t21F6284D80A35C30C6EBF467D434A5A961962037);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg2 : &___3_arg2), SizeOf_TArg2_t9DF84619D7F5C64775E8171C1DF9905463073DCB);
		RuntimeObject* L_4 = ___4_state;
		int32_t L_5 = __this->___m_defaultCreationOptions;
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_6;
		L_6 = InvokerFuncInvoker6< Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), __this, L_0, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_3: *(void**)L_3), L_4, L_5);
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m1D52B923BD701D21EA3025AA8766D95C2463D02B_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_tA07BEDDD813173420A179C25AEDEA235CEB634BB* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, RuntimeObject* ___2_arg1, int32_t ___3_arg2, RuntimeObject* ___4_state, int32_t ___5_creationOptions, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Func_5_tA07BEDDD813173420A179C25AEDEA235CEB634BB* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		RuntimeObject* L_2 = ___2_arg1;
		int32_t L_3 = ___3_arg2;
		RuntimeObject* L_4 = ___4_state;
		int32_t L_5 = ___5_creationOptions;
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_6;
		L_6 = TaskFactory_1_FromAsyncImpl_TisRuntimeObject_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m7D9FA6F2A19B70C8115DB6EE2ECCE8FDEAAEB482(L_0, (Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*)NULL, L_1, L_2, L_3, L_4, L_5, il2cpp_rgctx_method(method->rgctx_data, 3));
		return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* TaskFactory_FromAsync_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_m78E42B6911823B51D9AE1A90E071856A3A910D53_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* ___0_beginMethod, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* ___1_endMethod, Il2CppFullySharedGenericAny ___2_arg1, Il2CppFullySharedGenericAny ___3_arg2, RuntimeObject* ___4_state, int32_t ___5_creationOptions, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_TArg1_tFF1C5C3E8019C353F9626B4B859583B486C1737B = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_TArg2_tBC544DB55DFEFC252830381AE8BEA9A908906E9C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_TArg1_tFF1C5C3E8019C353F9626B4B859583B486C1737B);
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_TArg2_tBC544DB55DFEFC252830381AE8BEA9A908906E9C);
	{
		Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9* L_0 = ___0_beginMethod;
		Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780* L_1 = ___1_endMethod;
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___2_arg1 : &___2_arg1), SizeOf_TArg1_tFF1C5C3E8019C353F9626B4B859583B486C1737B);
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___3_arg2 : &___3_arg2), SizeOf_TArg2_tBC544DB55DFEFC252830381AE8BEA9A908906E9C);
		RuntimeObject* L_4 = ___4_state;
		int32_t L_5 = ___5_creationOptions;
		Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17* L_6;
		L_6 = InvokerFuncInvoker7< Task_1_tE41CFF640EB7C045550D9D0D92BE67533B084C17*, Func_5_tEFCEEADE431DADF31E384EC513E2FE5E59197CE9*, Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*, Action_1_t8AE9CB3E5DC764211C9FEAC59DE7B65AD1444780*, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, RuntimeObject*, int32_t >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, L_0, (Func_2_tB94FD0871A189804122B115BF7F49B3F0B035706*)NULL, L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_2: *(void**)L_2), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_3: *(void**)L_3), L_4, L_5);
		return (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*)L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* TaskFactory_StartNew_TisRuntimeObject_m14FDB1694FEE097B11C3119BD89F3C350F7DE51B_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_function, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, int32_t ___2_creationOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___3_scheduler, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		int32_t L_0 = ___2_creationOptions;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_InternalCurrentIfAttached_mBF043F869DEB200F3129DB7CE48C64BA0A85B58C(L_0, NULL);
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_2 = ___0_function;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___1_cancellationToken;
		int32_t L_4 = ___2_creationOptions;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = ___3_scheduler;
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_6;
		L_6 = Task_1_StartNew_m0057E0BA0B7F816CAAB48423DB419286E5634431(L_1, L_2, L_3, L_4, (int32_t)0, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskFactory_StartNew_TisIl2CppFullySharedGenericAny_m093A8AAFB7FEC0A2D65CEAEBE25DE0EB91469C36_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___0_function, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___1_cancellationToken, int32_t ___2_creationOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___3_scheduler, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		int32_t L_0 = ___2_creationOptions;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_InternalCurrentIfAttached_mBF043F869DEB200F3129DB7CE48C64BA0A85B58C(L_0, NULL);
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_2 = ___0_function;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_3 = ___1_cancellationToken;
		int32_t L_4 = ___2_creationOptions;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_5 = ___3_scheduler;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_6;
		L_6 = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, L_3, L_4, (int32_t)0, L_5, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_6;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_t824317F4B958F7512E8F7300511752937A6C6043* TaskFactory_StartNew_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mEA676BADDD921EB0FE18C6736870433B4C1A6F25_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* ___0_function, RuntimeObject* ___1_state, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_creationOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___4_scheduler, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		int32_t L_0 = ___3_creationOptions;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_InternalCurrentIfAttached_mBF043F869DEB200F3129DB7CE48C64BA0A85B58C(L_0, NULL);
		Func_2_tE1F0D41563EE092E5E5540B061449FDE88F1DC00* L_2 = ___0_function;
		RuntimeObject* L_3 = ___1_state;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___2_cancellationToken;
		int32_t L_5 = ___3_creationOptions;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_6 = ___4_scheduler;
		Task_1_t824317F4B958F7512E8F7300511752937A6C6043* L_7;
		L_7 = Task_1_StartNew_m3716C9AEC763488A7E54F556F38450E878DF829A(L_1, L_2, L_3, L_4, L_5, (int32_t)0, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* TaskFactory_StartNew_TisIl2CppFullySharedGenericAny_m76EE5D98B340430C4C47231CDF77B89D3AC194D6_gshared (TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* __this, Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9* ___0_function, RuntimeObject* ___1_state, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED ___2_cancellationToken, int32_t ___3_creationOptions, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* ___4_scheduler, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		int32_t L_0 = ___3_creationOptions;
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_1;
		L_1 = Task_InternalCurrentIfAttached_mBF043F869DEB200F3129DB7CE48C64BA0A85B58C(L_0, NULL);
		Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9* L_2 = ___0_function;
		RuntimeObject* L_3 = ___1_state;
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_4 = ___2_cancellationToken;
		int32_t L_5 = ___3_creationOptions;
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_6 = ___4_scheduler;
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_7;
		L_7 = ((  Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* (*) (Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572*, Func_2_t288DA7A3E2791C58B262D9D1F46FF6BB6F6D31F9*, RuntimeObject*, CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED, int32_t, int32_t, TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, L_2, L_3, L_4, L_5, (int32_t)0, L_6, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t TaskToApm_End_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCA309E122256972A27C74FC814F47AD13AF623ED_gshared (RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Task_1_t4C228DE57804012969575431CFF12D57C875552D* V_0 = NULL;
	TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* V_1 = NULL;
	TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		V_1 = ((TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB*)IsInstSealed((RuntimeObject*)L_0, TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var));
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_2 = V_1;
		NullCheck(L_2);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = L_2->___Task;
		V_0 = ((Task_1_t4C228DE57804012969575431CFF12D57C875552D*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_001f;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___0_asyncResult;
		V_0 = ((Task_1_t4C228DE57804012969575431CFF12D57C875552D*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_001f:
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_5 = V_0;
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		Task_1_t4C228DE57804012969575431CFF12D57C875552D* L_7 = V_0;
		NullCheck(L_7);
		TaskAwaiter_1_t6207F4E776722AC1BA32517028D30E6E3071F48E L_8;
		L_8 = Task_1_GetAwaiter_mCE7C608182EBB4EC0ED6D0BD76DFEFB8DBFDF843(L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		int32_t L_9;
		L_9 = TaskAwaiter_1_GetResult_mD566511BB0A5669BEAB88D7A98FE0679A4662A80((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TaskToApm_End_TisRuntimeObject_m3A816C4B76334C524F3A72D8BF603C92B9F29DF1_gshared (RuntimeObject* ___0_asyncResult, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* V_0 = NULL;
	TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* V_1 = NULL;
	TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		V_1 = ((TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB*)IsInstSealed((RuntimeObject*)L_0, TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var));
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_2 = V_1;
		NullCheck(L_2);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = L_2->___Task;
		V_0 = ((Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_001f;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___0_asyncResult;
		V_0 = ((Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_001f:
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_5 = V_0;
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		Task_1_t0C4CD3A5BB93A184420D73218644C56C70FDA7E2* L_7 = V_0;
		NullCheck(L_7);
		TaskAwaiter_1_t0B808409CD8201F13AAC85F29D646518C4857BEA L_8;
		L_8 = Task_1_GetAwaiter_mD80ED263BF3F1F8DBDBD177BA3401A0AAAFA38E3(L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		RuntimeObject* L_9;
		L_9 = TaskAwaiter_1_GetResult_mA4A8A1F43A456B40DDA251D00026C60919AED85B((&V_2), il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TaskToApm_End_TisIl2CppFullySharedGenericAny_m91FFD6A6ED859B8F22E6E190E8D8C9E7E161442D_gshared (RuntimeObject* ___0_asyncResult, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TResult_t2939BA84C0BF6524637D8E56EF62BF3F981A5950 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 5));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_TResult_t2939BA84C0BF6524637D8E56EF62BF3F981A5950);
	Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* V_0 = NULL;
	TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* V_1 = NULL;
	TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 V_2;
	memset((&V_2), 0, sizeof(V_2));
	{
		RuntimeObject* L_0 = ___0_asyncResult;
		V_1 = ((TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB*)IsInstSealed((RuntimeObject*)L_0, TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB_il2cpp_TypeInfo_var));
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_1 = V_1;
		if (!L_1)
		{
			goto IL_0018;
		}
	}
	{
		TaskWrapperAsyncResult_t4C6D1512204E29D09826CD904C9ACB9981D57CEB* L_2 = V_1;
		NullCheck(L_2);
		Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572* L_3 = L_2->___Task;
		V_0 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_3, il2cpp_rgctx_data(method->rgctx_data, 0)));
		goto IL_001f;
	}

IL_0018:
	{
		RuntimeObject* L_4 = ___0_asyncResult;
		V_0 = ((Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*)IsInstClass((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 0)));
	}

IL_001f:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_5 = V_0;
		if (L_5)
		{
			goto IL_0028;
		}
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_6 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m4A0936689D360EBC545690326B4DF187196BF2B9(L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_0028:
	{
		Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9* L_7 = V_0;
		NullCheck(L_7);
		TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 L_8;
		L_8 = ((  TaskAwaiter_1_t274550A5F4BB61F8D62C9C83AF92995FCCE549C8 (*) (Task_1_tDF1FF540D7D2248A08580387A39717B7FB7A9CF9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_7, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_2 = L_8;
		InvokerActionInvoker1< Il2CppFullySharedGenericAny* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), (&V_2), (Il2CppFullySharedGenericAny*)L_9);
		il2cpp_codegen_memcpy(il2cppRetVal, L_9, SizeOf_TResult_t2939BA84C0BF6524637D8E56EF62BF3F981A5950);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_TisRuntimeObject_m33D268DC1C26363C733AF217B6DE45D1ABCEDD4D_gshared (Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* ___0_callBack, RuntimeObject* ___1_state, bool ___2_preferLocal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29* G_B2_0 = NULL;
	U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29* G_B1_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29* L_0 = (U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		U3CU3Ec__DisplayClass17_0_1__ctor_m5CA33CA454BC6B0EDE091B120839E1203DFBDDE9(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29* L_1 = L_0;
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_2 = ___0_callBack;
		NullCheck(L_1);
		L_1->___callBack = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callBack), (void*)L_2);
		U3CU3Ec__DisplayClass17_0_1_t2B15CAC58697E814BC5DCB25B4947CD8A1A91E29* L_3 = L_1;
		NullCheck(L_3);
		Action_1_t6F9EB113EB3F16226AEF811A2744F4111C116C87* L_4 = L_3->___callBack;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_001f;
		}
		G_B1_0 = L_3;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB382FDA4B30D0397739E8EC9B987AB66568010F7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001f:
	{
		V_0 = (int32_t)1;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_6 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_6, (RuntimeObject*)G_B2_0, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		RuntimeObject* L_7 = ___1_state;
		bool L_8 = ___2_preferLocal;
		bool L_9;
		L_9 = ThreadPool_QueueUserWorkItemHelper_m5B98C28FB6C9379B8DDD302ABC3D1D1FC1779EDD(L_6, L_7, (&V_0), (bool)1, (bool)((((int32_t)L_8) == ((int32_t)0))? 1 : 0), NULL);
		return L_9;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool ThreadPool_QueueUserWorkItem_TisIl2CppFullySharedGenericAny_m1BF539C01328BDA70BEABD795BFABD5F18D7F8CE_gshared (Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* ___0_callBack, Il2CppFullySharedGenericAny ___1_state, bool ___2_preferLocal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TState_t88AAF175D8D6D417B45F12A19B368FBBE4EABC7F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_TState_t88AAF175D8D6D417B45F12A19B368FBBE4EABC7F);
	int32_t V_0 = 0;
	U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* G_B2_0 = NULL;
	U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* G_B1_0 = NULL;
	{
		U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* L_0 = (U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* L_1 = L_0;
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_2 = ___0_callBack;
		NullCheck(L_1);
		L_1->___callBack = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___callBack), (void*)L_2);
		U3CU3Ec__DisplayClass17_0_1_t6517188DB7537C9DAF05D1031C62A885173826D9* L_3 = L_1;
		NullCheck(L_3);
		Action_1_t923A20D1D4F6B55B2ED5AE21B90F1A0CE0450D99* L_4 = L_3->___callBack;
		if (L_4)
		{
			G_B2_0 = L_3;
			goto IL_001f;
		}
		G_B1_0 = L_3;
	}
	{
		ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129* L_5 = (ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentNullException_t327031E412FAB2351B0022DD5DAD47E67E597129_il2cpp_TypeInfo_var)));
		ArgumentNullException__ctor_m444AE141157E333844FC1A9500224C2F9FD24F4B(L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB382FDA4B30D0397739E8EC9B987AB66568010F7)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_5, method);
	}

IL_001f:
	{
		V_0 = (int32_t)1;
		WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3* L_6 = (WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3*)il2cpp_codegen_object_new(WaitCallback_tFB2C7FD58D024BBC2B0333DC7A4CB63B8DEBD5D3_il2cpp_TypeInfo_var);
		WaitCallback__ctor_m9730564F9A28ECB72462D05AA92CA9E43DE9B41C(L_6, (RuntimeObject*)G_B2_0, (intptr_t)((void*)il2cpp_rgctx_method(method->rgctx_data, 3)), NULL);
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 4)) ? ___1_state : &___1_state), SizeOf_TState_t88AAF175D8D6D417B45F12A19B368FBBE4EABC7F);
		RuntimeObject* L_8 = Box(il2cpp_rgctx_data_no_init(method->rgctx_data, 4), L_7);
		bool L_9 = ___2_preferLocal;
		bool L_10;
		L_10 = ThreadPool_QueueUserWorkItemHelper_m5B98C28FB6C9379B8DDD302ABC3D1D1FC1779EDD(L_6, L_8, (&V_0), (bool)1, (bool)((((int32_t)L_9) == ((int32_t)0))? 1 : 0), NULL);
		return L_10;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisAccount_tEEC69E981115B22CFB24D4EE23BCC01309F318F4_mCC63C704A3C6216FE3E7E4A8B89EC86E3E94FCC7_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	Account_tEEC69E981115B22CFB24D4EE23BCC01309F318F4 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Account_tEEC69E981115B22CFB24D4EE23BCC01309F318F4));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisGroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8_mEA9A1C8A99F72E3C957723B6E18A57B44C54BD02_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	GroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisGroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388_mEABD84D462DA96881D77FDCBF3AB615ED36A9411_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	GroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(GroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mA031350EC5B51A8ADC6636CD987A6C82538871E7_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int16_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0F7A078274F301B83DFC51191B3AFC763DE9C4D0_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_mC3916E2A31C5FA9D0BB4E2A929F5225B4205042F_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int32_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisItemAuto_tAD6C1784205B0369AA061ED726253FAE4736C74A_m4D3DEFBD4813B1644B637AB59461A8DAE621BD97_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	ItemAuto_tAD6C1784205B0369AA061ED726253FAE4736C74A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ItemAuto_tAD6C1784205B0369AA061ED726253FAE4736C74A));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2_mFE685741504CED823A8E05602A74C800FE9AE6CF_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	MapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMapNext2_t6A27779B29B776853D509373D32E4E84649242AB_m76D36CF637B4079AD50453F6EC278E9AAA7F6A9A_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	MapNext2_t6A27779B29B776853D509373D32E4E84649242AB V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(MapNext2_t6A27779B29B776853D509373D32E4E84649242AB));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mD47E3BA42B0A64C431FD8299480A820974A40EEF_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRuntimeObject_m27E41ACCEE817CDFBB9616ED62F233A4EA0D8A49_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	RuntimeObject* V_0 = NULL;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_1 = V_0;
		if (!L_1)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisRenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A_mC60CB167BC480E23DF6A0A65004EB6F911A18A24_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RenderInstancedDataLayout_t06AF33510AC89DBD09A3A161FF809EDFAB30EC7A));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122_m28BA78BC355CF32BB4AD2746ED27CB02477A1157_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(ResourceLocator_t84F68A0DD2AA185761938E49BBE9B2C46A47E122));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m4E32ABECEB34E40D97869E0D1B4FA0CF1A121914_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(int8_t));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisX509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_mA17F2B115A27352849BFF45AE179346E639C2B76_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisIl2CppFullySharedGenericAny_mD1546AD31023759C065B096A4FE412E69838164A_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
	Il2CppFullySharedGenericAny V_0 = alloca(SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
	memset(V_0, 0, SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((Il2CppFullySharedGenericAny*)V_0, SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
		il2cpp_codegen_memcpy(L_1, V_0, SizeOf_T_t5DE196DCA7C0154BE25468F6265C9DFFFA59B2FA);
		bool L_2 = il2cpp_codegen_would_box_to_non_null(il2cpp_rgctx_data_no_init(method->rgctx_data, 0), L_1);
		if (!L_2)
		{
			goto IL_0019;
		}
	}
	{
		int32_t L_3 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_3, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_m054615FD6A62EE7702B344B2E24BA8423FEF9621_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m85CB6FEF509A4859399929F09F545FA1133C3051_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisCategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074_m8B7C55656AD7F370CA55E403269FCE079A9EE8E0_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(CategoryEntrySprite_t921E1B4FF6D1C2E396E4012894CED7DE39892074));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisTransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_mAF2762D430297FCB48E86EA54E10A3CA16DCEB33_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ThrowHelper_IfNullAndNullsAreIllegalThenThrow_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mB9D015C9FCBF6CD2BCA1E436743F0CC080CFC110_gshared (RuntimeObject* ___0_value, int32_t ___1_argName, const RuntimeMethod* method) 
{
	WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44 V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		RuntimeObject* L_0 = ___0_value;
		if (L_0)
		{
			goto IL_0019;
		}
	}
	{
		il2cpp_codegen_initobj((&V_0), sizeof(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44));
	}
	{
		int32_t L_2 = ___1_argName;
		ThrowHelper_ThrowArgumentNullException_m05B7DB75576C421D7CA84FA73F84D7E114974CEC(L_2, NULL);
	}

IL_0019:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformAccessJob_ArrayAdd_TisRuntimeObject_m649191C170E0A103D7F134B890D71897C6C826DA_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_array, RuntimeObject* ___1_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_0 = ___0_array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = *((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)L_0);
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_2 = ___0_array;
		int32_t L_3 = V_0;
		Array_Resize_TisRuntimeObject_mE8D92C287251BAF8256D85E5829F749359EC334E(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), il2cpp_rgctx_method(method->rgctx_data, 1));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_4 = ___0_array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_5 = *((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)L_4);
		int32_t L_6 = V_0;
		RuntimeObject* L_7 = ___1_item;
		NullCheck(L_5);
		(L_5)->SetAt(static_cast<il2cpp_array_size_t>(L_6), (RuntimeObject*)L_7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformAccessJob_ArrayAdd_TisIl2CppFullySharedGenericAny_m72F7EBA3046372925BE120F853A5D61B6B80E74E_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, Il2CppFullySharedGenericAny ___1_item, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t13F35ABA164B2548C3BAF6DBCDC2FB83F66259D1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_7 = alloca(SizeOf_T_t13F35ABA164B2548C3BAF6DBCDC2FB83F66259D1);
	int32_t V_0 = 0;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)L_0);
		NullCheck(L_1);
		V_0 = ((int32_t)(((RuntimeArray*)L_1)->max_length));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_2 = ___0_array;
		int32_t L_3 = V_0;
		((  void (*) (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_2, ((int32_t)il2cpp_codegen_add(L_3, 1)), il2cpp_rgctx_method(method->rgctx_data, 1));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_4 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_5 = *((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)L_4);
		int32_t L_6 = V_0;
		il2cpp_codegen_memcpy(L_7, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___1_item : &___1_item), SizeOf_T_t13F35ABA164B2548C3BAF6DBCDC2FB83F66259D1);
		NullCheck(L_5);
		il2cpp_codegen_memcpy((L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), L_7, SizeOf_T_t13F35ABA164B2548C3BAF6DBCDC2FB83F66259D1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(L_5)->GetAddressAt(static_cast<il2cpp_array_size_t>(L_6)), (void*)L_7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformAccessJob_ArrayRemoveAt_TisRuntimeObject_mCE59945B2561523BC69A4F75964F37B165D49759_gshared (ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* V_0 = NULL;
	{
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_0 = ___0_array;
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_1 = *((ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918**)L_0);
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_2 = (List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		List_1__ctor_mE097DBD72433D1AFC11733F5678602603A756424(L_2, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_2;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_3 = V_0;
		int32_t L_4 = ___1_index;
		NullCheck(L_3);
		List_1_RemoveAt_m54F62297ADEE4D4FDA697F49ED807BF901201B54(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918** L_5 = ___0_array;
		List_1_tA239CB83DE5615F348BB0507E45F490F4F7C9A8D* L_6 = V_0;
		NullCheck(L_6);
		ObjectU5BU5D_t8061030B0A12A55D5AD8652A20C922FE99450918* L_7;
		L_7 = List_1_ToArray_mD7E4F8E7C11C3C67CB5739FCC0A6E86106A6291F(L_6, il2cpp_rgctx_method(method->rgctx_data, 5));
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TransformAccessJob_ArrayRemoveAt_TisIl2CppFullySharedGenericAny_mD788DA68A5DA6D9B4D4511A67FD850BDA1C945B8_gshared (__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** ___0_array, int32_t ___1_index, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* V_0 = NULL;
	{
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_0 = ___0_array;
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_1 = *((__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC**)L_0);
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_2 = (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 1));
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_2, (RuntimeObject*)L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_2;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_3 = V_0;
		int32_t L_4 = ___1_index;
		NullCheck(L_3);
		((  void (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, int32_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)))(L_3, L_4, il2cpp_rgctx_method(method->rgctx_data, 4));
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC** L_5 = ___0_array;
		List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A* L_6 = V_0;
		NullCheck(L_6);
		__Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* L_7;
		L_7 = ((  __Il2CppFullySharedGenericTypeU5BU5D_tCAB6D060972DD49223A834B7EEFEB9FE2D003BEC* (*) (List_1_tDBA89B0E21BAC58CFBD3C1F76E4668E3B562761A*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 5)))(L_6, il2cpp_rgctx_method(method->rgctx_data, 5));
		*((RuntimeObject**)L_5) = (RuntimeObject*)L_7;
		Il2CppCodeGenWriteBarrier((void**)(RuntimeObject**)L_5, (void*)(RuntimeObject*)L_7);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* Tuple_Create_TisRuntimeObject_TisRuntimeObject_mB9E45EDC3450763C550051587640A39E730AF094_gshared (RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_item1;
		RuntimeObject* L_1 = ___1_item2;
		Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6* L_2 = (Tuple_2_t4B75F18A57363D88671568DEF504983C60E18AC6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		Tuple_2__ctor_m1F7B239EC49FE179C459F8DD99F1725E91E9C489(L_2, L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 3));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* Tuple_Create_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mDA77107B30389EA4092249AFF47FFBFFE45BB038_gshared (Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T1_t465A831C1422E7901BD8C9BF81DDBD106225CB8E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_t6244E4F2C95F4397B9687AD82F4B8C331D01927D = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t465A831C1422E7901BD8C9BF81DDBD106225CB8E);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t6244E4F2C95F4397B9687AD82F4B8C331D01927D);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_t465A831C1422E7901BD8C9BF81DDBD106225CB8E);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_item2 : &___1_item2), SizeOf_T2_t6244E4F2C95F4397B9687AD82F4B8C331D01927D);
		Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8* L_2 = (Tuple_2_t70DF7570FDF62592ED394F88C0CA61A12E7647C8*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 2));
		InvokerActionInvoker2< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_1: *(void**)L_1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_3_t76B18FDDE87BFB452CF969BC16B10789E225FCF6* Tuple_Create_TisRuntimeObject_TisMemory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036_TisRuntimeObject_m9EFFC298253CAB7998FBD94B824C8FB51A458A11_gshared (RuntimeObject* ___0_item1, Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 ___1_item2, RuntimeObject* ___2_item3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_item1;
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036 L_1 = ___1_item2;
		RuntimeObject* L_2 = ___2_item3;
		Tuple_3_t76B18FDDE87BFB452CF969BC16B10789E225FCF6* L_3 = (Tuple_3_t76B18FDDE87BFB452CF969BC16B10789E225FCF6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		Tuple_3__ctor_mD9AAD1E691AD4F828FF40E1E30DBFCD821DDA70C(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF* Tuple_Create_TisRuntimeObject_TisRuntimeObject_TisRuntimeObject_mBDF688DB1E9BEF8A9FEFCDD9904ADF09523BB8BC_gshared (RuntimeObject* ___0_item1, RuntimeObject* ___1_item2, RuntimeObject* ___2_item3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		RuntimeObject* L_0 = ___0_item1;
		RuntimeObject* L_1 = ___1_item2;
		RuntimeObject* L_2 = ___2_item3;
		Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF* L_3 = (Tuple_3_tA9629AB90A9BD8C1E0490927A977DF122A277ACF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		Tuple_3__ctor_m6AEF789D0F9924D31EF4C5A29232A093E1D05D4A(L_3, L_0, L_1, L_2, il2cpp_rgctx_method(method->rgctx_data, 4));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* Tuple_Create_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mF23536EC283D2934606FB2245E28DFB4E9638BF9_gshared (Il2CppFullySharedGenericAny ___0_item1, Il2CppFullySharedGenericAny ___1_item2, Il2CppFullySharedGenericAny ___2_item3, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T1_t776085CF94B8744D4D9FD308E39A8142DC0C8334 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const uint32_t SizeOf_T2_t45438045FCA6F1CA09F27AD3D628AEB2C340AA76 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const uint32_t SizeOf_T3_t9BD166B938DD605E5E0DC3F4C050FD2B5FBFD72C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_0 = alloca(SizeOf_T1_t776085CF94B8744D4D9FD308E39A8142DC0C8334);
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T2_t45438045FCA6F1CA09F27AD3D628AEB2C340AA76);
	const Il2CppFullySharedGenericAny L_2 = alloca(SizeOf_T3_t9BD166B938DD605E5E0DC3F4C050FD2B5FBFD72C);
	{
		il2cpp_codegen_memcpy(L_0, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___0_item1 : &___0_item1), SizeOf_T1_t776085CF94B8744D4D9FD308E39A8142DC0C8334);
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? ___1_item2 : &___1_item2), SizeOf_T2_t45438045FCA6F1CA09F27AD3D628AEB2C340AA76);
		il2cpp_codegen_memcpy(L_2, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? ___2_item3 : &___2_item3), SizeOf_T3_t9BD166B938DD605E5E0DC3F4C050FD2B5FBFD72C);
		Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB* L_3 = (Tuple_3_t36EDA4ECFC896BB9654215618609DD6607327DFB*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 3));
		InvokerActionInvoker3< Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny, Il2CppFullySharedGenericAny >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 4)), il2cpp_rgctx_method(method->rgctx_data, 4), L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? L_0: *(void**)L_0), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 1)) ? L_1: *(void**)L_1), (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 2)) ? L_2: *(void**)L_2));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_CanBeInstantiated_TisIl2CppFullySharedGenericAny_m8DD98722EE8C5AD72CC3361DA65279E2E914DA57_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_CheckCanBeInstantiated_TisIl2CppFullySharedGenericAny_mF4DC2D1251C15CC68D20D7959AEBA5D8192C4004_gshared (RuntimeObject* ___0_constructor, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	{
		RuntimeObject* L_0 = ___0_constructor;
		NullCheck((RuntimeObject*)L_0);
		bool L_1;
		L_1 = InterfaceFuncInvoker0< bool >::Invoke(0, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, (RuntimeObject*)L_0);
		V_0 = (bool)((((int32_t)L_1) == ((int32_t)0))? 1 : 0);
		bool L_2 = V_0;
		if (!L_2)
		{
			goto IL_0032;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		NullCheck((MemberInfo_t*)L_4);
		String_t* L_5;
		L_5 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_4);
		String_t* L_6;
		L_6 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral3477F5F15DC74EADC79ED337F3988716EE1670E9)), L_5, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF1A902BAD5B9128E503E43473944346B65454351)), NULL);
		InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB* L_7 = (InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&InvalidOperationException_t5DDE4D49B7405FAAB1E4576F4715A42A3FAD4BAB_il2cpp_TypeInfo_var)));
		InvalidOperationException__ctor_mE4CB6F4712AB6D99A2358FBAE2E052B3EE976162(L_7, L_6, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_7, method);
	}

IL_0032:
	{
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* L_0 = (TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_mA44AE4CA2839F2717B9950321247E9AA135D7B5C(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* L_1 = V_0;
		((Cache_1_t3D5B27BB72DB559823D975C81EB8746985435377_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t3D5B27BB72DB559823D975C81EB8746985435377_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* L_5 = V_0;
		NullCheck(L_2);
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t6BD2119030A7BD8FE6604F7A5DF2CEF572ECA695* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* L_0 = (TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_mBDEC850104319B918A6CBE0A5FC8CF72FE449073(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* L_1 = V_0;
		((Cache_1_t6A09774E9EC924515184CB0FBF6689D74CD57526_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t6A09774E9EC924515184CB0FBF6689D74CD57526_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* L_5 = V_0;
		NullCheck(L_2);
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t2C599EF20D66173546174E1FEE9032865749569B* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* L_0 = (TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_m59D284115DFA693528774482859F9EAE2D2574A3(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* L_1 = V_0;
		((Cache_1_t1EC3F18F5B6510EED65B625CE37A6C73B0F46377_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t1EC3F18F5B6510EED65B625CE37A6C73B0F46377_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* L_5 = V_0;
		NullCheck(L_2);
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t1112ACFFD3ED7A595EEC07CE30579944DC35A084* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* L_0 = (TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_m02302139520CED9AE781B727D6E067D5D860B16E(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* L_1 = V_0;
		((Cache_1_tB8D73F5DFD6D8711956A5D57AEEA41C64DD59FE6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_tB8D73F5DFD6D8711956A5D57AEEA41C64DD59FE6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* L_5 = V_0;
		NullCheck(L_2);
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_tE2168F7D76AF24C3CDBD874E68275064267A7878* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* L_0 = (TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_mD1ED26178C74371350CCA90F7F0AA542DA05C0D2(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* L_1 = V_0;
		((Cache_1_t60D29BA616C245A5283CB0B5BD4B19DCB7EDCF1C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t60D29BA616C245A5283CB0B5BD4B19DCB7EDCF1C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* L_5 = V_0;
		NullCheck(L_2);
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_tB483B7FBA1AB31F8944236CE6F404C0070EE46AF* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* L_0 = (TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_m57EBE4991938D5FD61C4CC1CBA2995AD683397E0(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* L_1 = V_0;
		((Cache_1_t4ED442C7D3A39C62CE6AD3207C2A7F04760D2F3C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t4ED442C7D3A39C62CE6AD3207C2A7F04760D2F3C_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* L_5 = V_0;
		NullCheck(L_2);
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t1C87E458BAAB4AD6530734CF23FBF63EB6941B16* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353* L_0 = (TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_m74203C1B59EBD226404F82D4FE8ECCE279763902(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353* L_1 = V_0;
		((Cache_1_tC0A5B4DEAAD4F636D5EB7222F76AFA30C44BD765_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_tC0A5B4DEAAD4F636D5EB7222F76AFA30C44BD765_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353* L_5 = V_0;
		NullCheck(L_2);
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t4B02051589066DA6CAD76A46B2FB0896FB6F1353* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* L_0 = (TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_mDE1389C84380C4456818EB59CA7C49951026B1D6(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* L_1 = V_0;
		((Cache_1_t1734B78F91A5E97A0376AADF017CDD9C28F0D1E8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t1734B78F91A5E97A0376AADF017CDD9C28F0D1E8_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* L_5 = V_0;
		NullCheck(L_2);
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t9D3BD244EB1B72A274F2DF3BD2871FE3D1103947* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC* L_0 = (TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_mF487A9F2F4B6893A278DDD2CA281144354953FB1(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC* L_1 = V_0;
		((Cache_1_t165F6C79CDB8F92D5632BF06B4D2859B4F8CB803_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t165F6C79CDB8F92D5632BF06B4D2859B4F8CB803_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC* L_5 = V_0;
		NullCheck(L_2);
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t015B6532B2D88703CA87ACDD65D1F95F946DEBBC* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* L_0 = (TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_mDAFDA633F7A4D154406F63CE7E031CA7299715DE(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* L_1 = V_0;
		((Cache_1_t9D717A73959DD798ED20109ED37309FA61F9047D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t9D717A73959DD798ED20109ED37309FA61F9047D_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* L_5 = V_0;
		NullCheck(L_2);
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_t0B54B8DEF0851D113A157F922D908DE987F2BB1B* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA* L_0 = (TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		TypeConstructor_1__ctor_mE6B1A176CB56765080C95ECB263601E5ECC97ADB(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA* L_1 = V_0;
		((Cache_1_t2AE8DCA73B885EC1BE3528F43866A2B28BA27459_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_t2AE8DCA73B885EC1BE3528F43866A2B28BA27459_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA* L_5 = V_0;
		NullCheck(L_2);
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_tE50E3531CF764328151098BCE662D4FF81F9F4CA* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_CreateTypeConstructor_TisIl2CppFullySharedGenericAny_mA5F70CB8E7370027F0A598FE0123F8A050704304_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	{
		TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* L_0 = (TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6*)il2cpp_codegen_object_new(il2cpp_rgctx_data(method->rgctx_data, 0));
		((  void (*) (TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_0;
		TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* L_1 = V_0;
		((Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor = (RuntimeObject*)L_1;
		Il2CppCodeGenWriteBarrier((void**)(&((Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 4)))->___TypeConstructor), (void*)(RuntimeObject*)L_1);
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		ConcurrentDictionary_2_tE5A8639D8AE0AF65ED6A8B7C1089E9F12ADD7B91* L_2 = ((TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_StaticFields*)il2cpp_codegen_static_fields_for(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var))->___s_TypeConstructors;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* L_5 = V_0;
		NullCheck(L_2);
		ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1(L_2, L_4, (RuntimeObject*)L_5, ConcurrentDictionary_2_set_Item_m050171C2656C2982971EECEA9026CADF5AEF72B1_RuntimeMethod_var);
		TypeConstructor_1_tC9E50C3E7F5087C5A4FFA5280FCE1E9C36B42AF6* L_6 = V_0;
		V_1 = (RuntimeObject*)L_6;
		goto IL_0027;
	}

IL_0027:
	{
		RuntimeObject* L_7 = V_1;
		return L_7;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_GetTypeConstructor_TisRuntimeObject_m16C0BB9AC6C9E7396BA85526EC8A55AF216579DB_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ((Cache_1_tB8D73F5DFD6D8711956A5D57AEEA41C64DD59FE6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___TypeConstructor;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F(il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B3_0 = L_1;
		goto IL_0014;
	}

IL_000f:
	{
		RuntimeObject* L_2 = ((Cache_1_tB8D73F5DFD6D8711956A5D57AEEA41C64DD59FE6_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___TypeConstructor;
		G_B3_0 = L_2;
	}

IL_0014:
	{
		V_0 = G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* TypeUtility_GetTypeConstructor_TisIl2CppFullySharedGenericAny_m85B819FE60F560C72A51E57851E212B324CD2783_gshared (const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	RuntimeObject* G_B3_0 = NULL;
	{
		RuntimeObject* L_0 = ((Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___TypeConstructor;
		if (L_0)
		{
			goto IL_000f;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)))(il2cpp_rgctx_method(method->rgctx_data, 3));
		G_B3_0 = L_1;
		goto IL_0014;
	}

IL_000f:
	{
		RuntimeObject* L_2 = ((Cache_1_tC191D4861D1556D15EB5651A45361205B0FFEB36_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(method->rgctx_data, 2)))->___TypeConstructor;
		G_B3_0 = L_2;
	}

IL_0014:
	{
		V_0 = G_B3_0;
		goto IL_0017;
	}

IL_0017:
	{
		RuntimeObject* L_3 = V_0;
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_Instantiate_TisIl2CppFullySharedGenericAny_m16821F3B413A510B42D80A6D20A540E95AB55F6A_gshared (Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
	const Il2CppFullySharedGenericAny L_4 = L_3;
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
	memset(V_1, 0, SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		((  void (*) (RuntimeObject*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(L_1, il2cpp_rgctx_method(method->rgctx_data, 2));
		RuntimeObject* L_2 = V_0;
		NullCheck(L_2);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_2, (Il2CppFullySharedGenericAny*)L_3);
		il2cpp_codegen_memcpy(V_1, L_3, SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
		goto IL_0017;
	}

IL_0017:
	{
		il2cpp_codegen_memcpy(L_4, V_1, SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
		il2cpp_codegen_memcpy(il2cppRetVal, L_4, SizeOf_T_t7F735B1DDC2B091EDC358DEEF375CD6116C636EE);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_Instantiate_TisIl2CppFullySharedGenericAny_m5DC21E4FCCF2901D5CAB9ABD9672A72829187EE7_gshared (Type_t* ___0_derivedType, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_9 = alloca(SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
	const Il2CppFullySharedGenericAny L_11 = L_9;
	RuntimeObject* V_0 = NULL;
	Il2CppFullySharedGenericAny V_1 = alloca(SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
	memset(V_1, 0, SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
	{
		Type_t* L_0 = ___0_derivedType;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_1;
		L_1 = TypeUtility_GetTypeConstructor_m46157C15601C266EE0DB2324E834E1CE4CBFE1DC(L_0, NULL);
		V_0 = L_1;
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		Type_t* L_4 = ___0_derivedType;
		TypeUtility_CheckIsAssignableFrom_m284900A7E86ACD68227E5E3DCC9430EEC7E1E03E(L_3, L_4, NULL);
		RuntimeObject* L_5 = V_0;
		Type_t* L_6 = ___0_derivedType;
		TypeUtility_CheckCanBeInstantiated_mB2C921D41DC94D83758FC5CFDFEE26911F62B14F(L_5, L_6, NULL);
		RuntimeObject* L_7 = V_0;
		NullCheck(L_7);
		RuntimeObject* L_8;
		L_8 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, L_7);
		void* L_10 = UnBox_Any(L_8, il2cpp_rgctx_data(method->rgctx_data, 1), L_9);
		il2cpp_codegen_memcpy(V_1, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_10))), SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
		goto IL_002f;
	}

IL_002f:
	{
		il2cpp_codegen_memcpy(L_11, V_1, SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
		il2cpp_codegen_memcpy(il2cppRetVal, L_11, SizeOf_T_t263F6929F47D144546F78710E99F878E6A286B45);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_InstantiateArray_TisIl2CppFullySharedGenericAny_mFDFE5C113C01319C0149CDE8BFCB586E246BFE07_gshared (int32_t ___0_count, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_13 = alloca(SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
	const Il2CppFullySharedGenericAny L_37 = L_13;
	const Il2CppFullySharedGenericAny L_39 = L_13;
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
	memset(V_6, 0, SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
	bool V_7 = false;
	bool V_8 = false;
	{
		int32_t L_0 = ___0_count;
		V_4 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___0_count;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB17952A14247828F6A41642FA1C04CD14AE7C12A)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE1EDA87E9ED31C4E7C14E0517587FE44416755AE)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002c:
	{
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_7;
		L_7 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_7;
		RuntimeObject* L_8 = V_0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_8, il2cpp_rgctx_data(method->rgctx_data, 2)));
		RuntimeObject* L_9 = V_1;
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_9) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_10 = V_5;
		if (!L_10)
		{
			goto IL_0052;
		}
	}
	{
		RuntimeObject* L_11 = V_1;
		int32_t L_12 = ___0_count;
		NullCheck(L_11);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 2), L_11, L_12, (Il2CppFullySharedGenericAny*)L_13);
		il2cpp_codegen_memcpy(V_6, L_13, SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
		goto IL_00da;
	}

IL_0052:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_14 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_15;
		L_15 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_14, NULL);
		V_2 = L_15;
		Type_t* L_16 = V_2;
		NullCheck(L_16);
		bool L_17;
		L_17 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_16, NULL);
		V_7 = (bool)((((int32_t)L_17) == ((int32_t)0))? 1 : 0);
		bool L_18 = V_7;
		if (!L_18)
		{
			goto IL_0091;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_19 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_20;
		L_20 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_19, NULL);
		NullCheck((MemberInfo_t*)L_20);
		String_t* L_21;
		L_21 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_20);
		String_t* L_22;
		L_22 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9E39E6666EEBD98BA9B0F0CC91867E890B97377)), L_21, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5F6CA609FD7E424D80133DE3BA7D5A6FE53EED3)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_23 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_23, L_22, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_23, method);
	}

IL_0091:
	{
		Type_t* L_24 = V_2;
		NullCheck(L_24);
		Type_t* L_25;
		L_25 = VirtualFuncInvoker0< Type_t* >::Invoke(45, L_24);
		V_3 = L_25;
		Type_t* L_26 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_27;
		L_27 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC((Type_t*)NULL, L_26, NULL);
		V_8 = L_27;
		bool L_28 = V_8;
		if (!L_28)
		{
			goto IL_00ca;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_29 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 5)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_30;
		L_30 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_29, NULL);
		NullCheck((MemberInfo_t*)L_30);
		String_t* L_31;
		L_31 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_30);
		String_t* L_32;
		L_32 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralB9E39E6666EEBD98BA9B0F0CC91867E890B97377)), L_31, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FFBA8CC2A329F0612696574F8F4DD7FBA8E3BE0)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_33 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_33, L_32, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_33, method);
	}

IL_00ca:
	{
		Type_t* L_34 = V_3;
		int32_t L_35 = ___0_count;
		RuntimeArray* L_36;
		L_36 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_34, L_35, NULL);
		void* L_38 = UnBox_Any((RuntimeObject*)L_36, il2cpp_rgctx_data(method->rgctx_data, 4), L_37);
		il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_38))), SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
		goto IL_00da;
	}

IL_00da:
	{
		il2cpp_codegen_memcpy(L_39, V_6, SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
		il2cpp_codegen_memcpy(il2cppRetVal, L_39, SizeOf_TArray_tCC895BE754673F9F64E3B106535BF9692E92AC48);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_InstantiateArray_TisIl2CppFullySharedGenericAny_m1FCEE0C26FAE797853D3A634E97FFBF64C012B22_gshared (Type_t* ___0_derivedType, int32_t ___1_count, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_14 = alloca(SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
	const Il2CppFullySharedGenericAny L_38 = L_14;
	const Il2CppFullySharedGenericAny L_40 = L_14;
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	Il2CppFullySharedGenericAny V_6 = alloca(SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
	memset(V_6, 0, SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
	bool V_7 = false;
	bool V_8 = false;
	{
		int32_t L_0 = ___1_count;
		V_4 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_002c;
		}
	}
	{
		int32_t L_2 = ___1_count;
		int32_t L_3 = L_2;
		RuntimeObject* L_4 = Box(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var)), &L_3);
		String_t* L_5;
		L_5 = String_Format_mA0534D6E2AE4D67A6BD8D45B3321323930EB930C(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralDF29F6D97E24431ECD5F1657989D9AD6B5FF2A0E)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE1EDA87E9ED31C4E7C14E0517587FE44416755AE)), (RuntimeObject*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral07624473F417C06C74D59C64840A1532FCE2C626)), L_4, NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_6 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_6, L_5, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_6, method);
	}

IL_002c:
	{
		Type_t* L_7 = ___0_derivedType;
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = PropertyBagStore_GetPropertyBag_m90F2EBB48D60993594856358C572964C8011143E(L_7, NULL);
		V_0 = L_8;
		RuntimeObject* L_9 = V_0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_9, il2cpp_rgctx_data(method->rgctx_data, 0)));
		RuntimeObject* L_10 = V_1;
		V_5 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_10) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_11 = V_5;
		if (!L_11)
		{
			goto IL_0053;
		}
	}
	{
		RuntimeObject* L_12 = V_1;
		int32_t L_13 = ___1_count;
		NullCheck(L_12);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 0), L_12, L_13, (Il2CppFullySharedGenericAny*)L_14);
		il2cpp_codegen_memcpy(V_6, L_14, SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
		goto IL_00db;
	}

IL_0053:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_15 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_16;
		L_16 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_15, NULL);
		V_2 = L_16;
		Type_t* L_17 = V_2;
		NullCheck(L_17);
		bool L_18;
		L_18 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_17, NULL);
		V_7 = (bool)((((int32_t)L_18) == ((int32_t)0))? 1 : 0);
		bool L_19 = V_7;
		if (!L_19)
		{
			goto IL_0092;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_21;
		L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
		NullCheck((MemberInfo_t*)L_21);
		String_t* L_22;
		L_22 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_21);
		String_t* L_23;
		L_23 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63D67EDF1DFC329AF697D485FCB2431349E3E836)), L_22, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF5F6CA609FD7E424D80133DE3BA7D5A6FE53EED3)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_24 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_24, L_23, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_24, method);
	}

IL_0092:
	{
		Type_t* L_25 = V_2;
		NullCheck(L_25);
		Type_t* L_26;
		L_26 = VirtualFuncInvoker0< Type_t* >::Invoke(45, L_25);
		V_3 = L_26;
		Type_t* L_27 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_28;
		L_28 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC((Type_t*)NULL, L_27, NULL);
		V_8 = L_28;
		bool L_29 = V_8;
		if (!L_29)
		{
			goto IL_00cb;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_30 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Type_t_il2cpp_TypeInfo_var)));
		Type_t* L_31;
		L_31 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_30, NULL);
		NullCheck((MemberInfo_t*)L_31);
		String_t* L_32;
		L_32 = VirtualFuncInvoker0< String_t* >::Invoke(7, (MemberInfo_t*)L_31);
		String_t* L_33;
		L_33 = String_Concat_m8855A6DE10F84DA7F4EC113CADDB59873A25573B(((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral63D67EDF1DFC329AF697D485FCB2431349E3E836)), L_32, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral1FFBA8CC2A329F0612696574F8F4DD7FBA8E3BE0)), NULL);
		ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263* L_34 = (ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&ArgumentException_tAD90411542A20A9C72D5CDA3A84181D8B947A263_il2cpp_TypeInfo_var)));
		ArgumentException__ctor_m026938A67AF9D36BB7ED27F80425D7194B514465(L_34, L_33, NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_34, method);
	}

IL_00cb:
	{
		Type_t* L_35 = V_3;
		int32_t L_36 = ___1_count;
		RuntimeArray* L_37;
		L_37 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_35, L_36, NULL);
		void* L_39 = UnBox_Any((RuntimeObject*)L_37, il2cpp_rgctx_data(method->rgctx_data, 2), L_38);
		il2cpp_codegen_memcpy(V_6, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_39))), SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
		goto IL_00db;
	}

IL_00db:
	{
		il2cpp_codegen_memcpy(L_40, V_6, SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
		il2cpp_codegen_memcpy(il2cppRetVal, L_40, SizeOf_TArray_t386A802729FA5C7DB8F552663ADCDD7E1551080E);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_SetExplicitInstantiationMethod_TisRuntimeObject_mE9AE43E037CA7786FCC097D961262F0634370C79_gshared (Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* ___0_constructor, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_GetTypeConstructor_TisRuntimeObject_m16C0BB9AC6C9E7396BA85526EC8A55AF216579DB(il2cpp_rgctx_method(method->rgctx_data, 0));
		Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* L_1 = ___0_constructor;
		NullCheck(L_0);
		InterfaceActionInvoker1< Func_1_tD5C081AE11746B200C711DD48DBEB00E3A9276D4* >::Invoke(1, il2cpp_rgctx_data(method->rgctx_data, 1), L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeUtility_SetExplicitInstantiationMethod_TisIl2CppFullySharedGenericAny_m2D8909EEC6C43238849B5CDA814A1B8830FD6DD6_gshared (Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* ___0_constructor, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* L_1 = ___0_constructor;
		NullCheck(L_0);
		InterfaceActionInvoker1< Func_1_tBB8824FA8746333BFFF3AB3CE4A41B58450AF431* >::Invoke(1, il2cpp_rgctx_data(method->rgctx_data, 1), L_0, L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_TryInstantiate_TisIl2CppFullySharedGenericAny_m649F65DE0BCA16E2A127A53A46C010AD35120D3E_gshared (Il2CppFullySharedGenericAny* ___0_instance, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_t82DD230CE8580C6DC3CD4CBEFFC184EADB0B7A95 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	const Il2CppFullySharedGenericAny L_6 = alloca(SizeOf_T_t82DD230CE8580C6DC3CD4CBEFFC184EADB0B7A95);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		V_0 = L_0;
		RuntimeObject* L_1 = V_0;
		NullCheck((RuntimeObject*)L_1);
		bool L_2;
		L_2 = InterfaceFuncInvoker0< bool >::Invoke(0, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, (RuntimeObject*)L_1);
		V_1 = L_2;
		bool L_3 = V_1;
		if (!L_3)
		{
			goto IL_0022;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_4 = ___0_instance;
		RuntimeObject* L_5 = V_0;
		NullCheck(L_5);
		InterfaceActionInvoker1Invoker< Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 1), L_5, (Il2CppFullySharedGenericAny*)L_6);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_4, L_6, SizeOf_T_t82DD230CE8580C6DC3CD4CBEFFC184EADB0B7A95);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 4), (void**)(Il2CppFullySharedGenericAny*)L_4, (void*)L_6);
		V_2 = (bool)1;
		goto IL_002d;
	}

IL_0022:
	{
		Il2CppFullySharedGenericAny* L_7 = ___0_instance;
		il2cpp_codegen_initobj(L_7, SizeOf_T_t82DD230CE8580C6DC3CD4CBEFFC184EADB0B7A95);
		V_2 = (bool)0;
		goto IL_002d;
	}

IL_002d:
	{
		bool L_8 = V_2;
		return L_8;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_TryInstantiate_TisIl2CppFullySharedGenericAny_m3914D5A487BA3A1D1DA0C268C598029CAAD4B975_gshared (Type_t* ___0_derivedType, Il2CppFullySharedGenericAny* ___1_value, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 2));
	const Il2CppFullySharedGenericAny L_16 = alloca(SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
	RuntimeObject* V_0 = NULL;
	bool V_1 = false;
	bool V_2 = false;
	bool V_3 = false;
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		Type_t* L_2 = ___0_derivedType;
		NullCheck(L_1);
		bool L_3;
		L_3 = VirtualFuncInvoker1< bool, Type_t* >::Invoke(21, L_1, L_2);
		V_1 = (bool)((((int32_t)L_3) == ((int32_t)0))? 1 : 0);
		bool L_4 = V_1;
		if (!L_4)
		{
			goto IL_002b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_5 = ___1_value;
		il2cpp_codegen_initobj(L_5, SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
		Il2CppFullySharedGenericAny* L_6 = ___1_value;
		il2cpp_codegen_initobj(L_6, SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
		V_2 = (bool)0;
		goto IL_0060;
	}

IL_002b:
	{
		Type_t* L_7 = ___0_derivedType;
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_8;
		L_8 = TypeUtility_GetTypeConstructor_m46157C15601C266EE0DB2324E834E1CE4CBFE1DC(L_7, NULL);
		V_0 = L_8;
		RuntimeObject* L_9 = V_0;
		NullCheck(L_9);
		bool L_10;
		L_10 = InterfaceFuncInvoker0< bool >::Invoke(0, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, L_9);
		V_3 = (bool)((((int32_t)L_10) == ((int32_t)0))? 1 : 0);
		bool L_11 = V_3;
		if (!L_11)
		{
			goto IL_004b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_12 = ___1_value;
		il2cpp_codegen_initobj(L_12, SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
		V_2 = (bool)0;
		goto IL_0060;
	}

IL_004b:
	{
		Il2CppFullySharedGenericAny* L_13 = ___1_value;
		RuntimeObject* L_14 = V_0;
		NullCheck(L_14);
		RuntimeObject* L_15;
		L_15 = InterfaceFuncInvoker0< RuntimeObject* >::Invoke(1, ITypeConstructor_tAEA6BC4B87F0F3739E4457F21908EF55F666EB08_il2cpp_TypeInfo_var, L_14);
		void* L_17 = UnBox_Any(L_15, il2cpp_rgctx_data(method->rgctx_data, 2), L_16);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_13, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_17))), SizeOf_T_tABFEBC08B2979D6B63177B9428E7CA01DCC3E3B4);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 2), (void**)(Il2CppFullySharedGenericAny*)L_13, (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_17))));
		V_2 = (bool)1;
		goto IL_0060;
	}

IL_0060:
	{
		bool L_18 = V_2;
		return L_18;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool TypeUtility_TryInstantiateArray_TisIl2CppFullySharedGenericAny_m61841BDE42555F9AE20A4F8308FDA87FE9A33043_gshared (int32_t ___0_count, Il2CppFullySharedGenericAny* ___1_instance, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_10 = alloca(SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
	const Il2CppFullySharedGenericAny L_28 = L_10;
	RuntimeObject* V_0 = NULL;
	RuntimeObject* V_1 = NULL;
	Type_t* V_2 = NULL;
	Type_t* V_3 = NULL;
	bool V_4 = false;
	bool V_5 = false;
	bool V_6 = false;
	bool V_7 = false;
	bool V_8 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		int32_t L_0 = ___0_count;
		V_4 = (bool)((((int32_t)L_0) < ((int32_t)0))? 1 : 0);
		bool L_1 = V_4;
		if (!L_1)
		{
			goto IL_001b;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_2 = ___1_instance;
		il2cpp_codegen_initobj(L_2, SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		V_5 = (bool)0;
		goto IL_00ab;
	}

IL_001b:
	{
		il2cpp_codegen_runtime_class_init_inline(PropertyBagStore_tF76E67D0FF5460D8B59B033B6EB4E2A2E446024C_il2cpp_TypeInfo_var);
		RuntimeObject* L_3;
		L_3 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		V_0 = L_3;
		RuntimeObject* L_4 = V_0;
		V_1 = ((RuntimeObject*)IsInst((RuntimeObject*)L_4, il2cpp_rgctx_data(method->rgctx_data, 4)));
		RuntimeObject* L_5 = V_1;
		V_6 = (bool)((!(((RuntimeObject*)(RuntimeObject*)L_5) <= ((RuntimeObject*)(RuntimeObject*)NULL)))? 1 : 0);
		bool L_6 = V_6;
		if (!L_6)
		{
			goto IL_004c;
		}
	}
	{
	}
	try
	{
		Il2CppFullySharedGenericAny* L_7 = ___1_instance;
		RuntimeObject* L_8 = V_1;
		int32_t L_9 = ___0_count;
		NullCheck(L_8);
		InterfaceActionInvoker2Invoker< int32_t, Il2CppFullySharedGenericAny* >::Invoke(0, il2cpp_rgctx_data(method->rgctx_data, 4), L_8, L_9, (Il2CppFullySharedGenericAny*)L_10);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_7, L_10, SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_7, (void*)L_10);
		V_5 = (bool)1;
		goto IL_00ab;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0046;
		}
		throw e;
	}

CATCH_0046:
	{
		RuntimeObject* L_11 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_004b;
	}

IL_004b:
	{
	}

IL_004c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 6)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		V_2 = L_13;
		Type_t* L_14 = V_2;
		NullCheck(L_14);
		bool L_15;
		L_15 = Type_get_IsArray_mB9B8CA713B2AA9D6AFECC24E05AF78D22532B673(L_14, NULL);
		V_7 = (bool)((((int32_t)L_15) == ((int32_t)0))? 1 : 0);
		bool L_16 = V_7;
		if (!L_16)
		{
			goto IL_0073;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_17 = ___1_instance;
		il2cpp_codegen_initobj(L_17, SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		V_5 = (bool)0;
		goto IL_00ab;
	}

IL_0073:
	{
		Type_t* L_18 = V_2;
		NullCheck(L_18);
		Type_t* L_19;
		L_19 = VirtualFuncInvoker0< Type_t* >::Invoke(45, L_18);
		V_3 = L_19;
		Type_t* L_20 = V_3;
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		bool L_21;
		L_21 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC((Type_t*)NULL, L_20, NULL);
		V_8 = L_21;
		bool L_22 = V_8;
		if (!L_22)
		{
			goto IL_0094;
		}
	}
	{
		Il2CppFullySharedGenericAny* L_23 = ___1_instance;
		il2cpp_codegen_initobj(L_23, SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		V_5 = (bool)0;
		goto IL_00ab;
	}

IL_0094:
	{
		Il2CppFullySharedGenericAny* L_24 = ___1_instance;
		Type_t* L_25 = V_3;
		int32_t L_26 = ___0_count;
		RuntimeArray* L_27;
		L_27 = Array_CreateInstance_m13B202130951A03AF5F52470A19E17D3AD2A8983(L_25, L_26, NULL);
		void* L_29 = UnBox_Any((RuntimeObject*)L_27, il2cpp_rgctx_data(method->rgctx_data, 1), L_28);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_24, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_29))), SizeOf_TArray_tB79A9A6E8211AFCF57D3807AEBFC7AF87B0057A1);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericAny*)L_24, (void*)(((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_29))));
		V_5 = (bool)1;
		goto IL_00ab;
	}

IL_00ab:
	{
		bool L_30 = V_5;
		return L_30;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Account_tEEC69E981115B22CFB24D4EE23BCC01309F318F4* Unsafe_Add_TisAccount_tEEC69E981115B22CFB24D4EE23BCC01309F318F4_m31D842B75C63D59968B4A69F3D214289A4024DE9_gshared (Account_tEEC69E981115B22CFB24D4EE23BCC01309F318F4* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		Account_tEEC69E981115B22CFB24D4EE23BCC01309F318F4* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(Account_tEEC69E981115B22CFB24D4EE23BCC01309F318F4);
		return ((Account_tEEC69E981115B22CFB24D4EE23BCC01309F318F4*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mAD356C5FCC414F8EDF133AE32854956A07B53A02_gshared (uint8_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(uint8_t);
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m61D37B4D37DB6653882679C165C6BE5B741D4436_gshared (uint8_t* ___0_source, intptr_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		intptr_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(uint8_t);
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_Add_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m83189BD233605BFA7C7777618A959E04587E2A5A_gshared (void* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(uint8_t);
		return ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m3B5A03651256D5530AE45EFC51984CBC71D27077_gshared (Il2CppChar* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(Il2CppChar);
		return ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_Add_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mF05DC6B7FBABFAD1238842F58FFBA9D7E0332EC2_gshared (Il2CppChar* ___0_source, intptr_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_source;
		intptr_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(Il2CppChar);
		return ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8* Unsafe_Add_TisGroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8_m8EBC4F4D95FB4470FB73F635B245F883AC356A2B_gshared (GroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		GroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(GroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8);
		return ((GroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388* Unsafe_Add_TisGroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388_m2242C1785D5C4497CF2995E89FD16D67A1F5E7DC_gshared (GroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		GroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(GroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388);
		return ((GroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t* Unsafe_Add_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m139DD155BD8D8301CEFA81EFF341C9F724832681_gshared (int16_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		int16_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(int16_t);
		return ((int16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_Add_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mAE1AE85A9993F5AD25A91F4F986D80935A0CF026_gshared (int32_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(int32_t);
		return ((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_Add_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m899362F38BE549883841837EC35E98C4A1E8D225_gshared (int32_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(int32_t);
		return ((int32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_Add_TisIntPtr_t_m8FB08DB0F86B4A84C3B5BB32CF1EE7AEE600B1ED_gshared (intptr_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(intptr_t);
		return ((intptr_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_Add_TisIntPtr_t_mDAC5F408D1C38F35B4D173C6F1AF208C63EF020F_gshared (intptr_t* ___0_source, intptr_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		intptr_t* L_0 = ___0_source;
		intptr_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(intptr_t);
		return ((intptr_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemAuto_tAD6C1784205B0369AA061ED726253FAE4736C74A* Unsafe_Add_TisItemAuto_tAD6C1784205B0369AA061ED726253FAE4736C74A_m78CB80AD204824B44984599AEAFD69B161480EF1_gshared (ItemAuto_tAD6C1784205B0369AA061ED726253FAE4736C74A* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		ItemAuto_tAD6C1784205B0369AA061ED726253FAE4736C74A* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(ItemAuto_tAD6C1784205B0369AA061ED726253FAE4736C74A);
		return ((ItemAuto_tAD6C1784205B0369AA061ED726253FAE4736C74A*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2* Unsafe_Add_TisMapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2_m2F037EF01B7A01A2AC8118FF8EAC18550828F3D5_gshared (MapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		MapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(MapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2);
		return ((MapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MapNext2_t6A27779B29B776853D509373D32E4E84649242AB* Unsafe_Add_TisMapNext2_t6A27779B29B776853D509373D32E4E84649242AB_m980716E8738E3CE2CE1C7D8436155D03B0232875_gshared (MapNext2_t6A27779B29B776853D509373D32E4E84649242AB* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		MapNext2_t6A27779B29B776853D509373D32E4E84649242AB* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(MapNext2_t6A27779B29B776853D509373D32E4E84649242AB);
		return ((MapNext2_t6A27779B29B776853D509373D32E4E84649242AB*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* Unsafe_Add_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6C6AA4CDB41A43AD3800516A80751BE28B524269_gshared (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		return ((Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_Add_TisRuntimeObject_mC28B0645E6AC1C26510942FD04AD041A52567BF5_gshared (RuntimeObject** ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(RuntimeObject*);
		return ((RuntimeObject**)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t* Unsafe_Add_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m64BF56E1F82EC7352EC948EADDA6EFAB40132B86_gshared (int8_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		int8_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(int8_t);
		return ((int8_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Unsafe_Add_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m20E7B3895C9B8B8C4CBF0C72D2569C6F7DD33EC6_gshared (uint16_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(uint16_t);
		return ((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_Add_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE6E7056C0A79DF3F536C439A95EB8BED9A953C96_gshared (uint32_t* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(uint32_t);
		return ((uint32_t*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* Unsafe_Add_TisX509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_m602417C4F4EB9F0E77BFEEC8BAC00AD4E46E1515_gshared (X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D);
		return ((X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mDA4722F94AF13693FCE1583B641A792D2EA47924_gshared (Il2CppFullySharedGenericAny* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBE6850158665A8E196430E1D80AEFF9AC121F5F9 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_tBE6850158665A8E196430E1D80AEFF9AC121F5F9;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_Add_TisIl2CppFullySharedGenericAny_mC89D70E498F759E971238CF82E99E44CC68197DA_gshared (Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tEE9E2B0A67EF7877E2DDB454C5066EBB8C09D0DA = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_tEE9E2B0A67EF7877E2DDB454C5066EBB8C09D0DA;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, (int32_t)L_2))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_Add_TisIl2CppFullySharedGenericAny_m25356A475C0867B15741BD80812E4EBA4394F3C5_gshared (void* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3ED59D9C3AB22383C6F506D05E4A04928B7130D6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = SizeOf_T_t3ED59D9C3AB22383C6F506D05E4A04928B7130D6;
		return ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* Unsafe_Add_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mECCEF408D5A4C7D9CF866468C962FBCEB8D16A8D_gshared (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837);
		return ((OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* Unsafe_Add_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m8F9E4CAFBCF5A6DB4DD14B44D38BF20AA8D2FB6D_gshared (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC);
		return ((SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* Unsafe_Add_TisTransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_m0A205DE746C4468D9F147CF9E70115218EBC9779_gshared (TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646);
		return ((TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* Unsafe_Add_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m36FD7705490658F779614182387633AAB5FCA4E4_gshared (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* ___0_source, int32_t ___1_elementOffset, const RuntimeMethod* method) 
{
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_0 = ___0_source;
		int32_t L_1 = ___1_elementOffset;
		uint32_t L_2 = sizeof(WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44);
		return ((WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)il2cpp_codegen_multiply(L_1, ((intptr_t)L_2)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AddByteOffset_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB9B2FBDA7C9D9ACEAAF1A13A21CB3820E4D6C42A_gshared (uint8_t* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((uint8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AddByteOffset_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m7A80584F05268AB9D9BA488678556DC7F23392AB_gshared (uint8_t* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		uint8_t* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<uint8_t,intptr_t>(L_0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AddByteOffset_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m553358B7A84CC69A7D8AD3A74A5602F79E355A7E_gshared (Il2CppChar* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((Il2CppChar*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AddByteOffset_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m84D81937D031E8F901409C5BEAC76302AD9A3E05_gshared (Il2CppChar* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		Il2CppChar* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<Il2CppChar,intptr_t>(L_0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_AddByteOffset_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m067FC57FC65300B66C12AAD0F7DD3C436307F20A_gshared (int32_t* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((int32_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_AddByteOffset_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mE3F93B4D9D017D3D13236A4FADC55908F3938F8D_gshared (int32_t* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		int32_t* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<int32_t,intptr_t>(L_0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t* Unsafe_AddByteOffset_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mCA3810138FA124D9F7F71A3D596A4127E6102F51_gshared (int8_t* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		int8_t* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((int8_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t* Unsafe_AddByteOffset_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_mF476D15C51A60B9921602D35A3935D3D59FF05C0_gshared (int8_t* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		int8_t* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		int8_t* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<int8_t,intptr_t>(L_0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Unsafe_AddByteOffset_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m634D44BA9A87B357AC01434089C276B5BD663901_gshared (uint16_t* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((uint16_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Unsafe_AddByteOffset_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m16C91DE2AA40E6B24D70110472F63BFBFEE91907_gshared (uint16_t* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		uint16_t* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<uint16_t,intptr_t>(L_0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_AddByteOffset_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m7E4B9F777AAB1816C16248F31D8B9C1EB3458AD8_gshared (uint32_t* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((uint32_t*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_AddByteOffset_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mE78187DC3BB9609D6DADDB06380F8FD6C4CAC41C_gshared (uint32_t* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		uint32_t* L_3;
		L_3 = il2cpp_unsafe_add_byte_offset<uint32_t,intptr_t>(L_0, L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m023762698D869AA8F4D477B66833C0BCFC1EA25C_gshared (Il2CppFullySharedGenericAny* ___0_source, intptr_t ___1_byteOffset, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		intptr_t L_1 = ___1_byteOffset;
		return ((Il2CppFullySharedGenericAny*)il2cpp_codegen_add((intptr_t)L_0, L_1));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AddByteOffset_TisIl2CppFullySharedGenericAny_m77EFAC6DAA578E6C65CAC97578F1800F25019689_gshared (Il2CppFullySharedGenericAny* ___0_source, uint64_t ___1_byteOffset, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		uint64_t L_1 = ___1_byteOffset;
		intptr_t L_2;
		L_2 = IntPtr_op_Explicit_mE2CEC14C61FD5E2159A03EA2AD97F5CDC5BB9F4D((void*)((uintptr_t)L_1), NULL);
		Il2CppFullySharedGenericAny* L_3;
		L_3 = ((  Il2CppFullySharedGenericAny* (*) (Il2CppFullySharedGenericAny*, intptr_t, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m17DCB1423518B0B3E4524EAC5FE26BA65A6BC92A_gshared (uint8_t* ___0_left, uint8_t* ___1_right, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_left;
		uint8_t* L_1 = ___1_right;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mB37DE4456CA121DF4176470A637AAE3B95F46A1F_gshared (Il2CppChar* ___0_left, Il2CppChar* ___1_right, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_left;
		Il2CppChar* L_1 = ___1_right;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_AreSame_TisIl2CppFullySharedGenericAny_mEFCD9F27093DEB04CA603DC1C6F306CE6DCCDC3C_gshared (Il2CppFullySharedGenericAny* ___0_left, Il2CppFullySharedGenericAny* ___1_right, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_left;
		Il2CppFullySharedGenericAny* L_1 = ___1_right;
		return (bool)((((RuntimeObject*)(intptr_t)L_0) == ((RuntimeObject*)(intptr_t)L_1))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Unsafe_As_TisRuntimeObject_mFDA1457944192D987E8EC451CC8BFB2E800D78A1_gshared (RuntimeObject* ___0_o, const RuntimeMethod* method) 
{
	{
		RuntimeObject* L_0 = ___0_o;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* Unsafe_As_TisMemory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036_TisReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399_m0BDCA36D6E3E8B46DD9084DA7861BD8A1905FD09_gshared (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* ___0_source, const RuntimeMethod* method) 
{
	{
		Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* L_0 = ___0_source;
		return (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036* Unsafe_As_TisReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399_TisMemory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036_m3F2AAF43EB8828BA9BAFD42611A1C76E3D02FEF4_gshared (ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* ___0_source, const RuntimeMethod* method) 
{
	{
		ReadOnlyMemory_1_t63F301BF893B0AB689953D86A641168CA66D2399* L_0 = ___0_source;
		return (Memory_1_tB7CEF4416F5014E364267478CEF016A4AC5C0036*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041* Unsafe_As_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_TisVolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041_m509613DF59C772E07DA41B64E4636ED011AD925F_gshared (bool* ___0_source, const RuntimeMethod* method) 
{
	{
		bool* L_0 = ___0_source;
		return (VolatileBoolean_t9E1B0E7929E736D122D1C494D49E80C90874D041*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Account_tEEC69E981115B22CFB24D4EE23BCC01309F318F4* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisAccount_tEEC69E981115B22CFB24D4EE23BCC01309F318F4_m162B50313A2339111FAADB2F8419E4FF25B34F4D_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (Account_tEEC69E981115B22CFB24D4EE23BCC01309F318F4*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mF141105DD72A5BC944BA8293BB695024D02DE30D_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (uint8_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m2498099B9F71500DEE1CFA774D816C5050D58A9C_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (Il2CppChar*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisGroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8_m24102C96EB8FA72E8EB90F29F82772C392651EDB_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (GroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR GroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisGroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388_mEC940E300980E89AB916FF1C9780E3719FD60454_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (GroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int16_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_m265A141BEB9F07AE50480CDA4561C486F64C2BF8_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (int16_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m22CF3813B9733A0CDBE0E8A325136D952A44698A_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (int32_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m8E434534B985BD5A763E40937F16E2FEB1EFFD8C_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (int32_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int64_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_m873F3ED8401625B3120352966E4FCAEDAB904C44_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (int64_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisIntPtr_t_mFE3FD04DDEEAC4FE4A0BFAC72E9DEDDED147320B_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (intptr_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR ItemAuto_tAD6C1784205B0369AA061ED726253FAE4736C74A* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisItemAuto_tAD6C1784205B0369AA061ED726253FAE4736C74A_m0742B01E1C068E002FA1D03012DED2906D997587_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (ItemAuto_tAD6C1784205B0369AA061ED726253FAE4736C74A*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisMapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2_m53BE7651F3D32725422B52B80B3273BCCEAB74CC_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (MapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MapNext2_t6A27779B29B776853D509373D32E4E84649242AB* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisMapNext2_t6A27779B29B776853D509373D32E4E84649242AB_m1334B9EE8CC1A5FD36BED7670F59A5F0EC75BEA4_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (MapNext2_t6A27779B29B776853D509373D32E4E84649242AB*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m517EA4CAF9AE104CE28214AE8F8678DDE0582A27_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisRuntimeObject_m7DB7A86DF0CAE596697C48C03F15EE61EDA619D8_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (RuntimeObject**)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int8_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m5B9E0211025B80F303C8569E17A8E6CF6F105DCF_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (int8_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m8CD3F3B4E3E4EA8EAFE84DB40D862A314AFE6C2F_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (uint16_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mECFA2BF904F47BC0C95C31ED2DD33612380D2DB8_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (uint32_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisX509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_mAF1C33E243AE9F01488B03A297CC3FD35A383CEC_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mC4FD738B0067607B4B710D37A7B610661F585602_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m616F80AB4B82BC53D742CE5865AB69DEECC3EAC1_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisTransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_mADF89B919616077896380F59091916CAB7684702_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* Unsafe_As_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_mF1E726DE9BDC7573ADE984D127A07D04BB9F19AB_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mFB63566144F982614BC997ACF976C6768FEDBB4C_gshared (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_source;
		return (uint8_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m6EB81656367ABFE46E4CDD8AB8C3123E1BFFDCC6_gshared (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_source;
		return (Il2CppChar*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_TisIntPtr_t_mFE3C485EFE262BB70B742CCF050336F7FDF603E0_gshared (Il2CppChar* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_source;
		return (intptr_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9* Unsafe_As_TisDecimal_tDA6C877282B2D789CF97C0949661CC11D643969F_TisDecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9_mAC31A6B0EE363D6AD04F11F629BBD69FD3F45894_gshared (Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* ___0_source, const RuntimeMethod* method) 
{
	{
		Decimal_tDA6C877282B2D789CF97C0949661CC11D643969F* L_0 = ___0_source;
		return (DecCalc_t0E9BD1BAF25BAD15940FF4BAB400D012A8DEBCA9*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m750288389C1B4714A9DFC51DA537AD1507BD5320_gshared (int32_t* ___0_source, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		return (uint8_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mCFC3FDFDA844B03EFD3B3102FA653AF097D58B8F_gshared (int32_t* ___0_source, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		return (Il2CppChar*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisIntPtr_t_mCE0A85C275D5E37E248550B592556E492DAB2820_gshared (int32_t* ___0_source, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		return (intptr_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_mBC79D59277D406B719AE11BF00E685C85405C227_gshared (int32_t* ___0_source, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		return (uint32_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693* Unsafe_As_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisVolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693_mDCDD9E0147D7774149CDDE029409D70E832CA595_gshared (int32_t* ___0_source, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_source;
		return (VolatileInt32_tF87437D9108A3B42A6D3DA0147CD8B00C0538693*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint64_t* Unsafe_As_TisInt64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_TisUInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_mF502BB692DEFE52066B62ADB4E3A9C3C9B8C692C_gshared (int64_t* ___0_source, const RuntimeMethod* method) 
{
	{
		int64_t* L_0 = ___0_source;
		return (uint64_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject** Unsafe_As_TisRuntimeObject_TisRuntimeObject_m9DBDCD08C3887118964A2A598815AFAE6903D44B_gshared (RuntimeObject** ___0_source, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_source;
		return (RuntimeObject**)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* Unsafe_As_TisRuntimeObject_TisVolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99_m55BDDA054187BA5DECD7DD18CA865FD40B8D64B5_gshared (RuntimeObject** ___0_source, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_source;
		return (VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m070D4FF3C8A2F071B89FBB424D1C233C9C008AAF_gshared (int8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		int8_t* L_0 = ___0_source;
		return (uint8_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mFFE7F1D130933E8CCA5E7145B6B19935F032BCB6_gshared (int8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		int8_t* L_0 = ___0_source;
		return (Il2CppChar*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_TisIntPtr_t_m9DDEE97EF5579A8A80AB783DEFAAEABB455F3106_gshared (int8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		int8_t* L_0 = ___0_source;
		return (intptr_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m9077C523106B635218BC3F9171876E1F0BA50694_gshared (uint16_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_source;
		return (uint8_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mC4DCE71843181DDCBC3CBC8DF25FA4731AC7C40E_gshared (uint16_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_source;
		return (Il2CppChar*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_TisIntPtr_t_m0DB9BC041DE1D63FD26259E631075103807373B0_gshared (uint16_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint16_t* L_0 = ___0_source;
		return (intptr_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m32F76D490695DE07EF509A0D0EAFDD14F5056DC7_gshared (uint32_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_source;
		return (uint8_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mA499441C7AE51E5DAC9C173774A8CA93DA466FEA_gshared (uint32_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_source;
		return (Il2CppChar*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* Unsafe_As_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_TisIntPtr_t_m4C2FABB9790BACA388589A0E6DCD0B3E57C82761_gshared (uint32_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint32_t* L_0 = ___0_source;
		return (intptr_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_As_TisIl2CppFullySharedGenericAny_TisIl2CppFullySharedGenericAny_mAF06A659941D15118FC1E4800E3A7A0F262628A4_gshared (Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m4DA2DD0D3D693DBA83B9F5A662F084D95A2C1567_gshared (uint8_t* ___0_value, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_value;
		return (void*)(((uintptr_t)L_0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_mBBDDD07F24C68A147D30BA6A3EBFA0669F0F8259_gshared (Il2CppChar* ___0_value, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_value;
		return (void*)(((uintptr_t)L_0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisRuntimeObject_m1273FB5BB30ABB03C0EAD425C97F04F8E21D102B_gshared (RuntimeObject** ___0_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_value;
		return (void*)(((uintptr_t)L_0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisIl2CppFullySharedGenericAny_mE85961ECFFC7310EBEF309E6E67AD0FED2F9030B_gshared (Il2CppFullySharedGenericAny* ___0_value, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_value;
		return (void*)(((uintptr_t)L_0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* Unsafe_AsPointer_TisDigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA_mE3F141C1F8E9FAEEA53503076434A94CAB453BD4_gshared (DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA* ___0_value, const RuntimeMethod* method) 
{
	{
		DigitsAndNullTerminator_tEF216B2D9886B3B6EBDBBA0E540214C013C02ECA* L_0 = ___0_value;
		return (void*)(((uintptr_t)L_0));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AsRef_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB7B94F08746E5992AF5DBE62DC46A96AEC7643E9_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Unsafe_AsRef_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m0AEA751C6A2C62806F1E18D4CEC476D2C43DC3EE_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		return (uint8_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppChar* Unsafe_AsRef_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m1669BF83EB856804C2D09104E9571A745C9FA0E9_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		return (Il2CppChar*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_m088920550101BD3FA6B40E99A5F107C35BE752FA_gshared (Il2CppFullySharedGenericAny* ___0_source, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_source;
		return L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_mD269D4D95DA51D3CF4E4025805638814158802A3_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		return (Il2CppFullySharedGenericAny*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisAccount_tEEC69E981115B22CFB24D4EE23BCC01309F318F4_m78B9A9B2714C708441CA546E24E9F203FA33EC46_gshared (Account_tEEC69E981115B22CFB24D4EE23BCC01309F318F4* ___0_left, Account_tEEC69E981115B22CFB24D4EE23BCC01309F318F4* ___1_right, const RuntimeMethod* method) 
{
	{
		Account_tEEC69E981115B22CFB24D4EE23BCC01309F318F4* L_0 = ___0_left;
		Account_tEEC69E981115B22CFB24D4EE23BCC01309F318F4* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m6AB8211F6DBEE7422B923884987D1641B66C295A_gshared (uint8_t* ___0_left, uint8_t* ___1_right, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_left;
		uint8_t* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisGroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8_m3704C3FBB3B7E29FD0B0656905F6F687D515DD16_gshared (GroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8* ___0_left, GroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8* ___1_right, const RuntimeMethod* method) 
{
	{
		GroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8* L_0 = ___0_left;
		GroupMap_t7105B8DF16F392D7F7587FA22A899A352E1A9CE8* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisGroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388_m1A581580C6B0C7FA3459CB3B3E8657182AF7FB9C_gshared (GroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388* ___0_left, GroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388* ___1_right, const RuntimeMethod* method) 
{
	{
		GroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388* L_0 = ___0_left;
		GroupMap2_tDD649B7EB44898609976C911B5D7E587E52E9388* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisInt16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_mF2BB501CDDF1DA31263DD24EB2B3FF1A82E981D4_gshared (int16_t* ___0_left, int16_t* ___1_right, const RuntimeMethod* method) 
{
	{
		int16_t* L_0 = ___0_left;
		int16_t* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m3C11A66104F35B278BDABE69A0F7516708E4C623_gshared (int32_t* ___0_left, int32_t* ___1_right, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_left;
		int32_t* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisInt32Enum_tCBAC8BA2BFF3A845FA599F303093BBBA374B6F0C_m38CEF1627C0A085C4FEE14E13E8A1F5D3361B2E2_gshared (int32_t* ___0_left, int32_t* ___1_right, const RuntimeMethod* method) 
{
	{
		int32_t* L_0 = ___0_left;
		int32_t* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisItemAuto_tAD6C1784205B0369AA061ED726253FAE4736C74A_mD22336B9C93F482A41DDC616E1284A2E27A6A1FE_gshared (ItemAuto_tAD6C1784205B0369AA061ED726253FAE4736C74A* ___0_left, ItemAuto_tAD6C1784205B0369AA061ED726253FAE4736C74A* ___1_right, const RuntimeMethod* method) 
{
	{
		ItemAuto_tAD6C1784205B0369AA061ED726253FAE4736C74A* L_0 = ___0_left;
		ItemAuto_tAD6C1784205B0369AA061ED726253FAE4736C74A* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisMapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2_mA89473FFC17CCC3518476B1406F8CAD5804A1DAA_gshared (MapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2* ___0_left, MapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2* ___1_right, const RuntimeMethod* method) 
{
	{
		MapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2* L_0 = ___0_left;
		MapNext_t04317B5461F84B03683F16E1E864A8E3FA5FE3A2* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisMapNext2_t6A27779B29B776853D509373D32E4E84649242AB_mC033CD725F7721432F44E78E71034D16F3B170CD_gshared (MapNext2_t6A27779B29B776853D509373D32E4E84649242AB* ___0_left, MapNext2_t6A27779B29B776853D509373D32E4E84649242AB* ___1_right, const RuntimeMethod* method) 
{
	{
		MapNext2_t6A27779B29B776853D509373D32E4E84649242AB* L_0 = ___0_left;
		MapNext2_t6A27779B29B776853D509373D32E4E84649242AB* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m9F57DBC241150EB8354D20CE47762FC3D3A57403_gshared (Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___0_left, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* ___1_right, const RuntimeMethod* method) 
{
	{
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_0 = ___0_left;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisRuntimeObject_m7A1AD8D8389B88EF0E71789B8757AE7DF8649868_gshared (RuntimeObject** ___0_left, RuntimeObject** ___1_right, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_left;
		RuntimeObject** L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m3D090AB078FDDA628C4358AF6B3631D61B9C7B1B_gshared (int8_t* ___0_left, int8_t* ___1_right, const RuntimeMethod* method) 
{
	{
		int8_t* L_0 = ___0_left;
		int8_t* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisX509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D_mAEB1C0A6EE1EC7A3B32B7214B1B0B4A02F039AEB_gshared (X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* ___0_left, X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* ___1_right, const RuntimeMethod* method) 
{
	{
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* L_0 = ___0_left;
		X509ChainStatus_t5A57DDA24AA1FCA9F2B8D70B767CDDF388E4A80D* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisIl2CppFullySharedGenericAny_m731B9B0C5A4B349E4545E7AAAB44731B9ADB6597_gshared (Il2CppFullySharedGenericAny* ___0_left, Il2CppFullySharedGenericAny* ___1_right, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericAny* L_0 = ___0_left;
		Il2CppFullySharedGenericAny* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisOrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837_mEF5028C8208E7B962C4AE65F3F833DDD1BC5ECF9_gshared (OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* ___0_left, OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* ___1_right, const RuntimeMethod* method) 
{
	{
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_0 = ___0_left;
		OrderBlock_t62FD6F6544F34B5298DEF2F77AAE446F269B7837* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisSingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC_m0AB30724B76BE4817036FFFD56424DB67F13E359_gshared (SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* ___0_left, SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* ___1_right, const RuntimeMethod* method) 
{
	{
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* L_0 = ___0_left;
		SingleRange_tB50C1C2B62BDC445BDBA41FD3CDC77A45A211BBC* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisTransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646_m103ADB18957F2546004C0D32E27237E08C94850A_gshared (TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* ___0_left, TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* ___1_right, const RuntimeMethod* method) 
{
	{
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* L_0 = ___0_left;
		TransformData_t1EB326D4F0A7D2FABB34DAB3D379349B5F623646* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Unsafe_IsAddressLessThan_TisWorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44_m4146B9DC73A3CD4EE2DD174D0FEEFF8BFD2F0D8E_gshared (WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* ___0_left, WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* ___1_right, const RuntimeMethod* method) 
{
	{
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_0 = ___0_left;
		WorkRequest_t8AF542F2E248D9234341817CDB5F76C27D348B44* L_1 = ___1_right;
		return (bool)((!(((RuntimeObject*)(uintptr_t)L_0) >= ((RuntimeObject*)(uintptr_t)L_1)))? 1 : 0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Unsafe_Read_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_mFD33791C135FF5212E900623875C092D42844E4D_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = (*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_Read_TisIl2CppFullySharedGenericAny_mF6B28073E683AAE891ED373C5F5F29DA2A0708A2_gshared (void* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
	{
		void* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tB42CCB1CEED288E2BEBBDFE4BE22B8CB6F084B54);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Unsafe_ReadUnaligned_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_m23E7A727856D98E5D1D8129FB27CEA2715940075_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = (*(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_ReadUnaligned_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9D178787984E8CE025EAF941A7B5E8D73BAE8D1B_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		int32_t L_1 = (*(int32_t*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t Unsafe_ReadUnaligned_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mED059E50CA4EF7236D4C1EFAD1A19C3D36712F06_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		uint16_t L_1 = (*(uint16_t*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint32_t Unsafe_ReadUnaligned_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m43042C9B34E5D513AF723172B137C4322F3EDC74_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		uint32_t L_1 = (*(uint32_t*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uintptr_t Unsafe_ReadUnaligned_TisUIntPtr_t_mD4B64D4FDF6F43C3488DA13281F5AA0ECC24672E_gshared (uint8_t* ___0_source, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_source;
		uintptr_t L_1 = (*(uintptr_t*)L_0);
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_ReadUnaligned_TisIl2CppFullySharedGenericAny_m42C276800437B81F51F1F38619B499B6AAFB0021_gshared (uint8_t* ___0_source, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
	{
		uint8_t* L_0 = ___0_source;
		il2cpp_codegen_memcpy(L_1, L_0, SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
		il2cpp_codegen_memcpy(il2cppRetVal, L_1, SizeOf_T_tE109D24A290E1158759C26079ED706B46290FAE5);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisVector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_mBED8A470840454C70486BC2C85538178BA1FCB07_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1CB1161B53871FE075F5881D9521D0476E1DF691_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisChar_t521A6F19B456D956AF452D926C32709DC03D6B17_m23B522F69D7973DF00CE97B464C99D7C5CC64DEA_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Il2CppChar);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m9AE030E4068ECDA11DD67F66251D87744ECFA98A_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisSByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_m1DE320431D204728EE9FB189456EB602A121B995_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_mA6131DF2439BB55C289E1DFA433D0DD92D7BA5E2_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint16_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m809F14D45C4DEBB28BC7EE404B1BAE0D266DA45D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t Unsafe_SizeOf_TisIl2CppFullySharedGenericAny_mD5748385042811E049C06FFD865AFD213C5FA9EB_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t77C4AF644C0D2AE4F0E9399E7AED3FED3426FBD7 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_t77C4AF644C0D2AE4F0E9399E7AED3FED3426FBD7;
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisUInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_m61F5534E1C33FE40E5D929CE8D9F6D55C0022CC9_gshared (uint8_t* ___0_destination, uint32_t ___1_value, const RuntimeMethod* method) 
{
	{
		uint8_t* L_0 = ___0_destination;
		uint32_t L_1 = ___1_value;
		*(uint32_t*)L_0 = L_1;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unsafe_WriteUnaligned_TisIl2CppFullySharedGenericAny_mF9DAA41D685A65A581864DBF65CE23C6F7E72BDF_gshared (uint8_t* ___0_destination, Il2CppFullySharedGenericAny ___1_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_1 = alloca(SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
	{
		uint8_t* L_0 = ___0_destination;
		il2cpp_codegen_memcpy(L_1, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___1_value : &___1_value), SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)L_0, L_1, SizeOf_T_tBBA6F3D6E1BC76807F91C471253B4033DB66D6E8);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)L_0, (void*)L_1);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Array32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6* Unsafe_AsRef_TisArray32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6_mA61D216FC909FB8B42CB2EDBD3146EF82808E8D9_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	{
		void* L_0 = ___0_source;
		V_0 = (int32_t*)L_0;
		int32_t* L_1 = V_0;
		return (Array32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericAny* Unsafe_AsRef_TisIl2CppFullySharedGenericAny_m32B7913D5C99D58667B8F989FEFA15BF74484607_gshared (void* ___0_source, const RuntimeMethod* method) 
{
	int32_t* V_0 = NULL;
	{
		void* L_0 = ___0_source;
		V_0 = (int32_t*)L_0;
		int32_t* L_1 = V_0;
		return (Il2CppFullySharedGenericAny*)(L_1);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeHashMapData_AllocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mA7023D7ED401BDBC8FC431D73551AAA08BE7928A_gshared (int32_t ___0_length, int32_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4** ___3_outBuf, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		uint32_t L_0 = sizeof(UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4);
		int32_t L_1;
		L_1 = UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3(UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3_RuntimeMethod_var);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___2_label;
		void* L_3;
		L_3 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)L_0)), L_1, L_2, NULL);
		V_0 = (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4*)L_3;
		int32_t L_4 = ___1_bucketLength;
		int32_t L_5;
		L_5 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_4, NULL);
		___1_bucketLength = L_5;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_6 = V_0;
		int32_t L_7 = ___0_length;
		NullCheck(L_6);
		L_6->___keyCapacity = L_7;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_8 = V_0;
		int32_t L_9 = ___1_bucketLength;
		NullCheck(L_8);
		L_8->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		int32_t L_10 = ___0_length;
		int32_t L_11 = ___1_bucketLength;
		int32_t L_12;
		L_12 = UnsafeHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mC69CF5F77034B30127E3A3CE8A94210AB31737A7(L_10, L_11, (&V_1), (&V_2), (&V_3), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_4 = L_12;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_13 = V_0;
		int32_t L_14 = V_4;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_15 = ___2_label;
		void* L_16;
		L_16 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_14), ((int32_t)64), L_15, NULL);
		NullCheck(L_13);
		L_13->___values = (uint8_t*)L_16;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_17 = V_0;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_18 = V_0;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_1;
		NullCheck(L_17);
		L_17->___keys = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_19, L_20));
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_21 = V_0;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_22 = V_0;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___values;
		int32_t L_24 = V_2;
		NullCheck(L_21);
		L_21->___next = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_23, L_24));
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_25 = V_0;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_26 = V_0;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___values;
		int32_t L_28 = V_3;
		NullCheck(L_25);
		L_25->___buckets = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_27, L_28));
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4** L_29 = ___3_outBuf;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_30 = V_0;
		*((intptr_t*)L_29) = (intptr_t)L_30;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeHashMapData_AllocateHashMap_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_mCE2F649F53F3C50C6A56385EED8F316DCD143DC4_gshared (int32_t ___0_length, int32_t ___1_bucketLength, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___2_label, UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4** ___3_outBuf, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* V_0 = NULL;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	{
		uint32_t L_0 = sizeof(UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4);
		int32_t L_1;
		L_1 = UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3(UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3_RuntimeMethod_var);
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___2_label;
		void* L_3;
		L_3 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)((int32_t)L_0)), L_1, L_2, NULL);
		V_0 = (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4*)L_3;
		int32_t L_4 = ___1_bucketLength;
		int32_t L_5;
		L_5 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_4, NULL);
		___1_bucketLength = L_5;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_6 = V_0;
		int32_t L_7 = ___0_length;
		NullCheck(L_6);
		L_6->___keyCapacity = L_7;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_8 = V_0;
		int32_t L_9 = ___1_bucketLength;
		NullCheck(L_8);
		L_8->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_9, 1));
		int32_t L_10 = ___0_length;
		int32_t L_11 = ___1_bucketLength;
		int32_t L_12;
		L_12 = ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_10, L_11, (&V_1), (&V_2), (&V_3), il2cpp_rgctx_method(method->rgctx_data, 0));
		V_4 = L_12;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_13 = V_0;
		int32_t L_14 = V_4;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_15 = ___2_label;
		void* L_16;
		L_16 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_14), ((int32_t)64), L_15, NULL);
		NullCheck(L_13);
		L_13->___values = (uint8_t*)L_16;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_17 = V_0;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_18 = V_0;
		NullCheck(L_18);
		uint8_t* L_19 = L_18->___values;
		int32_t L_20 = V_1;
		NullCheck(L_17);
		L_17->___keys = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_19, L_20));
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_21 = V_0;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_22 = V_0;
		NullCheck(L_22);
		uint8_t* L_23 = L_22->___values;
		int32_t L_24 = V_2;
		NullCheck(L_21);
		L_21->___next = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_23, L_24));
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_25 = V_0;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_26 = V_0;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___values;
		int32_t L_28 = V_3;
		NullCheck(L_25);
		L_25->___buckets = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_27, L_28));
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4** L_29 = ___3_outBuf;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_30 = V_0;
		*((intptr_t*)L_29) = (intptr_t)L_30;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mC69CF5F77034B30127E3A3CE8A94210AB31737A7_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m37642672DB5CD7B67DB139840F4726D718053FA2_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeHashMapData_CalculateDataSize_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m22420CF3307266C6F531C70212165C3FE31DA2CB_gshared (int32_t ___0_length, int32_t ___1_bucketLength, int32_t* ___2_keyOffset, int32_t* ___3_nextOffset, int32_t* ___4_bucketOffset, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	int32_t V_3 = 0;
	int32_t V_4 = 0;
	int32_t V_5 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = L_1;
		int32_t L_2;
		L_2 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		V_1 = L_2;
		int32_t L_3 = ___0_length;
		int32_t L_4;
		L_4 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_0, L_3)), ((int32_t)64), NULL);
		V_2 = L_4;
		int32_t L_5 = V_0;
		int32_t L_6 = ___0_length;
		int32_t L_7;
		L_7 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_5, L_6)), ((int32_t)64), NULL);
		V_3 = L_7;
		int32_t L_8 = V_1;
		int32_t L_9 = ___0_length;
		int32_t L_10;
		L_10 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_8, L_9)), ((int32_t)64), NULL);
		V_4 = L_10;
		int32_t L_11 = V_1;
		int32_t L_12 = ___1_bucketLength;
		int32_t L_13;
		L_13 = CollectionHelper_Align_m0F9A1D60694634D775C811136208ED02D7665F2F(((int32_t)il2cpp_codegen_multiply(L_11, L_12)), ((int32_t)64), NULL);
		V_5 = L_13;
		int32_t L_14 = V_2;
		int32_t L_15 = V_3;
		int32_t L_16 = V_4;
		int32_t L_17 = V_5;
		int32_t* L_18 = ___2_keyOffset;
		int32_t L_19 = V_2;
		*((int32_t*)L_18) = (int32_t)L_19;
		int32_t* L_20 = ___3_nextOffset;
		int32_t* L_21 = ___2_keyOffset;
		int32_t L_22 = *((int32_t*)L_21);
		int32_t L_23 = V_3;
		*((int32_t*)L_20) = (int32_t)((int32_t)il2cpp_codegen_add(L_22, L_23));
		int32_t* L_24 = ___4_bucketOffset;
		int32_t* L_25 = ___3_nextOffset;
		int32_t L_26 = *((int32_t*)L_25);
		int32_t L_27 = V_4;
		*((int32_t*)L_24) = (int32_t)((int32_t)il2cpp_codegen_add(L_26, L_27));
		return ((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(((int32_t)il2cpp_codegen_add(L_14, L_15)), L_16)), L_17));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeHashMapData_ReallocateHashMap_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m49B8F251437E89101B3219D8788DDAF14F2BA722_gshared (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	int32_t V_14 = 0;
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = UnsafeHashMapData_CalculateDataSize_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mC69CF5F77034B30127E3A3CE8A94210AB31737A7(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = UnsafeUtility_SizeOf_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m37642672DB5CD7B67DB139840F4726D718053FA2_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		int32_t L_63;
		L_63 = UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_inline((void*)L_61, L_62, il2cpp_rgctx_method(method->rgctx_data, 3));
		V_14 = L_63;
		int32_t L_64;
		L_64 = Int32_GetHashCode_m253D60FF7527A483E91004B7A2366F13E225E295((&V_14), il2cpp_rgctx_method(method->rgctx_data, 5));
		int32_t L_65 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_64&((int32_t)il2cpp_codegen_subtract(L_65, 1))));
		int32_t* L_66 = V_11;
		int32_t L_67 = V_12;
		uint8_t* L_68 = V_6;
		int32_t L_69 = V_13;
		int32_t L_70 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_68, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_69), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_66, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_67), 4))))) = (int32_t)L_70;
		uint8_t* L_71 = V_6;
		int32_t L_72 = V_13;
		int32_t L_73 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_71, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_72), 4))))) = (int32_t)L_73;
	}

IL_0138:
	{
		int32_t* L_74 = V_10;
		int32_t L_75 = V_9;
		int32_t L_76 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_74, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_75), 4))))));
		if ((((int32_t)L_76) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_77 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_77, 1));
	}

IL_014a:
	{
		int32_t L_78 = V_9;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_79 = ___0_data;
		NullCheck(L_79);
		int32_t L_80 = L_79->___bucketCapacityMask;
		if ((((int32_t)L_78) <= ((int32_t)L_80)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_81 = ___0_data;
		NullCheck(L_81);
		uint8_t* L_82 = L_81->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_83 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_82, L_83, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_84 = ___0_data;
		NullCheck(L_84);
		int32_t L_85 = L_84->___allocatedIndexLength;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_86 = ___0_data;
		NullCheck(L_86);
		int32_t L_87 = L_86->___keyCapacity;
		if ((((int32_t)L_85) <= ((int32_t)L_87)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_88 = ___0_data;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_89 = ___0_data;
		NullCheck(L_89);
		int32_t L_90 = L_89->___keyCapacity;
		NullCheck(L_88);
		L_88->___allocatedIndexLength = L_90;
	}

IL_017d:
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_91 = ___0_data;
		uint8_t* L_92 = V_3;
		NullCheck(L_91);
		L_91->___values = L_92;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_93 = ___0_data;
		uint8_t* L_94 = V_4;
		NullCheck(L_93);
		L_93->___keys = L_94;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_95 = ___0_data;
		uint8_t* L_96 = V_5;
		NullCheck(L_95);
		L_95->___next = L_96;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_97 = ___0_data;
		uint8_t* L_98 = V_6;
		NullCheck(L_97);
		L_97->___buckets = L_98;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_99 = ___0_data;
		int32_t L_100 = ___1_newCapacity;
		NullCheck(L_99);
		L_99->___keyCapacity = L_100;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_101 = ___0_data;
		int32_t L_102 = ___2_newBucketCapacity;
		NullCheck(L_101);
		L_101->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_102, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeHashMapData_ReallocateHashMap_TisIl2CppFullySharedGenericStruct_TisIl2CppFullySharedGenericStruct_m6637C06FEFD3AA8A8EABD667B8497DAB8AA8A2D2_gshared (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___0_data, int32_t ___1_newCapacity, int32_t ___2_newBucketCapacity, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_label, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_TKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 4));
	void* L_64 = alloca(Il2CppFakeBoxBuffer::SizeNeededFor(il2cpp_rgctx_data(method->rgctx_data, 4)));
	const Il2CppFullySharedGenericStruct L_63 = alloca(SizeOf_TKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F);
	int32_t V_0 = 0;
	int32_t V_1 = 0;
	int32_t V_2 = 0;
	uint8_t* V_3 = NULL;
	uint8_t* V_4 = NULL;
	uint8_t* V_5 = NULL;
	uint8_t* V_6 = NULL;
	int32_t V_7 = 0;
	int32_t V_8 = 0;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t* V_11 = NULL;
	int32_t V_12 = 0;
	int32_t V_13 = 0;
	Il2CppFullySharedGenericStruct V_14 = alloca(SizeOf_TKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F);
	memset(V_14, 0, SizeOf_TKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F);
	{
		int32_t L_0 = ___2_newBucketCapacity;
		int32_t L_1;
		L_1 = math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline(L_0, NULL);
		___2_newBucketCapacity = L_1;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_2 = ___0_data;
		NullCheck(L_2);
		int32_t L_3 = L_2->___keyCapacity;
		int32_t L_4 = ___1_newCapacity;
		if ((!(((uint32_t)L_3) == ((uint32_t)L_4))))
		{
			goto IL_001d;
		}
	}
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_5 = ___0_data;
		NullCheck(L_5);
		int32_t L_6 = L_5->___bucketCapacityMask;
		int32_t L_7 = ___2_newBucketCapacity;
		if ((!(((uint32_t)((int32_t)il2cpp_codegen_add(L_6, 1))) == ((uint32_t)L_7))))
		{
			goto IL_001d;
		}
	}
	{
		return;
	}

IL_001d:
	{
		int32_t L_8 = ___1_newCapacity;
		int32_t L_9 = ___2_newBucketCapacity;
		int32_t L_10;
		L_10 = ((  int32_t (*) (int32_t, int32_t, int32_t*, int32_t*, int32_t*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(L_8, L_9, (&V_0), (&V_1), (&V_2), il2cpp_rgctx_method(method->rgctx_data, 0));
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_11 = ___3_label;
		void* L_12;
		L_12 = Unmanaged_Allocate_m7310B1FE896DEFFA18303D961C9859C8FF3D21E5(((int64_t)L_10), ((int32_t)64), L_11, NULL);
		V_3 = (uint8_t*)L_12;
		uint8_t* L_13 = V_3;
		int32_t L_14 = V_0;
		V_4 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_13, L_14));
		uint8_t* L_15 = V_3;
		int32_t L_16 = V_1;
		V_5 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_15, L_16));
		uint8_t* L_17 = V_3;
		int32_t L_18 = V_2;
		V_6 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_17, L_18));
		uint8_t* L_19 = V_3;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_20 = ___0_data;
		NullCheck(L_20);
		uint8_t* L_21 = L_20->___values;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_22 = ___0_data;
		NullCheck(L_22);
		int32_t L_23 = L_22->___keyCapacity;
		int32_t L_24;
		L_24 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_19, (void*)L_21, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_23, L_24))), NULL);
		uint8_t* L_25 = V_4;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_26 = ___0_data;
		NullCheck(L_26);
		uint8_t* L_27 = L_26->___keys;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_28 = ___0_data;
		NullCheck(L_28);
		int32_t L_29 = L_28->___keyCapacity;
		int32_t L_30;
		L_30 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_25, (void*)L_27, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_29, L_30))), NULL);
		uint8_t* L_31 = V_5;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_32 = ___0_data;
		NullCheck(L_32);
		uint8_t* L_33 = L_32->___next;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_34 = ___0_data;
		NullCheck(L_34);
		int32_t L_35 = L_34->___keyCapacity;
		int32_t L_36;
		L_36 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_RuntimeMethod_var);
		UnsafeUtility_MemCpy_m5CEA91ACDADC522E584AE3A2AB2B0B74393A9177((void*)L_31, (void*)L_33, ((int64_t)((int32_t)il2cpp_codegen_multiply(L_35, L_36))), NULL);
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_37 = ___0_data;
		NullCheck(L_37);
		int32_t L_38 = L_37->___keyCapacity;
		V_7 = L_38;
		goto IL_00aa;
	}

IL_009a:
	{
		uint8_t* L_39 = V_5;
		int32_t L_40 = V_7;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_39, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_40), 4))))) = (int32_t)(-1);
		int32_t L_41 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_41, 1));
	}

IL_00aa:
	{
		int32_t L_42 = V_7;
		int32_t L_43 = ___1_newCapacity;
		if ((((int32_t)L_42) < ((int32_t)L_43)))
		{
			goto IL_009a;
		}
	}
	{
		V_8 = 0;
		goto IL_00c4;
	}

IL_00b4:
	{
		uint8_t* L_44 = V_6;
		int32_t L_45 = V_8;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_44, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_45), 4))))) = (int32_t)(-1);
		int32_t L_46 = V_8;
		V_8 = ((int32_t)il2cpp_codegen_add(L_46, 1));
	}

IL_00c4:
	{
		int32_t L_47 = V_8;
		int32_t L_48 = ___2_newBucketCapacity;
		if ((((int32_t)L_47) < ((int32_t)L_48)))
		{
			goto IL_00b4;
		}
	}
	{
		V_9 = 0;
		goto IL_014a;
	}

IL_00ce:
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_49 = ___0_data;
		NullCheck(L_49);
		uint8_t* L_50 = L_49->___buckets;
		V_10 = (int32_t*)L_50;
		uint8_t* L_51 = V_5;
		V_11 = (int32_t*)L_51;
		goto IL_0138;
	}

IL_00dc:
	{
		int32_t* L_52 = V_10;
		int32_t L_53 = V_9;
		int32_t L_54 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_52, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_53), 4))))));
		V_12 = L_54;
		int32_t* L_55 = V_10;
		int32_t L_56 = V_9;
		int32_t* L_57 = V_11;
		int32_t L_58 = V_12;
		int32_t L_59 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_57, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_58), 4))))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_55, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_56), 4))))) = (int32_t)L_59;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_60 = ___0_data;
		NullCheck(L_60);
		uint8_t* L_61 = L_60->___keys;
		int32_t L_62 = V_12;
		InvokerActionInvoker3< void*, int32_t, Il2CppFullySharedGenericStruct* >::Invoke(il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 3)), il2cpp_rgctx_method(method->rgctx_data, 3), NULL, (void*)L_61, L_62, (Il2CppFullySharedGenericStruct*)L_63);
		il2cpp_codegen_memcpy(V_14, L_63, SizeOf_TKey_tF768A367E03AED3E7061A1DBBFC81E5286985D4F);
		int32_t L_65;
		L_65 = ConstrainedFuncInvoker0< int32_t >::Invoke(il2cpp_rgctx_data(method->rgctx_data, 4), il2cpp_rgctx_method(method->rgctx_data, 5), L_64, (void*)(Il2CppFullySharedGenericStruct*)V_14);
		int32_t L_66 = ___2_newBucketCapacity;
		V_13 = ((int32_t)(L_65&((int32_t)il2cpp_codegen_subtract(L_66, 1))));
		int32_t* L_67 = V_11;
		int32_t L_68 = V_12;
		uint8_t* L_69 = V_6;
		int32_t L_70 = V_13;
		int32_t L_71 = *((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_69, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_70), 4)))));
		*((int32_t*)((int32_t*)il2cpp_codegen_add((intptr_t)L_67, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_68), 4))))) = (int32_t)L_71;
		uint8_t* L_72 = V_6;
		int32_t L_73 = V_13;
		int32_t L_74 = V_12;
		*((int32_t*)((uint8_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 4))))) = (int32_t)L_74;
	}

IL_0138:
	{
		int32_t* L_75 = V_10;
		int32_t L_76 = V_9;
		int32_t L_77 = (*(((int32_t*)il2cpp_codegen_add((intptr_t)L_75, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_76), 4))))));
		if ((((int32_t)L_77) >= ((int32_t)0)))
		{
			goto IL_00dc;
		}
	}
	{
		int32_t L_78 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_78, 1));
	}

IL_014a:
	{
		int32_t L_79 = V_9;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_80 = ___0_data;
		NullCheck(L_80);
		int32_t L_81 = L_80->___bucketCapacityMask;
		if ((((int32_t)L_79) <= ((int32_t)L_81)))
		{
			goto IL_00ce;
		}
	}
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_82 = ___0_data;
		NullCheck(L_82);
		uint8_t* L_83 = L_82->___values;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_84 = ___3_label;
		Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271(L_83, L_84, Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_RuntimeMethod_var);
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_85 = ___0_data;
		NullCheck(L_85);
		int32_t L_86 = L_85->___allocatedIndexLength;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_87 = ___0_data;
		NullCheck(L_87);
		int32_t L_88 = L_87->___keyCapacity;
		if ((((int32_t)L_86) <= ((int32_t)L_88)))
		{
			goto IL_017d;
		}
	}
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_89 = ___0_data;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_90 = ___0_data;
		NullCheck(L_90);
		int32_t L_91 = L_90->___keyCapacity;
		NullCheck(L_89);
		L_89->___allocatedIndexLength = L_91;
	}

IL_017d:
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_92 = ___0_data;
		uint8_t* L_93 = V_3;
		NullCheck(L_92);
		L_92->___values = L_93;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_94 = ___0_data;
		uint8_t* L_95 = V_4;
		NullCheck(L_94);
		L_94->___keys = L_95;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_96 = ___0_data;
		uint8_t* L_97 = V_5;
		NullCheck(L_96);
		L_96->___next = L_97;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_98 = ___0_data;
		uint8_t* L_99 = V_6;
		NullCheck(L_98);
		L_98->___buckets = L_99;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_100 = ___0_data;
		int32_t L_101 = ___1_newCapacity;
		NullCheck(L_100);
		L_100->___keyCapacity = L_101;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_102 = ___0_data;
		int32_t L_103 = ___2_newBucketCapacity;
		NullCheck(L_102);
		L_102->___bucketCapacityMask = ((int32_t)il2cpp_codegen_subtract(L_103, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisBoneDeformBatchedJob_tECC24BCC1429F1A7A21DE9B5C2B878AE44A8A434_m1877A0E0DB7659D4413E5A001DCD86ACB38C5861_gshared (BoneDeformBatchedJob_tECC24BCC1429F1A7A21DE9B5C2B878AE44A8A434* ___0_output, const RuntimeMethod* method) 
{
	{
		BoneDeformBatchedJob_tECC24BCC1429F1A7A21DE9B5C2B878AE44A8A434* L_0 = ___0_output;
		return (void*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisCalculateSpriteSkinAABBJob_t14A401B8ADB5F3145732B405400C4599C2A2A05F_m950676101AEA147BC498B79AE2C0A3EA91036611_gshared (CalculateSpriteSkinAABBJob_t14A401B8ADB5F3145732B405400C4599C2A2A05F* ___0_output, const RuntimeMethod* method) 
{
	{
		CalculateSpriteSkinAABBJob_t14A401B8ADB5F3145732B405400C4599C2A2A05F* L_0 = ___0_output;
		return (void*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisCopySpriteRendererBuffersJob_t6C9FBD58B318CD701CDDD287B9F7BF2F16A4D9DD_m4072DA6C52D2E4C366FF0B193C59E4E627D8B9D1_gshared (CopySpriteRendererBuffersJob_t6C9FBD58B318CD701CDDD287B9F7BF2F16A4D9DD* ___0_output, const RuntimeMethod* method) 
{
	{
		CopySpriteRendererBuffersJob_t6C9FBD58B318CD701CDDD287B9F7BF2F16A4D9DD* L_0 = ___0_output;
		return (void*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisFillPerSkinJobSingleThread_t18EBD362E24245E224D6A1A63C54C1B3AEACC756_m82C283077C650380C19E279A811892CCFF3BE9D2_gshared (FillPerSkinJobSingleThread_t18EBD362E24245E224D6A1A63C54C1B3AEACC756* ___0_output, const RuntimeMethod* method) 
{
	{
		FillPerSkinJobSingleThread_t18EBD362E24245E224D6A1A63C54C1B3AEACC756* L_0 = ___0_output;
		return (void*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisLocalToWorldTransformAccessJob_tB7517F597E417ED9F96F75B2ED813D4E1A56EC8B_m80EE7C26B13C6CC1B76FDD2DCEAD08E39558842B_gshared (LocalToWorldTransformAccessJob_tB7517F597E417ED9F96F75B2ED813D4E1A56EC8B* ___0_output, const RuntimeMethod* method) 
{
	{
		LocalToWorldTransformAccessJob_tB7517F597E417ED9F96F75B2ED813D4E1A56EC8B* L_0 = ___0_output;
		return (void*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisPrepareDeformJob_t3FF43C57F822925D3C7727BA524AAB67872F5284_mEB3B1F4E8FB5D151D3AEE7730DD0498523C3FB4B_gshared (PrepareDeformJob_t3FF43C57F822925D3C7727BA524AAB67872F5284* ___0_output, const RuntimeMethod* method) 
{
	{
		PrepareDeformJob_t3FF43C57F822925D3C7727BA524AAB67872F5284* L_0 = ___0_output;
		return (void*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisSkinDeformBatchedJob_tD600876406B2767D1228D665A1154C92234AD2BB_m8E557914BFDE8A4810A79CFD4AD37B90E5ADB160_gshared (SkinDeformBatchedJob_tD600876406B2767D1228D665A1154C92234AD2BB* ___0_output, const RuntimeMethod* method) 
{
	{
		SkinDeformBatchedJob_tD600876406B2767D1228D665A1154C92234AD2BB* L_0 = ___0_output;
		return (void*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisWorldToLocalTransformAccessJob_tFE2332659D5ADE233AC4C8E613ACE9D442FA1EE2_m50FC12D174806473577F11C7602ADB24590A74C5_gshared (WorldToLocalTransformAccessJob_tFE2332659D5ADE233AC4C8E613ACE9D442FA1EE2* ___0_output, const RuntimeMethod* method) 
{
	{
		WorldToLocalTransformAccessJob_tFE2332659D5ADE233AC4C8E613ACE9D442FA1EE2* L_0 = ___0_output;
		return (void*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void* UnsafeUtility_AddressOf_TisIl2CppFullySharedGenericStruct_m8D42BD9F3A34A0C9A6BF4AA6104B9DAE7B629DE7_gshared (Il2CppFullySharedGenericStruct* ___0_output, const RuntimeMethod* method) 
{
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_output;
		return (void*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m55CBD42505397C2C585C193FA2DB9264910F8D99_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285_m36333D7DA62EC901BF7F5593E1C61159F6FE176E_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m012D9D895FCD4DFB1B9CD8A5C7DA209064892673_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mB4C86C47B1FD997F67EC91E35AB9468FE53E624E_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEAFB355EAD711C8A0A6C9253A911701A3A1811A3_m2C55A5FA6211209E949A2D0432016F3691BD1979_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mEFCBE2CF7FA5F05ACDFD7B04B7BAF4F558B2D2E1_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m95894D62A7100CDA1E8E9ECDF7623FF50802BB73_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t77D164DCA1370DB06991787EC849693AD5DE98F8_mD5B9EC6615744171560BC7D3B1EC5B6BB1536EF9_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2B54DEAE04DA7718238C600DEC6801202F182CAB_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6864EB88E23CEEC413BB947FF5D6F7B523DFD63E_m018E07080C6819DE13199CF6FFD8A7A005260001_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mD2F34AAB2050E90842D914F6E4ACCC10746C260D_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2_mEC1CDBD0303261903CC17065EED96AF65D1B1613_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mE27D3F37C819B68DEF46727F1C111BA5ECE8B7EB_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A_mF99262281A6D71ED25E8514C549FC0EA1AB98A8C_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEE3DDAFA529F9402C6A7F47BFB9A6FF91410C2BE_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m274F833CD001C63E56A22D8F42C76CE8C6CC39DF_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3_mBA38EFAD1B8A7BDB8EC1E91B633140F2EEDBA5E8_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIntPtr_t_mB17C6C168D8CA088879EDD0D5B9923F70F5269B8_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA1D9D36CBE8FF25BF6FFF35C56E697C87CBC2432_mE583CE23D33B55B88A444ED83330E581B444B03B_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m6E1227F119951939CF6F08C6A1948051ED483009_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18_mB5B2CAC6A7BDCEEA6F8EBD2A77E6184121CC1C26_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mB02E6C828323C4B414AB855EA914B81EADADEB68_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mF5AA4A895EA1D19CEB918E04CACADA5DCB0A13C6_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC_m5386ED14552A503327F5B80EFD0A47BBC1DAEA36_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3E93E3D3F245D3AACCB1346E8FEFD7BAC2ABBC4C_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_mFDE18EBED901C94D8D5C6C8ABB0926BAE30C3B00_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t3A1BED5F39B5F62BB069F44DF1E7D56297566819_mD59C7C286BCDFE91575A2BF38DE2084D75C3732C_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_m261E33D42C760ACF61B9CB887B8FAEFCA07DB43B_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m7C9676413764B9F46479956AB3EAE4D4D3987344_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328_mEF523B86365836B22C21116B4D437CE2DA880EF6_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC98A334942D13D3EBBEAE20C5BB187A0A0ADF14E_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_mB19E41A773BE59E0A35D4E683298E0B3248CFAB0_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t600295FA5C38F4F394A0301527136058CD27614C_m3CCAF853FC0B73E27559210D07175B39C40C5D4D_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m2D05EEE3FACF18840E1F713AA271F5B7B968C4F6_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_m56ABF5B734F197DE6EE0D90C55A0585D3C577286_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t50F261D3D99DB1091DC5FADAFCE1736E30517A33_mA3279E5BB58B4A27F4990F6294EC9F26CC40AB87_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_mFE4197E975C1006D02005551269071807CA3EF78_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m7EC424F97CFAB6AB7BFD7207C89C3185EE211913_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56_m203557A8987FE4C04012B390642F55416B593249_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DD322328DA83780B700E31BC9725EB652C968D_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mC4B490EDE532D37CAA39356FC17C8FB44D074891_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t41BC3A9B75E657E395EC5E35CBD5426B52AE4D90_mF9E7F48C5EC348FF3B078B28856201CAE3B6769F_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mB7D37495508235F73EE531B6F13D8D862B0E4B05_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t44748AC00241E124F016371B08CF251CC22577D4_m06FDD1D387A81F0F868564BB74736F417418C2ED_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m2A3028F48F14F0218771FA17D81540361EEE9D0E_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t011E0A6A1CE5BB662014F6F7D560D62F3044E227_m3A555507D3794AA55E2DA800BA4A3B615515BE59_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB95F2BE00B68117D1DF84661261D1FBCA90144D4_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mCFF3A02BFA327100E27F86AA90F94EA85D86D689_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269_mC54E2B7F10608DFB3EE95E30764C2B377DE5A296_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB2AF8CA03DEC485BAD3A37CCBE5CDEBA3C67758C_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m9B25263D143C20F712C84EF45A8BFD1E0B24F3EF_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2_mC176BFF838A45ADE4211E6BF15C79073687F26FB_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisIl2CppFullySharedGenericStruct_m11D1023B182BE19CF0F1A57DBE826004A1B81A41_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_mF897159AA8B08263AC26860622AD4A9A66F2B937_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4FC0676786D4504DFB463E079B49B98660853217_m50DBA733297972A955D96A533F2A1F3BE853BC38_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m3AD29AA7E6279412E3C8AA9DAA54CF2186113297_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m22D99E105A08DBA44B35171905B1EC594117A38B_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_tFA851D5782D452C4B2E6265604AD87D652390B55_m015C8659A60B24F46F8434AC0DB817AAF9EE260C_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m0BD2704CD677D45FAEDAD35D6C7208EE167961F7_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_mDEE15ECB6FFF727F6882FA821900096E114351DE_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6184AB8A4DDD7E3615F65119999BE030DC55BB69_m9360663DE613AAE1D0A1DE71FA5E7694B5438C73_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m90780EC8030A711CE1682E39A74278F5F6BBD031_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mF727A7925C779ADC1B9BCF6266C3C3CF09BB047B_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8BCA7BF89790AD2881377ABB090D9BFDE5669990_mA7019F84732E6FF4708040D34A52D5C1A8AD2E53_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mC4FF8279635DE447534004C94461FC84DCECE5E6_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	int32_t V_0 = 0;
	{
		int32_t L_0;
		L_0 = UnsafeUtility_SizeOf_TisAlignOfHelper_1_t68C3D8AC24508C31F35B828E6206CA7933E9B711_mFD97DC95FC388CD9482935B0A0B60279DA85D751_inline(il2cpp_rgctx_method(method->rgctx_data, 0));
		int32_t L_1;
		L_1 = UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		V_0 = ((int32_t)il2cpp_codegen_subtract(L_0, L_1));
		goto IL_000f;
	}

IL_000f:
	{
		int32_t L_2 = V_0;
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t* UnsafeUtility_AsRef_TisIntPtr_t_m5E80CE586FADFB0EE0E808A1A736F9BF28C2B28B_gshared (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (intptr_t*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* UnsafeUtility_AsRef_TisIl2CppFullySharedGenericStruct_m78B0690121A96EFFDA7D6D3ADAF97940CF8136BE_gshared (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (Il2CppFullySharedGenericStruct*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE* UnsafeUtility_AsRef_TisTableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE_m12F6D8C38FB3A00F6AAF703301922FD0BF889CCF_gshared (void* ___0_ptr, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_ptr;
		return (TableEntry_t5E44AFA7857A41AC654D7F248FD36B15D7835FFE*)(L_0);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisTransformJobData_t7017FC063B433EE93203EDB06EA021B1A1032CE9_m0CF26DBA6EEB2E0867E9BBA987186446F639CBC5_gshared (void* ___0_ptr, TransformJobData_t7017FC063B433EE93203EDB06EA021B1A1032CE9* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_ptr;
		TransformJobData_t7017FC063B433EE93203EDB06EA021B1A1032CE9* L_1 = ___1_output;
		UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_t7017FC063B433EE93203EDB06EA021B1A1032CE9_m4AC570CE30498ACB444F69795D2CBE09D49A7928(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisTransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC_mC934A088EB949F95B9C233D56C2BC21136199311_gshared (void* ___0_ptr, TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_ptr;
		TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC* L_1 = ___1_output;
		UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC_m973651D4A07FDB90F66530979DDA4DD3E44B669A(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_CopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mBE6568C7ECF69CD1E86FDFF4E25D6CB529F76BF3_gshared (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		void* L_0 = ___0_ptr;
		Il2CppFullySharedGenericStruct* L_1 = ___1_output;
		((  void (*) (void*, Il2CppFullySharedGenericStruct*, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_t7017FC063B433EE93203EDB06EA021B1A1032CE9_m4AC570CE30498ACB444F69795D2CBE09D49A7928_gshared (void* ___0_ptr, TransformJobData_t7017FC063B433EE93203EDB06EA021B1A1032CE9* ___1_output, const RuntimeMethod* method) 
{
	{
		TransformJobData_t7017FC063B433EE93203EDB06EA021B1A1032CE9* L_0 = ___1_output;
		void* L_1 = ___0_ptr;
		TransformJobData_t7017FC063B433EE93203EDB06EA021B1A1032CE9 L_2 = (*(TransformJobData_t7017FC063B433EE93203EDB06EA021B1A1032CE9*)L_1);
		*(TransformJobData_t7017FC063B433EE93203EDB06EA021B1A1032CE9*)L_0 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisTransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC_m973651D4A07FDB90F66530979DDA4DD3E44B669A_gshared (void* ___0_ptr, TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC* ___1_output, const RuntimeMethod* method) 
{
	{
		TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC* L_0 = ___1_output;
		void* L_1 = ___0_ptr;
		TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC L_2 = (*(TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC*)L_1);
		*(TransformJobData_tC09C505CEDDC05FECD47EA67F80E1C58CC6D11DC*)L_0 = L_2;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_InternalCopyPtrToStructure_TisIl2CppFullySharedGenericStruct_mD132267FDFD79997EE2A47470E89CE83AC7CA91E_gshared (void* ___0_ptr, Il2CppFullySharedGenericStruct* ___1_output, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t0AB8BF3DB56DA09FFC797908F6C670B2FB5AD0D6 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericStruct L_2 = alloca(SizeOf_T_t0AB8BF3DB56DA09FFC797908F6C670B2FB5AD0D6);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___1_output;
		void* L_1 = ___0_ptr;
		il2cpp_codegen_memcpy(L_2, L_1, SizeOf_T_t0AB8BF3DB56DA09FFC797908F6C670B2FB5AD0D6);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericStruct*)L_0, L_2, SizeOf_T_t0AB8BF3DB56DA09FFC797908F6C670B2FB5AD0D6);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 1), (void**)(Il2CppFullySharedGenericStruct*)L_0, (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D UnsafeUtility_ReadArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_mAD2E8BB847754DAFE09F5868548BEDDA822A2617_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_3 = (*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F UnsafeUtility_ReadArrayElement_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mDD04C3CC823DEC02B652AF31F413CCB11D775C64_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_3 = (*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool UnsafeUtility_ReadArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_mF765CB2E5FD631DFB79C25DE656F3C1BB359B995_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(bool);
		bool L_3 = (*(bool*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 UnsafeUtility_ReadArrayElement_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mA77EAA0B012867DC63EF516448C2F5FA24F96CD5_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_3 = (*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m06447B534673E0861DE4F55616DFAF9BD7DCBCC6_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 UnsafeUtility_ReadArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mFD2AC538DAACCF1C5AAE44C0B4758D3A6A4C54EF_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_3 = (*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t UnsafeUtility_ReadArrayElement_TisIntPtr_t_m1AB5DE7A4962B63822FF70AF37E0BADC77C4AE23_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(intptr_t);
		intptr_t L_3 = (*(intptr_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 UnsafeUtility_ReadArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m2ED1FB77CEDEF6090E5857DAA0CE6F3AFC6C35E4_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_3 = (*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 UnsafeUtility_ReadArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m200AA8F5A5776F6CAEA9E79B6551EC01D4316611_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = (*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 UnsafeUtility_ReadArrayElement_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_mC6184A79922ED3EE99EAEBCC22E604F77BBB6198_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0);
		PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 L_3 = (*(PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C UnsafeUtility_ReadArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mEB527AAA71722D961891591C3A13D3FDD83B42A5_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_3 = (*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C UnsafeUtility_ReadArrayElement_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m4C9D2C2EF0FF779E8C7DD6FE2FEFF74E3CE1D3E7_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C);
		PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C L_3 = (*(PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 UnsafeUtility_ReadArrayElement_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_m0C547B842C95E80E226B9661DDABFD2CE7C13D84_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12);
		PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 L_3 = (*(PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 UnsafeUtility_ReadArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_mC90C0EE3D32DDFEF22B982217F27BA07286AC2B7_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = (*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 UnsafeUtility_ReadArrayElement_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mF130EF76844CB7CCC773ABCA0C5B74C25EEEBB11_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4);
		SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 L_3 = (*(SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnsafeUtility_ReadArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m564AA26B6DF18CD089D7387AEB7F3F537353038F_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnsafeUtility_ReadArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m113285A6894774BBBB284A644C2D7094F30AB442_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtility_ReadArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mB8C3F12E6821644D47C741DA0824437BD6F96340_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElement_TisIl2CppFullySharedGenericAny_m295186AA082411C57485F8BDB824E4D8AC1C6D93_gshared (void* ___0_source, int32_t ___1_index, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C;
		il2cpp_codegen_memcpy(L_3, ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_t3818EBA71DF5EA591716A05E0BBD988D81931B5C);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E UnsafeUtility_ReadArrayElement_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m615AED21E5604A9DA7D13E06F9A76A3841EFD53D_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E UnsafeUtility_ReadArrayElement_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m0230478E18D678A7304AF2CDC35E98298EC2EB89_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(float4_t89D9A294E7A79BD81BFBDD18654508532958555E);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = (*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 UnsafeUtility_ReadArrayElement_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_mAB17EA6CEDDC14B8E09012F6C9E4540D8C77F25E_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_3 = (*(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A UnsafeUtility_ReadArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mBB56303DF5D9BF30592847838B370074B0A0DC88_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_3 = (*(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 UnsafeUtility_ReadArrayElement_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m41A161AA831DC15C0FFE00918C25978D07864CD6_gshared (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20);
		TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 L_3 = (*(TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F UnsafeUtility_ReadArrayElementWithStride_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mABB5F0B253D214197DB592D4D69A8441627BB450_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_3 = (*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t UnsafeUtility_ReadArrayElementWithStride_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mC24C19ACD67D7D24118C4917A58301288B0FD2C7_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		uint8_t L_3 = (*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElementWithStride_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m405947B70A379EFE67E19578E195B20BC0B75A67_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 UnsafeUtility_ReadArrayElementWithStride_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m6F9B8F3929D81E25CDAA7C2ECA45FB9A4F6F7388_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = (*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C UnsafeUtility_ReadArrayElementWithStride_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_mE01309AE51871316494668E4BE0616B1280F2221_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C L_3 = (*(PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 UnsafeUtility_ReadArrayElementWithStride_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_m6F22CC47E4DDAC2A6201E9F90EE4F261FB622989_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 L_3 = (*(PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 UnsafeUtility_ReadArrayElementWithStride_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE472C655829F475D7B0A1EA82DDFB810FCB1D2B0_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = (*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 UnsafeUtility_ReadArrayElementWithStride_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mF0823BA8B97766FCB2A9F676A2CA04C9E5E4EDE8_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = (*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 UnsafeUtility_ReadArrayElementWithStride_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mD4431DDC736E0AF53C4D7C0310CABAE1D6D7C15D_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = (*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_ReadArrayElementWithStride_TisIl2CppFullySharedGenericAny_mA2FA845DC97225E057F01D0D4161C801EECA284F_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		il2cpp_codegen_memcpy(L_3, ((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
		il2cpp_codegen_memcpy(il2cppRetVal, L_3, SizeOf_T_tF00BEB2D39C607DEF67E891605A383D95A9912A8);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E UnsafeUtility_ReadArrayElementWithStride_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m3C83824D9FD194ADC21C47AC3754582B00463F8E_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = (*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4_t89D9A294E7A79BD81BFBDD18654508532958555E UnsafeUtility_ReadArrayElementWithStride_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_mB03CD1CEEC6C2CD77CC4498A1B8D3217E953D75A_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = (*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 UnsafeUtility_ReadArrayElementWithStride_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_mE763B7CFAA8F5F74FD15BC9AC28DF436065FCE62_gshared (void* ___0_source, int32_t ___1_index, int32_t ___2_stride, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_3 = (*(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))));
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285_m36333D7DA62EC901BF7F5593E1C61159F6FE176E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEAFB355EAD711C8A0A6C9253A911701A3A1811A3_m2C55A5FA6211209E949A2D0432016F3691BD1979_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tEAFB355EAD711C8A0A6C9253A911701A3A1811A3);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t77D164DCA1370DB06991787EC849693AD5DE98F8_mD5B9EC6615744171560BC7D3B1EC5B6BB1536EF9_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t77D164DCA1370DB06991787EC849693AD5DE98F8);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6864EB88E23CEEC413BB947FF5D6F7B523DFD63E_m018E07080C6819DE13199CF6FFD8A7A005260001_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6864EB88E23CEEC413BB947FF5D6F7B523DFD63E);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2_mEC1CDBD0303261903CC17065EED96AF65D1B1613_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A_mF99262281A6D71ED25E8514C549FC0EA1AB98A8C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3_mBA38EFAD1B8A7BDB8EC1E91B633140F2EEDBA5E8_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA1D9D36CBE8FF25BF6FFF35C56E697C87CBC2432_mE583CE23D33B55B88A444ED83330E581B444B03B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA1D9D36CBE8FF25BF6FFF35C56E697C87CBC2432);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18_mB5B2CAC6A7BDCEEA6F8EBD2A77E6184121CC1C26_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC_m5386ED14552A503327F5B80EFD0A47BBC1DAEA36_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t3A1BED5F39B5F62BB069F44DF1E7D56297566819_mD59C7C286BCDFE91575A2BF38DE2084D75C3732C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t3A1BED5F39B5F62BB069F44DF1E7D56297566819);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328_mEF523B86365836B22C21116B4D437CE2DA880EF6_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t600295FA5C38F4F394A0301527136058CD27614C_m3CCAF853FC0B73E27559210D07175B39C40C5D4D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t600295FA5C38F4F394A0301527136058CD27614C);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t50F261D3D99DB1091DC5FADAFCE1736E30517A33_mA3279E5BB58B4A27F4990F6294EC9F26CC40AB87_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t50F261D3D99DB1091DC5FADAFCE1736E30517A33);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56_m203557A8987FE4C04012B390642F55416B593249_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t41BC3A9B75E657E395EC5E35CBD5426B52AE4D90_mF9E7F48C5EC348FF3B078B28856201CAE3B6769F_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t41BC3A9B75E657E395EC5E35CBD5426B52AE4D90);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t44748AC00241E124F016371B08CF251CC22577D4_m06FDD1D387A81F0F868564BB74736F417418C2ED_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t44748AC00241E124F016371B08CF251CC22577D4);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t011E0A6A1CE5BB662014F6F7D560D62F3044E227_m3A555507D3794AA55E2DA800BA4A3B615515BE59_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t011E0A6A1CE5BB662014F6F7D560D62F3044E227);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269_mC54E2B7F10608DFB3EE95E30764C2B377DE5A296_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2_mC176BFF838A45ADE4211E6BF15C79073687F26FB_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4FC0676786D4504DFB463E079B49B98660853217_m50DBA733297972A955D96A533F2A1F3BE853BC38_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t4FC0676786D4504DFB463E079B49B98660853217);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tFA851D5782D452C4B2E6265604AD87D652390B55_m015C8659A60B24F46F8434AC0DB817AAF9EE260C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tFA851D5782D452C4B2E6265604AD87D652390B55);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6184AB8A4DDD7E3615F65119999BE030DC55BB69_m9360663DE613AAE1D0A1DE71FA5E7694B5438C73_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6184AB8A4DDD7E3615F65119999BE030DC55BB69);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8BCA7BF89790AD2881377ABB090D9BFDE5669990_mA7019F84732E6FF4708040D34A52D5C1A8AD2E53_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8BCA7BF89790AD2881377ABB090D9BFDE5669990);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t68C3D8AC24508C31F35B828E6206CA7933E9B711_mFD97DC95FC388CD9482935B0A0B60279DA85D751_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t68C3D8AC24508C31F35B828E6206CA7933E9B711);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisArray32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6_m548E4D71AFEF1CECD2CDC464941403E01E0031A4_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Array32768_1_tF94DB9E949B98E267CCEE7E61378AA0A89C951D6);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m012D9D895FCD4DFB1B9CD8A5C7DA209064892673_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mEFCBE2CF7FA5F05ACDFD7B04B7BAF4F558B2D2E1_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(bool);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mD2F34AAB2050E90842D914F6E4ACCC10746C260D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEE3DDAFA529F9402C6A7F47BFB9A6FF91410C2BE_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(intptr_t);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mB02E6C828323C4B414AB855EA914B81EADADEB68_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3E93E3D3F245D3AACCB1346E8FEFD7BAC2ABBC4C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_m261E33D42C760ACF61B9CB887B8FAEFCA07DB43B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC98A334942D13D3EBBEAE20C5BB187A0A0ADF14E_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m2D05EEE3FACF18840E1F713AA271F5B7B968C4F6_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_mFE4197E975C1006D02005551269071807CA3EF78_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DD322328DA83780B700E31BC9725EB652C968D_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mB7D37495508235F73EE531B6F13D8D862B0E4B05_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB95F2BE00B68117D1DF84661261D1FBCA90144D4_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB2AF8CA03DEC485BAD3A37CCBE5CDEBA3C67758C_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIl2CppFullySharedGenericStruct_mB6FBF9DDC79FEC02EC8705E9E527E1CD495564BF_gshared (const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	{
		uint32_t L_0 = SizeOf_T_tE6588938356AD51CD7B5532933E8B84E7779C6E2;
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m3AD29AA7E6279412E3C8AA9DAA54CF2186113297_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m0BD2704CD677D45FAEDAD35D6C7208EE167961F7_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float4_t89D9A294E7A79BD81BFBDD18654508532958555E);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m90780EC8030A711CE1682E39A74278F5F6BBD031_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mC4FF8279635DE447534004C94461FC84DCECE5E6_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m37642672DB5CD7B67DB139840F4726D718053FA2_gshared (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20);
		return (int32_t)L_0;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m91B4BE7F47C68D100E0A963FE8AEDB5C491546FA_gshared (void* ___0_destination, int32_t ___1_index, BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D L_3 = ___2_value;
		*(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m5E6C889EB34EAE2740370CD443757158EB45CA11_gshared (void* ___0_destination, int32_t ___1_index, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F);
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_3 = ___2_value;
		*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m48259D1BF2B093A901E095965654FE2E58AEF18B_gshared (void* ___0_destination, int32_t ___1_index, bool ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(bool);
		bool L_3 = ___2_value;
		*(bool*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m39673DEA8CD190D6395DE7B4743E53DD8E7576E0_gshared (void* ___0_destination, int32_t ___1_index, Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3);
		Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3 L_3 = ___2_value;
		*(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m193B136343991E144053A14C8C435C19E5516EE0_gshared (void* ___0_destination, int32_t ___1_index, uint8_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(uint8_t);
		uint8_t L_3 = ___2_value;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEF6442BF2C415D9A5FFD255E882378DF7F682E19_gshared (void* ___0_destination, int32_t ___1_index, CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0 L_3 = ___2_value;
		*(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m0DD1CC90B2F1EF5041F2F4E1DABB58224229F0D7_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = ___2_value;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIntPtr_t_m4F172B1EA620A9AAD916874CDBA3ECB5FB5BA8BE_gshared (void* ___0_destination, int32_t ___1_index, intptr_t ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(intptr_t);
		intptr_t L_3 = ___2_value;
		*(intptr_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_m6113BA4FEE412326B8C4AE48EF490E280EF24144_gshared (void* ___0_destination, int32_t ___1_index, LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21 L_3 = ___2_value;
		*(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mDED3D71F106839CF27D02475C04EB53AFC379717_gshared (void* ___0_destination, int32_t ___1_index, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = ___2_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_m82DB510EE367C48D85612E30940009BDDEF1B758_gshared (void* ___0_destination, int32_t ___1_index, PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0);
		PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0 L_3 = ___2_value;
		*(PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_m5752F3073072D6DCB16C429071ED8126C1CB6502_gshared (void* ___0_destination, int32_t ___1_index, Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C L_3 = ___2_value;
		*(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_mA2388F9D64F789EFCC1E4C1C8B8131349FEE8615_gshared (void* ___0_destination, int32_t ___1_index, PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C);
		PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C L_3 = ___2_value;
		*(PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_m049FD2974799E42947325253CE4E6E3B2EA1B363_gshared (void* ___0_destination, int32_t ___1_index, PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12);
		PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 L_3 = ___2_value;
		*(PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m8FECF9726B6A90FEADC960133A19868C171B28E9_gshared (void* ___0_destination, int32_t ___1_index, Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974 L_3 = ___2_value;
		*(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_m545EEE4DCBD391DA082FD5B66BDC47E7D7C4E94B_gshared (void* ___0_destination, int32_t ___1_index, SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4);
		SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4 L_3 = ___2_value;
		*(SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m172AB754724D12C7E4938B1ACE01A7FF192AC73E_gshared (void* ___0_destination, int32_t ___1_index, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___2_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC08010A74AC1BF608813C293C4C52F4EF4B30106_gshared (void* ___0_destination, int32_t ___1_index, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___2_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m824816C030A3E2FD028D3B4ECCC252E8E50DDF6E_gshared (void* ___0_destination, int32_t ___1_index, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___2_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisIl2CppFullySharedGenericAny_m3C86E25D63AB95F3D572F8010D623EB7C6D78283_gshared (void* ___0_destination, int32_t ___1_index, Il2CppFullySharedGenericAny ___2_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___2_value : &___2_value), SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), L_3, SizeOf_T_t9B5DAD81EFECDA494525FB73A37EE675A422B5E5);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m18730C7E6C34DB89458FD88D2B3FEF1F7DF6BF9A_gshared (void* ___0_destination, int32_t ___1_index, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E);
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = ___2_value;
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_mD60D360C2879DB91CE929FB647F33B6FC7FDB763_gshared (void* ___0_destination, int32_t ___1_index, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(float4_t89D9A294E7A79BD81BFBDD18654508532958555E);
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = ___2_value;
		*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_mCCB86DE29B2B14535DF97D80D57005614F22842E_gshared (void* ___0_destination, int32_t ___1_index, float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_3 = ___2_value;
		*(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_m5084D24EC43390BB1675A6D796350DA00BAFAA2D_gshared (void* ___0_destination, int32_t ___1_index, int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A);
		int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A L_3 = ___2_value;
		*(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElement_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_mBD2C55B3AAF9B0F344497E789FDCDF26186EBA0F_gshared (void* ___0_destination, int32_t ___1_index, TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 ___2_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20);
		TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20 L_3 = ___2_value;
		*(TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_m5B55C38E0B7634A1479676B7EB819C037EC1CA70_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F L_3 = ___3_value;
		*(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mD64B816BD360CF926B77516A2707ED5608023EB3_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, uint8_t ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		uint8_t L_3 = ___3_value;
		*(uint8_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m80C8F345F9429879F43C7FD98D593C2A26798D07_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, int32_t ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		int32_t L_3 = ___3_value;
		*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_mCD207A17F51EADD1C3FDD878565BA38609999DFD_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6 L_3 = ___3_value;
		*(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_mC38B480588DAD58466ED957043F394E8214822CC_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C L_3 = ___3_value;
		*(PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_m062C5F59372622D1CE1120FB42BC83BF54230AA6_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12 L_3 = ___3_value;
		*(PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m5B6B55B0A9D85D3ADA52E57FBF137303BE604B7A_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7 L_3 = ___3_value;
		*(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mC6522E62D62D0F3B595EB475556A84D8FD0F88CE_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2 L_3 = ___3_value;
		*(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m242A5C6256A4A5B4D7B078023F71622A7F5F1812_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3 L_3 = ___3_value;
		*(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_TisIl2CppFullySharedGenericAny_mD6C17E0F294919C280E583601A298E265D20935A_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, Il2CppFullySharedGenericAny ___3_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	const uint32_t SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 0));
	const Il2CppFullySharedGenericAny L_3 = alloca(SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		il2cpp_codegen_memcpy(L_3, (il2cpp_codegen_class_is_value_type(il2cpp_rgctx_data_no_init(method->rgctx_data, 0)) ? ___3_value : &___3_value), SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
		il2cpp_codegen_memcpy((Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), L_3, SizeOf_T_tF19C221134244841BC3C05863D0FAA96B103C520);
		Il2CppCodeGenWriteBarrierForClass(il2cpp_rgctx_data(method->rgctx_data, 0), (void**)(Il2CppFullySharedGenericAny*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))), (void*)L_3);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m08C96C4C9BC202EF76D83A176516B25D49E6D3D5_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E L_3 = ___3_value;
		*(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m1F568102F52C96AD9835D2393C18CFBDF6505BBD_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, float4_t89D9A294E7A79BD81BFBDD18654508532958555E ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		float4_t89D9A294E7A79BD81BFBDD18654508532958555E L_3 = ___3_value;
		*(float4_t89D9A294E7A79BD81BFBDD18654508532958555E*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void UnsafeUtility_WriteArrayElementWithStride_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_mD9D839BCE855A5A96A3380B6114C0669B5B78BB9_gshared (void* ___0_destination, int32_t ___1_index, int32_t ___2_stride, float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 ___3_value, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_destination;
		int32_t L_1 = ___1_index;
		int32_t L_2 = ___2_stride;
		float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2 L_3 = ___3_value;
		*(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)L_2)))))) = L_3;
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m0D538510931D731CE9075661C07B0DECAAC84B82_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = Vector_1_op_Explicit_m5E44D3923BF92F437AEC34CDE0CBD6130883B0B7(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A Vector_AsVectorUInt64_TisIl2CppFullySharedGenericStruct_mD3B6243B6DD2F19C7DA294F642D66F699D797811_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_value, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_value;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A L_1;
		L_1 = ((  Vector_1_t566D05A9DE75BCD8F12F1E09AC3F8A4BC01BF92A (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_1;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_Equals_TisUInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_m1E49423160D9D2F662A38FDEE88842FC26B67EBC_gshared (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_0 = ___0_left;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_1 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_2;
		L_2 = Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_inline(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 Vector_Equals_TisIl2CppFullySharedGenericStruct_m589C7C54FDBBA8A38CC7672C2E2734EB16BDFD24_gshared (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___0_left, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 ___1_right, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_0 = ___0_left;
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_1 = ___1_right;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(method->rgctx_data, 2));
		Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 L_2;
		L_2 = ((  Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2 (*) (Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, Vector_1_t4FB40153F5AFF7BFDFB20E1BCB98343E42252AD2, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_0, L_1, il2cpp_rgctx_method(method->rgctx_data, 1));
		return L_2;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* Volatile_Read_TisRuntimeObject_mDE75C7462350B2A7FB1546BCE22D13CBD69AC088_gshared (RuntimeObject** ___0_location, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = L_1->___Value;
		il2cpp_codegen_memory_barrier();
		RuntimeObject* L_3;
		L_3 = il2cpp_unsafe_as<RuntimeObject*>(L_2);
		return L_3;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Volatile_Write_TisRuntimeObject_mBB6C58646958F01615FEBF405DCE2A9926F81962_gshared (RuntimeObject** ___0_location, RuntimeObject* ___1_value, const RuntimeMethod* method) 
{
	{
		RuntimeObject** L_0 = ___0_location;
		VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99* L_1;
		L_1 = il2cpp_unsafe_as_ref<VolatileObject_tEA3ACFAAFB9D2EFA5162F693BAAB342EA7737B99>(L_0);
		RuntimeObject* L_2 = ___1_value;
		il2cpp_codegen_memory_barrier();
		L_1->___Value = L_2;
		Il2CppCodeGenWriteBarrier((void**)(&L_1->___Value), (void*)L_2);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bd_wa_TisRuntimeObject_m3773874792DF1425F570AC7E28A9A9E687FAE996_gshared (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&bd_t18A7563F8C3F808C28EBC54FDA33440FCD3EF7B7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	PropertyInfo_t* V_2 = NULL;
	MethodInfo_t* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	MethodInfo_t* G_B10_0 = NULL;
	RuntimeObject* G_B13_0 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(bd_t18A7563F8C3F808C28EBC54FDA33440FCD3EF7B7_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = bd_vz_m9378F1E85AC141435A560BBCBB007EF4F83E7995_inline(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = ___0_a;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_3 = ___1_b;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}

IL_0017:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_5 = V_0;
		return L_5;
	}

IL_0021:
	{
	}
	try
	{
		{
			String_t* L_6 = ___0_a;
			il2cpp_codegen_runtime_class_init_inline(bd_t18A7563F8C3F808C28EBC54FDA33440FCD3EF7B7_il2cpp_TypeInfo_var);
			Type_t* L_7;
			L_7 = bd_we_m703096640BB78201CE1837FBB2F21F4751A3F94B(L_6, NULL);
			V_1 = L_7;
			Type_t* L_8 = V_1;
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			bool L_9;
			L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, (Type_t*)NULL, NULL);
			if (!L_9)
			{
				goto IL_003e_1;
			}
		}
		{
			il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
			RuntimeObject* L_10 = V_0;
			V_0 = L_10;
			goto IL_009d;
		}

IL_003e_1:
		{
			Type_t* L_11 = V_1;
			String_t* L_12 = ___1_b;
			NullCheck(L_11);
			PropertyInfo_t* L_13;
			L_13 = Type_GetProperty_m6E63875E6098E89250149F4E76FAD40844708391(L_11, L_12, (int32_t)((int32_t)56), NULL);
			V_2 = L_13;
			PropertyInfo_t* L_14 = V_2;
			bool L_15;
			L_15 = PropertyInfo_op_Equality_m3BFC2276AECF2A16B66F171D65516817B4578B4F(L_14, (PropertyInfo_t*)NULL, NULL);
			if (L_15)
			{
				goto IL_005a_1;
			}
		}
		{
			PropertyInfo_t* L_16 = V_2;
			NullCheck(L_16);
			MethodInfo_t* L_17;
			L_17 = VirtualFuncInvoker1< MethodInfo_t*, bool >::Invoke(19, L_16, (bool)1);
			G_B10_0 = L_17;
			goto IL_005b_1;
		}

IL_005a_1:
		{
			G_B10_0 = ((MethodInfo_t*)(NULL));
		}

IL_005b_1:
		{
			V_3 = G_B10_0;
			MethodInfo_t* L_18 = V_3;
			bool L_19;
			L_19 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_18, (MethodInfo_t*)NULL, NULL);
			if (L_19)
			{
				goto IL_0082_1;
			}
		}
		{
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_20 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_21;
			L_21 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_20, NULL);
			MethodInfo_t* L_22 = V_3;
			Delegate_t* L_23;
			L_23 = Delegate_CreateDelegate_mDBC5DC9EA0E8CB940DAFFBAC763E586C48E115D6(L_21, L_22, (bool)0, NULL);
			G_B13_0 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_23, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
			goto IL_008c_1;
		}

IL_0082_1:
		{
			il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
			RuntimeObject* L_24 = V_4;
			G_B13_0 = L_24;
		}

IL_008c_1:
		{
			V_0 = G_B13_0;
			goto IL_009d;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_008f;
		}
		throw e;
	}

CATCH_008f:
	{
		RuntimeObject* L_25 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
		RuntimeObject* L_26 = V_4;
		V_0 = L_26;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_009d;
	}

IL_009d:
	{
		RuntimeObject* L_27 = V_0;
		return L_27;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject* bd_wb_TisRuntimeObject_m6F69CD1A1385473B8A356434ABC615FCEACF71EE_gshared (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral15E225CE8944EBE206A0078FF31CBE46CB76F145);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral19A31E86A38AA893D1D6991C5FA6FB47D954D756);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteral594659CCEF5C8AEAE51D2422107933CCDADAF292);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralAD09D7F3EF55024FAD7E2FA0D742C8EED6E7353C);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralC895D35FFD929D7E5DAA151ECE907C423791FFE9);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralE8257F1161E944C1A643F7FF3ABD8946B2F7558E);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&_stringLiteralFE06E08E1B43E6E2C5FE926335FB3B8053CC3751);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&bd_t18A7563F8C3F808C28EBC54FDA33440FCD3EF7B7_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	RuntimeObject* V_0 = NULL;
	Type_t* V_1 = NULL;
	MethodInfo_t* V_2 = NULL;
	RuntimeObject* V_3 = NULL;
	RuntimeObject* V_4 = NULL;
	Exception_t* V_5 = NULL;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	String_t* G_B17_0 = NULL;
	Exception_t* G_B22_0 = NULL;
	int32_t G_B22_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B22_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B22_3 = NULL;
	Exception_t* G_B21_0 = NULL;
	int32_t G_B21_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B21_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B21_3 = NULL;
	String_t* G_B23_0 = NULL;
	int32_t G_B23_1 = 0;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B23_2 = NULL;
	StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* G_B23_3 = NULL;
	{
		il2cpp_codegen_runtime_class_init_inline(bd_t18A7563F8C3F808C28EBC54FDA33440FCD3EF7B7_il2cpp_TypeInfo_var);
		bool L_0;
		L_0 = bd_vz_m9378F1E85AC141435A560BBCBB007EF4F83E7995_inline(NULL);
		if (!L_0)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_1 = ___0_a;
		bool L_2;
		L_2 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_1, NULL);
		if (L_2)
		{
			goto IL_0017;
		}
	}
	{
		String_t* L_3 = ___1_b;
		bool L_4;
		L_4 = String_IsNullOrEmpty_mEA9E3FB005AC28FE02E69FCF95A7B8456192B478(L_3, NULL);
		if (!L_4)
		{
			goto IL_0021;
		}
	}

IL_0017:
	{
		il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
		RuntimeObject* L_5 = V_0;
		return L_5;
	}

IL_0021:
	{
	}
	try
	{
		{
			String_t* L_6 = ___0_a;
			il2cpp_codegen_runtime_class_init_inline(bd_t18A7563F8C3F808C28EBC54FDA33440FCD3EF7B7_il2cpp_TypeInfo_var);
			Type_t* L_7;
			L_7 = bd_we_m703096640BB78201CE1837FBB2F21F4751A3F94B(L_6, NULL);
			V_1 = L_7;
			Type_t* L_8 = V_1;
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			bool L_9;
			L_9 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_8, (Type_t*)NULL, NULL);
			if (!L_9)
			{
				goto IL_0064_1;
			}
		}
		{
			String_t* L_10 = ___0_a;
			bool L_11;
			L_11 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_10, _stringLiteralFE06E08E1B43E6E2C5FE926335FB3B8053CC3751, NULL);
			if (!L_11)
			{
				goto IL_0055_1;
			}
		}
		{
			String_t* L_12 = ___0_a;
			String_t* L_13 = ___1_b;
			String_t* L_14;
			L_14 = String_Concat_m093934F71A9B351911EE46311674ED463B180006(_stringLiteralE8257F1161E944C1A643F7FF3ABD8946B2F7558E, L_12, _stringLiteralC895D35FFD929D7E5DAA151ECE907C423791FFE9, L_13, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)L_14, NULL);
		}

IL_0055_1:
		{
			il2cpp_codegen_initobj((&V_0), sizeof(RuntimeObject*));
			RuntimeObject* L_15 = V_0;
			V_0 = L_15;
			goto IL_01ec;
		}

IL_0064_1:
		{
			Type_t* L_16 = V_1;
			String_t* L_17 = ___1_b;
			NullCheck(L_16);
			MethodInfo_t* L_18;
			L_18 = Type_GetMethod_m9E66B5053F150537A74C490C1DA5174A7875189D(L_16, L_17, (int32_t)((int32_t)56), NULL);
			V_2 = L_18;
			MethodInfo_t* L_19 = V_2;
			bool L_20;
			L_20 = MethodInfo_op_Equality_m1466AB76300C9F07856E706E7E914062175189D1(L_19, (MethodInfo_t*)NULL, NULL);
			if (!L_20)
			{
				goto IL_00d6_1;
			}
		}
		{
			String_t* L_21 = ___0_a;
			bool L_22;
			L_22 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_21, _stringLiteralFE06E08E1B43E6E2C5FE926335FB3B8053CC3751, NULL);
			if (!L_22)
			{
				goto IL_00c6_1;
			}
		}
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_23 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_24 = L_23;
			NullCheck(L_24);
			(L_24)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteralAD09D7F3EF55024FAD7E2FA0D742C8EED6E7353C);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_25 = L_24;
			String_t* L_26 = ___0_a;
			NullCheck(L_25);
			(L_25)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_26);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_27 = L_25;
			NullCheck(L_27);
			(L_27)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_28 = L_27;
			String_t* L_29 = ___1_b;
			NullCheck(L_28);
			(L_28)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_29);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_30 = L_28;
			NullCheck(L_30);
			(L_30)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral19A31E86A38AA893D1D6991C5FA6FB47D954D756);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_31 = L_30;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_32 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_33;
			L_33 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_32, NULL);
			NullCheck(L_33);
			String_t* L_34;
			L_34 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_33);
			NullCheck(L_31);
			(L_31)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_34);
			String_t* L_35;
			L_35 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_31, NULL);
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_LogWarning_m33EF1B897E0C7C6FF538989610BFAFFEF4628CA9((RuntimeObject*)L_35, NULL);
		}

IL_00c6_1:
		{
			il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
			RuntimeObject* L_36 = V_4;
			V_0 = L_36;
			goto IL_01ec;
		}

IL_00d6_1:
		{
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_37 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_38;
			L_38 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_37, NULL);
			MethodInfo_t* L_39 = V_2;
			Delegate_t* L_40;
			L_40 = Delegate_CreateDelegate_mDBC5DC9EA0E8CB940DAFFBAC763E586C48E115D6(L_38, L_39, (bool)0, NULL);
			V_3 = ((RuntimeObject*)Castclass((RuntimeObject*)((RuntimeObject*)IsInst((RuntimeObject*)L_40, il2cpp_rgctx_data(method->rgctx_data, 0))), il2cpp_rgctx_data(method->rgctx_data, 0)));
			String_t* L_41 = ___0_a;
			bool L_42;
			L_42 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_41, _stringLiteralFE06E08E1B43E6E2C5FE926335FB3B8053CC3751, NULL);
			if (!L_42)
			{
				goto IL_018b_1;
			}
		}
		{
			RuntimeObject* L_43 = V_3;
			if (!L_43)
			{
				goto IL_0149_1;
			}
		}
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_44 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_45 = L_44;
			NullCheck(L_45);
			(L_45)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral15E225CE8944EBE206A0078FF31CBE46CB76F145);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_46 = L_45;
			String_t* L_47 = ___0_a;
			NullCheck(L_46);
			(L_46)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_47);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_48 = L_46;
			NullCheck(L_48);
			(L_48)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_49 = L_48;
			String_t* L_50 = ___1_b;
			NullCheck(L_49);
			(L_49)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_50);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_51 = L_49;
			NullCheck(L_51);
			(L_51)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral19A31E86A38AA893D1D6991C5FA6FB47D954D756);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_52 = L_51;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_53 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_54;
			L_54 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_53, NULL);
			NullCheck(L_54);
			String_t* L_55;
			L_55 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_54);
			NullCheck(L_52);
			(L_52)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_55);
			String_t* L_56;
			L_56 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_52, NULL);
			G_B17_0 = L_56;
			goto IL_0186_1;
		}

IL_0149_1:
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_57 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var, (uint32_t)6);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_58 = L_57;
			NullCheck(L_58);
			(L_58)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)_stringLiteral594659CCEF5C8AEAE51D2422107933CCDADAF292);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_59 = L_58;
			String_t* L_60 = ___0_a;
			NullCheck(L_59);
			(L_59)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_60);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_61 = L_59;
			NullCheck(L_61);
			(L_61)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_62 = L_61;
			String_t* L_63 = ___1_b;
			NullCheck(L_62);
			(L_62)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_63);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_64 = L_62;
			NullCheck(L_64);
			(L_64)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)_stringLiteral19A31E86A38AA893D1D6991C5FA6FB47D954D756);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_65 = L_64;
			RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 1)) };
			il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
			Type_t* L_67;
			L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
			NullCheck(L_67);
			String_t* L_68;
			L_68 = VirtualFuncInvoker0< String_t* >::Invoke(25, L_67);
			NullCheck(L_65);
			(L_65)->SetAt(static_cast<il2cpp_array_size_t>(5), (String_t*)L_68);
			String_t* L_69;
			L_69 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(L_65, NULL);
			G_B17_0 = L_69;
		}

IL_0186_1:
		{
			il2cpp_codegen_runtime_class_init_inline(Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var);
			Debug_Log_m87A9A3C761FF5C43ED8A53B16190A53D08F818BB((RuntimeObject*)G_B17_0, NULL);
		}

IL_018b_1:
		{
			RuntimeObject* L_70 = V_3;
			V_0 = L_70;
			goto IL_01ec;
		}
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Exception_t_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_018f;
		}
		throw e;
	}

CATCH_018f:
	{
		{
			Exception_t* L_71 = ((Exception_t*)IL2CPP_GET_ACTIVE_EXCEPTION(Exception_t*));;
			V_5 = L_71;
			String_t* L_72 = ___0_a;
			bool L_73;
			L_73 = String_op_Equality_m030E1B219352228970A076136E455C4E568C02C1(L_72, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralFE06E08E1B43E6E2C5FE926335FB3B8053CC3751)), NULL);
			if (!L_73)
			{
				goto IL_01df;
			}
		}
		{
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_74 = (StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)(StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248*)SZArrayNew(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248_il2cpp_TypeInfo_var)), (uint32_t)6);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_75 = L_74;
			NullCheck(L_75);
			(L_75)->SetAt(static_cast<il2cpp_array_size_t>(0), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral5B07E023AB167988DB1C8B236730B3DAD4F81BC4)));
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_76 = L_75;
			String_t* L_77 = ___0_a;
			NullCheck(L_76);
			(L_76)->SetAt(static_cast<il2cpp_array_size_t>(1), (String_t*)L_77);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_78 = L_76;
			NullCheck(L_78);
			(L_78)->SetAt(static_cast<il2cpp_array_size_t>(2), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralF3E84B722399601AD7E281754E917478AA9AD48D)));
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_79 = L_78;
			String_t* L_80 = ___1_b;
			NullCheck(L_79);
			(L_79)->SetAt(static_cast<il2cpp_array_size_t>(3), (String_t*)L_80);
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_81 = L_79;
			NullCheck(L_81);
			(L_81)->SetAt(static_cast<il2cpp_array_size_t>(4), (String_t*)((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteral9D6051EE0B0E7A4A891B022B8543BFD0EC71F3EE)));
			StringU5BU5D_t7674CD946EC0CE7B3AE0BE70E6EE85F2ECD9F248* L_82 = L_81;
			Exception_t* L_83 = V_5;
			Exception_t* L_84 = L_83;
			if (L_84)
			{
				G_B22_0 = L_84;
				G_B22_1 = 5;
				G_B22_2 = L_82;
				G_B22_3 = L_82;
				goto IL_01cf;
			}
			G_B21_0 = L_84;
			G_B21_1 = 5;
			G_B21_2 = L_82;
			G_B21_3 = L_82;
		}
		{
			G_B23_0 = ((String_t*)(NULL));
			G_B23_1 = G_B21_1;
			G_B23_2 = G_B21_2;
			G_B23_3 = G_B21_3;
			goto IL_01d4;
		}

IL_01cf:
		{
			NullCheck((RuntimeObject*)G_B22_0);
			String_t* L_85;
			L_85 = VirtualFuncInvoker0< String_t* >::Invoke(3, (RuntimeObject*)G_B22_0);
			G_B23_0 = L_85;
			G_B23_1 = G_B22_1;
			G_B23_2 = G_B22_2;
			G_B23_3 = G_B22_3;
		}

IL_01d4:
		{
			NullCheck(G_B23_2);
			(G_B23_2)->SetAt(static_cast<il2cpp_array_size_t>(G_B23_1), (String_t*)G_B23_0);
			String_t* L_86;
			L_86 = String_Concat_m647EBF831F54B6DF7D5AFA5FD012CF4EE7571B6A(G_B23_3, NULL);
			il2cpp_codegen_runtime_class_init_inline(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&Debug_t8394C7EEAECA3689C2C9B9DE9C7166D73596276F_il2cpp_TypeInfo_var)));
			Debug_LogError_mB00B2B4468EF3CAF041B038D840820FB84C924B2((RuntimeObject*)L_86, NULL);
		}

IL_01df:
		{
			il2cpp_codegen_initobj((&V_4), sizeof(RuntimeObject*));
			RuntimeObject* L_87 = V_4;
			V_0 = L_87;
			IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
			goto IL_01ec;
		}
	}

IL_01ec:
	{
		RuntimeObject* L_88 = V_0;
		return L_88;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool sh_iqs_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_m8FAFB137FDA877AED5141BE894D4B658460B6F17_gshared (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___0_a;
		String_t* L_1 = ___1_b;
		NullCheck(L_0);
		bool L_2;
		L_2 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	try
	{
		String_t* L_3 = ___0_a;
		V_1 = L_3;
		String_t* L_4 = ___1_b;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		V_2 = L_5;
		String_t* L_6 = V_1;
		int32_t L_7 = V_2;
		String_t* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		int32_t L_10 = V_2;
		NullCheck(L_6);
		String_t* L_11;
		L_11 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A((RuntimeObject*)L_11, L_13, NULL);
		goto IL_0038;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0033;
		}
		throw e;
	}

CATCH_0033:
	{
		RuntimeObject* L_15 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0040;
	}

IL_0038:
	{
		V_0 = (bool)1;
		goto IL_003e;
	}

IL_003c:
	{
		V_0 = (bool)0;
	}

IL_003e:
	{
		bool L_16 = V_0;
		return L_16;
	}

IL_0040:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool sh_iqs_TisIl2CppFullySharedGenericAny_m5EE7AB899F991FB998BD639115ADA12EDA906C35_gshared (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___0_a;
		String_t* L_1 = ___1_b;
		NullCheck(L_0);
		bool L_2;
		L_2 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	try
	{
		String_t* L_3 = ___0_a;
		V_1 = L_3;
		String_t* L_4 = ___1_b;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		V_2 = L_5;
		String_t* L_6 = V_1;
		int32_t L_7 = V_2;
		String_t* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		int32_t L_10 = V_2;
		NullCheck(L_6);
		String_t* L_11;
		L_11 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A((RuntimeObject*)L_11, L_13, NULL);
		goto IL_0038;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0033;
		}
		throw e;
	}

CATCH_0033:
	{
		RuntimeObject* L_15 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0040;
	}

IL_0038:
	{
		V_0 = (bool)1;
		goto IL_003e;
	}

IL_003c:
	{
		V_0 = (bool)0;
	}

IL_003e:
	{
		bool L_16 = V_0;
		return L_16;
	}

IL_0040:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t sh_iqt_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mADA57A7EDA9674D6AFD460BBABD582633CB478E2_gshared (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_a;
		V_0 = L_0;
		String_t* L_1 = ___1_b;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		V_1 = L_2;
		String_t* L_3 = V_0;
		int32_t L_4 = V_1;
		String_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		int32_t L_7 = V_1;
		NullCheck(L_3);
		String_t* L_8;
		L_8 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_3, L_4, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_11;
		L_11 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A((RuntimeObject*)L_8, L_10, NULL);
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sh_iqt_TisIl2CppFullySharedGenericAny_mAADA348D1BEE4084B4C02406017DA7370CAAD268_gshared (String_t* ___0_a, String_t* ___1_b, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_b_tBCCDBF1380D52FBF3EF2C798DF2738790A959353 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_b_tBCCDBF1380D52FBF3EF2C798DF2738790A959353);
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_a;
		V_0 = L_0;
		String_t* L_1 = ___1_b;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		V_1 = L_2;
		String_t* L_3 = V_0;
		int32_t L_4 = V_1;
		String_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		int32_t L_7 = V_1;
		NullCheck(L_3);
		String_t* L_8;
		L_8 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_3, L_4, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_11;
		L_11 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A((RuntimeObject*)L_8, L_10, NULL);
		void* L_13 = UnBox_Any(L_11, il2cpp_rgctx_data(method->rgctx_data, 1), L_12);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_13))), SizeOf_b_tBCCDBF1380D52FBF3EF2C798DF2738790A959353);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool sv_ivs_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mCCAA815C1E1B9A80687D6868AD415681E11B3880_gshared (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___0_a;
		String_t* L_1 = ___1_b;
		NullCheck(L_0);
		bool L_2;
		L_2 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	try
	{
		String_t* L_3 = ___0_a;
		V_1 = L_3;
		String_t* L_4 = ___1_b;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		V_2 = L_5;
		String_t* L_6 = V_1;
		int32_t L_7 = V_2;
		String_t* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		int32_t L_10 = V_2;
		NullCheck(L_6);
		String_t* L_11;
		L_11 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A((RuntimeObject*)L_11, L_13, NULL);
		goto IL_0038;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0033;
		}
		throw e;
	}

CATCH_0033:
	{
		RuntimeObject* L_15 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0040;
	}

IL_0038:
	{
		V_0 = (bool)1;
		goto IL_003e;
	}

IL_003c:
	{
		V_0 = (bool)0;
	}

IL_003e:
	{
		bool L_16 = V_0;
		return L_16;
	}

IL_0040:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool sv_ivs_TisIl2CppFullySharedGenericAny_m10A82918615B5C4C64BEF078F67D7981A08821EB_gshared (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	bool V_0 = false;
	String_t* V_1 = NULL;
	int32_t V_2 = 0;
	bool V_3 = false;
	il2cpp::utils::ExceptionSupportStack<RuntimeObject*, 1> __active_exceptions;
	{
		String_t* L_0 = ___0_a;
		String_t* L_1 = ___1_b;
		NullCheck(L_0);
		bool L_2;
		L_2 = String_StartsWith_mF75DBA1EB709811E711B44E26FF919C88A8E65C0(L_0, L_1, NULL);
		if (!L_2)
		{
			goto IL_003c;
		}
	}
	try
	{
		String_t* L_3 = ___0_a;
		V_1 = L_3;
		String_t* L_4 = ___1_b;
		NullCheck(L_4);
		int32_t L_5;
		L_5 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_4, NULL);
		V_2 = L_5;
		String_t* L_6 = V_1;
		int32_t L_7 = V_2;
		String_t* L_8 = V_1;
		NullCheck(L_8);
		int32_t L_9;
		L_9 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_8, NULL);
		int32_t L_10 = V_2;
		NullCheck(L_6);
		String_t* L_11;
		L_11 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_6, L_7, ((int32_t)il2cpp_codegen_subtract(L_9, L_10)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_12 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_13;
		L_13 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_12, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_14;
		L_14 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A((RuntimeObject*)L_11, L_13, NULL);
		goto IL_0038;
	}
	catch(Il2CppExceptionWrapper& e)
	{
		if(il2cpp_codegen_class_is_assignable_from (((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&RuntimeObject_il2cpp_TypeInfo_var)), il2cpp_codegen_object_class(e.ex)))
		{
			IL2CPP_PUSH_ACTIVE_EXCEPTION(e.ex);
			goto CATCH_0033;
		}
		throw e;
	}

CATCH_0033:
	{
		RuntimeObject* L_15 = ((RuntimeObject*)IL2CPP_GET_ACTIVE_EXCEPTION(RuntimeObject*));;
		V_3 = (bool)0;
		IL2CPP_POP_ACTIVE_EXCEPTION(Exception_t*);
		goto IL_0040;
	}

IL_0038:
	{
		V_0 = (bool)1;
		goto IL_003e;
	}

IL_003c:
	{
		V_0 = (bool)0;
	}

IL_003e:
	{
		bool L_16 = V_0;
		return L_16;
	}

IL_0040:
	{
		bool L_17 = V_3;
		return L_17;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t sv_ivt_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mD6F62C4ADEC88D643124A377A32531AB802E5F72_gshared (String_t* ___0_a, String_t* ___1_b, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_a;
		V_0 = L_0;
		String_t* L_1 = ___1_b;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		V_1 = L_2;
		String_t* L_3 = V_0;
		int32_t L_4 = V_1;
		String_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		int32_t L_7 = V_1;
		NullCheck(L_3);
		String_t* L_8;
		L_8 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_3, L_4, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_11;
		L_11 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A((RuntimeObject*)L_8, L_10, NULL);
		return ((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_11, il2cpp_rgctx_data(method->rgctx_data, 1)))));
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void sv_ivt_TisIl2CppFullySharedGenericAny_m201168F1A1E0B41DA0157AA1F6DE34AD8E1D66FA_gshared (String_t* ___0_a, String_t* ___1_b, Il2CppFullySharedGenericAny* il2cppRetVal, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	const uint32_t SizeOf_b_t3E60EAF4BEB427D23F72AA72B37E54C99E8EB781 = il2cpp_codegen_sizeof(il2cpp_rgctx_data_no_init(method->rgctx_data, 1));
	const Il2CppFullySharedGenericAny L_12 = alloca(SizeOf_b_t3E60EAF4BEB427D23F72AA72B37E54C99E8EB781);
	String_t* V_0 = NULL;
	int32_t V_1 = 0;
	{
		String_t* L_0 = ___0_a;
		V_0 = L_0;
		String_t* L_1 = ___1_b;
		NullCheck(L_1);
		int32_t L_2;
		L_2 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_1, NULL);
		V_1 = L_2;
		String_t* L_3 = V_0;
		int32_t L_4 = V_1;
		String_t* L_5 = V_0;
		NullCheck(L_5);
		int32_t L_6;
		L_6 = String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline(L_5, NULL);
		int32_t L_7 = V_1;
		NullCheck(L_3);
		String_t* L_8;
		L_8 = String_Substring_mB1D94F47935D22E130FF2C01DBB6A4135FBB76CE(L_3, L_4, ((int32_t)il2cpp_codegen_subtract(L_6, L_7)), NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_9 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(method->rgctx_data, 0)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_10;
		L_10 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_9, NULL);
		il2cpp_codegen_runtime_class_init_inline(Convert_t7097FF336D592F7C06D88A98349A44646F91EFFC_il2cpp_TypeInfo_var);
		RuntimeObject* L_11;
		L_11 = Convert_ChangeType_m13EF3B06900C83A433CB54D20EAFBED36C30C90A((RuntimeObject*)L_8, L_10, NULL);
		void* L_13 = UnBox_Any(L_11, il2cpp_rgctx_data(method->rgctx_data, 1), L_12);
		il2cpp_codegen_memcpy(il2cppRetVal, (((Il2CppFullySharedGenericAny)((Il2CppFullySharedGenericAny)(Il2CppFullySharedGenericAny*)L_13))), SizeOf_b_t3E60EAF4BEB427D23F72AA72B37E54C99E8EB781);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1C432B8FDFC847D68ECC57BF4C911BA784284271_gshared (uint8_t* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		uint8_t* L_0 = ___0_pointer;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		uint8_t* L_1 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___1_allocator;
		uint8_t* L_3;
		L_3 = Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0(L_1, ((int64_t)1), ((int64_t)0), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_m44E1299744F197B4690015E38D6E5EB21AFDC0AC_gshared (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_0 = ___0_pointer;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_1 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___1_allocator;
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_3;
		L_3 = Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9(L_1, ((int64_t)1), ((int64_t)0), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisIl2CppFullySharedGenericStruct_mC5E4D92A647D08D8B3B7CCF667B40D0ECD8ACB83_gshared (Il2CppFullySharedGenericStruct* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_pointer;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		Il2CppFullySharedGenericStruct* L_1 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___1_allocator;
		Il2CppFullySharedGenericStruct* L_3;
		L_3 = ((  Il2CppFullySharedGenericStruct* (*) (Il2CppFullySharedGenericStruct*, int64_t, int64_t, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148, const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(L_1, ((int64_t)1), ((int64_t)0), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Unmanaged_Free_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m7B99D1F06742355AC760F246D818C9979FADF666_gshared (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___0_pointer, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___1_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_0 = ___0_pointer;
		if ((!(((uintptr_t)L_0) == ((uintptr_t)((uintptr_t)0)))))
		{
			goto IL_0006;
		}
	}
	{
		return;
	}

IL_0006:
	{
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_1 = ___0_pointer;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_2 = ___1_allocator;
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_3;
		L_3 = Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3(L_1, ((int64_t)1), ((int64_t)0), L_2, il2cpp_rgctx_method(method->rgctx_data, 1));
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m2A21711A3D655B51E421ACBEA3F03A09C8BBC250_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_m16C827D0F6107B7998F6C99B57F7CC2F181E2198(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_mA9E7AA6DB293483965B65EEEBF63885DEF084EA2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisBoundsInt_t4E757DE5EFF9FCB42000F173360DDC63B5585485_m8F344250A2F9E6EE6DDBA6BA833BB36D0F272B66(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mFE98C0ECD8751FEC86E5F9CD2AFC20794571C81C_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisColor_tD001788D726C3A7F1379BEED0260B9591F440C1F_mBBCB804F367E06EA4D482F1B69165DD2B5BF38FF(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRuntimeObject_m6C6E2EDC433DCAB90206712FB63993865A9B9305_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRuntimeObject_m4E17F588B090C1DADAE2D986BDA407DECEAC020F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m97DBB59374BCA99C98C45F169AF69955608B68AA_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRect_tA04E0F8A1830E767F40FB27ECD8D309303571F0D_m2C5F5CF80D13B041768C7845C5AAEEC02BB683BA(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_m7C42EB46E69BD2515C39AB6013A0763C6479AD66_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisRectInt_t1744D10E1063135DA9D574F95205B98DAC600CB8_mF6949D9EDD480E6666CD975C66487AAD6ABC7D11(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_m032CA5A330B4032D164F88B2B40B6A7F2590357F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mE0C65F4221E48BB07F75856972A0CCDAE284AB9F(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_m0E8E39845CA3F1BFADAC1B15E849E5885D813E6F_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector2Int_t69B2886EBAB732D9B880565E18E7568F3DE0CE6A_mC8EF710494C8986B279262C6C64947BE2C1DC55C(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mA88A16DC097E207AD6CE15E89D3B94DBB01BDACE_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_m1AB8BF0921C24186B3C43FC4341AAD2F6FE87C4D(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_m28D19B06528A4614AF9C3E29DC8274DE067868D8_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector3Int_t65CB06F557251D18A37BD71F3655BA836A357376_mB00220519A80AA5ACE36B7DBA2E6A6CB796302AF(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m3CD9CD3C768BBCC83DD02B2C76300A03AF1B1AD6_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = TypeUtility_CreateTypeConstructor_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_mED1DC338E5DB62F3E64F6272A9F12150DA5CC1B9(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void TypeConstructorVisitor_Visit_TisIl2CppFullySharedGenericAny_m8B414261A078E3FE7517FAF2F9E944969F6B73E2_gshared (TypeConstructorVisitor_tFC61250F68BF43FE889F5B1002CBFF90648E9C7F* __this, const RuntimeMethod* method) 
{
	if (!il2cpp_rgctx_is_initialized(method))
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		il2cpp_rgctx_method_init(method);
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TypeUtility_t62F146E51B66BB18FA0E1EFA84A564FF2B8AAD03_il2cpp_TypeInfo_var);
		RuntimeObject* L_0;
		L_0 = ((  RuntimeObject* (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 0)))(il2cpp_rgctx_method(method->rgctx_data, 0));
		__this->___TypeConstructor = (RuntimeObject*)L_0;
		Il2CppCodeGenWriteBarrier((void**)(&__this->___TypeConstructor), (void*)(RuntimeObject*)L_0);
		return;
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint8_t* Array_Resize_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m1767423622567D1059537F40EF99A5522126FBD0_gshared (uint8_t* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		uint8_t* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_mB152D3C658FB48DEDB6E662EEB0C91018E7F2857(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (uint8_t*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* Array_Resize_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mA531CDFFC7A4E38C552DFDEDFA1E8436B76F7DE9_gshared (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mE84A0B9A63BCBBD40FD2A575AC555294A28A93A3(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Il2CppFullySharedGenericStruct* Array_Resize_TisIl2CppFullySharedGenericStruct_m07039200651D43DBB7FBC0CB244761DA34C164FD_gshared (Il2CppFullySharedGenericStruct* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		Il2CppFullySharedGenericStruct* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 1)))(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = ((  int32_t (*) (const RuntimeMethod*))il2cpp_codegen_get_direct_method_pointer(il2cpp_rgctx_method(method->rgctx_data, 2)))(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (Il2CppFullySharedGenericStruct*)(L_6);
	}
}
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* Array_Resize_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m66D39A0700C852DFD578157D9E4862A8230233F3_gshared (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* ___0_oldPointer, int64_t ___1_oldCount, int64_t ___2_newCount, AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 ___3_allocator, const RuntimeMethod* method) 
{
	il2cpp_rgctx_method_init(method);
	{
		MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84* L_0 = ___0_oldPointer;
		int64_t L_1 = ___1_oldCount;
		int64_t L_2 = ___2_newCount;
		AllocatorHandle_t3CA09720B1F89F91A8DDBA95E74C28A1EC3E3148 L_3 = ___3_allocator;
		int32_t L_4;
		L_4 = UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_inline(il2cpp_rgctx_method(method->rgctx_data, 1));
		int32_t L_5;
		L_5 = UnsafeUtility_AlignOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m6AD8B4EF31CDD94CA734378B1443806DAFE68A05(il2cpp_rgctx_method(method->rgctx_data, 2));
		void* L_6;
		L_6 = Array_Resize_mC7BE2965DE3FCF4014D43B606D94951480A65380((void*)L_0, L_1, L_2, L_3, ((int64_t)L_4), L_5, NULL);
		return (MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84*)(L_6);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t String_get_Length_m42625D67623FA5CC7A44D47425CE86FB946542D2_inline (String_t* __this, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = __this->____stringLength;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED OperationCanceledException_get_CancellationToken_m01589226730DFB64F0850198F867614F5A21CCBE_inline (OperationCanceledException_tC97D0B4532C15E6F0E9F9375091C9ECCA438D662* __this, const RuntimeMethod* method) 
{
	{
		CancellationToken_t51142D9C6D7C02D314DA34A6A7988C528992FFED L_0 = __this->____cancellationToken;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* TaskScheduler_get_Default_m1312D9F63C0811919143807540E6D10F90CF6B7C_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var);
		TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E* L_0 = ((TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_StaticFields*)il2cpp_codegen_static_fields_for(TaskScheduler_t3F0550EBEF7C41F74EC8C08FF4BED0D8CE66006E_il2cpp_TypeInfo_var))->___s_defaultTaskScheduler;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* Task_get_Factory_m8272CF9106A72E5F0B8E8C6CEE025D748FBD6D11_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var);
		TaskFactory_tF781BD37BE23917412AD83424D1497C7C1509DF0* L_0 = ((Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_StaticFields*)il2cpp_codegen_static_fields_for(Task_t751C4CC3ECD055BABA8A0B6A5DFBB4283DCA8572_il2cpp_TypeInfo_var))->___U3CFactoryU3Ek__BackingField;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t math_ceilpow2_mA00505409975D36AB3D7658687AC3BD5A26F3769_inline (int32_t ___0_x, const RuntimeMethod* method) 
{
	{
		int32_t L_0 = ___0_x;
		___0_x = ((int32_t)il2cpp_codegen_subtract(L_0, 1));
		int32_t L_1 = ___0_x;
		int32_t L_2 = ___0_x;
		___0_x = ((int32_t)(L_1|((int32_t)(L_2>>1))));
		int32_t L_3 = ___0_x;
		int32_t L_4 = ___0_x;
		___0_x = ((int32_t)(L_3|((int32_t)(L_4>>2))));
		int32_t L_5 = ___0_x;
		int32_t L_6 = ___0_x;
		___0_x = ((int32_t)(L_5|((int32_t)(L_6>>4))));
		int32_t L_7 = ___0_x;
		int32_t L_8 = ___0_x;
		___0_x = ((int32_t)(L_7|((int32_t)(L_8>>8))));
		int32_t L_9 = ___0_x;
		int32_t L_10 = ___0_x;
		___0_x = ((int32_t)(L_9|((int32_t)(L_10>>((int32_t)16)))));
		int32_t L_11 = ___0_x;
		return ((int32_t)il2cpp_codegen_add(L_11, 1));
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool bd_vz_m9378F1E85AC141435A560BBCBB007EF4F83E7995_inline (const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&bd_t18A7563F8C3F808C28EBC54FDA33440FCD3EF7B7_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		il2cpp_codegen_runtime_class_init_inline(bd_t18A7563F8C3F808C28EBC54FDA33440FCD3EF7B7_il2cpp_TypeInfo_var);
		bool L_0 = ((bd_t18A7563F8C3F808C28EBC54FDA33440FCD3EF7B7_StaticFields*)il2cpp_codegen_static_fields_for(bd_t18A7563F8C3F808C28EBC54FDA33440FCD3EF7B7_il2cpp_TypeInfo_var))->___jdd;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void Span_1__ctor_mC9BE2938B716B46BB6B9070B94DBE5CE814BC0E2_gshared_inline (Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D* __this, Il2CppChar* ___0_ptr, int32_t ___1_length, const RuntimeMethod* method) 
{
	{
		Il2CppChar* L_0 = ___0_ptr;
		ByReference_1_t7BA5A6CA164F770BC688F21C5978D368716465F5 L_1;
		memset((&L_1), 0, sizeof(L_1));
		il2cpp_codegen_by_reference_constructor((Il2CppByReference*)(&L_1), L_0);
		__this->____pointer = L_1;
		int32_t L_2 = ___1_length;
		__this->____length = L_2;
		return;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m761FF4012DB09668C6A5AA76774E9F04199D212E_gshared_inline (SpanAction_2_t65B015FEFE1F64814AC2EFA0E19A38B1CFC53178* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_3_tFD2ADB3DA89E958885034AAFEF1ABDA8C814D987, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m65D110A8BF9027F070FA8CF53AF75D47A98C6E2A_gshared_inline (SpanAction_2_t84FDFFEECCC96A9A407DCB490E60340E38185947* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_5_t558B9F95CA55DE5694FC58A3BEAE441BF728FB57, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR void SpanAction_2_Invoke_m494D48610BBC75F2900F6C061FDD40B45EB91C47_gshared_inline (SpanAction_2_t02885A83F58261D2CFDC8FFBBCD7C8ECAF105A7B* __this, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D ___0_span, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85 ___1_arg, const RuntimeMethod* method) 
{
	typedef void (*FunctionPointerType) (RuntimeObject*, Span_1_tEDDF15FCF9EC6DEBA0F696BAACDDBAB9D92C252D, ValueTuple_8_t9B4E1B0569C36F02E150189D05FFCC0A69667F85, const RuntimeMethod*);
	((FunctionPointerType)__this->___invoke_impl)((Il2CppObject*)__this->___method_code, ___0_span, ___1_arg, reinterpret_cast<RuntimeMethod*>(__this->___method));
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisTransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20_m37642672DB5CD7B67DB139840F4726D718053FA2_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(TransformData_tEC27E9D73132522EA47BF569B8FE23C627A5FC20);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mED481D505BF43CBD96972069EDD4E3509BE84931_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int32_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_ReadArrayElement_TisInt32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_mFBA66C06ECEB0A2BC1AAE634B6E6BB436F957084_gshared_inline (void* ___0_source, int32_t ___1_index, const RuntimeMethod* method) 
{
	{
		void* L_0 = ___0_source;
		int32_t L_1 = ___1_index;
		uint32_t L_2 = sizeof(int32_t);
		int32_t L_3 = (*(int32_t*)((void*)il2cpp_codegen_add((intptr_t)L_0, ((intptr_t)((int64_t)il2cpp_codegen_multiply(((int64_t)L_1), ((int64_t)((int32_t)L_2))))))));
		return L_3;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285_m36333D7DA62EC901BF7F5593E1C61159F6FE176E_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t51A60722C4316CF5E675B53E363F32099D467285);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D_m012D9D895FCD4DFB1B9CD8A5C7DA209064892673_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BatchCullingOutputDrawCommands_t61DD68A8D702A9468AF6D5DDF4529CE7BD5A636D);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEAFB355EAD711C8A0A6C9253A911701A3A1811A3_m2C55A5FA6211209E949A2D0432016F3691BD1979_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tEAFB355EAD711C8A0A6C9253A911701A3A1811A3);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F_mEFCBE2CF7FA5F05ACDFD7B04B7BAF4F558B2D2E1_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(BoneWeight_t7E7DACA0D0F56698E05EBBD839D1D343502EA11F);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t77D164DCA1370DB06991787EC849693AD5DE98F8_mD5B9EC6615744171560BC7D3B1EC5B6BB1536EF9_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t77D164DCA1370DB06991787EC849693AD5DE98F8);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBoolean_t09A6377A54BE2F9E6985A8149F19234FD7DDFE22_m5B2EBCF5A7515312D5BBDA1CC5ACDA8C99F14E18_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(bool);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6864EB88E23CEEC413BB947FF5D6F7B523DFD63E_m018E07080C6819DE13199CF6FFD8A7A005260001_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6864EB88E23CEEC413BB947FF5D6F7B523DFD63E);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisBounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3_mD2F34AAB2050E90842D914F6E4ACCC10746C260D_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Bounds_t367E830C64BBF235ED8C3B2F8CF6254FDCAD39C3);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2_mEC1CDBD0303261903CC17065EED96AF65D1B1613_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t31AECFF735259A0FDFB7AA894944339927FD14A2);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisByte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_m97C7D5E5DE74DC60A0ECAA914830BEDF2C46ACAA_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(uint8_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A_mF99262281A6D71ED25E8514C549FC0EA1AB98A8C_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t844EED876035AC2D1D902D72D0D3EC02BB921A6A);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisCullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0_mEE3DDAFA529F9402C6A7F47BFB9A6FF91410C2BE_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(CullingSplit_tA645AE6542408220387BA7188513D7FEDBC1CAC0);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3_mBA38EFAD1B8A7BDB8EC1E91B633140F2EEDBA5E8_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tDEDE36731BCA4BBF0A258F5E9A0155E556B11BB3);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tA1D9D36CBE8FF25BF6FFF35C56E697C87CBC2432_mE583CE23D33B55B88A444ED83330E581B444B03B_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tA1D9D36CBE8FF25BF6FFF35C56E697C87CBC2432);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisIntPtr_t_mB2B3CFF1CB804C99734D4E2F5D8A8C9DB0D209A8_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(intptr_t);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18_mB5B2CAC6A7BDCEEA6F8EBD2A77E6184121CC1C26_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC14085A002766BE215E2A570FCDA1F263125AA18);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisLightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21_mB02E6C828323C4B414AB855EA914B81EADADEB68_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(LightDataGI_t47D2197E863C0DDA40C2182FBF0A21367E468E21);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC_m5386ED14552A503327F5B80EFD0A47BBC1DAEA36_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tC065F32B523FF665FDBE1C31A916DB2554E8C5CC);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMatrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6_m3E93E3D3F245D3AACCB1346E8FEFD7BAC2ABBC4C_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Matrix4x4_tDB70CF134A14BA38190C59AA700BCE10E2AED3E6);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t3A1BED5F39B5F62BB069F44DF1E7D56297566819_mD59C7C286BCDFE91575A2BF38DE2084D75C3732C_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t3A1BED5F39B5F62BB069F44DF1E7D56297566819);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0_m261E33D42C760ACF61B9CB887B8FAEFCA07DB43B_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PerSkinJobData_t12269B9BCDB1CA26111CF0EC8C1410DEB10863A0);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328_mEF523B86365836B22C21116B4D437CE2DA880EF6_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t0A0F0444D297D1B268776F65B34B921CC7440328);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPlane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C_mC98A334942D13D3EBBEAE20C5BB187A0A0ADF14E_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Plane_tB7D8CC6F7AACF5F3AA483AF005C1102A8577BC0C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t600295FA5C38F4F394A0301527136058CD27614C_m3CCAF853FC0B73E27559210D07175B39C40C5D4D_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t600295FA5C38F4F394A0301527136058CD27614C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C_m2D05EEE3FACF18840E1F713AA271F5B7B968C4F6_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PositionTangentVertex_t2A3AA7C428755E24BA9ECCBD89F67D0828D6555C);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t50F261D3D99DB1091DC5FADAFCE1736E30517A33_mA3279E5BB58B4A27F4990F6294EC9F26CC40AB87_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t50F261D3D99DB1091DC5FADAFCE1736E30517A33);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisPositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12_mFE4197E975C1006D02005551269071807CA3EF78_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(PositionVertex_tE2E9C13E829C47759FB1722B0548D2D8925C4D12);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56_m203557A8987FE4C04012B390642F55416B593249_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tEE6549D27A36D20AF7BFA9746B052ABFEE9E6F56);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisQuaternion_tDA59F214EF07D7700B26E40E562F267AF7306974_m37DD322328DA83780B700E31BC9725EB652C968D_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Quaternion_tDA59F214EF07D7700B26E40E562F267AF7306974);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t41BC3A9B75E657E395EC5E35CBD5426B52AE4D90_mF9E7F48C5EC348FF3B078B28856201CAE3B6769F_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t41BC3A9B75E657E395EC5E35CBD5426B52AE4D90);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisSpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4_mB7D37495508235F73EE531B6F13D8D862B0E4B05_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(SpriteSkinData_tAF363C091096E80EF5A98430D5738204C2CEF4A4);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t44748AC00241E124F016371B08CF251CC22577D4_m06FDD1D387A81F0F868564BB74736F417418C2ED_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t44748AC00241E124F016371B08CF251CC22577D4);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisUnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4_mCF165A03E97D72A1EC00EA0FA1B0A1A9F3B6EF6B_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(UnsafeHashMapData_t82AA009E447306C927002C4EED80392BD8D8E5B4);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t011E0A6A1CE5BB662014F6F7D560D62F3044E227_m3A555507D3794AA55E2DA800BA4A3B615515BE59_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t011E0A6A1CE5BB662014F6F7D560D62F3044E227);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7_mB95F2BE00B68117D1DF84661261D1FBCA90144D4_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector2_t1FD6F485C871E832B347AB2DC8CBA08B739D8DF7);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269_mC54E2B7F10608DFB3EE95E30764C2B377DE5A296_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t5E78DFDD1D1FD1E176194FA58D5C7D267FBF6269);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2_mB2AF8CA03DEC485BAD3A37CCBE5CDEBA3C67758C_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector3_t24C512C7B96BBABAD472002D0BA2BDA40A5A80B2);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2_mC176BFF838A45ADE4211E6BF15C79073687F26FB_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t715DBF373F018E47F9BAD31EF00130648BA568B2);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisVector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3_m2842DB279BEAD40C9CB39EC85BDE2241798CFFF7_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(Vector4_t58B63D32F48C0DBF50DE2C60794C4676C80EDBE3);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t4FC0676786D4504DFB463E079B49B98660853217_m50DBA733297972A955D96A533F2A1F3BE853BC38_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t4FC0676786D4504DFB463E079B49B98660853217);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E_m3AD29AA7E6279412E3C8AA9DAA54CF2186113297_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float3_t4AB5D88249ADB24F69FFD0793E8ED25E1CC3745E);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_tFA851D5782D452C4B2E6265604AD87D652390B55_m015C8659A60B24F46F8434AC0DB817AAF9EE260C_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_tFA851D5782D452C4B2E6265604AD87D652390B55);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4_t89D9A294E7A79BD81BFBDD18654508532958555E_m0BD2704CD677D45FAEDAD35D6C7208EE167961F7_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float4_t89D9A294E7A79BD81BFBDD18654508532958555E);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t6184AB8A4DDD7E3615F65119999BE030DC55BB69_m9360663DE613AAE1D0A1DE71FA5E7694B5438C73_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t6184AB8A4DDD7E3615F65119999BE030DC55BB69);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisfloat4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2_m90780EC8030A711CE1682E39A74278F5F6BBD031_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(float4x4_t7EDD16F7F57DC7F61A6302535F7C19FB97915DF2);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t8BCA7BF89790AD2881377ABB090D9BFDE5669990_mA7019F84732E6FF4708040D34A52D5C1A8AD2E53_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t8BCA7BF89790AD2881377ABB090D9BFDE5669990);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_Tisint2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A_mC4FF8279635DE447534004C94461FC84DCECE5E6_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(int2_tF4AC25F87943DC0B2BB3456B0B919B3B42A9432A);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisAlignOfHelper_1_t68C3D8AC24508C31F35B828E6206CA7933E9B711_mFD97DC95FC388CD9482935B0A0B60279DA85D751_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(AlignOfHelper_1_t68C3D8AC24508C31F35B828E6206CA7933E9B711);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t UnsafeUtility_SizeOf_TisMemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84_m4A0947EA519A2614EC19544513888A4DC5F42919_gshared_inline (const RuntimeMethod* method) 
{
	{
		uint32_t L_0 = sizeof(MemoryBlock_t83C4AD217E04686899AC67FBD8D14A7C9AAC6E84);
		return (int32_t)L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 Vector_1_Equals_m6F913845CB1E8A1A753B3C187A8EB840C36F5ADF_gshared_inline (Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___0_left, Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		s_Il2CppMethodInitialized = true;
	}
	uint8_t* V_0 = NULL;
	int32_t V_1 = 0;
	int8_t* V_2 = NULL;
	int32_t V_3 = 0;
	uint16_t* V_4 = NULL;
	int32_t V_5 = 0;
	int16_t* V_6 = NULL;
	int32_t V_7 = 0;
	uint32_t* V_8 = NULL;
	int32_t V_9 = 0;
	int32_t* V_10 = NULL;
	int32_t V_11 = 0;
	uint64_t* V_12 = NULL;
	int32_t V_13 = 0;
	int64_t* V_14 = NULL;
	int32_t V_15 = 0;
	float* V_16 = NULL;
	int32_t V_17 = 0;
	double* V_18 = NULL;
	int32_t V_19 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A V_20;
	memset((&V_20), 0, sizeof(V_20));
	uint8_t* G_B5_0 = NULL;
	uint8_t* G_B4_0 = NULL;
	int32_t G_B6_0 = 0;
	uint8_t* G_B6_1 = NULL;
	int8_t* G_B13_0 = NULL;
	int8_t* G_B12_0 = NULL;
	int32_t G_B14_0 = 0;
	int8_t* G_B14_1 = NULL;
	uint16_t* G_B21_0 = NULL;
	uint16_t* G_B20_0 = NULL;
	int32_t G_B22_0 = 0;
	uint16_t* G_B22_1 = NULL;
	int16_t* G_B29_0 = NULL;
	int16_t* G_B28_0 = NULL;
	int32_t G_B30_0 = 0;
	int16_t* G_B30_1 = NULL;
	uint32_t* G_B37_0 = NULL;
	uint32_t* G_B36_0 = NULL;
	uint32_t G_B38_0 = 0;
	uint32_t* G_B38_1 = NULL;
	int32_t* G_B45_0 = NULL;
	int32_t* G_B44_0 = NULL;
	int32_t G_B46_0 = 0;
	int32_t* G_B46_1 = NULL;
	uint64_t* G_B53_0 = NULL;
	uint64_t* G_B52_0 = NULL;
	uint64_t G_B54_0 = 0;
	uint64_t* G_B54_1 = NULL;
	int64_t* G_B61_0 = NULL;
	int64_t* G_B60_0 = NULL;
	int64_t G_B62_0 = 0;
	int64_t* G_B62_1 = NULL;
	float* G_B69_0 = NULL;
	float* G_B68_0 = NULL;
	float G_B70_0 = 0.0f;
	float* G_B70_1 = NULL;
	double* G_B77_0 = NULL;
	double* G_B76_0 = NULL;
	double G_B78_0 = 0.0;
	double* G_B78_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B85_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B84_0 = NULL;
	int32_t G_B86_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B86_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B88_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B87_0 = NULL;
	int32_t G_B89_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B89_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B91_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B90_0 = NULL;
	int32_t G_B92_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B92_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B94_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B93_0 = NULL;
	int32_t G_B95_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B95_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B97_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B96_0 = NULL;
	int32_t G_B98_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B98_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B100_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B99_0 = NULL;
	int32_t G_B101_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B101_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B103_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B102_0 = NULL;
	int32_t G_B104_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B104_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B106_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B105_0 = NULL;
	int32_t G_B107_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B107_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B109_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B108_0 = NULL;
	int32_t G_B110_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B110_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B112_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B111_0 = NULL;
	int32_t G_B113_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B113_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B115_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B114_0 = NULL;
	int32_t G_B116_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B116_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B118_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B117_0 = NULL;
	int32_t G_B119_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B119_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B121_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B120_0 = NULL;
	int32_t G_B122_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B122_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B124_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B123_0 = NULL;
	int32_t G_B125_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B125_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B127_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B126_0 = NULL;
	int32_t G_B128_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B128_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B130_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B129_0 = NULL;
	int32_t G_B131_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B131_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B135_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B134_0 = NULL;
	int32_t G_B136_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B136_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B138_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B137_0 = NULL;
	int32_t G_B139_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B139_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B141_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B140_0 = NULL;
	int32_t G_B142_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B142_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B144_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B143_0 = NULL;
	int32_t G_B145_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B145_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B147_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B146_0 = NULL;
	int32_t G_B148_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B148_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B150_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B149_0 = NULL;
	int32_t G_B151_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B151_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B153_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B152_0 = NULL;
	int32_t G_B154_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B154_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B156_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B155_0 = NULL;
	int32_t G_B157_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B157_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B159_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B158_0 = NULL;
	int32_t G_B160_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B160_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B162_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B161_0 = NULL;
	int32_t G_B163_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B163_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B165_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B164_0 = NULL;
	int32_t G_B166_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B166_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B168_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B167_0 = NULL;
	int32_t G_B169_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B169_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B171_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B170_0 = NULL;
	int32_t G_B172_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B172_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B174_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B173_0 = NULL;
	int32_t G_B175_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B175_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B177_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B176_0 = NULL;
	int32_t G_B178_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B178_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B180_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B179_0 = NULL;
	int32_t G_B181_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B181_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B185_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B184_0 = NULL;
	int32_t G_B186_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B186_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B188_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B187_0 = NULL;
	int32_t G_B189_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B189_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B191_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B190_0 = NULL;
	int32_t G_B192_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B192_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B194_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B193_0 = NULL;
	int32_t G_B195_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B195_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B197_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B196_0 = NULL;
	int32_t G_B198_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B198_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B200_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B199_0 = NULL;
	int32_t G_B201_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B201_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B203_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B202_0 = NULL;
	int32_t G_B204_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B204_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B206_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B205_0 = NULL;
	int32_t G_B207_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B207_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B211_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B210_0 = NULL;
	int32_t G_B212_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B212_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B214_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B213_0 = NULL;
	int32_t G_B215_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B215_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B217_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B216_0 = NULL;
	int32_t G_B218_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B218_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B220_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B219_0 = NULL;
	int32_t G_B221_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B221_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B223_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B222_0 = NULL;
	int32_t G_B224_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B224_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B226_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B225_0 = NULL;
	int32_t G_B227_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B227_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B229_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B228_0 = NULL;
	int32_t G_B230_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B230_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B232_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B231_0 = NULL;
	int32_t G_B233_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B233_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B237_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B236_0 = NULL;
	uint32_t G_B238_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B238_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B240_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B239_0 = NULL;
	uint32_t G_B241_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B241_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B243_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B242_0 = NULL;
	uint32_t G_B244_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B244_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B246_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B245_0 = NULL;
	uint32_t G_B247_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B247_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B251_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B250_0 = NULL;
	int32_t G_B252_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B252_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B254_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B253_0 = NULL;
	int32_t G_B255_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B255_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B257_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B256_0 = NULL;
	int32_t G_B258_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B258_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B260_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B259_0 = NULL;
	int32_t G_B261_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B261_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B265_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B264_0 = NULL;
	uint64_t G_B266_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B266_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B268_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B267_0 = NULL;
	uint64_t G_B269_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B269_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B273_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B272_0 = NULL;
	int64_t G_B274_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B274_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B276_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B275_0 = NULL;
	int64_t G_B277_0 = 0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B277_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B281_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B280_0 = NULL;
	float G_B282_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B282_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B284_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B283_0 = NULL;
	float G_B285_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B285_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B287_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B286_0 = NULL;
	float G_B288_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B288_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B290_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B289_0 = NULL;
	float G_B291_0 = 0.0f;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B291_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B295_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B294_0 = NULL;
	double G_B296_0 = 0.0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B296_1 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B298_0 = NULL;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B297_0 = NULL;
	double G_B299_0 = 0.0;
	Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A* G_B299_1 = NULL;
	{
		bool L_0;
		L_0 = Vector_get_IsHardwareAccelerated_m783509258751EBED64CBD9F387EC1BB4A15088AA(NULL);
		if (!L_0)
		{
			goto IL_0447;
		}
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_1 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_2;
		L_2 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_1, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_3 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_4;
		L_4 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_3, NULL);
		bool L_5;
		L_5 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_2, L_4, NULL);
		if (!L_5)
		{
			goto IL_0068;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_6;
		L_6 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uintptr_t L_7 = ((uintptr_t)L_6);
		int8_t* L_8 = (int8_t*) (L_7 ? alloca(L_7) : NULL);
		memset(L_8, 0, L_7);
		V_0 = (uint8_t*)(L_8);
		V_1 = 0;
		goto IL_0059;
	}

IL_0032:
	{
		uint8_t* L_9 = V_0;
		int32_t L_10 = V_1;
		int32_t L_11 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_12;
		L_12 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_11, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_13 = V_1;
		uint16_t L_14;
		L_14 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_13, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_15;
		L_15 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_12, L_14, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_15)
		{
			G_B5_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10));
			goto IL_004f;
		}
		G_B4_0 = ((uint8_t*)il2cpp_codegen_add((intptr_t)L_9, L_10));
	}
	{
		G_B6_0 = 0;
		G_B6_1 = G_B4_0;
		goto IL_0054;
	}

IL_004f:
	{
		uint8_t L_16;
		L_16 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B6_0 = ((int32_t)(L_16));
		G_B6_1 = G_B5_0;
	}

IL_0054:
	{
		*((int8_t*)G_B6_1) = (int8_t)G_B6_0;
		int32_t L_17 = V_1;
		V_1 = ((int32_t)il2cpp_codegen_add(L_17, 1));
	}

IL_0059:
	{
		int32_t L_18 = V_1;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_19;
		L_19 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_18) < ((int32_t)L_19)))
		{
			goto IL_0032;
		}
	}
	{
		uint8_t* L_20 = V_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_21;
		memset((&L_21), 0, sizeof(L_21));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_21), (void*)L_20, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_21;
	}

IL_0068:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_00c6;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_27;
		L_27 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		uintptr_t L_28 = ((uintptr_t)L_27);
		int8_t* L_29 = (int8_t*) (L_28 ? alloca(L_28) : NULL);
		memset(L_29, 0, L_28);
		V_2 = (L_29);
		V_3 = 0;
		goto IL_00b7;
	}

IL_0090:
	{
		int8_t* L_30 = V_2;
		int32_t L_31 = V_3;
		int32_t L_32 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_33;
		L_33 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_32, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_34 = V_3;
		uint16_t L_35;
		L_35 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_34, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_36;
		L_36 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_33, L_35, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_36)
		{
			G_B13_0 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31));
			goto IL_00ad;
		}
		G_B12_0 = ((int8_t*)il2cpp_codegen_add((intptr_t)L_30, L_31));
	}
	{
		G_B14_0 = 0;
		G_B14_1 = G_B12_0;
		goto IL_00b2;
	}

IL_00ad:
	{
		int8_t L_37;
		L_37 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B14_0 = ((int32_t)(L_37));
		G_B14_1 = G_B13_0;
	}

IL_00b2:
	{
		*((int8_t*)G_B14_1) = (int8_t)G_B14_0;
		int32_t L_38 = V_3;
		V_3 = ((int32_t)il2cpp_codegen_add(L_38, 1));
	}

IL_00b7:
	{
		int32_t L_39 = V_3;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_40;
		L_40 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_39) < ((int32_t)L_40)))
		{
			goto IL_0090;
		}
	}
	{
		int8_t* L_41 = V_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_42;
		memset((&L_42), 0, sizeof(L_42));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_42), (void*)L_41, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_42;
	}

IL_00c6:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_43 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_44;
		L_44 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_43, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_45 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_46;
		L_46 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_45, NULL);
		bool L_47;
		L_47 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_44, L_46, NULL);
		if (!L_47)
		{
			goto IL_0133;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_48;
		L_48 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_48) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_49 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_48), 2));
		int8_t* L_50 = (int8_t*) (L_49 ? alloca(L_49) : NULL);
		memset(L_50, 0, L_49);
		V_4 = (uint16_t*)(L_50);
		V_5 = 0;
		goto IL_0122;
	}

IL_00f2:
	{
		uint16_t* L_51 = V_4;
		int32_t L_52 = V_5;
		int32_t L_53 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_54;
		L_54 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_53, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_55 = V_5;
		uint16_t L_56;
		L_56 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_55, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_57;
		L_57 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_54, L_56, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_57)
		{
			G_B21_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2))));
			goto IL_0116;
		}
		G_B20_0 = ((uint16_t*)il2cpp_codegen_add((intptr_t)L_51, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_52), 2))));
	}
	{
		G_B22_0 = 0;
		G_B22_1 = G_B20_0;
		goto IL_011b;
	}

IL_0116:
	{
		uint16_t L_58;
		L_58 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B22_0 = ((int32_t)(L_58));
		G_B22_1 = G_B21_0;
	}

IL_011b:
	{
		*((int16_t*)G_B22_1) = (int16_t)G_B22_0;
		int32_t L_59 = V_5;
		V_5 = ((int32_t)il2cpp_codegen_add(L_59, 1));
	}

IL_0122:
	{
		int32_t L_60 = V_5;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_61;
		L_61 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_60) < ((int32_t)L_61)))
		{
			goto IL_00f2;
		}
	}
	{
		uint16_t* L_62 = V_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_63;
		memset((&L_63), 0, sizeof(L_63));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_63), (void*)L_62, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_63;
	}

IL_0133:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_64 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_65;
		L_65 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_64, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		bool L_68;
		L_68 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_65, L_67, NULL);
		if (!L_68)
		{
			goto IL_01a0;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_69;
		L_69 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_69) * (uintptr_t)2 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_70 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_69), 2));
		int8_t* L_71 = (int8_t*) (L_70 ? alloca(L_70) : NULL);
		memset(L_71, 0, L_70);
		V_6 = (int16_t*)(L_71);
		V_7 = 0;
		goto IL_018f;
	}

IL_015f:
	{
		int16_t* L_72 = V_6;
		int32_t L_73 = V_7;
		int32_t L_74 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_75;
		L_75 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_74, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_76 = V_7;
		uint16_t L_77;
		L_77 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_76, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_78;
		L_78 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_75, L_77, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_78)
		{
			G_B29_0 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 2))));
			goto IL_0183;
		}
		G_B28_0 = ((int16_t*)il2cpp_codegen_add((intptr_t)L_72, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_73), 2))));
	}
	{
		G_B30_0 = 0;
		G_B30_1 = G_B28_0;
		goto IL_0188;
	}

IL_0183:
	{
		int16_t L_79;
		L_79 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B30_0 = ((int32_t)(L_79));
		G_B30_1 = G_B29_0;
	}

IL_0188:
	{
		*((int16_t*)G_B30_1) = (int16_t)G_B30_0;
		int32_t L_80 = V_7;
		V_7 = ((int32_t)il2cpp_codegen_add(L_80, 1));
	}

IL_018f:
	{
		int32_t L_81 = V_7;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_82;
		L_82 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_81) < ((int32_t)L_82)))
		{
			goto IL_015f;
		}
	}
	{
		int16_t* L_83 = V_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_84;
		memset((&L_84), 0, sizeof(L_84));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_84), (void*)L_83, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_84;
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_85 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_86;
		L_86 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_85, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_87 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_88;
		L_88 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_87, NULL);
		bool L_89;
		L_89 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_86, L_88, NULL);
		if (!L_89)
		{
			goto IL_020d;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_90;
		L_90 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_90) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_91 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_90), 4));
		int8_t* L_92 = (int8_t*) (L_91 ? alloca(L_91) : NULL);
		memset(L_92, 0, L_91);
		V_8 = (uint32_t*)(L_92);
		V_9 = 0;
		goto IL_01fc;
	}

IL_01cc:
	{
		uint32_t* L_93 = V_8;
		int32_t L_94 = V_9;
		int32_t L_95 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_96;
		L_96 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_95, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_97 = V_9;
		uint16_t L_98;
		L_98 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_97, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_99;
		L_99 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_96, L_98, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_99)
		{
			G_B37_0 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_94), 4))));
			goto IL_01f0;
		}
		G_B36_0 = ((uint32_t*)il2cpp_codegen_add((intptr_t)L_93, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_94), 4))));
	}
	{
		G_B38_0 = ((uint32_t)(0));
		G_B38_1 = G_B36_0;
		goto IL_01f5;
	}

IL_01f0:
	{
		uint32_t L_100;
		L_100 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B38_0 = L_100;
		G_B38_1 = G_B37_0;
	}

IL_01f5:
	{
		*((int32_t*)G_B38_1) = (int32_t)G_B38_0;
		int32_t L_101 = V_9;
		V_9 = ((int32_t)il2cpp_codegen_add(L_101, 1));
	}

IL_01fc:
	{
		int32_t L_102 = V_9;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_103;
		L_103 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_102) < ((int32_t)L_103)))
		{
			goto IL_01cc;
		}
	}
	{
		uint32_t* L_104 = V_8;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_105;
		memset((&L_105), 0, sizeof(L_105));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_105), (void*)L_104, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_105;
	}

IL_020d:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_106 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_107;
		L_107 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_106, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_108 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_109;
		L_109 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_108, NULL);
		bool L_110;
		L_110 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_107, L_109, NULL);
		if (!L_110)
		{
			goto IL_027a;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_111;
		L_111 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_111) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_112 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_111), 4));
		int8_t* L_113 = (int8_t*) (L_112 ? alloca(L_112) : NULL);
		memset(L_113, 0, L_112);
		V_10 = (int32_t*)(L_113);
		V_11 = 0;
		goto IL_0269;
	}

IL_0239:
	{
		int32_t* L_114 = V_10;
		int32_t L_115 = V_11;
		int32_t L_116 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_117;
		L_117 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_116, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_118 = V_11;
		uint16_t L_119;
		L_119 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_118, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_120;
		L_120 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_117, L_119, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_120)
		{
			G_B45_0 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_115), 4))));
			goto IL_025d;
		}
		G_B44_0 = ((int32_t*)il2cpp_codegen_add((intptr_t)L_114, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_115), 4))));
	}
	{
		G_B46_0 = 0;
		G_B46_1 = G_B44_0;
		goto IL_0262;
	}

IL_025d:
	{
		int32_t L_121;
		L_121 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B46_0 = L_121;
		G_B46_1 = G_B45_0;
	}

IL_0262:
	{
		*((int32_t*)G_B46_1) = (int32_t)G_B46_0;
		int32_t L_122 = V_11;
		V_11 = ((int32_t)il2cpp_codegen_add(L_122, 1));
	}

IL_0269:
	{
		int32_t L_123 = V_11;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_124;
		L_124 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_123) < ((int32_t)L_124)))
		{
			goto IL_0239;
		}
	}
	{
		int32_t* L_125 = V_10;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_126;
		memset((&L_126), 0, sizeof(L_126));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_126), (void*)L_125, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_126;
	}

IL_027a:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_127 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_128;
		L_128 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_127, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_129 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_130;
		L_130 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_129, NULL);
		bool L_131;
		L_131 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_128, L_130, NULL);
		if (!L_131)
		{
			goto IL_02e8;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_132;
		L_132 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_132) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_133 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_132), 8));
		int8_t* L_134 = (int8_t*) (L_133 ? alloca(L_133) : NULL);
		memset(L_134, 0, L_133);
		V_12 = (uint64_t*)(L_134);
		V_13 = 0;
		goto IL_02d7;
	}

IL_02a6:
	{
		uint64_t* L_135 = V_12;
		int32_t L_136 = V_13;
		int32_t L_137 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_138;
		L_138 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_137, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_139 = V_13;
		uint16_t L_140;
		L_140 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_139, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_141;
		L_141 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_138, L_140, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_141)
		{
			G_B53_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_135, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_136), 8))));
			goto IL_02cb;
		}
		G_B52_0 = ((uint64_t*)il2cpp_codegen_add((intptr_t)L_135, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_136), 8))));
	}
	{
		G_B54_0 = ((uint64_t)(((int64_t)0)));
		G_B54_1 = G_B52_0;
		goto IL_02d0;
	}

IL_02cb:
	{
		uint64_t L_142;
		L_142 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B54_0 = L_142;
		G_B54_1 = G_B53_0;
	}

IL_02d0:
	{
		*((int64_t*)G_B54_1) = (int64_t)G_B54_0;
		int32_t L_143 = V_13;
		V_13 = ((int32_t)il2cpp_codegen_add(L_143, 1));
	}

IL_02d7:
	{
		int32_t L_144 = V_13;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_145;
		L_145 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_144) < ((int32_t)L_145)))
		{
			goto IL_02a6;
		}
	}
	{
		uint64_t* L_146 = V_12;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_147;
		memset((&L_147), 0, sizeof(L_147));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_147), (void*)L_146, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_147;
	}

IL_02e8:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_148 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_149;
		L_149 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_148, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_150 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_151;
		L_151 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_150, NULL);
		bool L_152;
		L_152 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_149, L_151, NULL);
		if (!L_152)
		{
			goto IL_0356;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_153;
		L_153 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_153) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_154 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_153), 8));
		int8_t* L_155 = (int8_t*) (L_154 ? alloca(L_154) : NULL);
		memset(L_155, 0, L_154);
		V_14 = (int64_t*)(L_155);
		V_15 = 0;
		goto IL_0345;
	}

IL_0314:
	{
		int64_t* L_156 = V_14;
		int32_t L_157 = V_15;
		int32_t L_158 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_159;
		L_159 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_158, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_160 = V_15;
		uint16_t L_161;
		L_161 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_160, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_162;
		L_162 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_159, L_161, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_162)
		{
			G_B61_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_156, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_157), 8))));
			goto IL_0339;
		}
		G_B60_0 = ((int64_t*)il2cpp_codegen_add((intptr_t)L_156, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_157), 8))));
	}
	{
		G_B62_0 = ((int64_t)0);
		G_B62_1 = G_B60_0;
		goto IL_033e;
	}

IL_0339:
	{
		int64_t L_163;
		L_163 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B62_0 = L_163;
		G_B62_1 = G_B61_0;
	}

IL_033e:
	{
		*((int64_t*)G_B62_1) = (int64_t)G_B62_0;
		int32_t L_164 = V_15;
		V_15 = ((int32_t)il2cpp_codegen_add(L_164, 1));
	}

IL_0345:
	{
		int32_t L_165 = V_15;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_166;
		L_166 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_165) < ((int32_t)L_166)))
		{
			goto IL_0314;
		}
	}
	{
		int64_t* L_167 = V_14;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_168;
		memset((&L_168), 0, sizeof(L_168));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_168), (void*)L_167, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_168;
	}

IL_0356:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_169 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_170;
		L_170 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_169, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_171 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_172;
		L_172 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_171, NULL);
		bool L_173;
		L_173 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_170, L_172, NULL);
		if (!L_173)
		{
			goto IL_03c7;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_174;
		L_174 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_174) * (uintptr_t)4 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_175 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_174), 4));
		int8_t* L_176 = (int8_t*) (L_175 ? alloca(L_175) : NULL);
		memset(L_176, 0, L_175);
		V_16 = (float*)(L_176);
		V_17 = 0;
		goto IL_03b6;
	}

IL_0382:
	{
		float* L_177 = V_16;
		int32_t L_178 = V_17;
		int32_t L_179 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_180;
		L_180 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_179, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_181 = V_17;
		uint16_t L_182;
		L_182 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_181, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_183;
		L_183 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_180, L_182, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_183)
		{
			G_B69_0 = ((float*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 4))));
			goto IL_03aa;
		}
		G_B68_0 = ((float*)il2cpp_codegen_add((intptr_t)L_177, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_178), 4))));
	}
	{
		G_B70_0 = (0.0f);
		G_B70_1 = G_B68_0;
		goto IL_03af;
	}

IL_03aa:
	{
		float L_184;
		L_184 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B70_0 = L_184;
		G_B70_1 = G_B69_0;
	}

IL_03af:
	{
		*((float*)G_B70_1) = (float)G_B70_0;
		int32_t L_185 = V_17;
		V_17 = ((int32_t)il2cpp_codegen_add(L_185, 1));
	}

IL_03b6:
	{
		int32_t L_186 = V_17;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_187;
		L_187 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_186) < ((int32_t)L_187)))
		{
			goto IL_0382;
		}
	}
	{
		float* L_188 = V_16;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_189;
		memset((&L_189), 0, sizeof(L_189));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_189), (void*)L_188, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_189;
	}

IL_03c7:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_190 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_191;
		L_191 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_190, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_192 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_193;
		L_193 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_192, NULL);
		bool L_194;
		L_194 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_191, L_193, NULL);
		if (!L_194)
		{
			goto IL_043c;
		}
	}
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_195;
		L_195 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((uintptr_t)((uintptr_t)L_195) * (uintptr_t)8 > (uintptr_t)kIl2CppUIntPtrMax)
			IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_overflow_exception(), method);
		intptr_t L_196 = ((intptr_t)il2cpp_codegen_multiply((intptr_t)((uintptr_t)L_195), 8));
		int8_t* L_197 = (int8_t*) (L_196 ? alloca(L_196) : NULL);
		memset(L_197, 0, L_196);
		V_18 = (double*)(L_197);
		V_19 = 0;
		goto IL_042b;
	}

IL_03f3:
	{
		double* L_198 = V_18;
		int32_t L_199 = V_19;
		int32_t L_200 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		uint16_t L_201;
		L_201 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___0_left), L_200, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		int32_t L_202 = V_19;
		uint16_t L_203;
		L_203 = Vector_1_get_Item_m248FFF521980A3A43D237B8C5CA2ABD5C62D4D27((&___1_right), L_202, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 8));
		bool L_204;
		L_204 = Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_inline(L_201, L_203, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 9));
		if (L_204)
		{
			G_B77_0 = ((double*)il2cpp_codegen_add((intptr_t)L_198, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_199), 8))));
			goto IL_041f;
		}
		G_B76_0 = ((double*)il2cpp_codegen_add((intptr_t)L_198, ((intptr_t)il2cpp_codegen_multiply(((intptr_t)L_199), 8))));
	}
	{
		G_B78_0 = (0.0);
		G_B78_1 = G_B76_0;
		goto IL_0424;
	}

IL_041f:
	{
		double L_205;
		L_205 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B78_0 = L_205;
		G_B78_1 = G_B77_0;
	}

IL_0424:
	{
		*((double*)G_B78_1) = (double)G_B78_0;
		int32_t L_206 = V_19;
		V_19 = ((int32_t)il2cpp_codegen_add(L_206, 1));
	}

IL_042b:
	{
		int32_t L_207 = V_19;
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_208;
		L_208 = Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_inline(il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 5));
		if ((((int32_t)L_207) < ((int32_t)L_208)))
		{
			goto IL_03f3;
		}
	}
	{
		double* L_209 = V_18;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_210;
		memset((&L_210), 0, sizeof(L_210));
		Vector_1__ctor_m46ADEA122EFBA7AEF487716891A8ADD284FD12E3((&L_210), (void*)L_209, il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 12));
		return L_210;
	}

IL_043c:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_211 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_211, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_211, method);
	}

IL_0447:
	{
		il2cpp_codegen_initobj((&V_20), sizeof(Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A));
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_212 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_213;
		L_213 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_212, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_214 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_215;
		L_215 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_214, NULL);
		bool L_216;
		L_216 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_213, L_215, NULL);
		if (!L_216)
		{
			goto IL_06e5;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_217 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_218 = L_217.___register;
		uint8_t L_219 = L_218.___byte_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_220 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_221 = L_220.___register;
		uint8_t L_222 = L_221.___byte_0;
		if ((((int32_t)L_219) == ((int32_t)L_222)))
		{
			G_B85_0 = (&V_20);
			goto IL_048a;
		}
		G_B84_0 = (&V_20);
	}
	{
		G_B86_0 = 0;
		G_B86_1 = G_B84_0;
		goto IL_048f;
	}

IL_048a:
	{
		uint8_t L_223;
		L_223 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B86_0 = ((int32_t)(L_223));
		G_B86_1 = G_B85_0;
	}

IL_048f:
	{
		G_B86_1->___byte_0 = (uint8_t)G_B86_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_224 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_225 = L_224.___register;
		uint8_t L_226 = L_225.___byte_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_227 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_228 = L_227.___register;
		uint8_t L_229 = L_228.___byte_1;
		if ((((int32_t)L_226) == ((int32_t)L_229)))
		{
			G_B88_0 = (&V_20);
			goto IL_04b1;
		}
		G_B87_0 = (&V_20);
	}
	{
		G_B89_0 = 0;
		G_B89_1 = G_B87_0;
		goto IL_04b6;
	}

IL_04b1:
	{
		uint8_t L_230;
		L_230 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B89_0 = ((int32_t)(L_230));
		G_B89_1 = G_B88_0;
	}

IL_04b6:
	{
		G_B89_1->___byte_1 = (uint8_t)G_B89_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_231 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_232 = L_231.___register;
		uint8_t L_233 = L_232.___byte_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_234 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_235 = L_234.___register;
		uint8_t L_236 = L_235.___byte_2;
		if ((((int32_t)L_233) == ((int32_t)L_236)))
		{
			G_B91_0 = (&V_20);
			goto IL_04d8;
		}
		G_B90_0 = (&V_20);
	}
	{
		G_B92_0 = 0;
		G_B92_1 = G_B90_0;
		goto IL_04dd;
	}

IL_04d8:
	{
		uint8_t L_237;
		L_237 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B92_0 = ((int32_t)(L_237));
		G_B92_1 = G_B91_0;
	}

IL_04dd:
	{
		G_B92_1->___byte_2 = (uint8_t)G_B92_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_238 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_239 = L_238.___register;
		uint8_t L_240 = L_239.___byte_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_241 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_242 = L_241.___register;
		uint8_t L_243 = L_242.___byte_3;
		if ((((int32_t)L_240) == ((int32_t)L_243)))
		{
			G_B94_0 = (&V_20);
			goto IL_04ff;
		}
		G_B93_0 = (&V_20);
	}
	{
		G_B95_0 = 0;
		G_B95_1 = G_B93_0;
		goto IL_0504;
	}

IL_04ff:
	{
		uint8_t L_244;
		L_244 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B95_0 = ((int32_t)(L_244));
		G_B95_1 = G_B94_0;
	}

IL_0504:
	{
		G_B95_1->___byte_3 = (uint8_t)G_B95_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_245 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_246 = L_245.___register;
		uint8_t L_247 = L_246.___byte_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_248 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_249 = L_248.___register;
		uint8_t L_250 = L_249.___byte_4;
		if ((((int32_t)L_247) == ((int32_t)L_250)))
		{
			G_B97_0 = (&V_20);
			goto IL_0526;
		}
		G_B96_0 = (&V_20);
	}
	{
		G_B98_0 = 0;
		G_B98_1 = G_B96_0;
		goto IL_052b;
	}

IL_0526:
	{
		uint8_t L_251;
		L_251 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B98_0 = ((int32_t)(L_251));
		G_B98_1 = G_B97_0;
	}

IL_052b:
	{
		G_B98_1->___byte_4 = (uint8_t)G_B98_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_252 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_253 = L_252.___register;
		uint8_t L_254 = L_253.___byte_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_255 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_256 = L_255.___register;
		uint8_t L_257 = L_256.___byte_5;
		if ((((int32_t)L_254) == ((int32_t)L_257)))
		{
			G_B100_0 = (&V_20);
			goto IL_054d;
		}
		G_B99_0 = (&V_20);
	}
	{
		G_B101_0 = 0;
		G_B101_1 = G_B99_0;
		goto IL_0552;
	}

IL_054d:
	{
		uint8_t L_258;
		L_258 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B101_0 = ((int32_t)(L_258));
		G_B101_1 = G_B100_0;
	}

IL_0552:
	{
		G_B101_1->___byte_5 = (uint8_t)G_B101_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_259 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_260 = L_259.___register;
		uint8_t L_261 = L_260.___byte_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_262 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_263 = L_262.___register;
		uint8_t L_264 = L_263.___byte_6;
		if ((((int32_t)L_261) == ((int32_t)L_264)))
		{
			G_B103_0 = (&V_20);
			goto IL_0574;
		}
		G_B102_0 = (&V_20);
	}
	{
		G_B104_0 = 0;
		G_B104_1 = G_B102_0;
		goto IL_0579;
	}

IL_0574:
	{
		uint8_t L_265;
		L_265 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B104_0 = ((int32_t)(L_265));
		G_B104_1 = G_B103_0;
	}

IL_0579:
	{
		G_B104_1->___byte_6 = (uint8_t)G_B104_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_266 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_267 = L_266.___register;
		uint8_t L_268 = L_267.___byte_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_269 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_270 = L_269.___register;
		uint8_t L_271 = L_270.___byte_7;
		if ((((int32_t)L_268) == ((int32_t)L_271)))
		{
			G_B106_0 = (&V_20);
			goto IL_059b;
		}
		G_B105_0 = (&V_20);
	}
	{
		G_B107_0 = 0;
		G_B107_1 = G_B105_0;
		goto IL_05a0;
	}

IL_059b:
	{
		uint8_t L_272;
		L_272 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B107_0 = ((int32_t)(L_272));
		G_B107_1 = G_B106_0;
	}

IL_05a0:
	{
		G_B107_1->___byte_7 = (uint8_t)G_B107_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_273 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_274 = L_273.___register;
		uint8_t L_275 = L_274.___byte_8;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_276 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_277 = L_276.___register;
		uint8_t L_278 = L_277.___byte_8;
		if ((((int32_t)L_275) == ((int32_t)L_278)))
		{
			G_B109_0 = (&V_20);
			goto IL_05c2;
		}
		G_B108_0 = (&V_20);
	}
	{
		G_B110_0 = 0;
		G_B110_1 = G_B108_0;
		goto IL_05c7;
	}

IL_05c2:
	{
		uint8_t L_279;
		L_279 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B110_0 = ((int32_t)(L_279));
		G_B110_1 = G_B109_0;
	}

IL_05c7:
	{
		G_B110_1->___byte_8 = (uint8_t)G_B110_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_280 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_281 = L_280.___register;
		uint8_t L_282 = L_281.___byte_9;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_283 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_284 = L_283.___register;
		uint8_t L_285 = L_284.___byte_9;
		if ((((int32_t)L_282) == ((int32_t)L_285)))
		{
			G_B112_0 = (&V_20);
			goto IL_05e9;
		}
		G_B111_0 = (&V_20);
	}
	{
		G_B113_0 = 0;
		G_B113_1 = G_B111_0;
		goto IL_05ee;
	}

IL_05e9:
	{
		uint8_t L_286;
		L_286 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B113_0 = ((int32_t)(L_286));
		G_B113_1 = G_B112_0;
	}

IL_05ee:
	{
		G_B113_1->___byte_9 = (uint8_t)G_B113_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_287 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_288 = L_287.___register;
		uint8_t L_289 = L_288.___byte_10;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_290 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_291 = L_290.___register;
		uint8_t L_292 = L_291.___byte_10;
		if ((((int32_t)L_289) == ((int32_t)L_292)))
		{
			G_B115_0 = (&V_20);
			goto IL_0610;
		}
		G_B114_0 = (&V_20);
	}
	{
		G_B116_0 = 0;
		G_B116_1 = G_B114_0;
		goto IL_0615;
	}

IL_0610:
	{
		uint8_t L_293;
		L_293 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B116_0 = ((int32_t)(L_293));
		G_B116_1 = G_B115_0;
	}

IL_0615:
	{
		G_B116_1->___byte_10 = (uint8_t)G_B116_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_294 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_295 = L_294.___register;
		uint8_t L_296 = L_295.___byte_11;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_297 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_298 = L_297.___register;
		uint8_t L_299 = L_298.___byte_11;
		if ((((int32_t)L_296) == ((int32_t)L_299)))
		{
			G_B118_0 = (&V_20);
			goto IL_0637;
		}
		G_B117_0 = (&V_20);
	}
	{
		G_B119_0 = 0;
		G_B119_1 = G_B117_0;
		goto IL_063c;
	}

IL_0637:
	{
		uint8_t L_300;
		L_300 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B119_0 = ((int32_t)(L_300));
		G_B119_1 = G_B118_0;
	}

IL_063c:
	{
		G_B119_1->___byte_11 = (uint8_t)G_B119_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_301 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_302 = L_301.___register;
		uint8_t L_303 = L_302.___byte_12;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_304 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_305 = L_304.___register;
		uint8_t L_306 = L_305.___byte_12;
		if ((((int32_t)L_303) == ((int32_t)L_306)))
		{
			G_B121_0 = (&V_20);
			goto IL_065e;
		}
		G_B120_0 = (&V_20);
	}
	{
		G_B122_0 = 0;
		G_B122_1 = G_B120_0;
		goto IL_0663;
	}

IL_065e:
	{
		uint8_t L_307;
		L_307 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B122_0 = ((int32_t)(L_307));
		G_B122_1 = G_B121_0;
	}

IL_0663:
	{
		G_B122_1->___byte_12 = (uint8_t)G_B122_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_308 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_309 = L_308.___register;
		uint8_t L_310 = L_309.___byte_13;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_311 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_312 = L_311.___register;
		uint8_t L_313 = L_312.___byte_13;
		if ((((int32_t)L_310) == ((int32_t)L_313)))
		{
			G_B124_0 = (&V_20);
			goto IL_0685;
		}
		G_B123_0 = (&V_20);
	}
	{
		G_B125_0 = 0;
		G_B125_1 = G_B123_0;
		goto IL_068a;
	}

IL_0685:
	{
		uint8_t L_314;
		L_314 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B125_0 = ((int32_t)(L_314));
		G_B125_1 = G_B124_0;
	}

IL_068a:
	{
		G_B125_1->___byte_13 = (uint8_t)G_B125_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_315 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_316 = L_315.___register;
		uint8_t L_317 = L_316.___byte_14;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_318 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_319 = L_318.___register;
		uint8_t L_320 = L_319.___byte_14;
		if ((((int32_t)L_317) == ((int32_t)L_320)))
		{
			G_B127_0 = (&V_20);
			goto IL_06ac;
		}
		G_B126_0 = (&V_20);
	}
	{
		G_B128_0 = 0;
		G_B128_1 = G_B126_0;
		goto IL_06b1;
	}

IL_06ac:
	{
		uint8_t L_321;
		L_321 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B128_0 = ((int32_t)(L_321));
		G_B128_1 = G_B127_0;
	}

IL_06b1:
	{
		G_B128_1->___byte_14 = (uint8_t)G_B128_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_322 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_323 = L_322.___register;
		uint8_t L_324 = L_323.___byte_15;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_325 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_326 = L_325.___register;
		uint8_t L_327 = L_326.___byte_15;
		if ((((int32_t)L_324) == ((int32_t)L_327)))
		{
			G_B130_0 = (&V_20);
			goto IL_06d3;
		}
		G_B129_0 = (&V_20);
	}
	{
		G_B131_0 = 0;
		G_B131_1 = G_B129_0;
		goto IL_06d8;
	}

IL_06d3:
	{
		uint8_t L_328;
		L_328 = ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline(NULL);
		G_B131_0 = ((int32_t)(L_328));
		G_B131_1 = G_B130_0;
	}

IL_06d8:
	{
		G_B131_1->___byte_15 = (uint8_t)G_B131_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_329;
		memset((&L_329), 0, sizeof(L_329));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_329), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_329;
	}

IL_06e5:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_330 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_331;
		L_331 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_330, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_332 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_333;
		L_333 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_332, NULL);
		bool L_334;
		L_334 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_331, L_333, NULL);
		if (!L_334)
		{
			goto IL_097b;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_335 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_336 = L_335.___register;
		int8_t L_337 = L_336.___sbyte_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_338 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_339 = L_338.___register;
		int8_t L_340 = L_339.___sbyte_0;
		if ((((int32_t)L_337) == ((int32_t)L_340)))
		{
			G_B135_0 = (&V_20);
			goto IL_0720;
		}
		G_B134_0 = (&V_20);
	}
	{
		G_B136_0 = 0;
		G_B136_1 = G_B134_0;
		goto IL_0725;
	}

IL_0720:
	{
		int8_t L_341;
		L_341 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B136_0 = ((int32_t)(L_341));
		G_B136_1 = G_B135_0;
	}

IL_0725:
	{
		G_B136_1->___sbyte_0 = (int8_t)G_B136_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_342 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_343 = L_342.___register;
		int8_t L_344 = L_343.___sbyte_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_345 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_346 = L_345.___register;
		int8_t L_347 = L_346.___sbyte_1;
		if ((((int32_t)L_344) == ((int32_t)L_347)))
		{
			G_B138_0 = (&V_20);
			goto IL_0747;
		}
		G_B137_0 = (&V_20);
	}
	{
		G_B139_0 = 0;
		G_B139_1 = G_B137_0;
		goto IL_074c;
	}

IL_0747:
	{
		int8_t L_348;
		L_348 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B139_0 = ((int32_t)(L_348));
		G_B139_1 = G_B138_0;
	}

IL_074c:
	{
		G_B139_1->___sbyte_1 = (int8_t)G_B139_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_349 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_350 = L_349.___register;
		int8_t L_351 = L_350.___sbyte_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_352 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_353 = L_352.___register;
		int8_t L_354 = L_353.___sbyte_2;
		if ((((int32_t)L_351) == ((int32_t)L_354)))
		{
			G_B141_0 = (&V_20);
			goto IL_076e;
		}
		G_B140_0 = (&V_20);
	}
	{
		G_B142_0 = 0;
		G_B142_1 = G_B140_0;
		goto IL_0773;
	}

IL_076e:
	{
		int8_t L_355;
		L_355 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B142_0 = ((int32_t)(L_355));
		G_B142_1 = G_B141_0;
	}

IL_0773:
	{
		G_B142_1->___sbyte_2 = (int8_t)G_B142_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_356 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_357 = L_356.___register;
		int8_t L_358 = L_357.___sbyte_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_359 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_360 = L_359.___register;
		int8_t L_361 = L_360.___sbyte_3;
		if ((((int32_t)L_358) == ((int32_t)L_361)))
		{
			G_B144_0 = (&V_20);
			goto IL_0795;
		}
		G_B143_0 = (&V_20);
	}
	{
		G_B145_0 = 0;
		G_B145_1 = G_B143_0;
		goto IL_079a;
	}

IL_0795:
	{
		int8_t L_362;
		L_362 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B145_0 = ((int32_t)(L_362));
		G_B145_1 = G_B144_0;
	}

IL_079a:
	{
		G_B145_1->___sbyte_3 = (int8_t)G_B145_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_363 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_364 = L_363.___register;
		int8_t L_365 = L_364.___sbyte_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_366 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_367 = L_366.___register;
		int8_t L_368 = L_367.___sbyte_4;
		if ((((int32_t)L_365) == ((int32_t)L_368)))
		{
			G_B147_0 = (&V_20);
			goto IL_07bc;
		}
		G_B146_0 = (&V_20);
	}
	{
		G_B148_0 = 0;
		G_B148_1 = G_B146_0;
		goto IL_07c1;
	}

IL_07bc:
	{
		int8_t L_369;
		L_369 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B148_0 = ((int32_t)(L_369));
		G_B148_1 = G_B147_0;
	}

IL_07c1:
	{
		G_B148_1->___sbyte_4 = (int8_t)G_B148_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_370 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_371 = L_370.___register;
		int8_t L_372 = L_371.___sbyte_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_373 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_374 = L_373.___register;
		int8_t L_375 = L_374.___sbyte_5;
		if ((((int32_t)L_372) == ((int32_t)L_375)))
		{
			G_B150_0 = (&V_20);
			goto IL_07e3;
		}
		G_B149_0 = (&V_20);
	}
	{
		G_B151_0 = 0;
		G_B151_1 = G_B149_0;
		goto IL_07e8;
	}

IL_07e3:
	{
		int8_t L_376;
		L_376 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B151_0 = ((int32_t)(L_376));
		G_B151_1 = G_B150_0;
	}

IL_07e8:
	{
		G_B151_1->___sbyte_5 = (int8_t)G_B151_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_377 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_378 = L_377.___register;
		int8_t L_379 = L_378.___sbyte_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_380 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_381 = L_380.___register;
		int8_t L_382 = L_381.___sbyte_6;
		if ((((int32_t)L_379) == ((int32_t)L_382)))
		{
			G_B153_0 = (&V_20);
			goto IL_080a;
		}
		G_B152_0 = (&V_20);
	}
	{
		G_B154_0 = 0;
		G_B154_1 = G_B152_0;
		goto IL_080f;
	}

IL_080a:
	{
		int8_t L_383;
		L_383 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B154_0 = ((int32_t)(L_383));
		G_B154_1 = G_B153_0;
	}

IL_080f:
	{
		G_B154_1->___sbyte_6 = (int8_t)G_B154_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_384 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_385 = L_384.___register;
		int8_t L_386 = L_385.___sbyte_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_387 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_388 = L_387.___register;
		int8_t L_389 = L_388.___sbyte_7;
		if ((((int32_t)L_386) == ((int32_t)L_389)))
		{
			G_B156_0 = (&V_20);
			goto IL_0831;
		}
		G_B155_0 = (&V_20);
	}
	{
		G_B157_0 = 0;
		G_B157_1 = G_B155_0;
		goto IL_0836;
	}

IL_0831:
	{
		int8_t L_390;
		L_390 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B157_0 = ((int32_t)(L_390));
		G_B157_1 = G_B156_0;
	}

IL_0836:
	{
		G_B157_1->___sbyte_7 = (int8_t)G_B157_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_391 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_392 = L_391.___register;
		int8_t L_393 = L_392.___sbyte_8;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_394 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_395 = L_394.___register;
		int8_t L_396 = L_395.___sbyte_8;
		if ((((int32_t)L_393) == ((int32_t)L_396)))
		{
			G_B159_0 = (&V_20);
			goto IL_0858;
		}
		G_B158_0 = (&V_20);
	}
	{
		G_B160_0 = 0;
		G_B160_1 = G_B158_0;
		goto IL_085d;
	}

IL_0858:
	{
		int8_t L_397;
		L_397 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B160_0 = ((int32_t)(L_397));
		G_B160_1 = G_B159_0;
	}

IL_085d:
	{
		G_B160_1->___sbyte_8 = (int8_t)G_B160_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_398 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_399 = L_398.___register;
		int8_t L_400 = L_399.___sbyte_9;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_401 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_402 = L_401.___register;
		int8_t L_403 = L_402.___sbyte_9;
		if ((((int32_t)L_400) == ((int32_t)L_403)))
		{
			G_B162_0 = (&V_20);
			goto IL_087f;
		}
		G_B161_0 = (&V_20);
	}
	{
		G_B163_0 = 0;
		G_B163_1 = G_B161_0;
		goto IL_0884;
	}

IL_087f:
	{
		int8_t L_404;
		L_404 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B163_0 = ((int32_t)(L_404));
		G_B163_1 = G_B162_0;
	}

IL_0884:
	{
		G_B163_1->___sbyte_9 = (int8_t)G_B163_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_405 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_406 = L_405.___register;
		int8_t L_407 = L_406.___sbyte_10;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_408 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_409 = L_408.___register;
		int8_t L_410 = L_409.___sbyte_10;
		if ((((int32_t)L_407) == ((int32_t)L_410)))
		{
			G_B165_0 = (&V_20);
			goto IL_08a6;
		}
		G_B164_0 = (&V_20);
	}
	{
		G_B166_0 = 0;
		G_B166_1 = G_B164_0;
		goto IL_08ab;
	}

IL_08a6:
	{
		int8_t L_411;
		L_411 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B166_0 = ((int32_t)(L_411));
		G_B166_1 = G_B165_0;
	}

IL_08ab:
	{
		G_B166_1->___sbyte_10 = (int8_t)G_B166_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_412 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_413 = L_412.___register;
		int8_t L_414 = L_413.___sbyte_11;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_415 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_416 = L_415.___register;
		int8_t L_417 = L_416.___sbyte_11;
		if ((((int32_t)L_414) == ((int32_t)L_417)))
		{
			G_B168_0 = (&V_20);
			goto IL_08cd;
		}
		G_B167_0 = (&V_20);
	}
	{
		G_B169_0 = 0;
		G_B169_1 = G_B167_0;
		goto IL_08d2;
	}

IL_08cd:
	{
		int8_t L_418;
		L_418 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B169_0 = ((int32_t)(L_418));
		G_B169_1 = G_B168_0;
	}

IL_08d2:
	{
		G_B169_1->___sbyte_11 = (int8_t)G_B169_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_419 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_420 = L_419.___register;
		int8_t L_421 = L_420.___sbyte_12;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_422 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_423 = L_422.___register;
		int8_t L_424 = L_423.___sbyte_12;
		if ((((int32_t)L_421) == ((int32_t)L_424)))
		{
			G_B171_0 = (&V_20);
			goto IL_08f4;
		}
		G_B170_0 = (&V_20);
	}
	{
		G_B172_0 = 0;
		G_B172_1 = G_B170_0;
		goto IL_08f9;
	}

IL_08f4:
	{
		int8_t L_425;
		L_425 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B172_0 = ((int32_t)(L_425));
		G_B172_1 = G_B171_0;
	}

IL_08f9:
	{
		G_B172_1->___sbyte_12 = (int8_t)G_B172_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_426 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_427 = L_426.___register;
		int8_t L_428 = L_427.___sbyte_13;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_429 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_430 = L_429.___register;
		int8_t L_431 = L_430.___sbyte_13;
		if ((((int32_t)L_428) == ((int32_t)L_431)))
		{
			G_B174_0 = (&V_20);
			goto IL_091b;
		}
		G_B173_0 = (&V_20);
	}
	{
		G_B175_0 = 0;
		G_B175_1 = G_B173_0;
		goto IL_0920;
	}

IL_091b:
	{
		int8_t L_432;
		L_432 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B175_0 = ((int32_t)(L_432));
		G_B175_1 = G_B174_0;
	}

IL_0920:
	{
		G_B175_1->___sbyte_13 = (int8_t)G_B175_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_433 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_434 = L_433.___register;
		int8_t L_435 = L_434.___sbyte_14;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_436 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_437 = L_436.___register;
		int8_t L_438 = L_437.___sbyte_14;
		if ((((int32_t)L_435) == ((int32_t)L_438)))
		{
			G_B177_0 = (&V_20);
			goto IL_0942;
		}
		G_B176_0 = (&V_20);
	}
	{
		G_B178_0 = 0;
		G_B178_1 = G_B176_0;
		goto IL_0947;
	}

IL_0942:
	{
		int8_t L_439;
		L_439 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B178_0 = ((int32_t)(L_439));
		G_B178_1 = G_B177_0;
	}

IL_0947:
	{
		G_B178_1->___sbyte_14 = (int8_t)G_B178_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_440 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_441 = L_440.___register;
		int8_t L_442 = L_441.___sbyte_15;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_443 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_444 = L_443.___register;
		int8_t L_445 = L_444.___sbyte_15;
		if ((((int32_t)L_442) == ((int32_t)L_445)))
		{
			G_B180_0 = (&V_20);
			goto IL_0969;
		}
		G_B179_0 = (&V_20);
	}
	{
		G_B181_0 = 0;
		G_B181_1 = G_B179_0;
		goto IL_096e;
	}

IL_0969:
	{
		int8_t L_446;
		L_446 = ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline(NULL);
		G_B181_0 = ((int32_t)(L_446));
		G_B181_1 = G_B180_0;
	}

IL_096e:
	{
		G_B181_1->___sbyte_15 = (int8_t)G_B181_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_447;
		memset((&L_447), 0, sizeof(L_447));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_447), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_447;
	}

IL_097b:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_448 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_449;
		L_449 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_448, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_450 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_451;
		L_451 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_450, NULL);
		bool L_452;
		L_452 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_449, L_451, NULL);
		if (!L_452)
		{
			goto IL_0ad9;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_453 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_454 = L_453.___register;
		uint16_t L_455 = L_454.___uint16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_456 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_457 = L_456.___register;
		uint16_t L_458 = L_457.___uint16_0;
		if ((((int32_t)L_455) == ((int32_t)L_458)))
		{
			G_B185_0 = (&V_20);
			goto IL_09b6;
		}
		G_B184_0 = (&V_20);
	}
	{
		G_B186_0 = 0;
		G_B186_1 = G_B184_0;
		goto IL_09bb;
	}

IL_09b6:
	{
		uint16_t L_459;
		L_459 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B186_0 = ((int32_t)(L_459));
		G_B186_1 = G_B185_0;
	}

IL_09bb:
	{
		G_B186_1->___uint16_0 = (uint16_t)G_B186_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_460 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_461 = L_460.___register;
		uint16_t L_462 = L_461.___uint16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_463 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_464 = L_463.___register;
		uint16_t L_465 = L_464.___uint16_1;
		if ((((int32_t)L_462) == ((int32_t)L_465)))
		{
			G_B188_0 = (&V_20);
			goto IL_09dd;
		}
		G_B187_0 = (&V_20);
	}
	{
		G_B189_0 = 0;
		G_B189_1 = G_B187_0;
		goto IL_09e2;
	}

IL_09dd:
	{
		uint16_t L_466;
		L_466 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B189_0 = ((int32_t)(L_466));
		G_B189_1 = G_B188_0;
	}

IL_09e2:
	{
		G_B189_1->___uint16_1 = (uint16_t)G_B189_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_467 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_468 = L_467.___register;
		uint16_t L_469 = L_468.___uint16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_470 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_471 = L_470.___register;
		uint16_t L_472 = L_471.___uint16_2;
		if ((((int32_t)L_469) == ((int32_t)L_472)))
		{
			G_B191_0 = (&V_20);
			goto IL_0a04;
		}
		G_B190_0 = (&V_20);
	}
	{
		G_B192_0 = 0;
		G_B192_1 = G_B190_0;
		goto IL_0a09;
	}

IL_0a04:
	{
		uint16_t L_473;
		L_473 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B192_0 = ((int32_t)(L_473));
		G_B192_1 = G_B191_0;
	}

IL_0a09:
	{
		G_B192_1->___uint16_2 = (uint16_t)G_B192_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_474 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_475 = L_474.___register;
		uint16_t L_476 = L_475.___uint16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_477 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_478 = L_477.___register;
		uint16_t L_479 = L_478.___uint16_3;
		if ((((int32_t)L_476) == ((int32_t)L_479)))
		{
			G_B194_0 = (&V_20);
			goto IL_0a2b;
		}
		G_B193_0 = (&V_20);
	}
	{
		G_B195_0 = 0;
		G_B195_1 = G_B193_0;
		goto IL_0a30;
	}

IL_0a2b:
	{
		uint16_t L_480;
		L_480 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B195_0 = ((int32_t)(L_480));
		G_B195_1 = G_B194_0;
	}

IL_0a30:
	{
		G_B195_1->___uint16_3 = (uint16_t)G_B195_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_481 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_482 = L_481.___register;
		uint16_t L_483 = L_482.___uint16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_484 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_485 = L_484.___register;
		uint16_t L_486 = L_485.___uint16_4;
		if ((((int32_t)L_483) == ((int32_t)L_486)))
		{
			G_B197_0 = (&V_20);
			goto IL_0a52;
		}
		G_B196_0 = (&V_20);
	}
	{
		G_B198_0 = 0;
		G_B198_1 = G_B196_0;
		goto IL_0a57;
	}

IL_0a52:
	{
		uint16_t L_487;
		L_487 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B198_0 = ((int32_t)(L_487));
		G_B198_1 = G_B197_0;
	}

IL_0a57:
	{
		G_B198_1->___uint16_4 = (uint16_t)G_B198_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_488 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_489 = L_488.___register;
		uint16_t L_490 = L_489.___uint16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_491 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_492 = L_491.___register;
		uint16_t L_493 = L_492.___uint16_5;
		if ((((int32_t)L_490) == ((int32_t)L_493)))
		{
			G_B200_0 = (&V_20);
			goto IL_0a79;
		}
		G_B199_0 = (&V_20);
	}
	{
		G_B201_0 = 0;
		G_B201_1 = G_B199_0;
		goto IL_0a7e;
	}

IL_0a79:
	{
		uint16_t L_494;
		L_494 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B201_0 = ((int32_t)(L_494));
		G_B201_1 = G_B200_0;
	}

IL_0a7e:
	{
		G_B201_1->___uint16_5 = (uint16_t)G_B201_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_495 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_496 = L_495.___register;
		uint16_t L_497 = L_496.___uint16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_498 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_499 = L_498.___register;
		uint16_t L_500 = L_499.___uint16_6;
		if ((((int32_t)L_497) == ((int32_t)L_500)))
		{
			G_B203_0 = (&V_20);
			goto IL_0aa0;
		}
		G_B202_0 = (&V_20);
	}
	{
		G_B204_0 = 0;
		G_B204_1 = G_B202_0;
		goto IL_0aa5;
	}

IL_0aa0:
	{
		uint16_t L_501;
		L_501 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B204_0 = ((int32_t)(L_501));
		G_B204_1 = G_B203_0;
	}

IL_0aa5:
	{
		G_B204_1->___uint16_6 = (uint16_t)G_B204_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_502 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_503 = L_502.___register;
		uint16_t L_504 = L_503.___uint16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_505 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_506 = L_505.___register;
		uint16_t L_507 = L_506.___uint16_7;
		if ((((int32_t)L_504) == ((int32_t)L_507)))
		{
			G_B206_0 = (&V_20);
			goto IL_0ac7;
		}
		G_B205_0 = (&V_20);
	}
	{
		G_B207_0 = 0;
		G_B207_1 = G_B205_0;
		goto IL_0acc;
	}

IL_0ac7:
	{
		uint16_t L_508;
		L_508 = ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline(NULL);
		G_B207_0 = ((int32_t)(L_508));
		G_B207_1 = G_B206_0;
	}

IL_0acc:
	{
		G_B207_1->___uint16_7 = (uint16_t)G_B207_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_509;
		memset((&L_509), 0, sizeof(L_509));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_509), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_509;
	}

IL_0ad9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_510 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_511;
		L_511 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_510, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_512 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_513;
		L_513 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_512, NULL);
		bool L_514;
		L_514 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_511, L_513, NULL);
		if (!L_514)
		{
			goto IL_0c37;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_515 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_516 = L_515.___register;
		int16_t L_517 = L_516.___int16_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_518 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_519 = L_518.___register;
		int16_t L_520 = L_519.___int16_0;
		if ((((int32_t)L_517) == ((int32_t)L_520)))
		{
			G_B211_0 = (&V_20);
			goto IL_0b14;
		}
		G_B210_0 = (&V_20);
	}
	{
		G_B212_0 = 0;
		G_B212_1 = G_B210_0;
		goto IL_0b19;
	}

IL_0b14:
	{
		int16_t L_521;
		L_521 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B212_0 = ((int32_t)(L_521));
		G_B212_1 = G_B211_0;
	}

IL_0b19:
	{
		G_B212_1->___int16_0 = (int16_t)G_B212_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_522 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_523 = L_522.___register;
		int16_t L_524 = L_523.___int16_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_525 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_526 = L_525.___register;
		int16_t L_527 = L_526.___int16_1;
		if ((((int32_t)L_524) == ((int32_t)L_527)))
		{
			G_B214_0 = (&V_20);
			goto IL_0b3b;
		}
		G_B213_0 = (&V_20);
	}
	{
		G_B215_0 = 0;
		G_B215_1 = G_B213_0;
		goto IL_0b40;
	}

IL_0b3b:
	{
		int16_t L_528;
		L_528 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B215_0 = ((int32_t)(L_528));
		G_B215_1 = G_B214_0;
	}

IL_0b40:
	{
		G_B215_1->___int16_1 = (int16_t)G_B215_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_529 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_530 = L_529.___register;
		int16_t L_531 = L_530.___int16_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_532 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_533 = L_532.___register;
		int16_t L_534 = L_533.___int16_2;
		if ((((int32_t)L_531) == ((int32_t)L_534)))
		{
			G_B217_0 = (&V_20);
			goto IL_0b62;
		}
		G_B216_0 = (&V_20);
	}
	{
		G_B218_0 = 0;
		G_B218_1 = G_B216_0;
		goto IL_0b67;
	}

IL_0b62:
	{
		int16_t L_535;
		L_535 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B218_0 = ((int32_t)(L_535));
		G_B218_1 = G_B217_0;
	}

IL_0b67:
	{
		G_B218_1->___int16_2 = (int16_t)G_B218_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_536 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_537 = L_536.___register;
		int16_t L_538 = L_537.___int16_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_539 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_540 = L_539.___register;
		int16_t L_541 = L_540.___int16_3;
		if ((((int32_t)L_538) == ((int32_t)L_541)))
		{
			G_B220_0 = (&V_20);
			goto IL_0b89;
		}
		G_B219_0 = (&V_20);
	}
	{
		G_B221_0 = 0;
		G_B221_1 = G_B219_0;
		goto IL_0b8e;
	}

IL_0b89:
	{
		int16_t L_542;
		L_542 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B221_0 = ((int32_t)(L_542));
		G_B221_1 = G_B220_0;
	}

IL_0b8e:
	{
		G_B221_1->___int16_3 = (int16_t)G_B221_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_543 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_544 = L_543.___register;
		int16_t L_545 = L_544.___int16_4;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_546 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_547 = L_546.___register;
		int16_t L_548 = L_547.___int16_4;
		if ((((int32_t)L_545) == ((int32_t)L_548)))
		{
			G_B223_0 = (&V_20);
			goto IL_0bb0;
		}
		G_B222_0 = (&V_20);
	}
	{
		G_B224_0 = 0;
		G_B224_1 = G_B222_0;
		goto IL_0bb5;
	}

IL_0bb0:
	{
		int16_t L_549;
		L_549 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B224_0 = ((int32_t)(L_549));
		G_B224_1 = G_B223_0;
	}

IL_0bb5:
	{
		G_B224_1->___int16_4 = (int16_t)G_B224_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_550 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_551 = L_550.___register;
		int16_t L_552 = L_551.___int16_5;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_553 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_554 = L_553.___register;
		int16_t L_555 = L_554.___int16_5;
		if ((((int32_t)L_552) == ((int32_t)L_555)))
		{
			G_B226_0 = (&V_20);
			goto IL_0bd7;
		}
		G_B225_0 = (&V_20);
	}
	{
		G_B227_0 = 0;
		G_B227_1 = G_B225_0;
		goto IL_0bdc;
	}

IL_0bd7:
	{
		int16_t L_556;
		L_556 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B227_0 = ((int32_t)(L_556));
		G_B227_1 = G_B226_0;
	}

IL_0bdc:
	{
		G_B227_1->___int16_5 = (int16_t)G_B227_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_557 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_558 = L_557.___register;
		int16_t L_559 = L_558.___int16_6;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_560 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_561 = L_560.___register;
		int16_t L_562 = L_561.___int16_6;
		if ((((int32_t)L_559) == ((int32_t)L_562)))
		{
			G_B229_0 = (&V_20);
			goto IL_0bfe;
		}
		G_B228_0 = (&V_20);
	}
	{
		G_B230_0 = 0;
		G_B230_1 = G_B228_0;
		goto IL_0c03;
	}

IL_0bfe:
	{
		int16_t L_563;
		L_563 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B230_0 = ((int32_t)(L_563));
		G_B230_1 = G_B229_0;
	}

IL_0c03:
	{
		G_B230_1->___int16_6 = (int16_t)G_B230_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_564 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_565 = L_564.___register;
		int16_t L_566 = L_565.___int16_7;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_567 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_568 = L_567.___register;
		int16_t L_569 = L_568.___int16_7;
		if ((((int32_t)L_566) == ((int32_t)L_569)))
		{
			G_B232_0 = (&V_20);
			goto IL_0c25;
		}
		G_B231_0 = (&V_20);
	}
	{
		G_B233_0 = 0;
		G_B233_1 = G_B231_0;
		goto IL_0c2a;
	}

IL_0c25:
	{
		int16_t L_570;
		L_570 = ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline(NULL);
		G_B233_0 = ((int32_t)(L_570));
		G_B233_1 = G_B232_0;
	}

IL_0c2a:
	{
		G_B233_1->___int16_7 = (int16_t)G_B233_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_571;
		memset((&L_571), 0, sizeof(L_571));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_571), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_571;
	}

IL_0c37:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_572 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_573;
		L_573 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_572, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_574 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_575;
		L_575 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_574, NULL);
		bool L_576;
		L_576 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_573, L_575, NULL);
		if (!L_576)
		{
			goto IL_0cf9;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_577 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_578 = L_577.___register;
		uint32_t L_579 = L_578.___uint32_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_580 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_581 = L_580.___register;
		uint32_t L_582 = L_581.___uint32_0;
		if ((((int32_t)L_579) == ((int32_t)L_582)))
		{
			G_B237_0 = (&V_20);
			goto IL_0c72;
		}
		G_B236_0 = (&V_20);
	}
	{
		G_B238_0 = ((uint32_t)(0));
		G_B238_1 = G_B236_0;
		goto IL_0c77;
	}

IL_0c72:
	{
		uint32_t L_583;
		L_583 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B238_0 = L_583;
		G_B238_1 = G_B237_0;
	}

IL_0c77:
	{
		G_B238_1->___uint32_0 = G_B238_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_584 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_585 = L_584.___register;
		uint32_t L_586 = L_585.___uint32_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_587 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_588 = L_587.___register;
		uint32_t L_589 = L_588.___uint32_1;
		if ((((int32_t)L_586) == ((int32_t)L_589)))
		{
			G_B240_0 = (&V_20);
			goto IL_0c99;
		}
		G_B239_0 = (&V_20);
	}
	{
		G_B241_0 = ((uint32_t)(0));
		G_B241_1 = G_B239_0;
		goto IL_0c9e;
	}

IL_0c99:
	{
		uint32_t L_590;
		L_590 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B241_0 = L_590;
		G_B241_1 = G_B240_0;
	}

IL_0c9e:
	{
		G_B241_1->___uint32_1 = G_B241_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_591 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_592 = L_591.___register;
		uint32_t L_593 = L_592.___uint32_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_594 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_595 = L_594.___register;
		uint32_t L_596 = L_595.___uint32_2;
		if ((((int32_t)L_593) == ((int32_t)L_596)))
		{
			G_B243_0 = (&V_20);
			goto IL_0cc0;
		}
		G_B242_0 = (&V_20);
	}
	{
		G_B244_0 = ((uint32_t)(0));
		G_B244_1 = G_B242_0;
		goto IL_0cc5;
	}

IL_0cc0:
	{
		uint32_t L_597;
		L_597 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B244_0 = L_597;
		G_B244_1 = G_B243_0;
	}

IL_0cc5:
	{
		G_B244_1->___uint32_2 = G_B244_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_598 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_599 = L_598.___register;
		uint32_t L_600 = L_599.___uint32_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_601 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_602 = L_601.___register;
		uint32_t L_603 = L_602.___uint32_3;
		if ((((int32_t)L_600) == ((int32_t)L_603)))
		{
			G_B246_0 = (&V_20);
			goto IL_0ce7;
		}
		G_B245_0 = (&V_20);
	}
	{
		G_B247_0 = ((uint32_t)(0));
		G_B247_1 = G_B245_0;
		goto IL_0cec;
	}

IL_0ce7:
	{
		uint32_t L_604;
		L_604 = ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline(NULL);
		G_B247_0 = L_604;
		G_B247_1 = G_B246_0;
	}

IL_0cec:
	{
		G_B247_1->___uint32_3 = G_B247_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_605;
		memset((&L_605), 0, sizeof(L_605));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_605), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_605;
	}

IL_0cf9:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_606 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_607;
		L_607 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_606, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_608 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_609;
		L_609 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_608, NULL);
		bool L_610;
		L_610 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_607, L_609, NULL);
		if (!L_610)
		{
			goto IL_0dbb;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_611 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_612 = L_611.___register;
		int32_t L_613 = L_612.___int32_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_614 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_615 = L_614.___register;
		int32_t L_616 = L_615.___int32_0;
		if ((((int32_t)L_613) == ((int32_t)L_616)))
		{
			G_B251_0 = (&V_20);
			goto IL_0d34;
		}
		G_B250_0 = (&V_20);
	}
	{
		G_B252_0 = 0;
		G_B252_1 = G_B250_0;
		goto IL_0d39;
	}

IL_0d34:
	{
		int32_t L_617;
		L_617 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B252_0 = L_617;
		G_B252_1 = G_B251_0;
	}

IL_0d39:
	{
		G_B252_1->___int32_0 = G_B252_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_618 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_619 = L_618.___register;
		int32_t L_620 = L_619.___int32_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_621 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_622 = L_621.___register;
		int32_t L_623 = L_622.___int32_1;
		if ((((int32_t)L_620) == ((int32_t)L_623)))
		{
			G_B254_0 = (&V_20);
			goto IL_0d5b;
		}
		G_B253_0 = (&V_20);
	}
	{
		G_B255_0 = 0;
		G_B255_1 = G_B253_0;
		goto IL_0d60;
	}

IL_0d5b:
	{
		int32_t L_624;
		L_624 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B255_0 = L_624;
		G_B255_1 = G_B254_0;
	}

IL_0d60:
	{
		G_B255_1->___int32_1 = G_B255_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_625 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_626 = L_625.___register;
		int32_t L_627 = L_626.___int32_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_628 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_629 = L_628.___register;
		int32_t L_630 = L_629.___int32_2;
		if ((((int32_t)L_627) == ((int32_t)L_630)))
		{
			G_B257_0 = (&V_20);
			goto IL_0d82;
		}
		G_B256_0 = (&V_20);
	}
	{
		G_B258_0 = 0;
		G_B258_1 = G_B256_0;
		goto IL_0d87;
	}

IL_0d82:
	{
		int32_t L_631;
		L_631 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B258_0 = L_631;
		G_B258_1 = G_B257_0;
	}

IL_0d87:
	{
		G_B258_1->___int32_2 = G_B258_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_632 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_633 = L_632.___register;
		int32_t L_634 = L_633.___int32_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_635 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_636 = L_635.___register;
		int32_t L_637 = L_636.___int32_3;
		if ((((int32_t)L_634) == ((int32_t)L_637)))
		{
			G_B260_0 = (&V_20);
			goto IL_0da9;
		}
		G_B259_0 = (&V_20);
	}
	{
		G_B261_0 = 0;
		G_B261_1 = G_B259_0;
		goto IL_0dae;
	}

IL_0da9:
	{
		int32_t L_638;
		L_638 = ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline(NULL);
		G_B261_0 = L_638;
		G_B261_1 = G_B260_0;
	}

IL_0dae:
	{
		G_B261_1->___int32_3 = G_B261_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_639;
		memset((&L_639), 0, sizeof(L_639));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_639), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_639;
	}

IL_0dbb:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_640 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_641;
		L_641 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_640, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_642 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_643;
		L_643 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_642, NULL);
		bool L_644;
		L_644 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_641, L_643, NULL);
		if (!L_644)
		{
			goto IL_0e2e;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_645 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_646 = L_645.___register;
		uint64_t L_647 = L_646.___uint64_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_648 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_649 = L_648.___register;
		uint64_t L_650 = L_649.___uint64_0;
		if ((((int64_t)L_647) == ((int64_t)L_650)))
		{
			G_B265_0 = (&V_20);
			goto IL_0df4;
		}
		G_B264_0 = (&V_20);
	}
	{
		G_B266_0 = ((uint64_t)(((int64_t)0)));
		G_B266_1 = G_B264_0;
		goto IL_0df9;
	}

IL_0df4:
	{
		uint64_t L_651;
		L_651 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B266_0 = L_651;
		G_B266_1 = G_B265_0;
	}

IL_0df9:
	{
		G_B266_1->___uint64_0 = G_B266_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_652 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_653 = L_652.___register;
		uint64_t L_654 = L_653.___uint64_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_655 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_656 = L_655.___register;
		uint64_t L_657 = L_656.___uint64_1;
		if ((((int64_t)L_654) == ((int64_t)L_657)))
		{
			G_B268_0 = (&V_20);
			goto IL_0e1c;
		}
		G_B267_0 = (&V_20);
	}
	{
		G_B269_0 = ((uint64_t)(((int64_t)0)));
		G_B269_1 = G_B267_0;
		goto IL_0e21;
	}

IL_0e1c:
	{
		uint64_t L_658;
		L_658 = ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline(NULL);
		G_B269_0 = L_658;
		G_B269_1 = G_B268_0;
	}

IL_0e21:
	{
		G_B269_1->___uint64_1 = G_B269_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_659;
		memset((&L_659), 0, sizeof(L_659));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_659), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_659;
	}

IL_0e2e:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_660 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_661;
		L_661 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_660, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_662 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_663;
		L_663 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_662, NULL);
		bool L_664;
		L_664 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_661, L_663, NULL);
		if (!L_664)
		{
			goto IL_0ea1;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_665 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_666 = L_665.___register;
		int64_t L_667 = L_666.___int64_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_668 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_669 = L_668.___register;
		int64_t L_670 = L_669.___int64_0;
		if ((((int64_t)L_667) == ((int64_t)L_670)))
		{
			G_B273_0 = (&V_20);
			goto IL_0e67;
		}
		G_B272_0 = (&V_20);
	}
	{
		G_B274_0 = ((int64_t)0);
		G_B274_1 = G_B272_0;
		goto IL_0e6c;
	}

IL_0e67:
	{
		int64_t L_671;
		L_671 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B274_0 = L_671;
		G_B274_1 = G_B273_0;
	}

IL_0e6c:
	{
		G_B274_1->___int64_0 = G_B274_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_672 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_673 = L_672.___register;
		int64_t L_674 = L_673.___int64_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_675 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_676 = L_675.___register;
		int64_t L_677 = L_676.___int64_1;
		if ((((int64_t)L_674) == ((int64_t)L_677)))
		{
			G_B276_0 = (&V_20);
			goto IL_0e8f;
		}
		G_B275_0 = (&V_20);
	}
	{
		G_B277_0 = ((int64_t)0);
		G_B277_1 = G_B275_0;
		goto IL_0e94;
	}

IL_0e8f:
	{
		int64_t L_678;
		L_678 = ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline(NULL);
		G_B277_0 = L_678;
		G_B277_1 = G_B276_0;
	}

IL_0e94:
	{
		G_B277_1->___int64_1 = G_B277_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_679;
		memset((&L_679), 0, sizeof(L_679));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_679), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_679;
	}

IL_0ea1:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_680 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_681;
		L_681 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_680, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_682 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_683;
		L_683 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_682, NULL);
		bool L_684;
		L_684 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_681, L_683, NULL);
		if (!L_684)
		{
			goto IL_0f73;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_685 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_686 = L_685.___register;
		float L_687 = L_686.___single_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_688 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_689 = L_688.___register;
		float L_690 = L_689.___single_0;
		if ((((float)L_687) == ((float)L_690)))
		{
			G_B281_0 = (&V_20);
			goto IL_0ee0;
		}
		G_B280_0 = (&V_20);
	}
	{
		G_B282_0 = (0.0f);
		G_B282_1 = G_B280_0;
		goto IL_0ee5;
	}

IL_0ee0:
	{
		float L_691;
		L_691 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B282_0 = L_691;
		G_B282_1 = G_B281_0;
	}

IL_0ee5:
	{
		G_B282_1->___single_0 = G_B282_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_692 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_693 = L_692.___register;
		float L_694 = L_693.___single_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_695 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_696 = L_695.___register;
		float L_697 = L_696.___single_1;
		if ((((float)L_694) == ((float)L_697)))
		{
			G_B284_0 = (&V_20);
			goto IL_0f0b;
		}
		G_B283_0 = (&V_20);
	}
	{
		G_B285_0 = (0.0f);
		G_B285_1 = G_B283_0;
		goto IL_0f10;
	}

IL_0f0b:
	{
		float L_698;
		L_698 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B285_0 = L_698;
		G_B285_1 = G_B284_0;
	}

IL_0f10:
	{
		G_B285_1->___single_1 = G_B285_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_699 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_700 = L_699.___register;
		float L_701 = L_700.___single_2;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_702 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_703 = L_702.___register;
		float L_704 = L_703.___single_2;
		if ((((float)L_701) == ((float)L_704)))
		{
			G_B287_0 = (&V_20);
			goto IL_0f36;
		}
		G_B286_0 = (&V_20);
	}
	{
		G_B288_0 = (0.0f);
		G_B288_1 = G_B286_0;
		goto IL_0f3b;
	}

IL_0f36:
	{
		float L_705;
		L_705 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B288_0 = L_705;
		G_B288_1 = G_B287_0;
	}

IL_0f3b:
	{
		G_B288_1->___single_2 = G_B288_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_706 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_707 = L_706.___register;
		float L_708 = L_707.___single_3;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_709 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_710 = L_709.___register;
		float L_711 = L_710.___single_3;
		if ((((float)L_708) == ((float)L_711)))
		{
			G_B290_0 = (&V_20);
			goto IL_0f61;
		}
		G_B289_0 = (&V_20);
	}
	{
		G_B291_0 = (0.0f);
		G_B291_1 = G_B289_0;
		goto IL_0f66;
	}

IL_0f61:
	{
		float L_712;
		L_712 = ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline(NULL);
		G_B291_0 = L_712;
		G_B291_1 = G_B290_0;
	}

IL_0f66:
	{
		G_B291_1->___single_3 = G_B291_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_713;
		memset((&L_713), 0, sizeof(L_713));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_713), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_713;
	}

IL_0f73:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_714 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_715;
		L_715 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_714, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_716 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_717;
		L_717 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_716, NULL);
		bool L_718;
		L_718 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_715, L_717, NULL);
		if (!L_718)
		{
			goto IL_0ff4;
		}
	}
	{
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_719 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_720 = L_719.___register;
		double L_721 = L_720.___double_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_722 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_723 = L_722.___register;
		double L_724 = L_723.___double_0;
		if ((((double)L_721) == ((double)L_724)))
		{
			G_B295_0 = (&V_20);
			goto IL_0fb3;
		}
		G_B294_0 = (&V_20);
	}
	{
		G_B296_0 = (0.0);
		G_B296_1 = G_B294_0;
		goto IL_0fb8;
	}

IL_0fb3:
	{
		double L_725;
		L_725 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B296_0 = L_725;
		G_B296_1 = G_B295_0;
	}

IL_0fb8:
	{
		G_B296_1->___double_0 = G_B296_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_726 = ___0_left;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_727 = L_726.___register;
		double L_728 = L_727.___double_1;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_729 = ___1_right;
		Register_t483055A1DB8634BA3FBF01BB15D4E94E186A2E7A L_730 = L_729.___register;
		double L_731 = L_730.___double_1;
		if ((((double)L_728) == ((double)L_731)))
		{
			G_B298_0 = (&V_20);
			goto IL_0fe2;
		}
		G_B297_0 = (&V_20);
	}
	{
		G_B299_0 = (0.0);
		G_B299_1 = G_B297_0;
		goto IL_0fe7;
	}

IL_0fe2:
	{
		double L_732;
		L_732 = ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline(NULL);
		G_B299_0 = L_732;
		G_B299_1 = G_B298_0;
	}

IL_0fe7:
	{
		G_B299_1->___double_1 = G_B299_0;
		Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489 L_733;
		memset((&L_733), 0, sizeof(L_733));
		Vector_1__ctor_m48CD7847B9597F3193C9C0BA97ED64E276F4340A((&L_733), (&V_20), il2cpp_rgctx_method(InitializedTypeInfo(method->klass)->rgctx_data, 13));
		return L_733;
	}

IL_0ff4:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_734 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_734, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_734, method);
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint8_t ConstantHelper_GetByteWithAllBitsSet_m38E318296F5FB9BAE51C97C1AE058716CFC889D7_inline (const RuntimeMethod* method) 
{
	uint8_t V_0 = 0x0;
	{
		V_0 = (uint8_t)0;
		*((int8_t*)((uintptr_t)(&V_0))) = (int8_t)((int32_t)255);
		uint8_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int8_t ConstantHelper_GetSByteWithAllBitsSet_mB6B97526769DCCB7B78CCF446F28AAB0D1B5CAE3_inline (const RuntimeMethod* method) 
{
	int8_t V_0 = 0x0;
	{
		V_0 = (int8_t)0;
		*((int8_t*)((uintptr_t)(&V_0))) = (int8_t)(-1);
		int8_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint16_t ConstantHelper_GetUInt16WithAllBitsSet_mD3E13D933A06059499F0E0CBE6798D72D175464A_inline (const RuntimeMethod* method) 
{
	uint16_t V_0 = 0;
	{
		V_0 = (uint16_t)0;
		*((int16_t*)((uintptr_t)(&V_0))) = (int16_t)((int32_t)65535);
		uint16_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int16_t ConstantHelper_GetInt16WithAllBitsSet_m70C5F99E624490970E2D4093FE6E800D1849DDFC_inline (const RuntimeMethod* method) 
{
	int16_t V_0 = 0;
	{
		V_0 = (int16_t)0;
		*((int16_t*)((uintptr_t)(&V_0))) = (int16_t)(-1);
		int16_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint32_t ConstantHelper_GetUInt32WithAllBitsSet_m78CBFE0C29CF227C16D2A9021972A0D54744BCAF_inline (const RuntimeMethod* method) 
{
	uint32_t V_0 = 0;
	{
		V_0 = 0;
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		uint32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t ConstantHelper_GetInt32WithAllBitsSet_m245101340DDE7277600327D319DF86F1FFEA4FD0_inline (const RuntimeMethod* method) 
{
	int32_t V_0 = 0;
	{
		V_0 = 0;
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		int32_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR uint64_t ConstantHelper_GetUInt64WithAllBitsSet_mB7F3E046EE6B1B20C552BF7CF619416E239A5A96_inline (const RuntimeMethod* method) 
{
	uint64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		uint64_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int64_t ConstantHelper_GetInt64WithAllBitsSet_m56A9AB64BA5DDD9ECC99424875824591DEFD5C40_inline (const RuntimeMethod* method) 
{
	int64_t V_0 = 0;
	{
		V_0 = ((int64_t)0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		int64_t L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR float ConstantHelper_GetSingleWithAllBitsSet_m66FC11C0680F744EB8315278910061C9535818C0_inline (const RuntimeMethod* method) 
{
	float V_0 = 0.0f;
	{
		V_0 = (0.0f);
		*((int32_t*)((uintptr_t)(&V_0))) = (int32_t)(-1);
		float L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR double ConstantHelper_GetDoubleWithAllBitsSet_mF43AF77A6C93B7590B35B20458E80F2BC66AD5F2_inline (const RuntimeMethod* method) 
{
	double V_0 = 0.0;
	{
		V_0 = (0.0);
		*((int64_t*)((uintptr_t)(&V_0))) = (int64_t)((int64_t)(-1));
		double L_0 = V_0;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR int32_t Vector_1_get_Count_m6DF09E4443FC90521D33C892BE69D32B04D85A15_gshared_inline (const RuntimeMethod* method) 
{
	{
		il2cpp_codegen_runtime_class_init_inline(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1));
		int32_t L_0 = ((Vector_1_tACF5C606E327928B31CCD8E09C9224DCA7065489_StaticFields*)il2cpp_codegen_static_fields_for(il2cpp_rgctx_data(InitializedTypeInfo(method->klass)->rgctx_data, 1)))->___s_count;
		return L_0;
	}
}
IL2CPP_MANAGED_FORCE_INLINE IL2CPP_METHOD_ATTR bool Vector_1_ScalarEquals_m4E13E30219B0D2AADB58AD6E5CB2B54B9FCBFAAE_gshared_inline (uint16_t ___0_left, uint16_t ___1_right, const RuntimeMethod* method) 
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&Type_t_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var);
		il2cpp_codegen_initialize_runtime_metadata((uintptr_t*)&UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var);
		s_Il2CppMethodInitialized = true;
	}
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_0 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_1;
		L_1 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_0, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_2 = { reinterpret_cast<intptr_t> (Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_0_0_0_var) };
		Type_t* L_3;
		L_3 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_2, NULL);
		bool L_4;
		L_4 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_1, L_3, NULL);
		if (!L_4)
		{
			goto IL_0034;
		}
	}
	{
		uint16_t L_5 = ___0_left;
		uint16_t L_6 = L_5;
		RuntimeObject* L_7 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_6);
		uint16_t L_8 = ___1_right;
		uint16_t L_9 = L_8;
		RuntimeObject* L_10 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_9);
		return (bool)((((int32_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_7, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint8_t*)((uint8_t*)(uint8_t*)UnBox(L_10, Byte_t94D9231AC217BE4D2E004C4CD32DF6D099EA41A3_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0034:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_11 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_12;
		L_12 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_11, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_13 = { reinterpret_cast<intptr_t> (SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_0_0_0_var) };
		Type_t* L_14;
		L_14 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_13, NULL);
		bool L_15;
		L_15 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_12, L_14, NULL);
		if (!L_15)
		{
			goto IL_0068;
		}
	}
	{
		uint16_t L_16 = ___0_left;
		uint16_t L_17 = L_16;
		RuntimeObject* L_18 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_17);
		uint16_t L_19 = ___1_right;
		uint16_t L_20 = L_19;
		RuntimeObject* L_21 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_20);
		return (bool)((((int32_t)((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_18, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int8_t*)((int8_t*)(int8_t*)UnBox(L_21, SByte_tFEFFEF5D2FEBF5207950AE6FAC150FC53B668DB5_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0068:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_22 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_23;
		L_23 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_22, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_24 = { reinterpret_cast<intptr_t> (UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_0_0_0_var) };
		Type_t* L_25;
		L_25 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_24, NULL);
		bool L_26;
		L_26 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_23, L_25, NULL);
		if (!L_26)
		{
			goto IL_009c;
		}
	}
	{
		uint16_t L_27 = ___0_left;
		uint16_t L_28 = L_27;
		RuntimeObject* L_29 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_28);
		uint16_t L_30 = ___1_right;
		uint16_t L_31 = L_30;
		RuntimeObject* L_32 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_31);
		return (bool)((((int32_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_29, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint16_t*)((uint16_t*)(uint16_t*)UnBox(L_32, UInt16_tF4C148C876015C212FD72652D0B6ED8CC247A455_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_009c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_33 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_34;
		L_34 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_33, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_35 = { reinterpret_cast<intptr_t> (Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_0_0_0_var) };
		Type_t* L_36;
		L_36 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_35, NULL);
		bool L_37;
		L_37 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_34, L_36, NULL);
		if (!L_37)
		{
			goto IL_00d0;
		}
	}
	{
		uint16_t L_38 = ___0_left;
		uint16_t L_39 = L_38;
		RuntimeObject* L_40 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_39);
		uint16_t L_41 = ___1_right;
		uint16_t L_42 = L_41;
		RuntimeObject* L_43 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_42);
		return (bool)((((int32_t)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_40, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int16_t*)((int16_t*)(int16_t*)UnBox(L_43, Int16_tB8EF286A9C33492FA6E6D6E67320BE93E794A175_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_00d0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_44 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_45;
		L_45 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_44, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_46 = { reinterpret_cast<intptr_t> (UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_0_0_0_var) };
		Type_t* L_47;
		L_47 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_46, NULL);
		bool L_48;
		L_48 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_45, L_47, NULL);
		if (!L_48)
		{
			goto IL_0104;
		}
	}
	{
		uint16_t L_49 = ___0_left;
		uint16_t L_50 = L_49;
		RuntimeObject* L_51 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_50);
		uint16_t L_52 = ___1_right;
		uint16_t L_53 = L_52;
		RuntimeObject* L_54 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_53);
		return (bool)((((int32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_51, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))))) == ((int32_t)((*(uint32_t*)((uint32_t*)(uint32_t*)UnBox(L_54, UInt32_t1833D51FFA667B18A5AA4B8D34DE284F8495D29B_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0104:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_55 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_56;
		L_56 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_55, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_57 = { reinterpret_cast<intptr_t> (Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_0_0_0_var) };
		Type_t* L_58;
		L_58 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_57, NULL);
		bool L_59;
		L_59 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_56, L_58, NULL);
		if (!L_59)
		{
			goto IL_0138;
		}
	}
	{
		uint16_t L_60 = ___0_left;
		uint16_t L_61 = L_60;
		RuntimeObject* L_62 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_61);
		uint16_t L_63 = ___1_right;
		uint16_t L_64 = L_63;
		RuntimeObject* L_65 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_64);
		return (bool)((((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_62, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))) == ((int32_t)((*(int32_t*)((int32_t*)(int32_t*)UnBox(L_65, Int32_t680FF22E76F6EFAD4375103CBBFFA0421349384C_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0138:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_66 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_67;
		L_67 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_66, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_68 = { reinterpret_cast<intptr_t> (UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_0_0_0_var) };
		Type_t* L_69;
		L_69 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_68, NULL);
		bool L_70;
		L_70 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_67, L_69, NULL);
		if (!L_70)
		{
			goto IL_016c;
		}
	}
	{
		uint16_t L_71 = ___0_left;
		uint16_t L_72 = L_71;
		RuntimeObject* L_73 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_72);
		uint16_t L_74 = ___1_right;
		uint16_t L_75 = L_74;
		RuntimeObject* L_76 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_75);
		return (bool)((((int64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_73, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))))) == ((int64_t)((*(uint64_t*)((uint64_t*)(uint64_t*)UnBox(L_76, UInt64_t8F12534CC8FC4B5860F2A2CD1EE79D322E7A41AF_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_016c:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_77 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_78;
		L_78 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_77, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_79 = { reinterpret_cast<intptr_t> (Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_0_0_0_var) };
		Type_t* L_80;
		L_80 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_79, NULL);
		bool L_81;
		L_81 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_78, L_80, NULL);
		if (!L_81)
		{
			goto IL_01a0;
		}
	}
	{
		uint16_t L_82 = ___0_left;
		uint16_t L_83 = L_82;
		RuntimeObject* L_84 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_83);
		uint16_t L_85 = ___1_right;
		uint16_t L_86 = L_85;
		RuntimeObject* L_87 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_86);
		return (bool)((((int64_t)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_84, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))))) == ((int64_t)((*(int64_t*)((int64_t*)(int64_t*)UnBox(L_87, Int64_t092CFB123BE63C28ACDAF65C68F21A526050DBA3_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_01a0:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_88 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_89;
		L_89 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_88, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_90 = { reinterpret_cast<intptr_t> (Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_0_0_0_var) };
		Type_t* L_91;
		L_91 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_90, NULL);
		bool L_92;
		L_92 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_89, L_91, NULL);
		if (!L_92)
		{
			goto IL_01d4;
		}
	}
	{
		uint16_t L_93 = ___0_left;
		uint16_t L_94 = L_93;
		RuntimeObject* L_95 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_94);
		uint16_t L_96 = ___1_right;
		uint16_t L_97 = L_96;
		RuntimeObject* L_98 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_97);
		return (bool)((((float)((*(float*)((float*)(float*)UnBox(L_95, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))))) == ((float)((*(float*)((float*)(float*)UnBox(L_98, Single_t4530F2FF86FCB0DC29F35385CA1BD21BE294761C_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_01d4:
	{
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_99 = { reinterpret_cast<intptr_t> (il2cpp_rgctx_type(InitializedTypeInfo(method->klass)->rgctx_data, 3)) };
		il2cpp_codegen_runtime_class_init_inline(Type_t_il2cpp_TypeInfo_var);
		Type_t* L_100;
		L_100 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_99, NULL);
		RuntimeTypeHandle_t332A452B8B6179E4469B69525D0FE82A88030F7B L_101 = { reinterpret_cast<intptr_t> (Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_0_0_0_var) };
		Type_t* L_102;
		L_102 = Type_GetTypeFromHandle_m6062B81682F79A4D6DF2640692EE6D9987858C57(L_101, NULL);
		bool L_103;
		L_103 = Type_op_Equality_m99930A0E44E420A685FABA60E60BA1CC5FA0EBDC(L_100, L_102, NULL);
		if (!L_103)
		{
			goto IL_0208;
		}
	}
	{
		uint16_t L_104 = ___0_left;
		uint16_t L_105 = L_104;
		RuntimeObject* L_106 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_105);
		uint16_t L_107 = ___1_right;
		uint16_t L_108 = L_107;
		RuntimeObject* L_109 = Box(il2cpp_rgctx_data_no_init(InitializedTypeInfo(method->klass)->rgctx_data, 4), &L_108);
		return (bool)((((double)((*(double*)((double*)(double*)UnBox(L_106, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))))) == ((double)((*(double*)((double*)(double*)UnBox(L_109, Double_tE150EF3D1D43DEE85D533810AB4C742307EEDE5F_il2cpp_TypeInfo_var))))))? 1 : 0);
	}

IL_0208:
	{
		NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A* L_110 = (NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A*)il2cpp_codegen_object_new(((RuntimeClass*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&NotSupportedException_t1429765983D409BD2986508963C98D214E4EBF4A_il2cpp_TypeInfo_var)));
		NotSupportedException__ctor_mE174750CF0247BBB47544FFD71D66BB89630945B(L_110, ((String_t*)il2cpp_codegen_initialize_runtime_metadata_inline((uintptr_t*)&_stringLiteralE310274B02A605A3985345944A620D7D2E019A1A)), NULL);
		IL2CPP_RAISE_MANAGED_EXCEPTION(L_110, method);
	}
}
