#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xEC0 - 0xEB8)
// BlueprintGeneratedClass PrimalItemArmor_Shield.PrimalItemArmor_Shield_C
class UPrimalItemArmor_Shield_C : public UPrimalItemArmorGeneric_C
{
public:
	class UParticleSystem*                       ShieldHitImpactFX;                                 // 0xEB8(0x8)(Edit, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_Shield_C* GetDefaultObj();

	double BPClientHandleItemNetExecCommand(class FName CommandName, const struct FBPNetExecParams& ExecParams, int32* CallFunc_Array_Length_ReturnValue, float* CallFunc_Array_Get_Item, float* CallFunc_Array_Get_Item_1, float* CallFunc_Array_Get_Item_2, float* CallFunc_Array_Get_Item_3, float* CallFunc_Array_Get_Item_4, float* CallFunc_Array_Get_Item_5);
	float PlayHitShieldEffect(const struct FVector& FromLoc, bool Temp_bool_Variable, int32* Temp_int_Variable, bool* K2Node_DynamicCast_bSuccess, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess_1);
	bool HandleShieldDamageBlocking(class AShooterCharacter** ForShooterCharacter, float* DamageIn, const struct FDamageEvent& DamageEvent, class AController* EventInstigator, class AActor* DamageCauser, struct FVector* HitPoint, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
};

}


