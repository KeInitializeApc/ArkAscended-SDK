#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xB90 - 0xB68)
// BlueprintGeneratedClass Buff_DinoPackLeader.Buff_DinoPackLeader_C
class ABuff_DinoPackLeader_C : public APrimalBuff
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB68(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         bDebug;                                            // 0xB70(0x1)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_44FF[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FLinearColor                          PackDebugColor;                                    // 0xB74(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_4500[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class ADino_Character_BP_Pack_C*             OwningPackDino;                                    // 0xB88(0x8)(ExportObject, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_DinoPackLeader_C* GetDefaultObj();

	bool BuffTickServer(bool* K2Node_DynamicCast_bSuccess);
	void ReceiveTick(float* DeltaSeconds);
	void ReceiveBeginPlay();
	float ExecuteUbergraph_Buff_DinoPackLeader(int32* EntryPoint, float K2Node_Event_DeltaSeconds, int32 Temp_int_Array_Index_Variable, class AActor* CallFunc_Array_Get_Item, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, class AActor* CallFunc_GetOwner_ReturnValue, bool* K2Node_DynamicCast_bSuccess_1, double CallFunc_RandomFloatInRange_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable, struct FLinearColor* K2Node_MakeStruct_LinearColor, float K2Node_MakeStruct_R_ImplicitCast);
};

}


