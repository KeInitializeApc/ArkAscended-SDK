#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x360 - 0x248)
// BlueprintGeneratedClass BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C
class UBP_PrimalWindSourceComponent_Base_C : public UPrimalWindSourceComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnInstance, SubobjectReference)
	double                                       Periodic_counter;                                  // 0x250(0x8)(Edit, BlueprintVisible, ExportObject, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Actor_velocity_prev;                               // 0x258(0x18)(Edit, BlueprintVisible, ExportObject, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Pos_prev;                                          // 0x270(0x18)(BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Actor_acceleration;                                // 0x288(0x18)(BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Actor_acceleration_prev;                           // 0x2A0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, Parm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Actor_jerk;                                        // 0x2B8(0x18)(Edit, ConstParm, BlueprintVisible, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Acceleration_threshold;                            // 0x2D0(0x8)(BlueprintVisible, Parm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Use_acceleration_threshold;                        // 0x2D8(0x1)(Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Attach_to_socket;                                  // 0x2D9(0x1)(ExportObject, BlueprintReadOnly, Net, Parm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2EDD[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               WindSourceRelativeLocation;                        // 0x2E0(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Sequencer_frame_curr;                              // 0x2F8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Sequencer_frame_prev;                              // 0x300(0x8)(EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Sequencer_mod_prev;                                // 0x308(0x8)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Eval_on_sequencer_framestep_only;                  // 0x310(0x1)(Edit, ConstParm, Net, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2EDF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Num_eval_substeps;                                 // 0x318(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       LastTimeImpactedSurface;                           // 0x320(0x8)(Edit, Net, EditFixedSize, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Debug;                                             // 0x328(0x1)(OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2EE0[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       PreviousTime;                                      // 0x330(0x8)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               Current_Velocity;                                  // 0x338(0x18)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Debug_bubbles;                                     // 0x350(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2EE2[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       BubbleCountMultiplier;                             // 0x358(0x8)(Edit, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_PrimalWindSourceComponent_Base_C* GetDefaultObj();

	class FString Get_Bubble_System_Tag(class FName* ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, class FName* CallFunc_Conv_StringToName_ReturnValue);
	bool Deactivate_bubble_system(class FName BubbleSystemTag, bool CallFunc_Not_PreBool_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, class FName* CallFunc_Get_Bubble_System_Tag_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, TArray<class UActorComponent*>* CallFunc_GetComponentsByCustomTag_ReturnValue, class UNiagaraComponent** K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool* CallFunc_BooleanAND_ReturnValue);
	bool Creating_Bubbles_Code(struct FVector* Current_location, class FName BubbleSystemTag, bool* Has_Existing_Bubble_System, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue, class UShooterGameUserSettings** CallFunc_GetShooterGameUserSettings_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, int32* CallFunc_Add_IntInt_ReturnValue, struct FVector* CallFunc_Conv_DoubleToVector_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, class FName* CallFunc_Get_Bubble_System_Tag_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue_1, struct FVector* CallFunc_GetCurrentWindSourceLocation_ReturnValue, struct FVector* CallFunc_GetCurrentExtraCapsuleWindSourceLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, class AActor** CallFunc_GetOwner_ReturnValue, TArray<class UActorComponent*>* CallFunc_GetComponentsByCustomTag_ReturnValue, class UNiagaraComponent** K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool* CallFunc_BooleanAND_ReturnValue, bool* CallFunc_IsActive_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, TArray<struct FHitResult>* CallFunc_SphereTraceMulti_OutHits, bool* CallFunc_SphereTraceMulti_ReturnValue, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1);
	int32 PlayFluidImpactEffectSound(float PenetrationScalar, const struct FVector& ImpactLocation, bool* Exited, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double* CallFunc_FMin_ReturnValue, double* CallFunc_FMin_ReturnValue_1, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, class USoundBase** K2Node_Select_Default, class USoundBase** K2Node_Select_Default_1, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1);
	bool PlayFluidImpactEffect(float PenetrationScalar, const struct FVector& ImpactLocation, bool* Exited, class UNiagaraComponent* CallFunc_SpawnSystemAtLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool* CallFunc_IsTimeSince_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, struct FVector* CallFunc_GetCurrentWindSourceLocation_ReturnValue, bool CallFunc_BPFastTrace_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, struct FHitResult* CallFunc_VTraceSingleBP_OutHit, bool* CallFunc_VTraceSingleBP_ReturnValue, const struct FVector& CallFunc_SetVariableVec3_InValue_ImplicitCast, const struct FVector& CallFunc_Multiply_VectorVector_A_ImplicitCast);
	struct FVector Calc_velocity(struct FVector* CallFunc_GetCurrentWindSourceLocation_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_2, struct FVector* CallFunc_Subtract_VectorVector_A_ImplicitCast);
	void Event_loop();
	void BPImpactedFluidSurface(const struct FVector& ImpactLocation, float PenetrationScalar);
	void BPExitedFluidSurface(const struct FVector& ImpactLocation, float PenetrationScalar);
	void BPImpactingFluidSurfaceTick(const struct FVector& ImpactLocation, float PenetrationScalar);
	void BPHandleCreatingBubbles();
	void BPDeactivateBubbleComponent();
	float ExecuteUbergraph_BP_PrimalWindSourceComponent_Base(int32* EntryPoint, bool CallFunc_Not_PreBool_ReturnValue, double* CallFunc_Fraction_ReturnValue, int32* CallFunc_FTrunc_ReturnValue, double* CallFunc_Multiply_DoubleDouble_ReturnValue, int32* CallFunc_FTrunc_ReturnValue_1, double CallFunc_Percent_FloatFloat_ReturnValue, bool* CallFunc_NotEqual_IntInt_ReturnValue, int32* CallFunc_FTrunc_ReturnValue_2, bool CallFunc_BooleanOR_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue);
};

}


