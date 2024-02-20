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

	float Spawn_Phys_Mat_VFX(class FString* Bone_Name, struct FVector* Location, double Amount_Mult, bool* Attached, struct FVector* Bone_Velocity, class UObject** __WorldContext, struct FColor* Color, double Bounce, double* Friction, double* Grass, double* Leaves, double Dust, double* Sand, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow, bool* CallFunc_GetDataTableRowFromName_ReturnValue, struct FStruct_Ground_Attributes* CallFunc_GetDataTableRowFromName_OutRow_1, bool* CallFunc_GetDataTableRowFromName_ReturnValue_1, const struct FVector& CallFunc_GetComponentVelocity_ReturnValue, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, double* CallFunc_MapRangeClamped_ReturnValue, class USoundBase* Temp_object_Variable_3, int64 CallFunc_FFloor64_ReturnValue, int32 CallFunc_Conv_Int64ToInt_ReturnValue, const struct FLinearColor& CallFunc_Conv_ColorToLinearColor_ReturnValue, class USoundBase** K2Node_Select_Default);
	float ControlRigNotify(class FName NotifyName, struct FVector* BoneVelocity, class UObject** __WorldContext, bool* bContainsDeath, struct FVector* Normal, struct FVector* Location, struct FVector* CallFunc_GetSocketLocation_ReturnValue, double* CallFunc_GetLastRenderTimeNoShadow_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue, const class FString& CallFunc_Conv_NameToString_ReturnValue_1, bool CallFunc_Contains_ReturnValue, double* CallFunc_GetTimeSeconds_ReturnValue, double* CallFunc_GetTimeSeconds_ReturnValue_1, double* CallFunc_Subtract_DoubleFloat_ReturnValue, double* CallFunc_Subtract_DoubleFloat_ReturnValue_1, class FString* CallFunc_GetDisplayName_ReturnValue, class FString* CallFunc_Split_LeftS, class FString* CallFunc_Split_RightS, bool* CallFunc_Split_ReturnValue, const TArray<class AActor*>& Temp_object_Variable, struct FHitResult* CallFunc_LineTraceSingle_OutHit, bool* CallFunc_LineTraceSingle_ReturnValue, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, struct FStruct_VFX_Body_Drop* CallFunc_GetDataTableRowFromName_OutRow, bool* CallFunc_GetDataTableRowFromName_ReturnValue, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast, float* CallFunc_Subtract_DoubleFloat_B_ImplicitCast_1);
};

}


