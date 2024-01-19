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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	double                                       Periodic_counter;                                  // 0x250(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               Actor_velocity_prev;                               // 0x258(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               Pos_prev;                                          // 0x270(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               Actor_acceleration;                                // 0x288(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               Actor_acceleration_prev;                           // 0x2A0(0x18)(ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FVector                               Actor_jerk;                                        // 0x2B8(0x18)(Edit, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	double                                       Acceleration_threshold;                            // 0x2D0(0x8)(ConstParm, Net, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         Use_acceleration_threshold;                        // 0x2D8(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         Attach_to_socket;                                  // 0x2D9(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4780[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               WindSourceRelativeLocation;                        // 0x2E0(0x18)(ExportObject, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	double                                       Sequencer_frame_curr;                              // 0x2F8(0x8)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	double                                       Sequencer_frame_prev;                              // 0x300(0x8)(Edit, BlueprintVisible, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	double                                       Sequencer_mod_prev;                                // 0x308(0x8)(BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         Eval_on_sequencer_framestep_only;                  // 0x310(0x1)(ExportObject, Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_4781[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Num_eval_substeps;                                 // 0x318(0x8)(Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	double                                       LastTimeImpactedSurface;                           // 0x320(0x8)(ConstParm, BlueprintVisible, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         Debug;                                             // 0x328(0x1)(ExportObject, Net, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	uint8                                        Pad_4782[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       PreviousTime;                                      // 0x330(0x8)(BlueprintVisible, ExportObject, Net, Parm, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               Current_Velocity;                                  // 0x338(0x18)(ConstParm, ExportObject, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	bool                                         Debug_bubbles;                                     // 0x350(0x1)(Net, Parm, OutParm, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	uint8                                        Pad_4783[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       BubbleCountMultiplier;                             // 0x358(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, Config, EditConst, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_PrimalWindSourceComponent_Base_C* GetDefaultObj();

	class FString Get_Bubble_System_Tag(class FName ReturnValue, class FName* CallFunc_Conv_StringToName_ReturnValue);
	bool Deactivate_bubble_system(class FName BubbleSystemTag, int32 Temp_int_Loop_Counter_Variable, class FName CallFunc_Get_Bubble_System_Tag_ReturnValue, const TArray<class UActorComponent*>& CallFunc_GetComponentsByCustomTag_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, class UNiagaraComponent** K2Node_DynamicCast_AsNiagara_Particle_System_Component, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	float Creating_Bubbles_Code(struct FVector* Current_location, class FName BubbleSystemTag, class UNiagaraComponent* Local_bubble_system_ref, bool* Has_Existing_Bubble_System, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Greater_DoubleDouble_ReturnValue, class FName CallFunc_Get_Bubble_System_Tag_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, struct FRotator* CallFunc_Conv_VectorToRotator_ReturnValue, const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, const struct FVector& CallFunc_GetCurrentExtraCapsuleWindSourceLocation_ReturnValue, const TArray<class UActorComponent*>& CallFunc_GetComponentsByCustomTag_ReturnValue, class UActorComponent* CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, class UNiagaraComponent** K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsActive_ReturnValue);
	double PlayFluidImpactEffectSound(float* PenetrationScalar, struct FVector* ImpactLocation, const struct FVector& OwnerVelocity, double CallFunc_FMin_ReturnValue, double CallFunc_FMin_ReturnValue_1, class USoundBase* K2Node_Select_Default, class USoundBase* K2Node_Select_Default_1);
	struct FVector PlayFluidImpactEffect(float* PenetrationScalar, struct FVector* ImpactLocation, const struct FVector& OwnerVelocity, const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, struct FHitResult* CallFunc_VTraceSingleBP_OutHit, bool* CallFunc_VTraceSingleBP_ReturnValue, struct FVector* CallFunc_SetVariableVec3_InValue_ImplicitCast, struct FVector* CallFunc_Multiply_VectorVector_A_ImplicitCast);
	struct FVector Calc_velocity(const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, const struct FVector3f& K2Node_VariableSet_CurrentVelocity_ImplicitCast, const struct FVector& K2Node_VariableSet_actor_velocity_prev_ImplicitCast, struct FVector* CallFunc_Subtract_VectorVector_A_ImplicitCast);
	void Event_loop();
	void BPImpactedFluidSurface(struct FVector* ImpactLocation, float* PenetrationScalar);
	void BPExitedFluidSurface(struct FVector* ImpactLocation, float* PenetrationScalar);
	void BPImpactingFluidSurfaceTick(struct FVector* ImpactLocation, float* PenetrationScalar);
	void BPHandleCreatingBubbles();
	void BPDeactivateBubbleComponent();
	double ExecuteUbergraph_BP_PrimalWindSourceComponent_Base(int32 EntryPoint, struct FVector* K2Node_Event_impactLocation_2, float K2Node_Event_penetrationScalar_2, struct FVector* K2Node_Event_impactLocation_1, float K2Node_Event_penetrationScalar_1, double CallFunc_Fraction_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_1, bool CallFunc_NotEqual_IntInt_ReturnValue, int32 CallFunc_FTrunc_ReturnValue_2, bool* CallFunc_BooleanOR_ReturnValue, struct FVector* K2Node_Event_impactLocation, float K2Node_Event_penetrationScalar);
};

}


