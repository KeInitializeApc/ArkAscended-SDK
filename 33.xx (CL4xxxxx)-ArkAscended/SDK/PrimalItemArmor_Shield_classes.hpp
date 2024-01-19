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
	class UParticleSystem*                       ShieldHitImpactFX;                                 // 0xEB8(0x8)(BlueprintVisible, ExportObject, Net, ReturnParm, DisableEditOnTemplate, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UPrimalItemArmor_Shield_C* GetDefaultObj();

	double BPClientHandleItemNetExecCommand(class AShooterPlayerController** ForPC, bool K2Node_SwitchName_CmpSuccess, int32* CallFunc_Array_Length_ReturnValue, float CallFunc_Array_Get_Item, bool CallFunc_EqualEqual_IntInt_ReturnValue, float CallFunc_Array_Get_Item_1, float CallFunc_Array_Get_Item_2, float CallFunc_Array_Get_Item_3, float CallFunc_Array_Get_Item_4, float CallFunc_Array_Get_Item_5);
	bool PlayHitShieldEffect(struct FVector* HitLoc, bool Temp_bool_Variable, const struct FVector& CallFunc_Normal_ReturnValue, struct FRotator* CallFunc_Conv_VectorToRotator_ReturnValue, const TArray<float>& K2Node_MakeArray_Array, const struct FBPNetExecParams& K2Node_MakeStruct_BPNetExecParams, class UStaticMeshComponent** K2Node_DynamicCast_AsStatic_Mesh_Component, struct FVector* CallFunc_GetClosestPointOnCollision_OutPointOnBody, float* CallFunc_GetClosestPointOnCollision_ReturnValue, bool* CallFunc_IsVisible_ReturnValue, int32* CallFunc_Subtract_IntInt_ReturnValue, class UParticleSystemComponent** CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, float K2Node_MakeArray__3__ImplicitCast, float* K2Node_MakeArray__4__ImplicitCast, float* K2Node_MakeArray__5__ImplicitCast, float* K2Node_MakeArray__0__ImplicitCast, float K2Node_MakeArray__1__ImplicitCast, float K2Node_MakeArray__2__ImplicitCast);
	bool HandleShieldDamageBlocking(const struct FDamageEvent& DamageEvent, float ReturnValue);
};

}


