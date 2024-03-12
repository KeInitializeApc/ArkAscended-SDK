#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xBB0 - 0xB68)
// BlueprintGeneratedClass PrimalBuff_ChangeMaterialScalarParamOverTime.PrimalBuff_ChangeMaterialScalarParamOverTime_C
class APrimalBuff_ChangeMaterialScalarParamOverTime_C : public APrimalBuff
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB68(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	float                                        ParamTimeline_Scalar_CEFDC60C489CB14F246A90BDE2569987; // 0xB70(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	enum class ETimelineDirection                ParamTimeline__Direction_CEFDC60C489CB14F246A90BDE2569987; // 0xB74(0x1)(BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_567A[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	class UTimelineComponent*                    ParamTimeline;                                     // 0xB78(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	class FName                                  ParamName;                                         // 0xB80(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	double                                       ForwardDuration;                                   // 0xB88(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       StartValue;                                        // 0xB90(0x8)(Edit, ExportObject, EditFixedSize, Parm, OutParm, InstancedReference, SubobjectReference)
	double                                       EndValue;                                          // 0xB98(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       ReverseDuration;                                   // 0xBA0(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       CurrentDuration;                                   // 0xBA8(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class APrimalBuff_ChangeMaterialScalarParamOverTime_C* GetDefaultObj();

	float Set_Param_Value(double* Value, int32 Temp_int_Array_Index_Variable, class UMaterialInterface* CallFunc_Array_Get_Item, class UMaterialInstanceDynamic* K2Node_DynamicCast_AsMaterial_Instance_Dynamic, bool* K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable);
	bool BPSetupForInstigator(class AActor** ForInstigator);
	void ParamTimeline__FinishedFunc();
	void ParamTimeline__UpdateFunc();
	bool StartTimeline();
	void ReceiveBeginPlay();
	void SetValues(double* Value);
	float ExecuteUbergraph_PrimalBuff_ChangeMaterialScalarParamOverTime(int32* EntryPoint, int32 Temp_int_Array_Index_Variable, double CallFunc_SelectFloat_ReturnValue, double K2Node_CustomEvent_Value, class ACharacter** K2Node_DynamicCast_AsCharacter, bool* K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, class USceneComponent* CallFunc_Array_Get_Item, bool* K2Node_DynamicCast_bSuccess_1, double CallFunc_SelectFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue, bool* CallFunc_NearlyEqual_FloatFloat_ReturnValue_1, double CallFunc_SelectFloat_ReturnValue_3, double CallFunc_SelectFloat_ReturnValue_4, double CallFunc_SelectFloat_A_ImplicitCast);
};

}


