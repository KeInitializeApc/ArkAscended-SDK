#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x3B0 - 0x298)
// BlueprintGeneratedClass BP_PrimalWindSourceComponent_Base.BP_PrimalWindSourceComponent_Base_C
class UBP_PrimalWindSourceComponent_Base_C : public UPrimalWindSourceComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x298(0x8)(BlueprintReadOnly, Parm, OutParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       Periodic_counter;                                  // 0x2A0(0x8)(ConstParm, ExportObject, DisableEditOnTemplate, SubobjectReference)
	struct FVector                               Actor_velocity_prev;                               // 0x2A8(0x18)(ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, SubobjectReference)
	struct FVector                               Pos_prev;                                          // 0x2C0(0x18)(Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, SubobjectReference)
	struct FVector                               Actor_acceleration;                                // 0x2D8(0x18)(Edit, BlueprintReadOnly, ReturnParm, SubobjectReference)
	struct FVector                               Actor_acceleration_prev;                           // 0x2F0(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, SubobjectReference)
	struct FVector                               Actor_jerk;                                        // 0x308(0x18)(ExportObject, Net, ReturnParm, SubobjectReference)
	double                                       Acceleration_threshold;                            // 0x320(0x8)(Edit, BlueprintVisible, ReturnParm, SubobjectReference)
	bool                                         Use_acceleration_threshold;                        // 0x328(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
	bool                                         Attach_to_socket;                                  // 0x329(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, ReturnParm, SubobjectReference)
	uint8                                        Pad_3013[0x6];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               WindSourceRelativeLocation;                        // 0x330(0x18)(Edit, ConstParm, ExportObject, Net, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
	double                                       Sequencer_frame_curr;                              // 0x348(0x8)(ConstParm, BlueprintReadOnly, Net, DisableEditOnTemplate, SubobjectReference)
	double                                       Sequencer_frame_prev;                              // 0x350(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, DisableEditOnTemplate, SubobjectReference)
	double                                       Sequencer_mod_prev;                                // 0x358(0x8)(ExportObject, EditFixedSize, DisableEditOnTemplate, SubobjectReference)
	bool                                         Eval_on_sequencer_framestep_only;                  // 0x360(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
	uint8                                        Pad_3016[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       Num_eval_substeps;                                 // 0x368(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
	double                                       LastTimeImpactedSurface;                           // 0x370(0x8)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
	bool                                         Debug;                                             // 0x378(0x1)(ConstParm, BlueprintVisible, Net, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_3017[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       PreviousTime;                                      // 0x380(0x8)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Current_Velocity;                                  // 0x388(0x18)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
	bool                                         Debug_bubbles;                                     // 0x3A0(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, SubobjectReference)
	uint8                                        Pad_3018[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       BubbleCountMultiplier;                             // 0x3A8(0x8)(ConstParm, EditFixedSize, ReturnParm, SubobjectReference)

	static class UClass* StaticClass();
	static class UBP_PrimalWindSourceComponent_Base_C* GetDefaultObj();

	class FName Get_Bubble_System_Tag(class FName ReturnValue);
	bool Deactivate_bubble_system(bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1);
	float Creating_Bubbles_Code(const TArray<class AActor*>& Temp_object_Variable, bool* CallFunc_IsValid_ReturnValue, bool* CallFunc_IsValid_ReturnValue_1, bool* CallFunc_IsValid_ReturnValue_2, bool* CallFunc_IsValid_ReturnValue_3);
	double PlayFluidImpactEffectSound(float PenetrationScalar, const struct FVector& ImpactLocation, bool* Exited, const struct FVector& OwnerVelocity, class USoundBase* Temp_object_Variable, class USoundBase* Temp_object_Variable_1, class USoundBase* Temp_object_Variable_2, class USoundBase* Temp_object_Variable_3, class USoundBase* Temp_object_Variable_4, class USoundBase* Temp_object_Variable_5, class USoundBase* Temp_object_Variable_6, class USoundBase* Temp_object_Variable_7, class USoundBase* Temp_object_Variable_8, class USoundBase* Temp_object_Variable_9, class USoundBase** K2Node_Select_Default, class USoundBase* Temp_object_Variable_10, class USoundBase** K2Node_Select_Default_1);
	struct FVector PlayFluidImpactEffect(float PenetrationScalar, const struct FVector& ImpactLocation, bool* Exited, const struct FVector& OwnerVelocity, bool* CallFunc_IsValid_ReturnValue);
	struct FVector Calc_velocity();
	void Event_loop();
	void BPImpactedFluidSurface(const struct FVector& ImpactLocation, float PenetrationScalar);
	void BPExitedFluidSurface(const struct FVector& ImpactLocation, float PenetrationScalar);
	void BPImpactingFluidSurfaceTick(const struct FVector& ImpactLocation, float PenetrationScalar);
	void BPHandleCreatingBubbles();
	void BPDeactivateBubbleComponent();
	float ExecuteUbergraph_BP_PrimalWindSourceComponent_Base(double CallFunc_Multiply_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
};

}


