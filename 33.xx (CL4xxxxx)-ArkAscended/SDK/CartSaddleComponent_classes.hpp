#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA0 (0x1500 - 0x1460)
// BlueprintGeneratedClass CartSaddleComponent.CartSaddleComponent_C
class UCartSaddleComponent_C : public USkeletalMeshComponentWithSoftRef
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1460(0x8)(BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               PrevLoc;                                           // 0x1468(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	float                                        MovingInterp_SpeedMin;                             // 0x1480(0x4)(Edit, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_32C9[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       NonMovingInterpSpeedMax;                           // 0x1488(0x8)(ExportObject, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       CurrentInterpSpeed;                                // 0x1490(0x8)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       MovingInterpSpeedMax;                              // 0x1498(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       LastTimeMoving;                                    // 0x14A0(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	double                                       LastTimeStartedMoving;                             // 0x14A8(0x8)(Edit, BlueprintVisible, Net, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         WasMoving;                                         // 0x14B0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_32CA[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       ZInterpSpeed;                                      // 0x14B8(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FRotator                              PrevRot;                                           // 0x14C0(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	bool                                         InterpLocation;                                    // 0x14D8(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_32CC[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class UNiagaraComponent*                     DustParticles;                                     // 0x14E0(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               DustParticlesOffset;                               // 0x14E8(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UCartSaddleComponent_C* GetDefaultObj();

	struct FVector3f TickFn(double* Z, bool CallFunc_IsValid_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, struct FVector* CallFunc_Subtract_VectorVector_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, bool CallFunc_IsTimeSince_ReturnValue, class APrimalCharacter* K2Node_DynamicCast_AsPrimal_Character, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BPFastTrace_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_BPFastTrace_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, double* CallFunc_FMin_ReturnValue, double* CallFunc_BreakVector_X, double* CallFunc_BreakVector_Y, double* CallFunc_BreakVector_Z, class AActor* CallFunc_GetOwner_ReturnValue_2, struct FHitResult* CallFunc_VTraceSingleBP_OutHit, bool* CallFunc_VTraceSingleBP_ReturnValue, double CallFunc_FInterpTo_ReturnValue, double CallFunc_Multiply_DoubleFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue, double* CallFunc_BreakVector_X_1, double* CallFunc_BreakVector_Y_1, double* CallFunc_BreakVector_Z_1, double CallFunc_FInterpTo_ReturnValue_1, struct FVector* CallFunc_MakeVector_ReturnValue, struct FVector* CallFunc_MakeVector_ReturnValue_1, class AActor* CallFunc_GetOwner_ReturnValue_3, double CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_IsTimeSince_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, float* CallFunc_Multiply_DoubleFloat_B_ImplicitCast, double* CallFunc_MakeVector_X_ImplicitCast, double* CallFunc_MakeVector_Y_ImplicitCast);
	void ReceiveBeginPlay();
	float ReceiveTick();
	struct FVector BPControlRigNotify(class FName NotifyCustomTag, struct FHitResult* WorldSpaceHitResult);
	double ExecuteUbergraph_CartSaddleComponent(int32* EntryPoint, float K2Node_Event_DeltaSeconds, bool CallFunc_IsValid_ReturnValue, const struct FHitResult& K2Node_Event_WorldSpaceHitResult, const struct FVector& K2Node_Event_Velocity, bool* K2Node_SwitchEnum_CmpSuccess, class AActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UNiagaraComponent** CallFunc_SpawnSystemAttached_ReturnValue);
};

}


