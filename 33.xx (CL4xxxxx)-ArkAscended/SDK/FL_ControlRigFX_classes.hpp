#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// BlueprintGeneratedClass FL_ControlRigFX.FL_ControlRigFX_C
class UFL_ControlRigFX_C : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UFL_ControlRigFX_C* GetDefaultObj();

	struct FLinearColor Spawn_Phys_Mat_VFX(const class FString& Bone_Name, struct FVector* Location, bool Attached, const struct FVector& Bone_Velocity, class UObject* __WorldContext, const struct FVector& Velocity, struct FColor* Color, double Bounce, double* Friction, double* Dust, class FString* CallFunc_GetObjectName_ReturnValue, class UNiagaraComponent** CallFunc_SpawnSystemAtLocation_ReturnValue, class USoundBase** Temp_object_Variable, class UNiagaraComponent** CallFunc_SpawnSystemAttached_ReturnValue, class USoundBase** Temp_object_Variable_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, class USoundBase** Temp_object_Variable_2, class USoundBase** Temp_object_Variable_3, double CallFunc_Multiply_DoubleFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, int32* Temp_int_Variable, class USoundBase* K2Node_Select_Default, float* CallFunc_SetVariableFloat_InValue_ImplicitCast, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_1, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_2, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_3, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_4, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_5, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_6, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_7, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_8);
	float ControlRigNotify(class FName* NotifyName, class FName CustomTag, struct FHitResult* HitResult, class APrimalCharacter* PrimalCharacter, const struct FVector& BoneVelocity, class UObject* __WorldContext, bool bContainsDeath, const struct FVector& Velocity, struct FVector* Location, class APrimalCharacter* Character, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_2, TArray<class AActor*>* Temp_object_Variable, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, struct FVector* CallFunc_BreakHitResult_Location, struct FVector* CallFunc_BreakHitResult_ImpactPoint, struct FVector* CallFunc_BreakHitResult_Normal, struct FVector* CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Less_DoubleDouble_A_ImplicitCast, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast);
};

}


