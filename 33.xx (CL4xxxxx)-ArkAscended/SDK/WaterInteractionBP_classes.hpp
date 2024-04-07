#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x7D8 - 0x790)
// BlueprintGeneratedClass WaterInteractionBP.WaterInteractionBP_C
class AWaterInteractionBP_C : public ANinjaLive_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class AActor*                                WaterPlane;                                        // 0x798(0x8)(ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         HasEverRidden;                                     // 0x7A0(0x1)(Edit, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5C94[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UTextureRenderTarget*                  GDF_RT;                                            // 0x7A8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	class UMaterialInterface*                    GDF_Material;                                      // 0x7B0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        GDF_RT_Size;                                       // 0x7B8(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_5C95[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               ASA_TraceMesh_Size;                                // 0x7C0(0x18)(ConstParm, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class AWaterInteractionBP_C* GetDefaultObj();

	struct FVector CheckHalfSize(const struct FVector& CallFunc_Divide_VectorVector_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue);
	float CheckDisable(double* CallFunc_Conv_BoolToDouble_ReturnValue);
	class FString StagePrint(class FString* Name, bool* CallFunc_IsEditor_ReturnValue);
	void ReceiveBeginPlay();
	double LiveActivation(class FName ParamName);
	void LiveFluidParams(double BrushSize);
	double ExecuteUbergraph_WaterInteractionBP(int32* EntryPoint, int32 Temp_int_Array_Index_Variable, const TArray<class AActor*>& CallFunc_GetAllActorsWithTag_OutActors, int32 Temp_int_Array_Index_Variable_1, class AActor* CallFunc_Array_Get_Item, class ABP_IslandWaterPlane_C* CallFunc_Array_Get_Item_1, bool* K2Node_DynamicCast_bSuccess, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, double* K2Node_Event_FadeTimeOfBrush);
};

}


