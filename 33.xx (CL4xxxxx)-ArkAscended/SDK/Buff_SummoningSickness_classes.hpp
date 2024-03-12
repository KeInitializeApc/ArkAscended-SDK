#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0xB71 - 0xB71)
// BlueprintGeneratedClass Buff_SummoningSickness.Buff_SummoningSickness_C
class ABuff_SummoningSickness_C : public ABuff_Base_C
{
public:

	static class UClass* StaticClass();
	static class ABuff_SummoningSickness_C* GetDefaultObj();

	float DrawBuffFloatingHUD(int32* BuffIndex, float* DrawScale, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, double* CallFunc_Add_DoubleDouble_ReturnValue, class AShooterPlayerController** K2Node_DynamicCast_AsShooter_Player_Controller, bool* K2Node_DynamicCast_bSuccess, double CallFunc_SelectFloat_ReturnValue, float* CallFunc_BPDrawTextCentered_ReturnValue, double* CallFunc_Add_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, float CallFunc_BPDrawTextCentered_Y_ImplicitCast, double* CallFunc_LessEqual_DoubleDouble_A_ImplicitCast);
	bool BPPreventAddingOtherBuff(class UClass** AnotherBuffClass, TSoftClassPtr<class UObject>* Buff_Encapsulate, TSoftClassPtr<class UObject>* Buff_FrozenIceKaiju, bool* CallFunc_EqualEqual_SoftClassReference_ReturnValue, bool* CallFunc_EqualEqual_SoftClassReference_ReturnValue_1, bool* CallFunc_EqualEqual_SoftClassReference_ReturnValue_2);
	class UDinoCharacterStatusComponent_BP_TorpidityControl_C* BPPreSetupForInstigator(class AActor** ForInstigator, class APrimalDinoCharacter** K2Node_DynamicCast_AsPrimal_Dino_Character, bool* K2Node_DynamicCast_bSuccess, bool* K2Node_DynamicCast_bSuccess_1, bool* K2Node_DynamicCast_bSuccess_2, float* CallFunc_ModifyCurrentStatusValue_ReturnValue);
	float BuffAdjustDamage(const struct FHitResult& HitInfo, class AController** EventInstigator, class AActor* TheDamageCauser, class UClass* TheDamgeType, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast);
};

}


