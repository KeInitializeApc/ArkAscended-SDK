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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(BlueprintVisible, ExportObject, EditFixedSize, DisableEditOnInstance, SubobjectReference)
	double                                       Periodic_counter;                                  // 0x250(0x8)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Actor_velocity_prev;                               // 0x258(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Pos_prev;                                          // 0x270(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Actor_acceleration;                                // 0x288(0x18)(ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Actor_acceleration_prev;                           // 0x2A0(0x18)(Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Actor_jerk;                                        // 0x2B8(0x18)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	double                                       Acceleration_threshold;                            // 0x2D0(0x8)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	bool                                         Use_acceleration_threshold;                        // 0x2D8(0x1)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Attach_to_socket;                                  // 0x2D9(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2FA5[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               WindSourceRelativeLocation;                        // 0x2E0(0x18)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Sequencer_frame_curr;                              // 0x2F8(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Sequencer_frame_prev;                              // 0x300(0x8)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Sequencer_mod_prev;                                // 0x308(0x8)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Eval_on_sequencer_framestep_only;                  // 0x310(0x1)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2FA6[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Num_eval_substeps;                                 // 0x318(0x8)(Edit, EditFixedSize, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	double                                       LastTimeImpactedSurface;                           // 0x320(0x8)(Edit, ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Debug;                                             // 0x328(0x1)(Edit, ConstParm, ExportObject, Net, EditFixedSize, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_2FA7[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       PreviousTime;                                      // 0x330(0x8)(Edit, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               Current_Velocity;                                  // 0x338(0x18)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Debug_bubbles;                                     // 0x350(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_2FA8[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       BubbleCountMultiplier;                             // 0x358(0x8)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_PrimalWindSourceComponent_Base_C* GetDefaultObj();

	class FName Get_Bubble_System_Tag(const class FString& CallFunc_Concat_StrStr_ReturnValue);
	bool Deactivate_bubble_system(int32 CallFunc_Add_IntInt_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UActorComponent** CallFunc_Array_Get_Item, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool* K2Node_DynamicCast_bSuccess, bool* CallFunc_IsValid_ReturnValue_1, int32* CallFunc_Array_Length_ReturnValue, bool CallFunc_BooleanAND_ReturnValue);
	bool Creating_Bubbles_Code(struct FVector* Current_location, const struct FVector& Delta, class UNiagaraComponent* Local_bubble_system_ref, bool Has_Existing_Bubble_System, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, TArray<class AActor*>* Temp_object_Variable, const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, bool* CallFunc_IsValid_ReturnValue, class UActorComponent** CallFunc_Array_Get_Item, int32* CallFunc_Array_Length_ReturnValue, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool* K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsActive_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, class UNiagaraComponent** CallFunc_SpawnSystemAttached_ReturnValue, bool* CallFunc_IsValid_ReturnValue_3, TArray<struct FHitResult>* CallFunc_SphereTraceMulti_OutHits, bool* CallFunc_SphereTraceMulti_ReturnValue, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1);
	double PlayFluidImpactEffectSound(bool Exited, const struct FVector& OwnerVelocity, class USoundBase** Temp_object_Variable, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, class USoundBase** Temp_object_Variable_1, class USoundBase** Temp_object_Variable_2, class USoundBase** Temp_object_Variable_3, class USoundBase** Temp_object_Variable_4, int32* Temp_int_Variable, class USoundBase** Temp_object_Variable_5, class USoundBase** Temp_object_Variable_6, class USoundBase** Temp_object_Variable_7, class USoundBase** Temp_object_Variable_8, class USoundBase** Temp_object_Variable_9, class USoundBase** K2Node_Select_Default, class USoundBase** Temp_object_Variable_10, int32* Temp_int_Variable_1, class USoundBase** K2Node_Select_Default_1, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1);
	struct FVector PlayFluidImpactEffect(bool Exited, const struct FVector& OwnerVelocity, class UNiagaraComponent** CallFunc_SpawnSystemAtLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, class AActor** CallFunc_GetOwner_ReturnValue, const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, bool* CallFunc_IsValid_ReturnValue, struct FHitResult* CallFunc_VTraceSingleBP_OutHit, bool* CallFunc_VTraceSingleBP_ReturnValue, struct FVector* CallFunc_SetVariableVec3_InValue_ImplicitCast, const struct FVector& CallFunc_Multiply_VectorVector_A_ImplicitCast);
	struct FVector Calc_velocity(const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, const struct FVector3f& K2Node_VariableSet_CurrentVelocity_ImplicitCast, const struct FVector& K2Node_VariableSet_actor_velocity_prev_ImplicitCast, struct FVector* CallFunc_Subtract_VectorVector_A_ImplicitCast);
	void Event_loop();
	float BPImpactedFluidSurface();
	float BPExitedFluidSurface();
	float BPImpactingFluidSurfaceTick();
	void BPHandleCreatingBubbles();
	void BPDeactivateBubbleComponent();
	double ExecuteUbergraph_BP_PrimalWindSourceComponent_Base(const struct FVector& K2Node_Event_impactLocation_2, float K2Node_Event_penetrationScalar_2, const struct FVector& K2Node_Event_impactLocation_1, float K2Node_Event_penetrationScalar_1, double* CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Percent_FloatFloat_ReturnValue, const struct FVector& K2Node_Event_impactLocation, float K2Node_Event_penetrationScalar);
};

}


