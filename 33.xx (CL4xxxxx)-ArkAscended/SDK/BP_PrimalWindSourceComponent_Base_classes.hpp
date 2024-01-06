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
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x248(0x8)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, SubobjectReference)
	double                                       Periodic_counter;                                  // 0x250(0x8)(Edit, Net, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Actor_velocity_prev;                               // 0x258(0x18)(Edit, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Pos_prev;                                          // 0x270(0x18)(BlueprintVisible, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Actor_acceleration;                                // 0x288(0x18)(BlueprintVisible, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Actor_acceleration_prev;                           // 0x2A0(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	struct FVector                               Actor_jerk;                                        // 0x2B8(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Acceleration_threshold;                            // 0x2D0(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Use_acceleration_threshold;                        // 0x2D8(0x1)(BlueprintVisible, BlueprintReadOnly, Net, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Attach_to_socket;                                  // 0x2D9(0x1)(BlueprintVisible, ExportObject, OutParm, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1255[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               WindSourceRelativeLocation;                        // 0x2E0(0x18)(ConstParm, EditFixedSize, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Sequencer_frame_curr;                              // 0x2F8(0x8)(Edit, ExportObject, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Sequencer_frame_prev;                              // 0x300(0x8)(BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       Sequencer_mod_prev;                                // 0x308(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Eval_on_sequencer_framestep_only;                  // 0x310(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1381[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Num_eval_substeps;                                 // 0x318(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	double                                       LastTimeImpactedSurface;                           // 0x320(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Debug;                                             // 0x328(0x1)(ConstParm, ExportObject, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1382[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       PreviousTime;                                      // 0x330(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               Current_Velocity;                                  // 0x338(0x18)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         Debug_bubbles;                                     // 0x350(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_1385[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       BubbleCountMultiplier;                             // 0x358(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, OutParm, Config, DisableEditOnInstance, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_PrimalWindSourceComponent_Base_C* GetDefaultObj();

	class FString Get_Bubble_System_Tag(class FName* ReturnValue, class FString* CallFunc_Concat_StrStr_ReturnValue, class FName* CallFunc_Conv_StringToName_ReturnValue);
	bool Deactivate_bubble_system(class FName* BubbleSystemTag, int32 Temp_int_Array_Index_Variable, bool* CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, class FName* CallFunc_Get_Bubble_System_Tag_ReturnValue, TArray<class UActorComponent*>* CallFunc_GetComponentsByCustomTag_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue);
	bool Creating_Bubbles_Code(struct FVector* Current_location, class FName* BubbleSystemTag, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue, class UShooterGameUserSettings* CallFunc_GetShooterGameUserSettings_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, double CallFunc_SafeDivide_ReturnValue, int32 Temp_int_Array_Index_Variable, bool* CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32* CallFunc_Add_IntInt_ReturnValue, struct FVector* CallFunc_Conv_DoubleToVector_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, class FName* CallFunc_Get_Bubble_System_Tag_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, struct FVector* CallFunc_Add_VectorVector_ReturnValue, struct FVector* CallFunc_Normal_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, struct FVector* CallFunc_Add_VectorVector_ReturnValue_1, const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, struct FVector* CallFunc_GetCurrentExtraCapsuleWindSourceLocation_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue_1, TArray<class UActorComponent*>* CallFunc_GetComponentsByCustomTag_ReturnValue, bool* CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsActive_ReturnValue, class UNiagaraComponent** CallFunc_SpawnSystemAttached_ReturnValue, TArray<struct FHitResult>* CallFunc_SphereTraceMulti_OutHits, bool* CallFunc_SphereTraceMulti_ReturnValue, float* CallFunc_SetVariableFloat_InValue_ImplicitCast, float* CallFunc_SetVariableFloat_InValue_ImplicitCast_1);
	class USoundBase* PlayFluidImpactEffectSound(float* PenetrationScalar, struct FVector* ImpactLocation, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue_1, double* CallFunc_FMin_ReturnValue, double* CallFunc_FMin_ReturnValue_1, int32 CallFunc_Round_ReturnValue, int32 CallFunc_Round_ReturnValue_1, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast, double CallFunc_Multiply_DoubleFloat_A_ImplicitCast_1);
	bool PlayFluidImpactEffect(float* PenetrationScalar, struct FVector* ImpactLocation, class UNiagaraComponent** CallFunc_SpawnSystemAtLocation_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue, const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, bool* CallFunc_BPFastTrace_ReturnValue, struct FVector* CallFunc_K2_GetActorLocation_ReturnValue, struct FHitResult* CallFunc_VTraceSingleBP_OutHit, bool* CallFunc_VTraceSingleBP_ReturnValue, struct FVector* CallFunc_SetVariableVec3_InValue_ImplicitCast, const struct FVector& CallFunc_Multiply_VectorVector_A_ImplicitCast);
	struct FVector Calc_velocity(const struct FVector& CallFunc_GetCurrentWindSourceLocation_ReturnValue, double CallFunc_BreakVector_Z, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue_1, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue_2, struct FVector* CallFunc_Subtract_VectorVector_A_ImplicitCast);
	void Event_loop();
	void BPImpactedFluidSurface(struct FVector* ImpactLocation, float* PenetrationScalar);
	void BPExitedFluidSurface(struct FVector* ImpactLocation, float* PenetrationScalar);
	void BPImpactingFluidSurfaceTick(struct FVector* ImpactLocation, float* PenetrationScalar);
	void BPHandleCreatingBubbles();
	void BPDeactivateBubbleComponent();
	float ExecuteUbergraph_BP_PrimalWindSourceComponent_Base(int32 EntryPoint, bool* CallFunc_Not_PreBool_ReturnValue, double* CallFunc_Fraction_ReturnValue, int32* CallFunc_FTrunc_ReturnValue, int32* CallFunc_FTrunc_ReturnValue_1, double CallFunc_Percent_FloatFloat_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue, int32* CallFunc_FTrunc_ReturnValue_2, bool* CallFunc_BooleanOR_ReturnValue, double* CallFunc_Conv_IntToDouble_ReturnValue);
};

}


