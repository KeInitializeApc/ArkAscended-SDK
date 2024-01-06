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
	class UParticleSystem*                       ShieldHitImpactFX;                                 // 0xEB8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_Shield_C* GetDefaultObj();

	float BPClientHandleItemNetExecCommand(class AShooterPlayerController* ForPC, bool K2Node_SwitchName_CmpSuccess, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue_1, double CallFunc_MakeVector_Z_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast_1, double CallFunc_MakeVector_Y_ImplicitCast_1, double CallFunc_MakeVector_X_ImplicitCast_1);
	bool PlayHitShieldEffect(bool LocalOnly, struct FVector* HitLoc, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, struct FVector* CallFunc_Normal_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_Z_1, TArray<float>* K2Node_MakeArray_Array, struct FBPNetExecParams* K2Node_MakeStruct_BPNetExecParams, class UActorComponent* CallFunc_GetAttachedComponent_ReturnValue, class UStaticMeshComponent** K2Node_DynamicCast_AsStatic_Mesh_Component, int32* CallFunc_Add_IntInt_ReturnValue, const struct FVector& CallFunc_GetClosestPointOnCollision_OutPointOnBody, float CallFunc_GetClosestPointOnCollision_ReturnValue, bool CallFunc_IsVisible_ReturnValue, int32 CallFunc_GetAttachedComponentsNum_ReturnValue, int32* CallFunc_Subtract_IntInt_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue, class UParticleSystemComponent** CallFunc_SpawnEmitterAttached_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool CallFunc_IsServer_ReturnValue, float* K2Node_MakeArray__3__ImplicitCast, float* K2Node_MakeArray__4__ImplicitCast, float* K2Node_MakeArray__5__ImplicitCast, float* K2Node_MakeArray__0__ImplicitCast, float* K2Node_MakeArray__1__ImplicitCast, float* K2Node_MakeArray__2__ImplicitCast);
	bool HandleShieldDamageBlocking(const struct FDamageEvent& DamageEvent, float* ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, bool* CallFunc_NotEqual_ClassClass_ReturnValue, bool CallFunc_IsServer_ReturnValue);
};

}


