#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x7C8 - 0x798)
// BlueprintGeneratedClass ProjTekDinoHelmet.ProjTekDinoHelmet_C
class AProjTekDinoHelmet_C : public AShooterProjectile
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x798(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	class UChildActorComponent*                  ChildActor1;                                       // 0x7A0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, Config, SubobjectReference)
	struct FVector                               StartLocation;                                     // 0x7A8(0x18)(Edit, ConstParm, ExportObject, ZeroConstructor, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	double                                       MaxStructureImpactDistance;                        // 0x7C0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Transient, Config, SubobjectReference)

	static class UClass* StaticClass();
	static class AProjTekDinoHelmet_C* GetDefaultObj();

	bool BPIgnoreRadialDamageVictim(bool ReturnValue, bool CallFunc_BPIsA_ReturnValue, bool* CallFunc_Array_Contains_ReturnValue);
	void ReceiveBeginPlay();
	struct FHitResult OnExplode();
	bool ExecuteUbergraph_ProjTekDinoHelmet(const struct FHitResult& K2Node_Event_Result, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float* CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_HitItem, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, class APrimalStructure* K2Node_DynamicCast_AsPrimal_Structure, bool* CallFunc_Array_Contains_ReturnValue);
};

}


