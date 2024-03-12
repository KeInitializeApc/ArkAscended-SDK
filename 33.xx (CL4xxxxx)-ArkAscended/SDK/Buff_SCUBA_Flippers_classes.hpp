#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF (0xB80 - 0xB71)
// BlueprintGeneratedClass Buff_SCUBA_Flippers.Buff_SCUBA_Flippers_C
class ABuff_SCUBA_Flippers_C : public ABuff_Base_C
{
public:
	uint8                                        Pad_52D0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB78(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_SCUBA_Flippers_C* GetDefaultObj();

	uint8 BPOnInstigatorMovementModeChangedNotify();
	bool ExecuteUbergraph_Buff_SCUBA_Flippers(int32* EntryPoint, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, enum class EMovementMode K2Node_Event_PrevMovementMode, uint8 K2Node_Event_PreviousCustomMode, enum class EMovementMode K2Node_Event_NewMovementMode, uint8 K2Node_Event_NewCustomMode);
};

}


