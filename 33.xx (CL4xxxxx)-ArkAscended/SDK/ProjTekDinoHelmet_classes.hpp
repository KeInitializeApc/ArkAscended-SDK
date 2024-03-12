#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x7C0 - 0x790)
// BlueprintGeneratedClass ProjTekDinoHelmet.ProjTekDinoHelmet_C
class AProjTekDinoHelmet_C : public AShooterProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x790(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	class UChildActorComponent*                  ChildActor1;                                       // 0x798(0x8)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               StartLocation;                                     // 0x7A0(0x18)(ExportObject, Net, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       MaxStructureImpactDistance;                        // 0x7B8(0x8)(BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class AProjTekDinoHelmet_C* GetDefaultObj();

	bool BPIgnoreRadialDamageVictim(class AActor* Victim, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue);
	void ReceiveBeginPlay();
	void OnExplode(const struct FHitResult& Result);
	bool ExecuteUbergraph_ProjTekDinoHelmet(int32* EntryPoint, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, struct FVector* CallFunc_BreakHitResult_Location, struct FVector* CallFunc_BreakHitResult_ImpactPoint, struct FVector* CallFunc_BreakHitResult_Normal, struct FVector* CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial** CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, bool* K2Node_DynamicCast_bSuccess);
};

}


