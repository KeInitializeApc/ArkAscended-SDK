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

	class USoundBase* Spawn_Phys_Mat_VFX(class FString* Bone_Name, struct FVector* Location, double Amount_Mult, bool* Attached, struct FVector* Bone_Velocity, class UObject** __WorldContext, const struct FVector& Velocity, struct FColor* Color, double Grass, double Leaves, double Sand, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, class UNiagaraComponent** CallFunc_SpawnSystemAtLocation_ReturnValue, class FName* CallFunc_Conv_StringToName_ReturnValue, class FName* CallFunc_Conv_StringToName_ReturnValue_1, class UNiagaraComponent** CallFunc_SpawnSystemAttached_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, float* CallFunc_SetVariableFloat_InValue_ImplicitCast, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_1, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_2, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_3, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_4, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_5, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_6, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_7, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_8);
	float ControlRigNotify(class FName* CustomTag, const struct FHitResult& HitResult, class APrimalCharacter** PrimalCharacter, struct FVector* BoneVelocity, class UObject** __WorldContext, bool* bContainsDeath, const struct FVector& Velocity, struct FVector* Location, class APrimalCharacter** Character, struct FVector* CallFunc_Add_VectorVector_ReturnValue, struct FVector* CallFunc_Add_VectorVector_ReturnValue_1, bool* CallFunc_BooleanOR_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue_1, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, class FName* CallFunc_Conv_StringToName_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, float CallFunc_Multiply_DoubleFloat_B_ImplicitCast);
};

}


