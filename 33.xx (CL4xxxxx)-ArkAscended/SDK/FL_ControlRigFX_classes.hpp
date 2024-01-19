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

	float Spawn_Phys_Mat_VFX(class FString* Bone_Name, struct FVector* Location, double* Amount_Mult, bool* Attached, struct FVector* Bone_Velocity, class UObject** __WorldContext, struct FColor* Color, double* Bounce, double Friction, double Grass, double Leaves, double Dust, double Sand, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow, struct FRotator* CallFunc_Conv_VectorToRotator_ReturnValue, class FName* CallFunc_Conv_StringToName_ReturnValue, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow_1, struct FVector* CallFunc_GetComponentVelocity_ReturnValue, class FName* CallFunc_Conv_StringToName_ReturnValue_1, int64* CallFunc_FFloor64_ReturnValue, int32* CallFunc_Conv_Int64ToInt_ReturnValue, struct FLinearColor* CallFunc_Conv_ColorToLinearColor_ReturnValue, class USoundBase* K2Node_Select_Default);
	float ControlRigNotify(const struct FHitResult& HitResult, class APrimalCharacter* PrimalCharacter, struct FVector* BoneVelocity, class UObject** __WorldContext, bool* bContainsDeath, struct FVector* Location, bool CallFunc_Less_DoubleDouble_ReturnValue, class FString* CallFunc_Conv_NameToString_ReturnValue, class FString* CallFunc_Conv_NameToString_ReturnValue_1, bool* CallFunc_Contains_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue_1, bool CallFunc_Less_DoubleDouble_ReturnValue_2, bool* CallFunc_BooleanOR_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, struct FVector* CallFunc_BreakHitResult_TraceStart, struct FVector* CallFunc_BreakHitResult_TraceEnd, class FName* CallFunc_Conv_StringToName_ReturnValue, struct FStruct_VFX_Body_Drop* CallFunc_GetDataTableRowFromName_OutRow, double CallFunc_Less_DoubleDouble_A_ImplicitCast);
};

}


