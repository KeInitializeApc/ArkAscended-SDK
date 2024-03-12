#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x170E0 - 0x170C8)
// AnimBlueprintGeneratedClass TPV_Hatchet_MaleAnimBP.TPV_Hatchet_MaleAnimBP_C
class UTPV_Hatchet_MaleAnimBP_C : public UBaseHumanAnimBP_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x170C8(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	bool                                         UsingAltAim;                                       // 0x170D0(0x1)(Edit, ExportObject, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_53D4[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class AShooterCharacter*                     ShooterCharRef;                                    // 0x170D8(0x8)(Edit, BlueprintReadOnly, DisableEditOnTemplate, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTPV_Hatchet_MaleAnimBP_C* GetDefaultObj();

	double UpdateLayeringValues(double K2Node_VariableSet_Layering_R_Hand_ImplicitCast, double* K2Node_VariableSet_Layering_R_Arm_ImplicitCast);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	bool ExecuteUbergraph_TPV_Hatchet_MaleAnimBP(int32* EntryPoint, float* K2Node_Event_DeltaTimeX, class APawn** CallFunc_TryGetPawnOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
};

}


