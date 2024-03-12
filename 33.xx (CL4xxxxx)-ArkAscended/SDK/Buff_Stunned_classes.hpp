#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x1F (0xB90 - 0xB71)
// BlueprintGeneratedClass Buff_Stunned.Buff_Stunned_C
class ABuff_Stunned_C : public ABuff_Base_C
{
public:
	uint8                                        Pad_5A24[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       StunWeightLimit;                                   // 0xB78(0x8)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UAnimMontage*                          HumanStunAnimWalking;                              // 0xB80(0x8)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	class UAnimMontage*                          HumanStunAnimSwimming;                             // 0xB88(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ABuff_Stunned_C* GetDefaultObj();

	bool BPCustomAllowAddBuff(class APrimalCharacter** ForCharacter, class AActor* DamageCauser, double* CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	bool BPCheckPreventInput(enum class EPrimalCharacterInputType* InputType);
	void BPDeactivated(class AActor** ForInstigator, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess);
	float BPSetupForInstigator(class AActor** ForInstigator, bool Temp_bool_Variable, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, class UAnimMontage* K2Node_Select_Default);
};

}


