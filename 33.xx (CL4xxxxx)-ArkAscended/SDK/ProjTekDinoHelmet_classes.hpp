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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x798(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	class UChildActorComponent*                  ChildActor1;                                       // 0x7A0(0x8)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Config, EditConst, SubobjectReference)
	struct FVector                               StartLocation;                                     // 0x7A8(0x18)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	double                                       MaxStructureImpactDistance;                        // 0x7C0(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class AProjTekDinoHelmet_C* GetDefaultObj();

	bool BPIgnoreRadialDamageVictim(bool* ReturnValue, class FName CallFunc_MakeLiteralName_ReturnValue, bool* CallFunc_BPIsA_ReturnValue, bool* CallFunc_Array_Contains_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue_1);
	void ReceiveBeginPlay();
	void OnExplode(struct FHitResult* Result);
	bool ExecuteUbergraph_ProjTekDinoHelmet(int32 EntryPoint, class FName CallFunc_MakeLiteralName_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, struct FHitResult* K2Node_Event_Result, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, bool* CallFunc_BreakHitResult_bBlockingHit, bool* CallFunc_BreakHitResult_bInitialOverlap, float* CallFunc_BreakHitResult_Distance, class AActor** CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent** CallFunc_BreakHitResult_HitComponent, class FName* CallFunc_BreakHitResult_HitBoneName, class FName* CallFunc_BreakHitResult_BoneName, int32* CallFunc_BreakHitResult_ElementIndex, int32* CallFunc_BreakHitResult_FaceIndex, class APrimalStructure** K2Node_DynamicCast_AsPrimal_Structure, bool* CallFunc_Array_Contains_ReturnValue, bool* CallFunc_Not_PreBool_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue);
};

}


