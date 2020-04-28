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

#include "codegen/il2cpp-codegen.h"
#include "il2cpp-object-internals.h"

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
template <typename R>
struct GenericVirtFuncInvoker0
{
	typedef R (*Func)(void*, const RuntimeMethod*);

	static inline R Invoke (const RuntimeMethod* method, RuntimeObject* obj)
	{
		VirtualInvokeData invokeData;
		il2cpp_codegen_get_generic_virtual_invoke_data(method, obj, &invokeData);
		return ((Func)invokeData.methodPtr)(obj, invokeData.method);
	}
};

// System.Action`1<System.Boolean>
struct Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD;
// System.Action`1<UnityEngine.XR.XRInputSubsystem>
struct Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6;
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;
// System.Char[]
struct CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2;
// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem>
struct Dictionary_2_t24C2535A0F0EB3A5DE49A603DB5675E259E974A4;
// System.Collections.Generic.List`1<System.Object>
struct List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907;
// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B;
// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0;
// System.Collections.Hashtable
struct Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9;
// System.Globalization.CodePageDataItem
struct CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB;
// System.String
struct String_t;
// System.Text.DecoderFallback
struct DecoderFallback_t128445EB7676870485230893338EF044F6B72F60;
// System.Text.EncoderFallback
struct EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63;
// System.Text.Encoding
struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4;
// System.Void
struct Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017;
// Unity.XR.Oculus.OculusLoader
struct OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A;
// Unity.XR.Oculus.OculusSettings
struct OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB;
// Unity.XR.Oculus.Stats
struct Stats_t9D07B383CAB5B07E1C77574A081F067DB79E3414;
// UnityEngine.ISubsystemDescriptor
struct ISubsystemDescriptor_t5BCD578E4BAD3A0C1DF6C5654720FE7D4420605B;
// UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026;
// UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA;
// UnityEngine.IntegratedSubsystem`1<System.Object>
struct IntegratedSubsystem_1_tA39FA5C25840EB481167108B3E02F7F09E901583;
// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct IntegratedSubsystem_1_tA1D5F6FF883C281DC92140F8547E38FBA9A4F7E1;
// UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0;
// UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734;
// UnityEngine.XR.Management.XRLoaderHelper
struct XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3;
// UnityEngine.XR.XRDisplaySubsystem
struct XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0;
// UnityEngine.XR.XRDisplaySubsystemDescriptor
struct XRDisplaySubsystemDescriptor_tC24B1C560B0C50AD3094D5F22BFFD25DD7AE6259;
// UnityEngine.XR.XRDisplaySubsystemDescriptor[]
struct XRDisplaySubsystemDescriptorU5BU5D_t4DA61AE588054BD69129175CCB330D4083C35258;
// UnityEngine.XR.XRDisplaySubsystem[]
struct XRDisplaySubsystemU5BU5D_tE700347D14BD8CFD30B1FC70C4B8FF56F9E36F72;
// UnityEngine.XR.XRInputSubsystem
struct XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7;
// UnityEngine.XR.XRInputSubsystemDescriptor[]
struct XRInputSubsystemDescriptorU5BU5D_t1AA4D1ECF0CA157659E9D84CAF1D47B6B3774D31;

IL2CPP_EXTERN_C RuntimeClass* ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* IntPtr_t_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* OculusUsages_t9BA1C0F3E6E8FFA1BA9FE2F2E885F77A2E1019D9_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* Stats_t9D07B383CAB5B07E1C77574A081F067DB79E3414_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C RuntimeClass* XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_il2cpp_TypeInfo_var;
IL2CPP_EXTERN_C String_t* _stringLiteral05CDCC1BC358E2422C7126E6242D29ADEA37F67D;
IL2CPP_EXTERN_C String_t* _stringLiteral0BE87C1B27B7697B267E86874A6338D953C17EA6;
IL2CPP_EXTERN_C String_t* _stringLiteral12BB1A00B2C0F3C5A3B0A4197CFAA42929C5D487;
IL2CPP_EXTERN_C String_t* _stringLiteral192882BABED5FE709DA9A0232447219008A4C2E1;
IL2CPP_EXTERN_C String_t* _stringLiteral204709F98DC5232A267502574FBD80B4D5BBD3B6;
IL2CPP_EXTERN_C String_t* _stringLiteral24B366875A68E1DF8F4A829DE284A141CF566379;
IL2CPP_EXTERN_C String_t* _stringLiteral2BDD0D57054B976944B1583DDB64DFFAE287DE68;
IL2CPP_EXTERN_C String_t* _stringLiteral31CC5FDE432F372979E09297A20E5523AC95DEA5;
IL2CPP_EXTERN_C String_t* _stringLiteral3579581BB113EF727A391C0944FE98DFC18A68FA;
IL2CPP_EXTERN_C String_t* _stringLiteral3A8680F6B8ADDB2EBEF403D57850D47C9BD22881;
IL2CPP_EXTERN_C String_t* _stringLiteral52A447273D5B11A04F9A57BA20859061D62BB368;
IL2CPP_EXTERN_C String_t* _stringLiteral544B1FB3DBB7DD517D4DFA3BB7566417BC6A7B53;
IL2CPP_EXTERN_C String_t* _stringLiteral57DEA530786A2B67CE6125AE0D81BFCC19AD11AC;
IL2CPP_EXTERN_C String_t* _stringLiteral60A0828E611C043D09A4774AFDC0BF9DD91751A0;
IL2CPP_EXTERN_C String_t* _stringLiteral70D4399C8DA5122485AA91D38CD24B429113CB21;
IL2CPP_EXTERN_C String_t* _stringLiteral755FE26213567A07490E19BB7AFA2B34D3D2E0FD;
IL2CPP_EXTERN_C String_t* _stringLiteral7E65BC873CE3F3F8A3AE5567BF4488841DC40578;
IL2CPP_EXTERN_C String_t* _stringLiteral810FEF6D70DAD231F6FB6A077667413947BBCD52;
IL2CPP_EXTERN_C String_t* _stringLiteral91BE93D00C36B01CEDFB6516969EE60542AFCCB8;
IL2CPP_EXTERN_C String_t* _stringLiteralB0C960FD5F37E85E43E8CFE4AAD73715100EC7AE;
IL2CPP_EXTERN_C String_t* _stringLiteralB5110FC6DC00A95656A5618F12E6CBD655CABD44;
IL2CPP_EXTERN_C String_t* _stringLiteralB6361F21367A40A25B2D64755F099457FD8CAD0C;
IL2CPP_EXTERN_C String_t* _stringLiteralC4C4FA2D5E383BE571A0D65DA213E30D6F3EF338;
IL2CPP_EXTERN_C String_t* _stringLiteralD0225A246A7E047F10A795BF38888BB5CB5E033E;
IL2CPP_EXTERN_C String_t* _stringLiteralD050945A00012C7D91F79E3253F1F045CFDBCA1B;
IL2CPP_EXTERN_C String_t* _stringLiteralD465F32B03C1EC0FA8942E0EC44411CB4A82CFE3;
IL2CPP_EXTERN_C String_t* _stringLiteralE21EDE835D7BAED96D99D059B31AEB7615CF73E7;
IL2CPP_EXTERN_C String_t* _stringLiteralE4E4965B42BD6E1730500D5B7F81F56AF19693D8;
IL2CPP_EXTERN_C String_t* _stringLiteralEC3A5C28C2C3A0AECB6497CA9CF9429CE2A4213C;
IL2CPP_EXTERN_C String_t* _stringLiteralF498F82E9A2BE327516148D21C24E18DC527AF40;
IL2CPP_EXTERN_C String_t* _stringLiteralF588E268490B13AADF6A2C81D18DDDF9A895DD52;
IL2CPP_EXTERN_C String_t* _stringLiteralFABB452FD6B77C0B143B0BAEAE1C599D1A2AD746;
IL2CPP_EXTERN_C String_t* _stringLiteralFB18074CA13FEE7DB48AFB8B8756C0545FEEE559;
IL2CPP_EXTERN_C String_t* _stringLiteralFD0F75025CE362968E94689BF9DD7446571D976B;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_Dispose_mD12E19406ADA2061CFE2D76D8D5545ACDD335048_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_MoveNext_m9ACEA798ABBAE993F589D5867CAC436030D26A69_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* Enumerator_get_Current_mAA5B5F41FF5A5AABEB7EEDC6E4B86AD10411BFD3_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* IntegratedSubsystem_1_get_SubsystemDescriptor_mC7EBA3B4384325B5C5B4ED321175057FC0178009_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1_GetEnumerator_mD8BBBF0C49392BEB77407D9460D4A139476BA8C4_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m02E78EBC93F0DB75BB5F122F3429BA22B26C3454_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_m9E65305FCF8F586CBF6B85C242AFDE06DF2C8F56_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* List_1__ctor_mDAAFC37295400CAB2E0C95455A9DCFC3A9CC3AED_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* SubsystemManager_GetInstances_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_mF6CAC97479F9849D66E65AFA5EC5CEE343DE8F61_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tC24B1C560B0C50AD3094D5F22BFFD25DD7AE6259_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_m4E78D8556FC9DD563F0148C81D9AE3A390A291F9_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t0695204904011F75FF666A5F623C98FBCC163AD5_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m14C1393388111243689CB93F35D8DB44C4988358_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_mC460B6B1957412AF84A76B0E495EC44D01DB08A2_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m294A4E2448F4AC92CDFCE518B5404C83BD9574C0_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_mEBB18C9C6541B32597AF07289DCB15FF6B48E5FF_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m8991D424ED5C5A121235B9A12CCF0995AE2FDFAE_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_m6448E0BFA3373BD8A74DE4450C4FDD9C945D1773_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m27C0F9202EDCF773FC27A3B8F8F977D1D1C54E86_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_m4D3DDF617B48045DD21FBB6231882D6B7E653B33_RuntimeMethod_var;
IL2CPP_EXTERN_C const RuntimeMethod* XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_mFD9C3F59810B3FEC0A6FD5EFE508B4D1B950D621_RuntimeMethod_var;
IL2CPP_EXTERN_C const uint32_t AdaptivePerformance_get_AdaptivePerformanceScale_m8E3F192C3429E2D0B4C88C7E99AB0F6014C228F3_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdaptivePerformance_get_BatteryLevel_m358B9A20F3304FD50E239478ECA096569B4A3898_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdaptivePerformance_get_BatteryTemp_m834BA60812FAD6671BEB06912AF7AE678108643C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdaptivePerformance_get_CPULevel_mA4BD2F9931D48840BD615C0B999F063F98255F1C_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdaptivePerformance_get_GPUAppTime_mAED024A0483370A85016386A68818AC980EA9D74_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdaptivePerformance_get_GPUCompositorTime_mB97EFA6DC02F90559089E7CDEA9C55AE3F8DA660_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdaptivePerformance_get_GPULevel_m6FDA058AFF59A4C398A83E0DCED4BFDE0408E526_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdaptivePerformance_get_MotionToPhoton_mFC9CE75884A6C32455CF3AF17B9A16532C96D56A_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdaptivePerformance_get_PowerSavingMode_m7C401BF9A1BD4A42B0E78695E0CC2730B410DF92_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AdaptivePerformance_get_RefreshRate_m39EC5BC97621B8BD646AC7C887A91DF57B15FC75_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppMetrics_get_AppCPUElapsedTime_m06E49485D3DA09044D77A0C726530A2CEC8BBCAC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppMetrics_get_AppQueueAheadTime_m4A5AA30C1B9BF9C37BFC3C9E61C3056CD7C15514_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppMetrics_get_CPUStartToGPUEnd_m2B5AD590F1DBCCF36889701F99D3DBBD85C30952_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppMetrics_get_CompositorCPUTime_mBF1596B35ACC2D0C3C59FBEE0705A992932D5782_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppMetrics_get_CompositorDroppedFrames_m1074FD2C4215FDDFF7A45CE3960C5464A615BE84_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppMetrics_get_CompositorLatency_mD0387C430A330E9460D00DF878B8E61B566FA656_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t AppMetrics_get_GPUEndToVsync_mF8221BE5551A5B3A0AE768E5920C34E93397FA06_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OculusLoader_Deinitialize_mE99FBAABBFB50F8E2E61674E41D0695687074246_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OculusLoader_GetSettings_m04AAA3BD9759C2A306863EBF1E786C42DC9FBD64Unity_XR_Oculus_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OculusLoader_GetSettings_m04AAA3BD9759C2A306863EBF1E786C42DC9FBD64_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OculusLoader_Initialize_m55605F6767F40AD6C16F0832B260E4853224FF95_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OculusLoader_Start_mD7E1359E2170EB48C2288DB9D5BDDADC0614263B_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OculusLoader_Stop_mFF3B0E6937212EADFF8B00B8B611AD0496947674_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OculusLoader__cctor_m6F4E92A2F9036E08D68EBBAD04C1A97E02FE508E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OculusLoader_get_displaySubsystem_m3C34FBC8696DE34C56909F858D3576DD7C7B3485_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OculusLoader_get_inputSubsystem_m1680C7424B1C78EE15B503024EB3491C7B65CEB1_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OculusSettings_Awake_m8E77B98CD3F56B764048E4EB4083843D67C477BC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t OculusUsages__cctor_m2D2246C9132CF0F1FF5753D5BA3320B658BD3418_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PerfMetrics_get_AppCPUTime_m50779DE55ECCA0797C58F6396A17A0FA74D2519E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PerfMetrics_get_AppGPUTime_m36B27DE1C9643F359E66CE3A2096A3FC7A649AF7_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PerfMetrics_get_CPUClockFrequency_m4A53D0EA4B5D05966F363980D37EA812C3EBD95E_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PerfMetrics_get_CPUUtilizationAverage_m25578CE1731392526BEDD93D2913FCF1F67C7AA5_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PerfMetrics_get_CPUUtilizationWorst_m3BBE5493F8FD2BB735FFED1B5597D91D5AD196C9_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PerfMetrics_get_CompositorCPUTime_m66679B4E004A15B61FD8A18231C933040919BCDC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PerfMetrics_get_CompositorGPUTime_mBAE5717D6DE7050F014ED048212B057A86D5A257_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PerfMetrics_get_GPUClockFrequency_mAA1AE3B162915408553E1390AE65A2112AC1A2FE_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t PerfMetrics_get_GPUUtilization_m1AF0A9F0B84F421E22EFE520D18059A83D0A04EC_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Stats_get_PluginVersion_mD7959FB1DCC15FD9004694D9B4522C1A7AF14CE8_MetadataUsageId;
IL2CPP_EXTERN_C const uint32_t Utils_SetFoveationLevel_m9670124F61C14F1BA36641E112B62C66537B19B6_MetadataUsageId;

struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821;

IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// <Module>
struct  U3CModuleU3E_t3B1722E90C6AEF7633B76B4DC0BE65FDA4F3922B 
{
public:

public:
};


// System.Object

struct Il2CppArrayBounds;

// System.Array


// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>
struct  List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemU5BU5D_tE700347D14BD8CFD30B1FC70C4B8FF56F9E36F72* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907, ____items_1)); }
	inline XRDisplaySubsystemU5BU5D_tE700347D14BD8CFD30B1FC70C4B8FF56F9E36F72* get__items_1() const { return ____items_1; }
	inline XRDisplaySubsystemU5BU5D_tE700347D14BD8CFD30B1FC70C4B8FF56F9E36F72** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRDisplaySubsystemU5BU5D_tE700347D14BD8CFD30B1FC70C4B8FF56F9E36F72* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRDisplaySubsystemU5BU5D_tE700347D14BD8CFD30B1FC70C4B8FF56F9E36F72* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907_StaticFields, ____emptyArray_5)); }
	inline XRDisplaySubsystemU5BU5D_tE700347D14BD8CFD30B1FC70C4B8FF56F9E36F72* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRDisplaySubsystemU5BU5D_tE700347D14BD8CFD30B1FC70C4B8FF56F9E36F72** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRDisplaySubsystemU5BU5D_tE700347D14BD8CFD30B1FC70C4B8FF56F9E36F72* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct  List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRDisplaySubsystemDescriptorU5BU5D_t4DA61AE588054BD69129175CCB330D4083C35258* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B, ____items_1)); }
	inline XRDisplaySubsystemDescriptorU5BU5D_t4DA61AE588054BD69129175CCB330D4083C35258* get__items_1() const { return ____items_1; }
	inline XRDisplaySubsystemDescriptorU5BU5D_t4DA61AE588054BD69129175CCB330D4083C35258** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRDisplaySubsystemDescriptorU5BU5D_t4DA61AE588054BD69129175CCB330D4083C35258* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRDisplaySubsystemDescriptorU5BU5D_t4DA61AE588054BD69129175CCB330D4083C35258* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B_StaticFields, ____emptyArray_5)); }
	inline XRDisplaySubsystemDescriptorU5BU5D_t4DA61AE588054BD69129175CCB330D4083C35258* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRDisplaySubsystemDescriptorU5BU5D_t4DA61AE588054BD69129175CCB330D4083C35258** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRDisplaySubsystemDescriptorU5BU5D_t4DA61AE588054BD69129175CCB330D4083C35258* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct  List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0  : public RuntimeObject
{
public:
	// T[] System.Collections.Generic.List`1::_items
	XRInputSubsystemDescriptorU5BU5D_t1AA4D1ECF0CA157659E9D84CAF1D47B6B3774D31* ____items_1;
	// System.Int32 System.Collections.Generic.List`1::_size
	int32_t ____size_2;
	// System.Int32 System.Collections.Generic.List`1::_version
	int32_t ____version_3;
	// System.Object System.Collections.Generic.List`1::_syncRoot
	RuntimeObject * ____syncRoot_4;

public:
	inline static int32_t get_offset_of__items_1() { return static_cast<int32_t>(offsetof(List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0, ____items_1)); }
	inline XRInputSubsystemDescriptorU5BU5D_t1AA4D1ECF0CA157659E9D84CAF1D47B6B3774D31* get__items_1() const { return ____items_1; }
	inline XRInputSubsystemDescriptorU5BU5D_t1AA4D1ECF0CA157659E9D84CAF1D47B6B3774D31** get_address_of__items_1() { return &____items_1; }
	inline void set__items_1(XRInputSubsystemDescriptorU5BU5D_t1AA4D1ECF0CA157659E9D84CAF1D47B6B3774D31* value)
	{
		____items_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____items_1), (void*)value);
	}

	inline static int32_t get_offset_of__size_2() { return static_cast<int32_t>(offsetof(List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0, ____size_2)); }
	inline int32_t get__size_2() const { return ____size_2; }
	inline int32_t* get_address_of__size_2() { return &____size_2; }
	inline void set__size_2(int32_t value)
	{
		____size_2 = value;
	}

	inline static int32_t get_offset_of__version_3() { return static_cast<int32_t>(offsetof(List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0, ____version_3)); }
	inline int32_t get__version_3() const { return ____version_3; }
	inline int32_t* get_address_of__version_3() { return &____version_3; }
	inline void set__version_3(int32_t value)
	{
		____version_3 = value;
	}

	inline static int32_t get_offset_of__syncRoot_4() { return static_cast<int32_t>(offsetof(List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0, ____syncRoot_4)); }
	inline RuntimeObject * get__syncRoot_4() const { return ____syncRoot_4; }
	inline RuntimeObject ** get_address_of__syncRoot_4() { return &____syncRoot_4; }
	inline void set__syncRoot_4(RuntimeObject * value)
	{
		____syncRoot_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____syncRoot_4), (void*)value);
	}
};

struct List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0_StaticFields
{
public:
	// T[] System.Collections.Generic.List`1::_emptyArray
	XRInputSubsystemDescriptorU5BU5D_t1AA4D1ECF0CA157659E9D84CAF1D47B6B3774D31* ____emptyArray_5;

public:
	inline static int32_t get_offset_of__emptyArray_5() { return static_cast<int32_t>(offsetof(List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0_StaticFields, ____emptyArray_5)); }
	inline XRInputSubsystemDescriptorU5BU5D_t1AA4D1ECF0CA157659E9D84CAF1D47B6B3774D31* get__emptyArray_5() const { return ____emptyArray_5; }
	inline XRInputSubsystemDescriptorU5BU5D_t1AA4D1ECF0CA157659E9D84CAF1D47B6B3774D31** get_address_of__emptyArray_5() { return &____emptyArray_5; }
	inline void set__emptyArray_5(XRInputSubsystemDescriptorU5BU5D_t1AA4D1ECF0CA157659E9D84CAF1D47B6B3774D31* value)
	{
		____emptyArray_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&____emptyArray_5), (void*)value);
	}
};


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
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.Text.Encoding
struct  Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4  : public RuntimeObject
{
public:
	// System.Int32 System.Text.Encoding::m_codePage
	int32_t ___m_codePage_9;
	// System.Globalization.CodePageDataItem System.Text.Encoding::dataItem
	CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * ___dataItem_10;
	// System.Boolean System.Text.Encoding::m_deserializedFromEverett
	bool ___m_deserializedFromEverett_11;
	// System.Boolean System.Text.Encoding::m_isReadOnly
	bool ___m_isReadOnly_12;
	// System.Text.EncoderFallback System.Text.Encoding::encoderFallback
	EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * ___encoderFallback_13;
	// System.Text.DecoderFallback System.Text.Encoding::decoderFallback
	DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * ___decoderFallback_14;

public:
	inline static int32_t get_offset_of_m_codePage_9() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_codePage_9)); }
	inline int32_t get_m_codePage_9() const { return ___m_codePage_9; }
	inline int32_t* get_address_of_m_codePage_9() { return &___m_codePage_9; }
	inline void set_m_codePage_9(int32_t value)
	{
		___m_codePage_9 = value;
	}

	inline static int32_t get_offset_of_dataItem_10() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___dataItem_10)); }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * get_dataItem_10() const { return ___dataItem_10; }
	inline CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB ** get_address_of_dataItem_10() { return &___dataItem_10; }
	inline void set_dataItem_10(CodePageDataItem_t6E34BEE9CCCBB35C88D714664633AF6E5F5671FB * value)
	{
		___dataItem_10 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___dataItem_10), (void*)value);
	}

	inline static int32_t get_offset_of_m_deserializedFromEverett_11() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_deserializedFromEverett_11)); }
	inline bool get_m_deserializedFromEverett_11() const { return ___m_deserializedFromEverett_11; }
	inline bool* get_address_of_m_deserializedFromEverett_11() { return &___m_deserializedFromEverett_11; }
	inline void set_m_deserializedFromEverett_11(bool value)
	{
		___m_deserializedFromEverett_11 = value;
	}

	inline static int32_t get_offset_of_m_isReadOnly_12() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___m_isReadOnly_12)); }
	inline bool get_m_isReadOnly_12() const { return ___m_isReadOnly_12; }
	inline bool* get_address_of_m_isReadOnly_12() { return &___m_isReadOnly_12; }
	inline void set_m_isReadOnly_12(bool value)
	{
		___m_isReadOnly_12 = value;
	}

	inline static int32_t get_offset_of_encoderFallback_13() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___encoderFallback_13)); }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * get_encoderFallback_13() const { return ___encoderFallback_13; }
	inline EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 ** get_address_of_encoderFallback_13() { return &___encoderFallback_13; }
	inline void set_encoderFallback_13(EncoderFallback_tDE342346D01608628F1BCEBB652D31009852CF63 * value)
	{
		___encoderFallback_13 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encoderFallback_13), (void*)value);
	}

	inline static int32_t get_offset_of_decoderFallback_14() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4, ___decoderFallback_14)); }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * get_decoderFallback_14() const { return ___decoderFallback_14; }
	inline DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 ** get_address_of_decoderFallback_14() { return &___decoderFallback_14; }
	inline void set_decoderFallback_14(DecoderFallback_t128445EB7676870485230893338EF044F6B72F60 * value)
	{
		___decoderFallback_14 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___decoderFallback_14), (void*)value);
	}
};

struct Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields
{
public:
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::defaultEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___defaultEncoding_0;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::unicodeEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___unicodeEncoding_1;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::bigEndianUnicode
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___bigEndianUnicode_2;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf7Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf7Encoding_3;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf8Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf8Encoding_4;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::utf32Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___utf32Encoding_5;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::asciiEncoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___asciiEncoding_6;
	// System.Text.Encoding modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::latin1Encoding
	Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * ___latin1Encoding_7;
	// System.Collections.Hashtable modreq(System.Runtime.CompilerServices.IsVolatile) System.Text.Encoding::encodings
	Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * ___encodings_8;
	// System.Object System.Text.Encoding::s_InternalSyncObject
	RuntimeObject * ___s_InternalSyncObject_15;

public:
	inline static int32_t get_offset_of_defaultEncoding_0() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___defaultEncoding_0)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_defaultEncoding_0() const { return ___defaultEncoding_0; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_defaultEncoding_0() { return &___defaultEncoding_0; }
	inline void set_defaultEncoding_0(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___defaultEncoding_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___defaultEncoding_0), (void*)value);
	}

	inline static int32_t get_offset_of_unicodeEncoding_1() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___unicodeEncoding_1)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_unicodeEncoding_1() const { return ___unicodeEncoding_1; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_unicodeEncoding_1() { return &___unicodeEncoding_1; }
	inline void set_unicodeEncoding_1(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___unicodeEncoding_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___unicodeEncoding_1), (void*)value);
	}

	inline static int32_t get_offset_of_bigEndianUnicode_2() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___bigEndianUnicode_2)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_bigEndianUnicode_2() const { return ___bigEndianUnicode_2; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_bigEndianUnicode_2() { return &___bigEndianUnicode_2; }
	inline void set_bigEndianUnicode_2(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___bigEndianUnicode_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___bigEndianUnicode_2), (void*)value);
	}

	inline static int32_t get_offset_of_utf7Encoding_3() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf7Encoding_3)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf7Encoding_3() const { return ___utf7Encoding_3; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf7Encoding_3() { return &___utf7Encoding_3; }
	inline void set_utf7Encoding_3(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf7Encoding_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf7Encoding_3), (void*)value);
	}

	inline static int32_t get_offset_of_utf8Encoding_4() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf8Encoding_4)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf8Encoding_4() const { return ___utf8Encoding_4; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf8Encoding_4() { return &___utf8Encoding_4; }
	inline void set_utf8Encoding_4(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf8Encoding_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf8Encoding_4), (void*)value);
	}

	inline static int32_t get_offset_of_utf32Encoding_5() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___utf32Encoding_5)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_utf32Encoding_5() const { return ___utf32Encoding_5; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_utf32Encoding_5() { return &___utf32Encoding_5; }
	inline void set_utf32Encoding_5(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___utf32Encoding_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___utf32Encoding_5), (void*)value);
	}

	inline static int32_t get_offset_of_asciiEncoding_6() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___asciiEncoding_6)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_asciiEncoding_6() const { return ___asciiEncoding_6; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_asciiEncoding_6() { return &___asciiEncoding_6; }
	inline void set_asciiEncoding_6(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___asciiEncoding_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___asciiEncoding_6), (void*)value);
	}

	inline static int32_t get_offset_of_latin1Encoding_7() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___latin1Encoding_7)); }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * get_latin1Encoding_7() const { return ___latin1Encoding_7; }
	inline Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 ** get_address_of_latin1Encoding_7() { return &___latin1Encoding_7; }
	inline void set_latin1Encoding_7(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * value)
	{
		___latin1Encoding_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___latin1Encoding_7), (void*)value);
	}

	inline static int32_t get_offset_of_encodings_8() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___encodings_8)); }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * get_encodings_8() const { return ___encodings_8; }
	inline Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 ** get_address_of_encodings_8() { return &___encodings_8; }
	inline void set_encodings_8(Hashtable_t978F65B8006C8F5504B286526AEC6608FF983FC9 * value)
	{
		___encodings_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___encodings_8), (void*)value);
	}

	inline static int32_t get_offset_of_s_InternalSyncObject_15() { return static_cast<int32_t>(offsetof(Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4_StaticFields, ___s_InternalSyncObject_15)); }
	inline RuntimeObject * get_s_InternalSyncObject_15() const { return ___s_InternalSyncObject_15; }
	inline RuntimeObject ** get_address_of_s_InternalSyncObject_15() { return &___s_InternalSyncObject_15; }
	inline void set_s_InternalSyncObject_15(RuntimeObject * value)
	{
		___s_InternalSyncObject_15 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InternalSyncObject_15), (void*)value);
	}
};


// System.ValueType
struct  ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF_marshaled_com
{
};

// Unity.XR.Oculus.Performance
struct  Performance_t8CAC5C5379A063357F87C16E8E4825ED7F246274  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.Stats
struct  Stats_t9D07B383CAB5B07E1C77574A081F067DB79E3414  : public RuntimeObject
{
public:

public:
};

struct Stats_t9D07B383CAB5B07E1C77574A081F067DB79E3414_StaticFields
{
public:
	// UnityEngine.IntegratedSubsystem Unity.XR.Oculus.Stats::m_Display
	IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * ___m_Display_0;

public:
	inline static int32_t get_offset_of_m_Display_0() { return static_cast<int32_t>(offsetof(Stats_t9D07B383CAB5B07E1C77574A081F067DB79E3414_StaticFields, ___m_Display_0)); }
	inline IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * get_m_Display_0() const { return ___m_Display_0; }
	inline IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 ** get_address_of_m_Display_0() { return &___m_Display_0; }
	inline void set_m_Display_0(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * value)
	{
		___m_Display_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_Display_0), (void*)value);
	}
};


// Unity.XR.Oculus.Stats_AdaptivePerformance
struct  AdaptivePerformance_tC38AFE5935A34A591A6035DB1B11955512914A21  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.Stats_AppMetrics
struct  AppMetrics_tC175D2E4C3BBFEB597189EB9896ABD1A1C3AB2DA  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.Stats_PerfMetrics
struct  PerfMetrics_t80915FF01873FE952F970D02ACAB42D65A78FFD0  : public RuntimeObject
{
public:

public:
};


// Unity.XR.Oculus.Utils
struct  Utils_tE6AA5B2E64D7FF894E6A249FCDE6B924A4D7B990  : public RuntimeObject
{
public:

public:
};


// System.Boolean
struct  Boolean_tB53F6830F670160873277339AA58F15CAED4399C 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_tB53F6830F670160873277339AA58F15CAED4399C_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.Byte
struct  Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07 
{
public:
	// System.Byte System.Byte::m_value
	uint8_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Byte_tF87C579059BD4633E6840EBBBEEF899C6E33EF07, ___m_value_0)); }
	inline uint8_t get_m_value_0() const { return ___m_value_0; }
	inline uint8_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint8_t value)
	{
		___m_value_0 = value;
	}
};


// System.Collections.Generic.List`1_Enumerator<System.Object>
struct  Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	RuntimeObject * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___list_0)); }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * get_list_0() const { return ___list_0; }
	inline List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD, ___current_3)); }
	inline RuntimeObject * get_current_3() const { return ___current_3; }
	inline RuntimeObject ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(RuntimeObject * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Collections.Generic.List`1_Enumerator<UnityEngine.XR.XRDisplaySubsystem>
struct  Enumerator_tB907916596D7281DD61CE7576F03AA6EDC78198C 
{
public:
	// System.Collections.Generic.List`1<T> System.Collections.Generic.List`1_Enumerator::list
	List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907 * ___list_0;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::index
	int32_t ___index_1;
	// System.Int32 System.Collections.Generic.List`1_Enumerator::version
	int32_t ___version_2;
	// T System.Collections.Generic.List`1_Enumerator::current
	XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * ___current_3;

public:
	inline static int32_t get_offset_of_list_0() { return static_cast<int32_t>(offsetof(Enumerator_tB907916596D7281DD61CE7576F03AA6EDC78198C, ___list_0)); }
	inline List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907 * get_list_0() const { return ___list_0; }
	inline List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907 ** get_address_of_list_0() { return &___list_0; }
	inline void set_list_0(List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907 * value)
	{
		___list_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___list_0), (void*)value);
	}

	inline static int32_t get_offset_of_index_1() { return static_cast<int32_t>(offsetof(Enumerator_tB907916596D7281DD61CE7576F03AA6EDC78198C, ___index_1)); }
	inline int32_t get_index_1() const { return ___index_1; }
	inline int32_t* get_address_of_index_1() { return &___index_1; }
	inline void set_index_1(int32_t value)
	{
		___index_1 = value;
	}

	inline static int32_t get_offset_of_version_2() { return static_cast<int32_t>(offsetof(Enumerator_tB907916596D7281DD61CE7576F03AA6EDC78198C, ___version_2)); }
	inline int32_t get_version_2() const { return ___version_2; }
	inline int32_t* get_address_of_version_2() { return &___version_2; }
	inline void set_version_2(int32_t value)
	{
		___version_2 = value;
	}

	inline static int32_t get_offset_of_current_3() { return static_cast<int32_t>(offsetof(Enumerator_tB907916596D7281DD61CE7576F03AA6EDC78198C, ___current_3)); }
	inline XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * get_current_3() const { return ___current_3; }
	inline XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 ** get_address_of_current_3() { return &___current_3; }
	inline void set_current_3(XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * value)
	{
		___current_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___current_3), (void*)value);
	}
};


// System.Enum
struct  Enum_t2AF27C02B8653AE29442467390005ABC74D8F521  : public ValueType_t4D0C27076F7C36E76190FB3328E232BCB1CD1FFF
{
public:

public:
};

struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields
{
public:
	// System.Char[] System.Enum::enumSeperatorCharArray
	CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* ___enumSeperatorCharArray_0;

public:
	inline static int32_t get_offset_of_enumSeperatorCharArray_0() { return static_cast<int32_t>(offsetof(Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_StaticFields, ___enumSeperatorCharArray_0)); }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* get_enumSeperatorCharArray_0() const { return ___enumSeperatorCharArray_0; }
	inline CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2** get_address_of_enumSeperatorCharArray_0() { return &___enumSeperatorCharArray_0; }
	inline void set_enumSeperatorCharArray_0(CharU5BU5D_t4CC6ABF0AD71BEC97E3C2F1E9C5677E46D3A75C2* value)
	{
		___enumSeperatorCharArray_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___enumSeperatorCharArray_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.Enum
struct Enum_t2AF27C02B8653AE29442467390005ABC74D8F521_marshaled_com
{
};

// System.Int32
struct  Int32_t585191389E07734F19F3156FF88FB3EF4800D102 
{
public:
	// System.Int32 System.Int32::m_value
	int32_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Int32_t585191389E07734F19F3156FF88FB3EF4800D102, ___m_value_0)); }
	inline int32_t get_m_value_0() const { return ___m_value_0; }
	inline int32_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(int32_t value)
	{
		___m_value_0 = value;
	}
};


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


// System.Single
struct  Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1 
{
public:
	// System.Single System.Single::m_value
	float ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Single_tDDDA9169C4E4E308AC6D7A824F9B28DC82204AE1, ___m_value_0)); }
	inline float get_m_value_0() const { return ___m_value_0; }
	inline float* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(float value)
	{
		___m_value_0 = value;
	}
};


// System.UInt16
struct  UInt16_tAE45CEF73BF720100519F6867F32145D075F928E 
{
public:
	// System.UInt16 System.UInt16::m_value
	uint16_t ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(UInt16_tAE45CEF73BF720100519F6867F32145D075F928E, ___m_value_0)); }
	inline uint16_t get_m_value_0() const { return ___m_value_0; }
	inline uint16_t* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(uint16_t value)
	{
		___m_value_0 = value;
	}
};


// System.Void
struct  Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t22962CB4C05B1D89B55A6E1139F0E87A90987017__padding[1];
	};

public:
};


// Unity.XR.Oculus.OculusLoader_UserDefinedSettings
struct  UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF 
{
public:
	// System.UInt16 Unity.XR.Oculus.OculusLoader_UserDefinedSettings::sharedDepthBuffer
	uint16_t ___sharedDepthBuffer_0;
	// System.UInt16 Unity.XR.Oculus.OculusLoader_UserDefinedSettings::dashSupport
	uint16_t ___dashSupport_1;
	// System.UInt16 Unity.XR.Oculus.OculusLoader_UserDefinedSettings::stereoRenderingMode
	uint16_t ___stereoRenderingMode_2;
	// System.UInt16 Unity.XR.Oculus.OculusLoader_UserDefinedSettings::colorSpace
	uint16_t ___colorSpace_3;

public:
	inline static int32_t get_offset_of_sharedDepthBuffer_0() { return static_cast<int32_t>(offsetof(UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF, ___sharedDepthBuffer_0)); }
	inline uint16_t get_sharedDepthBuffer_0() const { return ___sharedDepthBuffer_0; }
	inline uint16_t* get_address_of_sharedDepthBuffer_0() { return &___sharedDepthBuffer_0; }
	inline void set_sharedDepthBuffer_0(uint16_t value)
	{
		___sharedDepthBuffer_0 = value;
	}

	inline static int32_t get_offset_of_dashSupport_1() { return static_cast<int32_t>(offsetof(UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF, ___dashSupport_1)); }
	inline uint16_t get_dashSupport_1() const { return ___dashSupport_1; }
	inline uint16_t* get_address_of_dashSupport_1() { return &___dashSupport_1; }
	inline void set_dashSupport_1(uint16_t value)
	{
		___dashSupport_1 = value;
	}

	inline static int32_t get_offset_of_stereoRenderingMode_2() { return static_cast<int32_t>(offsetof(UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF, ___stereoRenderingMode_2)); }
	inline uint16_t get_stereoRenderingMode_2() const { return ___stereoRenderingMode_2; }
	inline uint16_t* get_address_of_stereoRenderingMode_2() { return &___stereoRenderingMode_2; }
	inline void set_stereoRenderingMode_2(uint16_t value)
	{
		___stereoRenderingMode_2 = value;
	}

	inline static int32_t get_offset_of_colorSpace_3() { return static_cast<int32_t>(offsetof(UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF, ___colorSpace_3)); }
	inline uint16_t get_colorSpace_3() const { return ___colorSpace_3; }
	inline uint16_t* get_address_of_colorSpace_3() { return &___colorSpace_3; }
	inline void set_colorSpace_3(uint16_t value)
	{
		___colorSpace_3 = value;
	}
};


// UnityEngine.Vector4
struct  Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E 
{
public:
	// System.Single UnityEngine.Vector4::x
	float ___x_1;
	// System.Single UnityEngine.Vector4::y
	float ___y_2;
	// System.Single UnityEngine.Vector4::z
	float ___z_3;
	// System.Single UnityEngine.Vector4::w
	float ___w_4;

public:
	inline static int32_t get_offset_of_x_1() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___x_1)); }
	inline float get_x_1() const { return ___x_1; }
	inline float* get_address_of_x_1() { return &___x_1; }
	inline void set_x_1(float value)
	{
		___x_1 = value;
	}

	inline static int32_t get_offset_of_y_2() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___y_2)); }
	inline float get_y_2() const { return ___y_2; }
	inline float* get_address_of_y_2() { return &___y_2; }
	inline void set_y_2(float value)
	{
		___y_2 = value;
	}

	inline static int32_t get_offset_of_z_3() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___z_3)); }
	inline float get_z_3() const { return ___z_3; }
	inline float* get_address_of_z_3() { return &___z_3; }
	inline void set_z_3(float value)
	{
		___z_3 = value;
	}

	inline static int32_t get_offset_of_w_4() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E, ___w_4)); }
	inline float get_w_4() const { return ___w_4; }
	inline float* get_address_of_w_4() { return &___w_4; }
	inline void set_w_4(float value)
	{
		___w_4 = value;
	}
};

struct Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields
{
public:
	// UnityEngine.Vector4 UnityEngine.Vector4::zeroVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___zeroVector_5;
	// UnityEngine.Vector4 UnityEngine.Vector4::oneVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___oneVector_6;
	// UnityEngine.Vector4 UnityEngine.Vector4::positiveInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___positiveInfinityVector_7;
	// UnityEngine.Vector4 UnityEngine.Vector4::negativeInfinityVector
	Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___negativeInfinityVector_8;

public:
	inline static int32_t get_offset_of_zeroVector_5() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___zeroVector_5)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_zeroVector_5() const { return ___zeroVector_5; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_zeroVector_5() { return &___zeroVector_5; }
	inline void set_zeroVector_5(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___zeroVector_5 = value;
	}

	inline static int32_t get_offset_of_oneVector_6() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___oneVector_6)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_oneVector_6() const { return ___oneVector_6; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_oneVector_6() { return &___oneVector_6; }
	inline void set_oneVector_6(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___oneVector_6 = value;
	}

	inline static int32_t get_offset_of_positiveInfinityVector_7() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___positiveInfinityVector_7)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_positiveInfinityVector_7() const { return ___positiveInfinityVector_7; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_positiveInfinityVector_7() { return &___positiveInfinityVector_7; }
	inline void set_positiveInfinityVector_7(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___positiveInfinityVector_7 = value;
	}

	inline static int32_t get_offset_of_negativeInfinityVector_8() { return static_cast<int32_t>(offsetof(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E_StaticFields, ___negativeInfinityVector_8)); }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  get_negativeInfinityVector_8() const { return ___negativeInfinityVector_8; }
	inline Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E * get_address_of_negativeInfinityVector_8() { return &___negativeInfinityVector_8; }
	inline void set_negativeInfinityVector_8(Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  value)
	{
		___negativeInfinityVector_8 = value;
	}
};


// UnityEngine.XR.InputFeatureUsage`1<System.Boolean>
struct  InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E 
{
public:
	// System.String UnityEngine.XR.InputFeatureUsage`1::<name>k__BackingField
	String_t* ___U3CnameU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CnameU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E, ___U3CnameU3Ek__BackingField_0)); }
	inline String_t* get_U3CnameU3Ek__BackingField_0() const { return ___U3CnameU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CnameU3Ek__BackingField_0() { return &___U3CnameU3Ek__BackingField_0; }
	inline void set_U3CnameU3Ek__BackingField_0(String_t* value)
	{
		___U3CnameU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___U3CnameU3Ek__BackingField_0), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_pinvoke
{
	char* ___U3CnameU3Ek__BackingField_0;
};
#endif
// Native definition for COM marshalling of UnityEngine.XR.InputFeatureUsage`1
#ifndef InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
#define InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com_define
struct InputFeatureUsage_1_tDA6C911BB980C6817BCF87BA2329793217663C12_marshaled_com
{
	Il2CppChar* ___U3CnameU3Ek__BackingField_0;
};
#endif

// Unity.XR.Oculus.OculusSettings_StereoRenderingModeAndroid
struct  StereoRenderingModeAndroid_t06D540C4BE78E9426F61BC0E8D4B3B1C4F30567B 
{
public:
	// System.Int32 Unity.XR.Oculus.OculusSettings_StereoRenderingModeAndroid::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoRenderingModeAndroid_t06D540C4BE78E9426F61BC0E8D4B3B1C4F30567B, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.OculusSettings_StereoRenderingModeDesktop
struct  StereoRenderingModeDesktop_t663E1B3279D089D3FC03761E893B712AB6F60D4E 
{
public:
	// System.Int32 Unity.XR.Oculus.OculusSettings_StereoRenderingModeDesktop::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(StereoRenderingModeDesktop_t663E1B3279D089D3FC03761E893B712AB6F60D4E, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// Unity.XR.Oculus.OculusUsages
struct  OculusUsages_t9BA1C0F3E6E8FFA1BA9FE2F2E885F77A2E1019D9  : public RuntimeObject
{
public:

public:
};

struct OculusUsages_t9BA1C0F3E6E8FFA1BA9FE2F2E885F77A2E1019D9_StaticFields
{
public:
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::volumeUp
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___volumeUp_0;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::volumeDown
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___volumeDown_1;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::thumbrest
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___thumbrest_2;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::indexTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___indexTouch_3;
	// UnityEngine.XR.InputFeatureUsage`1<System.Boolean> Unity.XR.Oculus.OculusUsages::thumbTouch
	InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  ___thumbTouch_4;

public:
	inline static int32_t get_offset_of_volumeUp_0() { return static_cast<int32_t>(offsetof(OculusUsages_t9BA1C0F3E6E8FFA1BA9FE2F2E885F77A2E1019D9_StaticFields, ___volumeUp_0)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_volumeUp_0() const { return ___volumeUp_0; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_volumeUp_0() { return &___volumeUp_0; }
	inline void set_volumeUp_0(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___volumeUp_0 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___volumeUp_0))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_volumeDown_1() { return static_cast<int32_t>(offsetof(OculusUsages_t9BA1C0F3E6E8FFA1BA9FE2F2E885F77A2E1019D9_StaticFields, ___volumeDown_1)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_volumeDown_1() const { return ___volumeDown_1; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_volumeDown_1() { return &___volumeDown_1; }
	inline void set_volumeDown_1(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___volumeDown_1 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___volumeDown_1))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbrest_2() { return static_cast<int32_t>(offsetof(OculusUsages_t9BA1C0F3E6E8FFA1BA9FE2F2E885F77A2E1019D9_StaticFields, ___thumbrest_2)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_thumbrest_2() const { return ___thumbrest_2; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_thumbrest_2() { return &___thumbrest_2; }
	inline void set_thumbrest_2(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___thumbrest_2 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbrest_2))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_indexTouch_3() { return static_cast<int32_t>(offsetof(OculusUsages_t9BA1C0F3E6E8FFA1BA9FE2F2E885F77A2E1019D9_StaticFields, ___indexTouch_3)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_indexTouch_3() const { return ___indexTouch_3; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_indexTouch_3() { return &___indexTouch_3; }
	inline void set_indexTouch_3(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___indexTouch_3 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___indexTouch_3))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}

	inline static int32_t get_offset_of_thumbTouch_4() { return static_cast<int32_t>(offsetof(OculusUsages_t9BA1C0F3E6E8FFA1BA9FE2F2E885F77A2E1019D9_StaticFields, ___thumbTouch_4)); }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  get_thumbTouch_4() const { return ___thumbTouch_4; }
	inline InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * get_address_of_thumbTouch_4() { return &___thumbTouch_4; }
	inline void set_thumbTouch_4(InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  value)
	{
		___thumbTouch_4 = value;
		Il2CppCodeGenWriteBarrier((void**)&(((&___thumbTouch_4))->___U3CnameU3Ek__BackingField_0), (void*)NULL);
	}
};


// Unity.XR.Oculus.Utils_OvrProperty
struct  OvrProperty_t60333D9EFA7B39C3E4D7656F0B188A649B56B312 
{
public:
	// System.Int32 Unity.XR.Oculus.Utils_OvrProperty::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(OvrProperty_t60333D9EFA7B39C3E4D7656F0B188A649B56B312, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.ColorSpace
struct  ColorSpace_tAB3C938B1B47C6E9AC4596BF142AEDCD8A60936F 
{
public:
	// System.Int32 UnityEngine.ColorSpace::value__
	int32_t ___value___2;

public:
	inline static int32_t get_offset_of_value___2() { return static_cast<int32_t>(offsetof(ColorSpace_tAB3C938B1B47C6E9AC4596BF142AEDCD8A60936F, ___value___2)); }
	inline int32_t get_value___2() const { return ___value___2; }
	inline int32_t* get_address_of_value___2() { return &___value___2; }
	inline void set_value___2(int32_t value)
	{
		___value___2 = value;
	}
};


// UnityEngine.IntegratedSubsystem
struct  IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystem::m_Ptr
	intptr_t ___m_Ptr_0;
	// UnityEngine.ISubsystemDescriptor UnityEngine.IntegratedSubsystem::m_subsystemDescriptor
	RuntimeObject* ___m_subsystemDescriptor_1;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}

	inline static int32_t get_offset_of_m_subsystemDescriptor_1() { return static_cast<int32_t>(offsetof(IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026, ___m_subsystemDescriptor_1)); }
	inline RuntimeObject* get_m_subsystemDescriptor_1() const { return ___m_subsystemDescriptor_1; }
	inline RuntimeObject** get_address_of_m_subsystemDescriptor_1() { return &___m_subsystemDescriptor_1; }
	inline void set_m_subsystemDescriptor_1(RuntimeObject* value)
	{
		___m_subsystemDescriptor_1 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_subsystemDescriptor_1), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystem
struct IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026_marshaled_com
{
	intptr_t ___m_Ptr_0;
	RuntimeObject* ___m_subsystemDescriptor_1;
};

// UnityEngine.IntegratedSubsystemDescriptor
struct  IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.IntegratedSubsystemDescriptor::m_Ptr
	intptr_t ___m_Ptr_0;

public:
	inline static int32_t get_offset_of_m_Ptr_0() { return static_cast<int32_t>(offsetof(IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA, ___m_Ptr_0)); }
	inline intptr_t get_m_Ptr_0() const { return ___m_Ptr_0; }
	inline intptr_t* get_address_of_m_Ptr_0() { return &___m_Ptr_0; }
	inline void set_m_Ptr_0(intptr_t value)
	{
		___m_Ptr_0 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_pinvoke
{
	intptr_t ___m_Ptr_0;
};
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor
struct IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_com
{
	intptr_t ___m_Ptr_0;
};

// UnityEngine.Object
struct  Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0  : public RuntimeObject
{
public:
	// System.IntPtr UnityEngine.Object::m_CachedPtr
	intptr_t ___m_CachedPtr_0;

public:
	inline static int32_t get_offset_of_m_CachedPtr_0() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0, ___m_CachedPtr_0)); }
	inline intptr_t get_m_CachedPtr_0() const { return ___m_CachedPtr_0; }
	inline intptr_t* get_address_of_m_CachedPtr_0() { return &___m_CachedPtr_0; }
	inline void set_m_CachedPtr_0(intptr_t value)
	{
		___m_CachedPtr_0 = value;
	}
};

struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields
{
public:
	// System.Int32 UnityEngine.Object::OffsetOfInstanceIDInCPlusPlusObject
	int32_t ___OffsetOfInstanceIDInCPlusPlusObject_1;

public:
	inline static int32_t get_offset_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return static_cast<int32_t>(offsetof(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_StaticFields, ___OffsetOfInstanceIDInCPlusPlusObject_1)); }
	inline int32_t get_OffsetOfInstanceIDInCPlusPlusObject_1() const { return ___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline int32_t* get_address_of_OffsetOfInstanceIDInCPlusPlusObject_1() { return &___OffsetOfInstanceIDInCPlusPlusObject_1; }
	inline void set_OffsetOfInstanceIDInCPlusPlusObject_1(int32_t value)
	{
		___OffsetOfInstanceIDInCPlusPlusObject_1 = value;
	}
};

// Native definition for P/Invoke marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
	intptr_t ___m_CachedPtr_0;
};
// Native definition for COM marshalling of UnityEngine.Object
struct Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
	intptr_t ___m_CachedPtr_0;
};

// UnityEngine.IntegratedSubsystemDescriptor`1<UnityEngine.XR.XRDisplaySubsystem>
struct  IntegratedSubsystemDescriptor_1_t92C33FD6897AFD92459369C236D3447735C3D6E5  : public IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t6B91293AA752E7448406604457D5332168E7D867_marshaled_pinvoke_define
#define IntegratedSubsystemDescriptor_1_t6B91293AA752E7448406604457D5332168E7D867_marshaled_pinvoke_define
struct IntegratedSubsystemDescriptor_1_t6B91293AA752E7448406604457D5332168E7D867_marshaled_pinvoke : public IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_pinvoke
{
};
#endif
// Native definition for COM marshalling of UnityEngine.IntegratedSubsystemDescriptor`1
#ifndef IntegratedSubsystemDescriptor_1_t6B91293AA752E7448406604457D5332168E7D867_marshaled_com_define
#define IntegratedSubsystemDescriptor_1_t6B91293AA752E7448406604457D5332168E7D867_marshaled_com_define
struct IntegratedSubsystemDescriptor_1_t6B91293AA752E7448406604457D5332168E7D867_marshaled_com : public IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA_marshaled_com
{
};
#endif

// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>
struct  IntegratedSubsystem_1_tA1D5F6FF883C281DC92140F8547E38FBA9A4F7E1  : public IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026
{
public:

public:
};


// UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRInputSubsystemDescriptor>
struct  IntegratedSubsystem_1_t648AE5E2D40F3159DD68D2AFD4B5ECA29920149D  : public IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026
{
public:

public:
};


// UnityEngine.ScriptableObject
struct  ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734  : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0
{
public:

public:
};

// Native definition for P/Invoke marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_pinvoke : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_pinvoke
{
};
// Native definition for COM marshalling of UnityEngine.ScriptableObject
struct ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734_marshaled_com : public Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_marshaled_com
{
};

// Unity.XR.Oculus.OculusSettings
struct  OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:
	// Unity.XR.Oculus.OculusSettings_StereoRenderingModeDesktop Unity.XR.Oculus.OculusSettings::m_StereoRenderingModeDesktop
	int32_t ___m_StereoRenderingModeDesktop_4;
	// Unity.XR.Oculus.OculusSettings_StereoRenderingModeAndroid Unity.XR.Oculus.OculusSettings::m_StereoRenderingModeAndroid
	int32_t ___m_StereoRenderingModeAndroid_5;
	// System.Boolean Unity.XR.Oculus.OculusSettings::SharedDepthBuffer
	bool ___SharedDepthBuffer_6;
	// System.Boolean Unity.XR.Oculus.OculusSettings::DashSupport
	bool ___DashSupport_7;
	// System.Boolean Unity.XR.Oculus.OculusSettings::V2Signing
	bool ___V2Signing_8;

public:
	inline static int32_t get_offset_of_m_StereoRenderingModeDesktop_4() { return static_cast<int32_t>(offsetof(OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB, ___m_StereoRenderingModeDesktop_4)); }
	inline int32_t get_m_StereoRenderingModeDesktop_4() const { return ___m_StereoRenderingModeDesktop_4; }
	inline int32_t* get_address_of_m_StereoRenderingModeDesktop_4() { return &___m_StereoRenderingModeDesktop_4; }
	inline void set_m_StereoRenderingModeDesktop_4(int32_t value)
	{
		___m_StereoRenderingModeDesktop_4 = value;
	}

	inline static int32_t get_offset_of_m_StereoRenderingModeAndroid_5() { return static_cast<int32_t>(offsetof(OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB, ___m_StereoRenderingModeAndroid_5)); }
	inline int32_t get_m_StereoRenderingModeAndroid_5() const { return ___m_StereoRenderingModeAndroid_5; }
	inline int32_t* get_address_of_m_StereoRenderingModeAndroid_5() { return &___m_StereoRenderingModeAndroid_5; }
	inline void set_m_StereoRenderingModeAndroid_5(int32_t value)
	{
		___m_StereoRenderingModeAndroid_5 = value;
	}

	inline static int32_t get_offset_of_SharedDepthBuffer_6() { return static_cast<int32_t>(offsetof(OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB, ___SharedDepthBuffer_6)); }
	inline bool get_SharedDepthBuffer_6() const { return ___SharedDepthBuffer_6; }
	inline bool* get_address_of_SharedDepthBuffer_6() { return &___SharedDepthBuffer_6; }
	inline void set_SharedDepthBuffer_6(bool value)
	{
		___SharedDepthBuffer_6 = value;
	}

	inline static int32_t get_offset_of_DashSupport_7() { return static_cast<int32_t>(offsetof(OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB, ___DashSupport_7)); }
	inline bool get_DashSupport_7() const { return ___DashSupport_7; }
	inline bool* get_address_of_DashSupport_7() { return &___DashSupport_7; }
	inline void set_DashSupport_7(bool value)
	{
		___DashSupport_7 = value;
	}

	inline static int32_t get_offset_of_V2Signing_8() { return static_cast<int32_t>(offsetof(OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB, ___V2Signing_8)); }
	inline bool get_V2Signing_8() const { return ___V2Signing_8; }
	inline bool* get_address_of_V2Signing_8() { return &___V2Signing_8; }
	inline void set_V2Signing_8(bool value)
	{
		___V2Signing_8 = value;
	}
};

struct OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB_StaticFields
{
public:
	// Unity.XR.Oculus.OculusSettings Unity.XR.Oculus.OculusSettings::s_Settings
	OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB * ___s_Settings_9;

public:
	inline static int32_t get_offset_of_s_Settings_9() { return static_cast<int32_t>(offsetof(OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB_StaticFields, ___s_Settings_9)); }
	inline OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB * get_s_Settings_9() const { return ___s_Settings_9; }
	inline OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB ** get_address_of_s_Settings_9() { return &___s_Settings_9; }
	inline void set_s_Settings_9(OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB * value)
	{
		___s_Settings_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_Settings_9), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoader
struct  XRLoader_t2574091AF57F902BF504098AB113416E8D15186A  : public ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734
{
public:

public:
};


// UnityEngine.XR.XRDisplaySubsystem
struct  XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0  : public IntegratedSubsystem_1_tA1D5F6FF883C281DC92140F8547E38FBA9A4F7E1
{
public:

public:
};

struct XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_StaticFields
{
public:
	// System.Action`1<System.Boolean> UnityEngine.XR.XRDisplaySubsystem::displayFocusChanged
	Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * ___displayFocusChanged_2;

public:
	inline static int32_t get_offset_of_displayFocusChanged_2() { return static_cast<int32_t>(offsetof(XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_StaticFields, ___displayFocusChanged_2)); }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * get_displayFocusChanged_2() const { return ___displayFocusChanged_2; }
	inline Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD ** get_address_of_displayFocusChanged_2() { return &___displayFocusChanged_2; }
	inline void set_displayFocusChanged_2(Action_1_tAA0F894C98302D68F7D5034E8104E9AB4763CCAD * value)
	{
		___displayFocusChanged_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___displayFocusChanged_2), (void*)value);
	}
};


// UnityEngine.XR.XRDisplaySubsystemDescriptor
struct  XRDisplaySubsystemDescriptor_tC24B1C560B0C50AD3094D5F22BFFD25DD7AE6259  : public IntegratedSubsystemDescriptor_1_t92C33FD6897AFD92459369C236D3447735C3D6E5
{
public:

public:
};


// UnityEngine.XR.XRInputSubsystem
struct  XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7  : public IntegratedSubsystem_1_t648AE5E2D40F3159DD68D2AFD4B5ECA29920149D
{
public:
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::trackingOriginUpdated
	Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * ___trackingOriginUpdated_2;
	// System.Action`1<UnityEngine.XR.XRInputSubsystem> UnityEngine.XR.XRInputSubsystem::boundaryChanged
	Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * ___boundaryChanged_3;

public:
	inline static int32_t get_offset_of_trackingOriginUpdated_2() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7, ___trackingOriginUpdated_2)); }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * get_trackingOriginUpdated_2() const { return ___trackingOriginUpdated_2; }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 ** get_address_of_trackingOriginUpdated_2() { return &___trackingOriginUpdated_2; }
	inline void set_trackingOriginUpdated_2(Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * value)
	{
		___trackingOriginUpdated_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___trackingOriginUpdated_2), (void*)value);
	}

	inline static int32_t get_offset_of_boundaryChanged_3() { return static_cast<int32_t>(offsetof(XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7, ___boundaryChanged_3)); }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * get_boundaryChanged_3() const { return ___boundaryChanged_3; }
	inline Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 ** get_address_of_boundaryChanged_3() { return &___boundaryChanged_3; }
	inline void set_boundaryChanged_3(Action_1_tE36D94C70DDB9BA2EFBB2876BF63E27C74A181C6 * value)
	{
		___boundaryChanged_3 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___boundaryChanged_3), (void*)value);
	}
};


// UnityEngine.XR.Management.XRLoaderHelper
struct  XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3  : public XRLoader_t2574091AF57F902BF504098AB113416E8D15186A
{
public:
	// System.Collections.Generic.Dictionary`2<System.Type,UnityEngine.ISubsystem> UnityEngine.XR.Management.XRLoaderHelper::m_SubsystemInstanceMap
	Dictionary_2_t24C2535A0F0EB3A5DE49A603DB5675E259E974A4 * ___m_SubsystemInstanceMap_4;

public:
	inline static int32_t get_offset_of_m_SubsystemInstanceMap_4() { return static_cast<int32_t>(offsetof(XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3, ___m_SubsystemInstanceMap_4)); }
	inline Dictionary_2_t24C2535A0F0EB3A5DE49A603DB5675E259E974A4 * get_m_SubsystemInstanceMap_4() const { return ___m_SubsystemInstanceMap_4; }
	inline Dictionary_2_t24C2535A0F0EB3A5DE49A603DB5675E259E974A4 ** get_address_of_m_SubsystemInstanceMap_4() { return &___m_SubsystemInstanceMap_4; }
	inline void set_m_SubsystemInstanceMap_4(Dictionary_2_t24C2535A0F0EB3A5DE49A603DB5675E259E974A4 * value)
	{
		___m_SubsystemInstanceMap_4 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_SubsystemInstanceMap_4), (void*)value);
	}
};


// Unity.XR.Oculus.OculusLoader
struct  OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A  : public XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3
{
public:

public:
};

struct OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A_StaticFields
{
public:
	// System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor> Unity.XR.Oculus.OculusLoader::s_DisplaySubsystemDescriptors
	List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B * ___s_DisplaySubsystemDescriptors_5;
	// System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor> Unity.XR.Oculus.OculusLoader::s_InputSubsystemDescriptors
	List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0 * ___s_InputSubsystemDescriptors_6;

public:
	inline static int32_t get_offset_of_s_DisplaySubsystemDescriptors_5() { return static_cast<int32_t>(offsetof(OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A_StaticFields, ___s_DisplaySubsystemDescriptors_5)); }
	inline List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B * get_s_DisplaySubsystemDescriptors_5() const { return ___s_DisplaySubsystemDescriptors_5; }
	inline List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B ** get_address_of_s_DisplaySubsystemDescriptors_5() { return &___s_DisplaySubsystemDescriptors_5; }
	inline void set_s_DisplaySubsystemDescriptors_5(List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B * value)
	{
		___s_DisplaySubsystemDescriptors_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_DisplaySubsystemDescriptors_5), (void*)value);
	}

	inline static int32_t get_offset_of_s_InputSubsystemDescriptors_6() { return static_cast<int32_t>(offsetof(OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A_StaticFields, ___s_InputSubsystemDescriptors_6)); }
	inline List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0 * get_s_InputSubsystemDescriptors_6() const { return ___s_InputSubsystemDescriptors_6; }
	inline List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0 ** get_address_of_s_InputSubsystemDescriptors_6() { return &___s_InputSubsystemDescriptors_6; }
	inline void set_s_InputSubsystemDescriptors_6(List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0 * value)
	{
		___s_InputSubsystemDescriptors_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___s_InputSubsystemDescriptors_6), (void*)value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// System.Byte[]
struct ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821  : public RuntimeArray
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


// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<System.Object,System.Object>(System.Collections.Generic.List`1<!!0>,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FBA4653E5175910D922D57316019C09C3E74C94_gshared (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 * __this, List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___descriptors0, String_t* ___id1, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StartSubsystem_TisRuntimeObject_mCB6A798D604A314F88B79B8FBF32F101B10DE8BB_gshared (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_StopSubsystem_TisRuntimeObject_m5F7B4691FF5A6E49576D3AE14358CE92BE14A195_gshared (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<System.Object>()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mDF51E3FBDCD4D92317E717726C912BEFA57C41A6_gshared (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<System.Object>::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82_gshared (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, String_t* ___usageName0, const RuntimeMethod* method);
// System.Void UnityEngine.SubsystemManager::GetInstances<System.Object>(System.Collections.Generic.List`1<!!0>)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void SubsystemManager_GetInstances_TisRuntimeObject_m52FF5763B7D6743B1C0F6F7767E1FDF43D536AF9_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * ___instances0, const RuntimeMethod* method);
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<System.Object>::GetEnumerator()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD  List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared (List_1_t05CC3C859AB5E6024394EF9A42E3E696628CA02D * __this, const RuntimeMethod* method);
// !0 System.Collections.Generic.List`1/Enumerator<System.Object>::get_Current()
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// !0 UnityEngine.IntegratedSubsystem`1<System.Object>::get_SubsystemDescriptor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR RuntimeObject * IntegratedSubsystem_1_get_SubsystemDescriptor_m6B09D98B178D222ED47FAE14A561319F68C3E80B_gshared (IntegratedSubsystem_1_tA39FA5C25840EB481167108B3E02F7F09E901583 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<System.Object>::MoveNext()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1/Enumerator<System.Object>::Dispose()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method);

// Unity.XR.Oculus.OculusSettings Unity.XR.Oculus.OculusLoader::GetSettings()
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB * OculusLoader_GetSettings_m04AAA3BD9759C2A306863EBF1E786C42DC9FBD64_inline (OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A * __this, const RuntimeMethod* method);
// System.Boolean UnityEngine.Object::op_Inequality(UnityEngine.Object,UnityEngine.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1 (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___x0, Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 * ___y1, const RuntimeMethod* method);
// System.UInt16 Unity.XR.Oculus.OculusSettings::GetStereoRenderingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t OculusSettings_GetStereoRenderingMode_m44525BFE309CFC17A0343E6430AA3FFEF5ACA141 (OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB * __this, const RuntimeMethod* method);
// UnityEngine.ColorSpace UnityEngine.QualitySettings::get_activeColorSpace()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t QualitySettings_get_activeColorSpace_m13DBB3B679AA5D5CEA05C2B4517A1FDE1B2CF9B0 (const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.OculusLoader::SetUserDefinedSettings(Unity.XR.Oculus.OculusLoader/UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusLoader_SetUserDefinedSettings_m676FB26913A3FEA5386810B3F202CD942970468E (UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF  ___settings0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.XRDisplaySubsystemDescriptor,UnityEngine.XR.XRDisplaySubsystem>(System.Collections.Generic.List`1<!!0>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tC24B1C560B0C50AD3094D5F22BFFD25DD7AE6259_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_m4E78D8556FC9DD563F0148C81D9AE3A390A291F9 (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 * __this, List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 *, List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B *, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FBA4653E5175910D922D57316019C09C3E74C94_gshared)(__this, ___descriptors0, ___id1, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::CreateSubsystem<UnityEngine.XR.XRInputSubsystemDescriptor,UnityEngine.XR.XRInputSubsystem>(System.Collections.Generic.List`1<!!0>,System.String)
inline void XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t0695204904011F75FF666A5F623C98FBCC163AD5_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m14C1393388111243689CB93F35D8DB44C4988358 (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 * __this, List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0 * ___descriptors0, String_t* ___id1, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 *, List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0 *, String_t*, const RuntimeMethod*))XRLoaderHelper_CreateSubsystem_TisRuntimeObject_TisRuntimeObject_m4FBA4653E5175910D922D57316019C09C3E74C94_gshared)(__this, ___descriptors0, ___id1, method);
}
// UnityEngine.XR.XRDisplaySubsystem Unity.XR.Oculus.OculusLoader::get_displaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * OculusLoader_get_displaySubsystem_m3C34FBC8696DE34C56909F858D3576DD7C7B3485 (OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A * __this, const RuntimeMethod* method);
// UnityEngine.XR.XRInputSubsystem Unity.XR.Oculus.OculusLoader::get_inputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * OculusLoader_get_inputSubsystem_m1680C7424B1C78EE15B503024EB3491C7B65CEB1 (OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A * __this, const RuntimeMethod* method);
// System.Void UnityEngine.Debug::LogError(System.Object)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29 (RuntimeObject * ___message0, const RuntimeMethod* method);
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_mEBB18C9C6541B32597AF07289DCB15FF6B48E5FF (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 *, const RuntimeMethod*))XRLoaderHelper_StartSubsystem_TisRuntimeObject_mCB6A798D604A314F88B79B8FBF32F101B10DE8BB_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StartSubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m8991D424ED5C5A121235B9A12CCF0995AE2FDFAE (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 *, const RuntimeMethod*))XRLoaderHelper_StartSubsystem_TisRuntimeObject_mCB6A798D604A314F88B79B8FBF32F101B10DE8BB_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_m6448E0BFA3373BD8A74DE4450C4FDD9C945D1773 (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 *, const RuntimeMethod*))XRLoaderHelper_StopSubsystem_TisRuntimeObject_m5F7B4691FF5A6E49576D3AE14358CE92BE14A195_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::StopSubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m27C0F9202EDCF773FC27A3B8F8F977D1D1C54E86 (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 *, const RuntimeMethod*))XRLoaderHelper_StopSubsystem_TisRuntimeObject_m5F7B4691FF5A6E49576D3AE14358CE92BE14A195_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.XRDisplaySubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_mC460B6B1957412AF84A76B0E495EC44D01DB08A2 (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 *, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mDF51E3FBDCD4D92317E717726C912BEFA57C41A6_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::DestroySubsystem<UnityEngine.XR.XRInputSubsystem>()
inline void XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m294A4E2448F4AC92CDFCE518B5404C83BD9574C0 (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 * __this, const RuntimeMethod* method)
{
	((  void (*) (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 *, const RuntimeMethod*))XRLoaderHelper_DestroySubsystem_TisRuntimeObject_mDF51E3FBDCD4D92317E717726C912BEFA57C41A6_gshared)(__this, method);
}
// System.Void UnityEngine.XR.Management.XRLoaderHelper::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void XRLoaderHelper__ctor_mA54557F61BDDFF0758DCFFE5864A1870A0ED67F8 (XRLoaderHelper_tD0931FCDC2CEA47D2C4F81741FCC7EE65C8DB0C3 * __this, const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>::.ctor()
inline void List_1__ctor_mDAAFC37295400CAB2E0C95455A9DCFC3A9CC3AED (List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRInputSubsystemDescriptor>::.ctor()
inline void List_1__ctor_m02E78EBC93F0DB75BB5F122F3429BA22B26C3454 (List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.ScriptableObject::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B (ScriptableObject_tAB015486CEAB714DA0D5C1BA389B84FB90427734 * __this, const RuntimeMethod* method);
// System.Void UnityEngine.XR.InputFeatureUsage`1<System.Boolean>::.ctor(System.String)
inline void InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82 (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E * __this, String_t* ___usageName0, const RuntimeMethod* method)
{
	((  void (*) (InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E *, String_t*, const RuntimeMethod*))InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82_gshared)(__this, ___usageName0, method);
}
// System.Void Unity.XR.Oculus.Stats::GetOVRPVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stats_GetOVRPVersion_m63EA02B7AA5DE197EEF264EF7C4DF9BE431CD974 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___version0, const RuntimeMethod* method);
// System.Text.Encoding System.Text.Encoding::get_ASCII()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E (const RuntimeMethod* method);
// System.Void System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>::.ctor()
inline void List_1__ctor_m9E65305FCF8F586CBF6B85C242AFDE06DF2C8F56 (List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907 * __this, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907 *, const RuntimeMethod*))List_1__ctor_mC832F1AC0F814BAEB19175F5D7972A7507508BC3_gshared)(__this, method);
}
// System.Void UnityEngine.SubsystemManager::GetInstances<UnityEngine.XR.XRDisplaySubsystem>(System.Collections.Generic.List`1<!!0>)
inline void SubsystemManager_GetInstances_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_mF6CAC97479F9849D66E65AFA5EC5CEE343DE8F61 (List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907 * ___instances0, const RuntimeMethod* method)
{
	((  void (*) (List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907 *, const RuntimeMethod*))SubsystemManager_GetInstances_TisRuntimeObject_m52FF5763B7D6743B1C0F6F7767E1FDF43D536AF9_gshared)(___instances0, method);
}
// System.Collections.Generic.List`1/Enumerator<!0> System.Collections.Generic.List`1<UnityEngine.XR.XRDisplaySubsystem>::GetEnumerator()
inline Enumerator_tB907916596D7281DD61CE7576F03AA6EDC78198C  List_1_GetEnumerator_mD8BBBF0C49392BEB77407D9460D4A139476BA8C4 (List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907 * __this, const RuntimeMethod* method)
{
	return ((  Enumerator_tB907916596D7281DD61CE7576F03AA6EDC78198C  (*) (List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907 *, const RuntimeMethod*))List_1_GetEnumerator_m52CC760E475D226A2B75048D70C4E22692F9F68D_gshared)(__this, method);
}
// !0 System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::get_Current()
inline XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * Enumerator_get_Current_mAA5B5F41FF5A5AABEB7EEDC6E4B86AD10411BFD3_inline (Enumerator_tB907916596D7281DD61CE7576F03AA6EDC78198C * __this, const RuntimeMethod* method)
{
	return ((  XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * (*) (Enumerator_tB907916596D7281DD61CE7576F03AA6EDC78198C *, const RuntimeMethod*))Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline)(__this, method);
}
// !0 UnityEngine.IntegratedSubsystem`1<UnityEngine.XR.XRDisplaySubsystemDescriptor>::get_SubsystemDescriptor()
inline XRDisplaySubsystemDescriptor_tC24B1C560B0C50AD3094D5F22BFFD25DD7AE6259 * IntegratedSubsystem_1_get_SubsystemDescriptor_mC7EBA3B4384325B5C5B4ED321175057FC0178009 (IntegratedSubsystem_1_tA1D5F6FF883C281DC92140F8547E38FBA9A4F7E1 * __this, const RuntimeMethod* method)
{
	return ((  XRDisplaySubsystemDescriptor_tC24B1C560B0C50AD3094D5F22BFFD25DD7AE6259 * (*) (IntegratedSubsystem_1_tA1D5F6FF883C281DC92140F8547E38FBA9A4F7E1 *, const RuntimeMethod*))IntegratedSubsystem_1_get_SubsystemDescriptor_m6B09D98B178D222ED47FAE14A561319F68C3E80B_gshared)(__this, method);
}
// System.String UnityEngine.IntegratedSubsystemDescriptor::get_id()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* IntegratedSubsystemDescriptor_get_id_m79F62994737A858E9F906C33C1B43E68E1A7E01D (IntegratedSubsystemDescriptor_t56BB69721C25889FFD6A9FE635ED05BB94D683DA * __this, const RuntimeMethod* method);
// System.Boolean System.String::op_Equality(System.String,System.String)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE (String_t* ___a0, String_t* ___b1, const RuntimeMethod* method);
// System.Boolean UnityEngine.IntegratedSubsystem::get_running()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntegratedSubsystem_get_running_m39FED0A48B27096E2957169B19712DFA11877624 (IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * __this, const RuntimeMethod* method);
// System.Boolean System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::MoveNext()
inline bool Enumerator_MoveNext_m9ACEA798ABBAE993F589D5867CAC436030D26A69 (Enumerator_tB907916596D7281DD61CE7576F03AA6EDC78198C * __this, const RuntimeMethod* method)
{
	return ((  bool (*) (Enumerator_tB907916596D7281DD61CE7576F03AA6EDC78198C *, const RuntimeMethod*))Enumerator_MoveNext_m38B1099DDAD7EEDE2F4CDAB11C095AC784AC2E34_gshared)(__this, method);
}
// System.Void System.Collections.Generic.List`1/Enumerator<UnityEngine.XR.XRDisplaySubsystem>::Dispose()
inline void Enumerator_Dispose_mD12E19406ADA2061CFE2D76D8D5545ACDD335048 (Enumerator_tB907916596D7281DD61CE7576F03AA6EDC78198C * __this, const RuntimeMethod* method)
{
	((  void (*) (Enumerator_tB907916596D7281DD61CE7576F03AA6EDC78198C *, const RuntimeMethod*))Enumerator_Dispose_m94D0DAE031619503CDA6E53C5C3CC78AF3139472_gshared)(__this, method);
}
// System.Void System.Object::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0 (RuntimeObject * __this, const RuntimeMethod* method);
// UnityEngine.IntegratedSubsystem Unity.XR.Oculus.Stats::GetOculusDisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615 (const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetAppGPUTimeLastFrame(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetAppGPUTimeLastFrame_m39A7064F9204C58E72514AFB3949D80EC497E4D7 (XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * __this, float* ___gpuTimeLastFrame0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetCompositorGPUTimeLastFrame(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetCompositorGPUTimeLastFrame_mF05685742AB5108E3436AD1B376ABC9B80756C11 (XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * __this, float* ___gpuTimeLastFrameCompositor0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetMotionToPhoton(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetMotionToPhoton_m59793D6EA38CE78324E4B8AC45DB412CAB2FDF65 (XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * __this, float* ___motionToPhoton0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.XRDisplaySubsystem::TryGetDisplayRefreshRate(System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRDisplaySubsystem_TryGetDisplayRefreshRate_m72B428078DA4A73598EEE0C4DBFB3C5CE805155E (XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * __this, float* ___displayRefreshRate0, const RuntimeMethod* method);
// System.Boolean UnityEngine.XR.Provider.XRStats::TryGetStat(UnityEngine.IntegratedSubsystem,System.String,System.Single&)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC (IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * ___xrSubsystem0, String_t* ___tag1, float* ___value2, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Utils::SetColorScale(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetColorScale_m6A70BD5EF8C4CC01E29E23FCF96851B2E17B5670 (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Utils::SetColorOffset(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetColorOffset_m458AB69D9E5B4AEC408F28A4174F056ABD03B486 (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method);
// System.IntPtr Unity.XR.Oculus.Utils::GetOvrJava()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utils_GetOvrJava_m808618B71D47DBE7E75974CFA618829681F04ED3 (const RuntimeMethod* method);
// System.Boolean System.IntPtr::op_Equality(System.IntPtr,System.IntPtr)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934 (intptr_t ___value10, intptr_t ___value21, const RuntimeMethod* method);
// System.Void Unity.XR.Oculus.Utils::vrapi_SetPropertyInt(System.IntPtr,Unity.XR.Oculus.Utils/OvrProperty,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_vrapi_SetPropertyInt_mE7EC95780C0D1B0E32A4D04D352AF54A0299A6D6 (intptr_t ___java0, int32_t ___prop1, int32_t ___val2, const RuntimeMethod* method);
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
// UnityEngine.XR.XRDisplaySubsystem Unity.XR.Oculus.OculusLoader::get_displaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * OculusLoader_get_displaySubsystem_m3C34FBC8696DE34C56909F858D3576DD7C7B3485 (OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OculusLoader_get_displaySubsystem_m3C34FBC8696DE34C56909F858D3576DD7C7B3485_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetLoadedSubsystem<XRDisplaySubsystem>();
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_0 = GenericVirtFuncInvoker0< XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * >::Invoke(XRLoader_GetLoadedSubsystem_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_m4D3DDF617B48045DD21FBB6231882D6B7E653B33_RuntimeMethod_var, __this);
		return L_0;
	}
}
// UnityEngine.XR.XRInputSubsystem Unity.XR.Oculus.OculusLoader::get_inputSubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * OculusLoader_get_inputSubsystem_m1680C7424B1C78EE15B503024EB3491C7B65CEB1 (OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OculusLoader_get_inputSubsystem_m1680C7424B1C78EE15B503024EB3491C7B65CEB1_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// return GetLoadedSubsystem<XRInputSubsystem>();
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_0 = GenericVirtFuncInvoker0< XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * >::Invoke(XRLoader_GetLoadedSubsystem_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_mFD9C3F59810B3FEC0A6FD5EFE508B4D1B950D621_RuntimeMethod_var, __this);
		return L_0;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Initialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Initialize_m55605F6767F40AD6C16F0832B260E4853224FF95 (OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OculusLoader_Initialize_m55605F6767F40AD6C16F0832B260E4853224FF95_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB * V_0 = NULL;
	UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF  V_1;
	memset((&V_1), 0, sizeof(V_1));
	UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF * G_B3_0 = NULL;
	UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF * G_B2_0 = NULL;
	int32_t G_B4_0 = 0;
	UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF * G_B4_1 = NULL;
	UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF * G_B6_0 = NULL;
	UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF * G_B5_0 = NULL;
	int32_t G_B7_0 = 0;
	UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF * G_B7_1 = NULL;
	UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF * G_B9_0 = NULL;
	UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF * G_B8_0 = NULL;
	int32_t G_B10_0 = 0;
	UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF * G_B10_1 = NULL;
	{
		// OculusSettings settings = GetSettings();
		OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB * L_0 = OculusLoader_GetSettings_m04AAA3BD9759C2A306863EBF1E786C42DC9FBD64_inline(__this, /*hidden argument*/NULL);
		V_0 = L_0;
		// if (settings != null)
		OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB * L_1 = V_0;
		IL2CPP_RUNTIME_CLASS_INIT(Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0_il2cpp_TypeInfo_var);
		bool L_2 = Object_op_Inequality_m31EF58E217E8F4BDD3E409DEF79E1AEE95874FC1(L_1, (Object_tAE11E5E46CD5C37C9F3E8950C00CD8B45666A2D0 *)NULL, /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_005f;
		}
	}
	{
		// userDefinedSettings.sharedDepthBuffer = (ushort)(settings.SharedDepthBuffer ? 1 : 0);
		OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB * L_3 = V_0;
		NullCheck(L_3);
		bool L_4 = L_3->get_SharedDepthBuffer_6();
		G_B2_0 = (&V_1);
		if (L_4)
		{
			G_B3_0 = (&V_1);
			goto IL_001d;
		}
	}
	{
		G_B4_0 = 0;
		G_B4_1 = G_B2_0;
		goto IL_001e;
	}

IL_001d:
	{
		G_B4_0 = 1;
		G_B4_1 = G_B3_0;
	}

IL_001e:
	{
		G_B4_1->set_sharedDepthBuffer_0((uint16_t)(((int32_t)((uint16_t)G_B4_0))));
		// userDefinedSettings.dashSupport = (ushort)(settings.DashSupport ? 1 : 0);
		OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB * L_5 = V_0;
		NullCheck(L_5);
		bool L_6 = L_5->get_DashSupport_7();
		G_B5_0 = (&V_1);
		if (L_6)
		{
			G_B6_0 = (&V_1);
			goto IL_0031;
		}
	}
	{
		G_B7_0 = 0;
		G_B7_1 = G_B5_0;
		goto IL_0032;
	}

IL_0031:
	{
		G_B7_0 = 1;
		G_B7_1 = G_B6_0;
	}

IL_0032:
	{
		G_B7_1->set_dashSupport_1((uint16_t)(((int32_t)((uint16_t)G_B7_0))));
		// userDefinedSettings.stereoRenderingMode = (ushort) settings.GetStereoRenderingMode();
		OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB * L_7 = V_0;
		NullCheck(L_7);
		uint16_t L_8 = OculusSettings_GetStereoRenderingMode_m44525BFE309CFC17A0343E6430AA3FFEF5ACA141(L_7, /*hidden argument*/NULL);
		(&V_1)->set_stereoRenderingMode_2(L_8);
		// userDefinedSettings.colorSpace = (ushort) ((QualitySettings.activeColorSpace == ColorSpace.Linear) ? 1 : 0);
		int32_t L_9 = QualitySettings_get_activeColorSpace_m13DBB3B679AA5D5CEA05C2B4517A1FDE1B2CF9B0(/*hidden argument*/NULL);
		G_B8_0 = (&V_1);
		if ((((int32_t)L_9) == ((int32_t)1)))
		{
			G_B9_0 = (&V_1);
			goto IL_0052;
		}
	}
	{
		G_B10_0 = 0;
		G_B10_1 = G_B8_0;
		goto IL_0053;
	}

IL_0052:
	{
		G_B10_0 = 1;
		G_B10_1 = G_B9_0;
	}

IL_0053:
	{
		G_B10_1->set_colorSpace_3((uint16_t)(((int32_t)((uint16_t)G_B10_0))));
		// SetUserDefinedSettings(userDefinedSettings);
		UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF  L_10 = V_1;
		IL2CPP_RUNTIME_CLASS_INIT(OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A_il2cpp_TypeInfo_var);
		OculusLoader_SetUserDefinedSettings_m676FB26913A3FEA5386810B3F202CD942970468E(L_10, /*hidden argument*/NULL);
	}

IL_005f:
	{
		// CreateSubsystem<XRDisplaySubsystemDescriptor, XRDisplaySubsystem>(s_DisplaySubsystemDescriptors, "oculus display");
		IL2CPP_RUNTIME_CLASS_INIT(OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A_il2cpp_TypeInfo_var);
		List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B * L_11 = ((OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A_il2cpp_TypeInfo_var))->get_s_DisplaySubsystemDescriptors_5();
		XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tC24B1C560B0C50AD3094D5F22BFFD25DD7AE6259_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_m4E78D8556FC9DD563F0148C81D9AE3A390A291F9(__this, L_11, _stringLiteralE21EDE835D7BAED96D99D059B31AEB7615CF73E7, /*hidden argument*/XRLoaderHelper_CreateSubsystem_TisXRDisplaySubsystemDescriptor_tC24B1C560B0C50AD3094D5F22BFFD25DD7AE6259_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_m4E78D8556FC9DD563F0148C81D9AE3A390A291F9_RuntimeMethod_var);
		// CreateSubsystem<XRInputSubsystemDescriptor, XRInputSubsystem>(s_InputSubsystemDescriptors, "oculus input");
		List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0 * L_12 = ((OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A_il2cpp_TypeInfo_var))->get_s_InputSubsystemDescriptors_6();
		XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t0695204904011F75FF666A5F623C98FBCC163AD5_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m14C1393388111243689CB93F35D8DB44C4988358(__this, L_12, _stringLiteralB5110FC6DC00A95656A5618F12E6CBD655CABD44, /*hidden argument*/XRLoaderHelper_CreateSubsystem_TisXRInputSubsystemDescriptor_t0695204904011F75FF666A5F623C98FBCC163AD5_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m14C1393388111243689CB93F35D8DB44C4988358_RuntimeMethod_var);
		// if (displaySubsystem == null || inputSubsystem == null)
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_13 = OculusLoader_get_displaySubsystem_m3C34FBC8696DE34C56909F858D3576DD7C7B3485(__this, /*hidden argument*/NULL);
		if (!L_13)
		{
			goto IL_008f;
		}
	}
	{
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_14 = OculusLoader_get_inputSubsystem_m1680C7424B1C78EE15B503024EB3491C7B65CEB1(__this, /*hidden argument*/NULL);
		if (L_14)
		{
			goto IL_0099;
		}
	}

IL_008f:
	{
		// Debug.LogError("Unable to start Oculus XR Plugin.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral31CC5FDE432F372979E09297A20E5523AC95DEA5, /*hidden argument*/NULL);
	}

IL_0099:
	{
		// if (displaySubsystem == null)
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_15 = OculusLoader_get_displaySubsystem_m3C34FBC8696DE34C56909F858D3576DD7C7B3485(__this, /*hidden argument*/NULL);
		if (L_15)
		{
			goto IL_00ab;
		}
	}
	{
		// Debug.LogError("Failed to load display subsystem.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral192882BABED5FE709DA9A0232447219008A4C2E1, /*hidden argument*/NULL);
	}

IL_00ab:
	{
		// if (inputSubsystem == null)
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_16 = OculusLoader_get_inputSubsystem_m1680C7424B1C78EE15B503024EB3491C7B65CEB1(__this, /*hidden argument*/NULL);
		if (L_16)
		{
			goto IL_00bd;
		}
	}
	{
		// Debug.LogError("Failed to load input subsystem.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral12BB1A00B2C0F3C5A3B0A4197CFAA42929C5D487, /*hidden argument*/NULL);
	}

IL_00bd:
	{
		// return displaySubsystem != null && inputSubsystem != null;
		XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_17 = OculusLoader_get_displaySubsystem_m3C34FBC8696DE34C56909F858D3576DD7C7B3485(__this, /*hidden argument*/NULL);
		if (!L_17)
		{
			goto IL_00cf;
		}
	}
	{
		XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 * L_18 = OculusLoader_get_inputSubsystem_m1680C7424B1C78EE15B503024EB3491C7B65CEB1(__this, /*hidden argument*/NULL);
		return (bool)((!(((RuntimeObject*)(XRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7 *)L_18) <= ((RuntimeObject*)(RuntimeObject *)NULL)))? 1 : 0);
	}

IL_00cf:
	{
		return (bool)0;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Start()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Start_mD7E1359E2170EB48C2288DB9D5BDDADC0614263B (OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OculusLoader_Start_mD7E1359E2170EB48C2288DB9D5BDDADC0614263B_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StartSubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_mEBB18C9C6541B32597AF07289DCB15FF6B48E5FF(__this, /*hidden argument*/XRLoaderHelper_StartSubsystem_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_mEBB18C9C6541B32597AF07289DCB15FF6B48E5FF_RuntimeMethod_var);
		// StartSubsystem<XRInputSubsystem>();
		XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m8991D424ED5C5A121235B9A12CCF0995AE2FDFAE(__this, /*hidden argument*/XRLoaderHelper_StartSubsystem_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m8991D424ED5C5A121235B9A12CCF0995AE2FDFAE_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Stop()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Stop_mFF3B0E6937212EADFF8B00B8B611AD0496947674 (OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OculusLoader_Stop_mFF3B0E6937212EADFF8B00B8B611AD0496947674_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// StopSubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_m6448E0BFA3373BD8A74DE4450C4FDD9C945D1773(__this, /*hidden argument*/XRLoaderHelper_StopSubsystem_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_m6448E0BFA3373BD8A74DE4450C4FDD9C945D1773_RuntimeMethod_var);
		// StopSubsystem<XRInputSubsystem>();
		XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m27C0F9202EDCF773FC27A3B8F8F977D1D1C54E86(__this, /*hidden argument*/XRLoaderHelper_StopSubsystem_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m27C0F9202EDCF773FC27A3B8F8F977D1D1C54E86_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
// System.Boolean Unity.XR.Oculus.OculusLoader::Deinitialize()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool OculusLoader_Deinitialize_mE99FBAABBFB50F8E2E61674E41D0695687074246 (OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OculusLoader_Deinitialize_mE99FBAABBFB50F8E2E61674E41D0695687074246_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// DestroySubsystem<XRDisplaySubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_mC460B6B1957412AF84A76B0E495EC44D01DB08A2(__this, /*hidden argument*/XRLoaderHelper_DestroySubsystem_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_mC460B6B1957412AF84A76B0E495EC44D01DB08A2_RuntimeMethod_var);
		// DestroySubsystem<XRInputSubsystem>();
		XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m294A4E2448F4AC92CDFCE518B5404C83BD9574C0(__this, /*hidden argument*/XRLoaderHelper_DestroySubsystem_TisXRInputSubsystem_t9B5A5AD5B134D55762D1FA5E425126EF7F86B2B7_m294A4E2448F4AC92CDFCE518B5404C83BD9574C0_RuntimeMethod_var);
		// return true;
		return (bool)1;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetUserDefinedSettings(UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF );
#endif
// System.Void Unity.XR.Oculus.OculusLoader::SetUserDefinedSettings(Unity.XR.Oculus.OculusLoader_UserDefinedSettings)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusLoader_SetUserDefinedSettings_m676FB26913A3FEA5386810B3F202CD942970468E (UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF  ___settings0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF );
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(UserDefinedSettings_t3CCCA3B5CC36E62D3BB00D40DCAE5C747E9EFBCF );
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetUserDefinedSettings", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetUserDefinedSettings)(___settings0);
	#else
	il2cppPInvokeFunc(___settings0);
	#endif

}
// Unity.XR.Oculus.OculusSettings Unity.XR.Oculus.OculusLoader::GetSettings()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB * OculusLoader_GetSettings_m04AAA3BD9759C2A306863EBF1E786C42DC9FBD64 (OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OculusLoader_GetSettings_m04AAA3BD9759C2A306863EBF1E786C42DC9FBD64_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = OculusSettings.s_Settings;
		OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB * L_0 = ((OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB_StaticFields*)il2cpp_codegen_static_fields_for(OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB_il2cpp_TypeInfo_var))->get_s_Settings_9();
		// return settings;
		return L_0;
	}
}
// System.Void Unity.XR.Oculus.OculusLoader::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusLoader__ctor_mEA213CD2F7D59E416D2E355F7711AE68DB7E5FCF (OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A * __this, const RuntimeMethod* method)
{
	{
		XRLoaderHelper__ctor_mA54557F61BDDFF0758DCFFE5864A1870A0ED67F8(__this, /*hidden argument*/NULL);
		return;
	}
}
// System.Void Unity.XR.Oculus.OculusLoader::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusLoader__cctor_m6F4E92A2F9036E08D68EBBAD04C1A97E02FE508E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OculusLoader__cctor_m6F4E92A2F9036E08D68EBBAD04C1A97E02FE508E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// private static List<XRDisplaySubsystemDescriptor> s_DisplaySubsystemDescriptors = new List<XRDisplaySubsystemDescriptor>();
		List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B * L_0 = (List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B *)il2cpp_codegen_object_new(List_1_t5E4033608A7A55910FACABCB5A85D37C5407922B_il2cpp_TypeInfo_var);
		List_1__ctor_mDAAFC37295400CAB2E0C95455A9DCFC3A9CC3AED(L_0, /*hidden argument*/List_1__ctor_mDAAFC37295400CAB2E0C95455A9DCFC3A9CC3AED_RuntimeMethod_var);
		((OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A_il2cpp_TypeInfo_var))->set_s_DisplaySubsystemDescriptors_5(L_0);
		// private static List<XRInputSubsystemDescriptor> s_InputSubsystemDescriptors = new List<XRInputSubsystemDescriptor>();
		List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0 * L_1 = (List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0 *)il2cpp_codegen_object_new(List_1_tFB313A6C0359D5571810963A427EF7116BE9CBA0_il2cpp_TypeInfo_var);
		List_1__ctor_m02E78EBC93F0DB75BB5F122F3429BA22B26C3454(L_1, /*hidden argument*/List_1__ctor_m02E78EBC93F0DB75BB5F122F3429BA22B26C3454_RuntimeMethod_var);
		((OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A_StaticFields*)il2cpp_codegen_static_fields_for(OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A_il2cpp_TypeInfo_var))->set_s_InputSubsystemDescriptors_6(L_1);
		return;
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
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.UInt16 Unity.XR.Oculus.OculusSettings::GetStereoRenderingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR uint16_t OculusSettings_GetStereoRenderingMode_m44525BFE309CFC17A0343E6430AA3FFEF5ACA141 (OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB * __this, const RuntimeMethod* method)
{
	{
		// return (ushort)m_StereoRenderingModeDesktop;
		int32_t L_0 = __this->get_m_StereoRenderingModeDesktop_4();
		return (uint16_t)(((int32_t)((uint16_t)L_0)));
	}
}
// System.Void Unity.XR.Oculus.OculusSettings::Awake()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusSettings_Awake_m8E77B98CD3F56B764048E4EB4083843D67C477BC (OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OculusSettings_Awake_m8E77B98CD3F56B764048E4EB4083843D67C477BC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// s_Settings = this;
		((OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB_StaticFields*)il2cpp_codegen_static_fields_for(OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB_il2cpp_TypeInfo_var))->set_s_Settings_9(__this);
		// }
		return;
	}
}
// System.Void Unity.XR.Oculus.OculusSettings::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusSettings__ctor_m2711268E12EADC0662918A17D1FD714F11020373 (OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB * __this, const RuntimeMethod* method)
{
	{
		// public bool SharedDepthBuffer = true;
		__this->set_SharedDepthBuffer_6((bool)1);
		// public bool DashSupport = true;
		__this->set_DashSupport_7((bool)1);
		// public bool V2Signing = true;
		__this->set_V2Signing_8((bool)1);
		ScriptableObject__ctor_m6E2B3821A4A361556FC12E9B1C71E1D5DC002C5B(__this, /*hidden argument*/NULL);
		return;
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
// System.Void Unity.XR.Oculus.OculusUsages::.cctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void OculusUsages__cctor_m2D2246C9132CF0F1FF5753D5BA3320B658BD3418 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OculusUsages__cctor_m2D2246C9132CF0F1FF5753D5BA3320B658BD3418_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// public static InputFeatureUsage<bool> volumeUp = new InputFeatureUsage<bool>("VolumeUp");
		InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_0;
		memset((&L_0), 0, sizeof(L_0));
		InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82((&L_0), _stringLiteral91BE93D00C36B01CEDFB6516969EE60542AFCCB8, /*hidden argument*/InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82_RuntimeMethod_var);
		((OculusUsages_t9BA1C0F3E6E8FFA1BA9FE2F2E885F77A2E1019D9_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t9BA1C0F3E6E8FFA1BA9FE2F2E885F77A2E1019D9_il2cpp_TypeInfo_var))->set_volumeUp_0(L_0);
		// public static InputFeatureUsage<bool> volumeDown = new InputFeatureUsage<bool>("VolumeDown");
		InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_1;
		memset((&L_1), 0, sizeof(L_1));
		InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82((&L_1), _stringLiteral3579581BB113EF727A391C0944FE98DFC18A68FA, /*hidden argument*/InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82_RuntimeMethod_var);
		((OculusUsages_t9BA1C0F3E6E8FFA1BA9FE2F2E885F77A2E1019D9_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t9BA1C0F3E6E8FFA1BA9FE2F2E885F77A2E1019D9_il2cpp_TypeInfo_var))->set_volumeDown_1(L_1);
		// public static InputFeatureUsage<bool> thumbrest = new InputFeatureUsage<bool>("Thumbrest");
		InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_2;
		memset((&L_2), 0, sizeof(L_2));
		InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82((&L_2), _stringLiteralFABB452FD6B77C0B143B0BAEAE1C599D1A2AD746, /*hidden argument*/InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82_RuntimeMethod_var);
		((OculusUsages_t9BA1C0F3E6E8FFA1BA9FE2F2E885F77A2E1019D9_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t9BA1C0F3E6E8FFA1BA9FE2F2E885F77A2E1019D9_il2cpp_TypeInfo_var))->set_thumbrest_2(L_2);
		// public static InputFeatureUsage<bool> indexTouch = new InputFeatureUsage<bool>("IndexTouch");
		InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_3;
		memset((&L_3), 0, sizeof(L_3));
		InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82((&L_3), _stringLiteral0BE87C1B27B7697B267E86874A6338D953C17EA6, /*hidden argument*/InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82_RuntimeMethod_var);
		((OculusUsages_t9BA1C0F3E6E8FFA1BA9FE2F2E885F77A2E1019D9_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t9BA1C0F3E6E8FFA1BA9FE2F2E885F77A2E1019D9_il2cpp_TypeInfo_var))->set_indexTouch_3(L_3);
		// public static InputFeatureUsage<bool> thumbTouch = new InputFeatureUsage<bool>("ThumbTouch");
		InputFeatureUsage_1_t4AB0A4EA91ECC31F86EA5B66EC6727B694658B3E  L_4;
		memset((&L_4), 0, sizeof(L_4));
		InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82((&L_4), _stringLiteral24B366875A68E1DF8F4A829DE284A141CF566379, /*hidden argument*/InputFeatureUsage_1__ctor_mC49A5E081361EA5F0DAC95BDA74915F47155EE82_RuntimeMethod_var);
		((OculusUsages_t9BA1C0F3E6E8FFA1BA9FE2F2E885F77A2E1019D9_StaticFields*)il2cpp_codegen_static_fields_for(OculusUsages_t9BA1C0F3E6E8FFA1BA9FE2F2E885F77A2E1019D9_il2cpp_TypeInfo_var))->set_thumbTouch_4(L_4);
		return;
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
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetCPULevel(int32_t);
#endif
// System.Void Unity.XR.Oculus.Performance::SetCPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Performance_SetCPULevel_mEACA465EA6E489B568D999F8C213BD2ABA29511A (int32_t ___cpuLevel0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetCPULevel", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetCPULevel)(___cpuLevel0);
	#else
	il2cppPInvokeFunc(___cpuLevel0);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetGPULevel(int32_t);
#endif
// System.Void Unity.XR.Oculus.Performance::SetGPULevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Performance_SetGPULevel_m9C5F4B030926A3DF3634337FBE75F1711B9C0521 (int32_t ___gpuLevel0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetGPULevel", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetGPULevel)(___gpuLevel0);
	#else
	il2cppPInvokeFunc(___gpuLevel0);
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL GetOVRPVersion(uint8_t*);
#endif
// System.Void Unity.XR.Oculus.Stats::GetOVRPVersion(System.Byte[])
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stats_GetOVRPVersion_m63EA02B7AA5DE197EEF264EF7C4DF9BE431CD974 (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* ___version0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (uint8_t*);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(void*);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetOVRPVersion", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Marshaling of parameter '___version0' to native representation
	uint8_t* ____version0_marshaled = NULL;
	if (___version0 != NULL)
	{
		____version0_marshaled = reinterpret_cast<uint8_t*>((___version0)->GetAddressAtUnchecked(0));
	}

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(GetOVRPVersion)(____version0_marshaled);
	#else
	il2cppPInvokeFunc(____version0_marshaled);
	#endif

}
// System.String Unity.XR.Oculus.Stats::get_PluginVersion()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR String_t* Stats_get_PluginVersion_mD7959FB1DCC15FD9004694D9B4522C1A7AF14CE8 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Stats_get_PluginVersion_mD7959FB1DCC15FD9004694D9B4522C1A7AF14CE8_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* V_0 = NULL;
	{
		// byte[] buf = new byte[256];
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_0 = (ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821*)SZArrayNew(ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821_il2cpp_TypeInfo_var, (uint32_t)((int32_t)256));
		V_0 = L_0;
		// GetOVRPVersion(buf);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_1 = V_0;
		Stats_GetOVRPVersion_m63EA02B7AA5DE197EEF264EF7C4DF9BE431CD974(L_1, /*hidden argument*/NULL);
		// return System.Text.Encoding.ASCII.GetString(buf);
		Encoding_t7837A3C0F55EAE0E3959A53C6D6E88B113ED78A4 * L_2 = Encoding_get_ASCII_m9B673AE3152AB04D07CADE6E5E142C785B5BC94E(/*hidden argument*/NULL);
		ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* L_3 = V_0;
		NullCheck(L_2);
		String_t* L_4 = VirtFuncInvoker1< String_t*, ByteU5BU5D_tD06FDBE8142446525DF1C40351D523A228373821* >::Invoke(31 /* System.String System.Text.Encoding::GetString(System.Byte[]) */, L_2, L_3);
		return L_4;
	}
}
// UnityEngine.IntegratedSubsystem Unity.XR.Oculus.Stats::GetOculusDisplaySubsystem()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	Enumerator_tB907916596D7281DD61CE7576F03AA6EDC78198C  V_0;
	memset((&V_0), 0, sizeof(V_0));
	XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * V_1 = NULL;
	IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * V_2 = NULL;
	Exception_t * __last_unhandled_exception = 0;
	NO_UNUSED_WARNING (__last_unhandled_exception);
	Exception_t * __exception_local = 0;
	NO_UNUSED_WARNING (__exception_local);
	void* __leave_targets_storage = alloca(sizeof(int32_t) * 2);
	il2cpp::utils::LeaveTargetStack __leave_targets(__leave_targets_storage);
	NO_UNUSED_WARNING (__leave_targets);
	{
		// if (m_Display != null)
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = ((Stats_t9D07B383CAB5B07E1C77574A081F067DB79E3414_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t9D07B383CAB5B07E1C77574A081F067DB79E3414_il2cpp_TypeInfo_var))->get_m_Display_0();
		if (!L_0)
		{
			goto IL_000d;
		}
	}
	{
		// return m_Display;
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_1 = ((Stats_t9D07B383CAB5B07E1C77574A081F067DB79E3414_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t9D07B383CAB5B07E1C77574A081F067DB79E3414_il2cpp_TypeInfo_var))->get_m_Display_0();
		return L_1;
	}

IL_000d:
	{
		// List<XRDisplaySubsystem> displays = new List<XRDisplaySubsystem>();
		List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907 * L_2 = (List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907 *)il2cpp_codegen_object_new(List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907_il2cpp_TypeInfo_var);
		List_1__ctor_m9E65305FCF8F586CBF6B85C242AFDE06DF2C8F56(L_2, /*hidden argument*/List_1__ctor_m9E65305FCF8F586CBF6B85C242AFDE06DF2C8F56_RuntimeMethod_var);
		// SubsystemManager.GetInstances(displays);
		List_1_tB5C8A3CEC3C1455A9EA85FEAA32A8100E1C07907 * L_3 = L_2;
		IL2CPP_RUNTIME_CLASS_INIT(SubsystemManager_tFEDEC70DC4119830C96B42915123C27FEDDB0F58_il2cpp_TypeInfo_var);
		SubsystemManager_GetInstances_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_mF6CAC97479F9849D66E65AFA5EC5CEE343DE8F61(L_3, /*hidden argument*/SubsystemManager_GetInstances_TisXRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_mF6CAC97479F9849D66E65AFA5EC5CEE343DE8F61_RuntimeMethod_var);
		// foreach (XRDisplaySubsystem xrDisplaySubsystem in displays)
		NullCheck(L_3);
		Enumerator_tB907916596D7281DD61CE7576F03AA6EDC78198C  L_4 = List_1_GetEnumerator_mD8BBBF0C49392BEB77407D9460D4A139476BA8C4(L_3, /*hidden argument*/List_1_GetEnumerator_mD8BBBF0C49392BEB77407D9460D4A139476BA8C4_RuntimeMethod_var);
		V_0 = L_4;
	}

IL_001e:
	try
	{ // begin try (depth: 1)
		{
			goto IL_0055;
		}

IL_0020:
		{
			// foreach (XRDisplaySubsystem xrDisplaySubsystem in displays)
			XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_5 = Enumerator_get_Current_mAA5B5F41FF5A5AABEB7EEDC6E4B86AD10411BFD3_inline((Enumerator_tB907916596D7281DD61CE7576F03AA6EDC78198C *)(&V_0), /*hidden argument*/Enumerator_get_Current_mAA5B5F41FF5A5AABEB7EEDC6E4B86AD10411BFD3_RuntimeMethod_var);
			V_1 = L_5;
			// if (xrDisplaySubsystem.SubsystemDescriptor.id == "oculus display" && xrDisplaySubsystem.running)
			XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_6 = V_1;
			NullCheck(L_6);
			XRDisplaySubsystemDescriptor_tC24B1C560B0C50AD3094D5F22BFFD25DD7AE6259 * L_7 = IntegratedSubsystem_1_get_SubsystemDescriptor_mC7EBA3B4384325B5C5B4ED321175057FC0178009(L_6, /*hidden argument*/IntegratedSubsystem_1_get_SubsystemDescriptor_mC7EBA3B4384325B5C5B4ED321175057FC0178009_RuntimeMethod_var);
			NullCheck(L_7);
			String_t* L_8 = IntegratedSubsystemDescriptor_get_id_m79F62994737A858E9F906C33C1B43E68E1A7E01D(L_7, /*hidden argument*/NULL);
			bool L_9 = String_op_Equality_m139F0E4195AE2F856019E63B241F36F016997FCE(L_8, _stringLiteralE21EDE835D7BAED96D99D059B31AEB7615CF73E7, /*hidden argument*/NULL);
			if (!L_9)
			{
				goto IL_0055;
			}
		}

IL_003f:
		{
			XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_10 = V_1;
			NullCheck(L_10);
			bool L_11 = IntegratedSubsystem_get_running_m39FED0A48B27096E2957169B19712DFA11877624(L_10, /*hidden argument*/NULL);
			if (!L_11)
			{
				goto IL_0055;
			}
		}

IL_0047:
		{
			// m_Display = xrDisplaySubsystem;
			XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 * L_12 = V_1;
			((Stats_t9D07B383CAB5B07E1C77574A081F067DB79E3414_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t9D07B383CAB5B07E1C77574A081F067DB79E3414_il2cpp_TypeInfo_var))->set_m_Display_0(L_12);
			// return m_Display;
			IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_13 = ((Stats_t9D07B383CAB5B07E1C77574A081F067DB79E3414_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t9D07B383CAB5B07E1C77574A081F067DB79E3414_il2cpp_TypeInfo_var))->get_m_Display_0();
			V_2 = L_13;
			IL2CPP_LEAVE(0x7E, FINALLY_0060);
		}

IL_0055:
		{
			// foreach (XRDisplaySubsystem xrDisplaySubsystem in displays)
			bool L_14 = Enumerator_MoveNext_m9ACEA798ABBAE993F589D5867CAC436030D26A69((Enumerator_tB907916596D7281DD61CE7576F03AA6EDC78198C *)(&V_0), /*hidden argument*/Enumerator_MoveNext_m9ACEA798ABBAE993F589D5867CAC436030D26A69_RuntimeMethod_var);
			if (L_14)
			{
				goto IL_0020;
			}
		}

IL_005e:
		{
			IL2CPP_LEAVE(0x6E, FINALLY_0060);
		}
	} // end try (depth: 1)
	catch(Il2CppExceptionWrapper& e)
	{
		__last_unhandled_exception = (Exception_t *)e.ex;
		goto FINALLY_0060;
	}

FINALLY_0060:
	{ // begin finally (depth: 1)
		Enumerator_Dispose_mD12E19406ADA2061CFE2D76D8D5545ACDD335048((Enumerator_tB907916596D7281DD61CE7576F03AA6EDC78198C *)(&V_0), /*hidden argument*/Enumerator_Dispose_mD12E19406ADA2061CFE2D76D8D5545ACDD335048_RuntimeMethod_var);
		IL2CPP_END_FINALLY(96)
	} // end finally (depth: 1)
	IL2CPP_CLEANUP(96)
	{
		IL2CPP_JUMP_TBL(0x7E, IL_007e)
		IL2CPP_JUMP_TBL(0x6E, IL_006e)
		IL2CPP_RETHROW_IF_UNHANDLED(Exception_t *)
	}

IL_006e:
	{
		// Debug.LogError("No active Oculus display subsystem was found.");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteralD0225A246A7E047F10A795BF38888BB5CB5E033E, /*hidden argument*/NULL);
		// return m_Display;
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_15 = ((Stats_t9D07B383CAB5B07E1C77574A081F067DB79E3414_StaticFields*)il2cpp_codegen_static_fields_for(Stats_t9D07B383CAB5B07E1C77574A081F067DB79E3414_il2cpp_TypeInfo_var))->get_m_Display_0();
		return L_15;
	}

IL_007e:
	{
		// }
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_16 = V_2;
		return L_16;
	}
}
// System.Void Unity.XR.Oculus.Stats::.ctor()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Stats__ctor_m443B34A512CE2028577FD4D77212B43FB3FF4EBF (Stats_t9D07B383CAB5B07E1C77574A081F067DB79E3414 * __this, const RuntimeMethod* method)
{
	{
		Object__ctor_m925ECA5E85CA100E3FB86A4F9E15C120E9A184C0(__this, /*hidden argument*/NULL);
		return;
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
// System.Single Unity.XR.Oculus.Stats_AdaptivePerformance::get_GPUAppTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_GPUAppTime_mAED024A0483370A85016386A68818AC980EA9D74 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdaptivePerformance_get_GPUAppTime_mAED024A0483370A85016386A68818AC980EA9D74_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetAppGPUTimeLastFrame(out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		NullCheck(((XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_il2cpp_TypeInfo_var)));
		XRDisplaySubsystem_TryGetAppGPUTimeLastFrame_m39A7064F9204C58E72514AFB3949D80EC497E4D7(((XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_il2cpp_TypeInfo_var)), (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.XR.Oculus.Stats_AdaptivePerformance::get_GPUCompositorTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_GPUCompositorTime_mB97EFA6DC02F90559089E7CDEA9C55AE3F8DA660 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdaptivePerformance_get_GPUCompositorTime_mB97EFA6DC02F90559089E7CDEA9C55AE3F8DA660_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetCompositorGPUTimeLastFrame(out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		NullCheck(((XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_il2cpp_TypeInfo_var)));
		XRDisplaySubsystem_TryGetCompositorGPUTimeLastFrame_mF05685742AB5108E3436AD1B376ABC9B80756C11(((XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_il2cpp_TypeInfo_var)), (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.XR.Oculus.Stats_AdaptivePerformance::get_MotionToPhoton()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_MotionToPhoton_mFC9CE75884A6C32455CF3AF17B9A16532C96D56A (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdaptivePerformance_get_MotionToPhoton_mFC9CE75884A6C32455CF3AF17B9A16532C96D56A_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetMotionToPhoton(out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		NullCheck(((XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_il2cpp_TypeInfo_var)));
		XRDisplaySubsystem_TryGetMotionToPhoton_m59793D6EA38CE78324E4B8AC45DB412CAB2FDF65(((XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_il2cpp_TypeInfo_var)), (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.XR.Oculus.Stats_AdaptivePerformance::get_RefreshRate()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_RefreshRate_m39EC5BC97621B8BD646AC7C887A91DF57B15FC75 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdaptivePerformance_get_RefreshRate_m39EC5BC97621B8BD646AC7C887A91DF57B15FC75_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// ((XRDisplaySubsystem) GetOculusDisplaySubsystem()).TryGetDisplayRefreshRate(out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		NullCheck(((XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_il2cpp_TypeInfo_var)));
		XRDisplaySubsystem_TryGetDisplayRefreshRate_m72B428078DA4A73598EEE0C4DBFB3C5CE805155E(((XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0 *)CastclassClass((RuntimeObject*)L_0, XRDisplaySubsystem_t2E090C1B6925B11C9296DBBAF57F9364AADA13E0_il2cpp_TypeInfo_var)), (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.XR.Oculus.Stats_AdaptivePerformance::get_BatteryTemp()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_BatteryTemp_m834BA60812FAD6671BEB06912AF7AE678108643C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdaptivePerformance_get_BatteryTemp_m834BA60812FAD6671BEB06912AF7AE678108643C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "batteryTemperature", out batteryTemp);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteralC4C4FA2D5E383BE571A0D65DA213E30D6F3EF338, (float*)(&V_0), /*hidden argument*/NULL);
		// return batteryTemp;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.XR.Oculus.Stats_AdaptivePerformance::get_BatteryLevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_BatteryLevel_m358B9A20F3304FD50E239478ECA096569B4A3898 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdaptivePerformance_get_BatteryLevel_m358B9A20F3304FD50E239478ECA096569B4A3898_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "batteryLevel", out batteryLevel);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteralE4E4965B42BD6E1730500D5B7F81F56AF19693D8, (float*)(&V_0), /*hidden argument*/NULL);
		// return batteryLevel;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Boolean Unity.XR.Oculus.Stats_AdaptivePerformance::get_PowerSavingMode()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR bool AdaptivePerformance_get_PowerSavingMode_m7C401BF9A1BD4A42B0E78695E0CC2730B410DF92 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdaptivePerformance_get_PowerSavingMode_m7C401BF9A1BD4A42B0E78695E0CC2730B410DF92_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "powerSavingMode", out powerSavingMode);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteralD050945A00012C7D91F79E3253F1F045CFDBCA1B, (float*)(&V_0), /*hidden argument*/NULL);
		// return !(powerSavingMode == 0.0f);
		float L_1 = V_0;
		return (bool)((((int32_t)((((float)L_1) == ((float)(0.0f)))? 1 : 0)) == ((int32_t)0))? 1 : 0);
	}
}
// System.Single Unity.XR.Oculus.Stats_AdaptivePerformance::get_AdaptivePerformanceScale()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AdaptivePerformance_get_AdaptivePerformanceScale_m8E3F192C3429E2D0B4C88C7E99AB0F6014C228F3 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdaptivePerformance_get_AdaptivePerformanceScale_m8E3F192C3429E2D0B4C88C7E99AB0F6014C228F3_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "adaptivePerformanceScale", out performanceScale);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteralEC3A5C28C2C3A0AECB6497CA9CF9429CE2A4213C, (float*)(&V_0), /*hidden argument*/NULL);
		// return performanceScale;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Int32 Unity.XR.Oculus.Stats_AdaptivePerformance::get_CPULevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdaptivePerformance_get_CPULevel_mA4BD2F9931D48840BD615C0B999F063F98255F1C (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdaptivePerformance_get_CPULevel_mA4BD2F9931D48840BD615C0B999F063F98255F1C_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "cpuLevel", out cpuLevel);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteral755FE26213567A07490E19BB7AFA2B34D3D2E0FD, (float*)(&V_0), /*hidden argument*/NULL);
		// return (int) cpuLevel;
		float L_1 = V_0;
		return (((int32_t)((int32_t)L_1)));
	}
}
// System.Int32 Unity.XR.Oculus.Stats_AdaptivePerformance::get_GPULevel()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR int32_t AdaptivePerformance_get_GPULevel_m6FDA058AFF59A4C398A83E0DCED4BFDE0408E526 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AdaptivePerformance_get_GPULevel_m6FDA058AFF59A4C398A83E0DCED4BFDE0408E526_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "gpuLevel", out gpuLevel);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteral57DEA530786A2B67CE6125AE0D81BFCC19AD11AC, (float*)(&V_0), /*hidden argument*/NULL);
		// return (int) gpuLevel;
		float L_1 = V_0;
		return (((int32_t)((int32_t)L_1)));
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
// System.Single Unity.XR.Oculus.Stats_AppMetrics::get_AppQueueAheadTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_AppQueueAheadTime_m4A5AA30C1B9BF9C37BFC3C9E61C3056CD7C15514 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppMetrics_get_AppQueueAheadTime_m4A5AA30C1B9BF9C37BFC3C9E61C3056CD7C15514_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.appqueueahead", out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteral544B1FB3DBB7DD517D4DFA3BB7566417BC6A7B53, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.XR.Oculus.Stats_AppMetrics::get_AppCPUElapsedTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_AppCPUElapsedTime_m06E49485D3DA09044D77A0C726530A2CEC8BBCAC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppMetrics_get_AppCPUElapsedTime_m06E49485D3DA09044D77A0C726530A2CEC8BBCAC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.cpuelapsedtime", out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteralFB18074CA13FEE7DB48AFB8B8756C0545FEEE559, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.XR.Oculus.Stats_AppMetrics::get_CompositorDroppedFrames()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CompositorDroppedFrames_m1074FD2C4215FDDFF7A45CE3960C5464A615BE84 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppMetrics_get_CompositorDroppedFrames_m1074FD2C4215FDDFF7A45CE3960C5464A615BE84_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositordroppedframes", out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteral52A447273D5B11A04F9A57BA20859061D62BB368, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.XR.Oculus.Stats_AppMetrics::get_CompositorLatency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CompositorLatency_mD0387C430A330E9460D00DF878B8E61B566FA656 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppMetrics_get_CompositorLatency_mD0387C430A330E9460D00DF878B8E61B566FA656_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorlatency", out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteralFD0F75025CE362968E94689BF9DD7446571D976B, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.XR.Oculus.Stats_AppMetrics::get_CompositorCPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CompositorCPUTime_mBF1596B35ACC2D0C3C59FBEE0705A992932D5782 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppMetrics_get_CompositorCPUTime_mBF1596B35ACC2D0C3C59FBEE0705A992932D5782_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorcputime", out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteralF588E268490B13AADF6A2C81D18DDDF9A895DD52, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.XR.Oculus.Stats_AppMetrics::get_CPUStartToGPUEnd()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_CPUStartToGPUEnd_m2B5AD590F1DBCCF36889701F99D3DBBD85C30952 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppMetrics_get_CPUStartToGPUEnd_m2B5AD590F1DBCCF36889701F99D3DBBD85C30952_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorcpustartgpuendelapsedtime", out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteral05CDCC1BC358E2422C7126E6242D29ADEA37F67D, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.XR.Oculus.Stats_AppMetrics::get_GPUEndToVsync()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float AppMetrics_get_GPUEndToVsync_mF8221BE5551A5B3A0AE768E5920C34E93397FA06 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (AppMetrics_get_GPUEndToVsync_mF8221BE5551A5B3A0AE768E5920C34E93397FA06_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "appstats.compositorgpuendtovsyncelapsedtime", out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteralD465F32B03C1EC0FA8942E0EC44411CB4A82CFE3, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL EnableAppMetrics(int32_t);
#endif
// System.Void Unity.XR.Oculus.Stats_AppMetrics::EnableAppMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void AppMetrics_EnableAppMetrics_m7595E3DFDC9B4E4F7110A7109673E0275A1F8D8F (bool ___enable0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "EnableAppMetrics", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(EnableAppMetrics)(static_cast<int32_t>(___enable0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___enable0));
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Single Unity.XR.Oculus.Stats_PerfMetrics::get_AppCPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_AppCPUTime_m50779DE55ECCA0797C58F6396A17A0FA74D2519E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PerfMetrics_get_AppCPUTime_m50779DE55ECCA0797C58F6396A17A0FA74D2519E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.appcputime", out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteralB0C960FD5F37E85E43E8CFE4AAD73715100EC7AE, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.XR.Oculus.Stats_PerfMetrics::get_AppGPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_AppGPUTime_m36B27DE1C9643F359E66CE3A2096A3FC7A649AF7 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PerfMetrics_get_AppGPUTime_m36B27DE1C9643F359E66CE3A2096A3FC7A649AF7_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.appgputime", out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteral2BDD0D57054B976944B1583DDB64DFFAE287DE68, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.XR.Oculus.Stats_PerfMetrics::get_CompositorCPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CompositorCPUTime_m66679B4E004A15B61FD8A18231C933040919BCDC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PerfMetrics_get_CompositorCPUTime_m66679B4E004A15B61FD8A18231C933040919BCDC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.compositorcputime", out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteral810FEF6D70DAD231F6FB6A077667413947BBCD52, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.XR.Oculus.Stats_PerfMetrics::get_CompositorGPUTime()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CompositorGPUTime_mBAE5717D6DE7050F014ED048212B057A86D5A257 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PerfMetrics_get_CompositorGPUTime_mBAE5717D6DE7050F014ED048212B057A86D5A257_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.compositorgputime", out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteral60A0828E611C043D09A4774AFDC0BF9DD91751A0, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.XR.Oculus.Stats_PerfMetrics::get_GPUUtilization()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_GPUUtilization_m1AF0A9F0B84F421E22EFE520D18059A83D0A04EC (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PerfMetrics_get_GPUUtilization_m1AF0A9F0B84F421E22EFE520D18059A83D0A04EC_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.gpuutil", out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteral70D4399C8DA5122485AA91D38CD24B429113CB21, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.XR.Oculus.Stats_PerfMetrics::get_CPUUtilizationAverage()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CPUUtilizationAverage_m25578CE1731392526BEDD93D2913FCF1F67C7AA5 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PerfMetrics_get_CPUUtilizationAverage_m25578CE1731392526BEDD93D2913FCF1F67C7AA5_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.cpuutilavg", out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteralF498F82E9A2BE327516148D21C24E18DC527AF40, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.XR.Oculus.Stats_PerfMetrics::get_CPUUtilizationWorst()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CPUUtilizationWorst_m3BBE5493F8FD2BB735FFED1B5597D91D5AD196C9 (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PerfMetrics_get_CPUUtilizationWorst_m3BBE5493F8FD2BB735FFED1B5597D91D5AD196C9_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.cpuutilworst", out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteral7E65BC873CE3F3F8A3AE5567BF4488841DC40578, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.XR.Oculus.Stats_PerfMetrics::get_CPUClockFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_CPUClockFrequency_m4A53D0EA4B5D05966F363980D37EA812C3EBD95E (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PerfMetrics_get_CPUClockFrequency_m4A53D0EA4B5D05966F363980D37EA812C3EBD95E_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.cpuclockfreq", out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteralB6361F21367A40A25B2D64755F099457FD8CAD0C, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
// System.Single Unity.XR.Oculus.Stats_PerfMetrics::get_GPUClockFrequency()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR float PerfMetrics_get_GPUClockFrequency_mAA1AE3B162915408553E1390AE65A2112AC1A2FE (const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (PerfMetrics_get_GPUClockFrequency_mAA1AE3B162915408553E1390AE65A2112AC1A2FE_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	float V_0 = 0.0f;
	{
		// XRStats.TryGetStat(GetOculusDisplaySubsystem(), "perfmetrics.gpuclockfreq", out val);
		IntegratedSubsystem_tEFE71989A825ABA8955C1B1505C8F2405FA61026 * L_0 = Stats_GetOculusDisplaySubsystem_m953D163A7DA2FC0B80145D1BDEA34B376A29A615(/*hidden argument*/NULL);
		XRStats_TryGetStat_mA8FD79FA73208E78F308695D5A8E6549FF446AFC(L_0, _stringLiteral204709F98DC5232A267502574FBD80B4D5BBD3B6, (float*)(&V_0), /*hidden argument*/NULL);
		// return val;
		float L_1 = V_0;
		return L_1;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL EnablePerfMetrics(int32_t);
#endif
// System.Void Unity.XR.Oculus.Stats_PerfMetrics::EnablePerfMetrics(System.Boolean)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void PerfMetrics_EnablePerfMetrics_mFC246FC9C3A081A0D67A376910B97B58F5823E1E (bool ___enable0, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 4;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "EnablePerfMetrics", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(EnablePerfMetrics)(static_cast<int32_t>(___enable0));
	#else
	il2cppPInvokeFunc(static_cast<int32_t>(___enable0));
	#endif

}
#ifdef __clang__
#pragma clang diagnostic pop
#endif
#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// System.Void Unity.XR.Oculus.Utils::SetColorScaleAndOffset(UnityEngine.Vector4,UnityEngine.Vector4)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetColorScaleAndOffset_m7A34878A17922F21854BD3FC1B6A666696717F6F (Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___colorScale0, Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  ___colorOffset1, const RuntimeMethod* method)
{
	{
		// SetColorScale(colorScale.x, colorScale.y, colorScale.z, colorScale.w);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_0 = ___colorScale0;
		float L_1 = L_0.get_x_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_2 = ___colorScale0;
		float L_3 = L_2.get_y_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_4 = ___colorScale0;
		float L_5 = L_4.get_z_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_6 = ___colorScale0;
		float L_7 = L_6.get_w_4();
		Utils_SetColorScale_m6A70BD5EF8C4CC01E29E23FCF96851B2E17B5670(L_1, L_3, L_5, L_7, /*hidden argument*/NULL);
		// SetColorOffset(colorOffset.x, colorOffset.y, colorOffset.z, colorOffset.w);
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_8 = ___colorOffset1;
		float L_9 = L_8.get_x_1();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_10 = ___colorOffset1;
		float L_11 = L_10.get_y_2();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_12 = ___colorOffset1;
		float L_13 = L_12.get_z_3();
		Vector4_tD148D6428C3F8FF6CD998F82090113C2B490B76E  L_14 = ___colorOffset1;
		float L_15 = L_14.get_w_4();
		Utils_SetColorOffset_m458AB69D9E5B4AEC408F28A4174F056ABD03B486(L_9, L_11, L_13, L_15, /*hidden argument*/NULL);
		// }
		return;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetColorScale(float, float, float, float);
#endif
// System.Void Unity.XR.Oculus.Utils::SetColorScale(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetColorScale_m6A70BD5EF8C4CC01E29E23FCF96851B2E17B5670 (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float, float, float, float);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float) + sizeof(float) + sizeof(float) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetColorScale", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetColorScale)(___x0, ___y1, ___z2, ___w3);
	#else
	il2cppPInvokeFunc(___x0, ___y1, ___z2, ___w3);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL SetColorOffset(float, float, float, float);
#endif
// System.Void Unity.XR.Oculus.Utils::SetColorOffset(System.Single,System.Single,System.Single,System.Single)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetColorOffset_m458AB69D9E5B4AEC408F28A4174F056ABD03B486 (float ___x0, float ___y1, float ___z2, float ___w3, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (float, float, float, float);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(float) + sizeof(float) + sizeof(float) + sizeof(float);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "SetColorOffset", IL2CPP_CALL_DEFAULT, CHARSET_UNICODE, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(SetColorOffset)(___x0, ___y1, ___z2, ___w3);
	#else
	il2cppPInvokeFunc(___x0, ___y1, ___z2, ___w3);
	#endif

}
// System.Void Unity.XR.Oculus.Utils::SetFoveationLevel(System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_SetFoveationLevel_m9670124F61C14F1BA36641E112B62C66537B19B6 (int32_t ___level0, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (Utils_SetFoveationLevel_m9670124F61C14F1BA36641E112B62C66537B19B6_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	intptr_t V_0;
	memset((&V_0), 0, sizeof(V_0));
	{
		// IntPtr ovrJava = GetOvrJava();
		intptr_t L_0 = Utils_GetOvrJava_m808618B71D47DBE7E75974CFA618829681F04ED3(/*hidden argument*/NULL);
		V_0 = (intptr_t)L_0;
		// if (ovrJava == IntPtr.Zero)
		intptr_t L_1 = V_0;
		bool L_2 = IntPtr_op_Equality_mEE8D9FD2DFE312BBAA8B4ED3BF7976B3142A5934((intptr_t)L_1, (intptr_t)(0), /*hidden argument*/NULL);
		if (!L_2)
		{
			goto IL_001e;
		}
	}
	{
		// Debug.LogError("Can't set foveation level");
		IL2CPP_RUNTIME_CLASS_INIT(Debug_t7B5FCB117E2FD63B6838BC52821B252E2BFB61C4_il2cpp_TypeInfo_var);
		Debug_LogError_m3BCF9B78263152261565DCA9DB7D55F0C391ED29(_stringLiteral3A8680F6B8ADDB2EBEF403D57850D47C9BD22881, /*hidden argument*/NULL);
		// return;
		return;
	}

IL_001e:
	{
		// vrapi_SetPropertyInt(ovrJava, OvrProperty.FoveationLevel, level);
		intptr_t L_3 = V_0;
		int32_t L_4 = ___level0;
		Utils_vrapi_SetPropertyInt_mE7EC95780C0D1B0E32A4D04D352AF54A0299A6D6((intptr_t)L_3, ((int32_t)15), L_4, /*hidden argument*/NULL);
		// }
		return;
	}
}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C void DEFAULT_CALL vrapi_SetPropertyInt(intptr_t, int32_t, int32_t);
#endif
// System.Void Unity.XR.Oculus.Utils::vrapi_SetPropertyInt(System.IntPtr,Unity.XR.Oculus.Utils_OvrProperty,System.Int32)
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR void Utils_vrapi_SetPropertyInt_mE7EC95780C0D1B0E32A4D04D352AF54A0299A6D6 (intptr_t ___java0, int32_t ___prop1, int32_t ___val2, const RuntimeMethod* method)
{
	typedef void (DEFAULT_CALL *PInvokeFunc) (intptr_t, int32_t, int32_t);
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = sizeof(intptr_t) + sizeof(int32_t) + sizeof(int32_t);
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("vrapi"), "vrapi_SetPropertyInt", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	reinterpret_cast<PInvokeFunc>(vrapi_SetPropertyInt)(___java0, ___prop1, ___val2);
	#else
	il2cppPInvokeFunc(___java0, ___prop1, ___val2);
	#endif

}
#if FORCE_PINVOKE_INTERNAL
IL2CPP_EXTERN_C intptr_t DEFAULT_CALL GetOvrJava();
#endif
// System.IntPtr Unity.XR.Oculus.Utils::GetOvrJava()
IL2CPP_EXTERN_C IL2CPP_METHOD_ATTR intptr_t Utils_GetOvrJava_m808618B71D47DBE7E75974CFA618829681F04ED3 (const RuntimeMethod* method)
{
	typedef intptr_t (DEFAULT_CALL *PInvokeFunc) ();
	#if !FORCE_PINVOKE_INTERNAL
	static PInvokeFunc il2cppPInvokeFunc;
	if (il2cppPInvokeFunc == NULL)
	{
		int parameterSize = 0;
		il2cppPInvokeFunc = il2cpp_codegen_resolve_pinvoke<PInvokeFunc>(IL2CPP_NATIVE_STRING("OculusXRPlugin"), "GetOvrJava", IL2CPP_CALL_DEFAULT, CHARSET_NOT_SPECIFIED, parameterSize, false);
		IL2CPP_ASSERT(il2cppPInvokeFunc != NULL);
	}
	#endif

	// Native function invocation
	#if FORCE_PINVOKE_INTERNAL
	intptr_t returnValue = reinterpret_cast<PInvokeFunc>(GetOvrJava)();
	#else
	intptr_t returnValue = il2cppPInvokeFunc();
	#endif

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
IL2CPP_EXTERN_C inline  IL2CPP_METHOD_ATTR OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB * OculusLoader_GetSettings_m04AAA3BD9759C2A306863EBF1E786C42DC9FBD64_inline (OculusLoader_t6A0C65C887F5CC97D4F03E4A48F15073C0BE427A * __this, const RuntimeMethod* method)
{
	static bool s_Il2CppMethodInitialized;
	if (!s_Il2CppMethodInitialized)
	{
		il2cpp_codegen_initialize_method (OculusLoader_GetSettings_m04AAA3BD9759C2A306863EBF1E786C42DC9FBD64Unity_XR_Oculus_MetadataUsageId);
		s_Il2CppMethodInitialized = true;
	}
	{
		// settings = OculusSettings.s_Settings;
		OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB * L_0 = ((OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB_StaticFields*)il2cpp_codegen_static_fields_for(OculusSettings_t2136AD938937747FF5624F3C5CE298C9EB7C91BB_il2cpp_TypeInfo_var))->get_s_Settings_9();
		// return settings;
		return L_0;
	}
}
IL2CPP_EXTERN_C inline IL2CPP_METHOD_ATTR RuntimeObject * Enumerator_get_Current_mD7829C7E8CFBEDD463B15A951CDE9B90A12CC55C_gshared_inline (Enumerator_tE0C99528D3DCE5863566CE37BD94162A4C0431CD * __this, const RuntimeMethod* method)
{
	{
		RuntimeObject * L_0 = (RuntimeObject *)__this->get_current_3();
		return L_0;
	}
}
