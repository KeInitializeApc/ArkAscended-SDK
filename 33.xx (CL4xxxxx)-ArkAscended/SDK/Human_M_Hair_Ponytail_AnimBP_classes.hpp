#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xDD4 (0x111C - 0x348)
// AnimBlueprintGeneratedClass Human_M_Hair_Ponytail_AnimBP.Human_M_Hair_Ponytail_AnimBP_C
class UHuman_M_Hair_Ponytail_AnimBP_C : public UAnimInstance
{
public:
	uint8                                        Pad_4EFB[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x350(0x8)(Edit, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_PropertyAccess;             // 0x358(0x8)(ConstParm, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FAnimSubsystemInstance                AnimBlueprintExtension_Base;                       // 0x360(0x8)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_Root                        AnimGraphNode_Root;                                // 0x368(0x20)(Edit, ConstParm, ExportObject, Net, EditFixedSize, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_CopyPoseFromMesh            AnimGraphNode_CopyPoseFromMesh;                    // 0x388(0x1D8)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FAnimNode_RigidBody                   AnimGraphNode_RigidBody;                           // 0x560(0x9E0)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_ConvertLocalToComponentSpace AnimGraphNode_LocalToComponentSpace;               // 0xF40(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, ReturnParm, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_ConvertComponentToLocalSpace AnimGraphNode_ComponentToLocalSpace;               // 0xF60(0x20)(Edit, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	struct FAnimNode_CopyBone                    AnimGraphNode_CopyBone;                            // 0xF80(0xF0)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, SubobjectReference)
	bool                                         K2Node_PropertyAccess_3;                           // 0x1070(0x1)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, NonTransactional)
	bool                                         K2Node_PropertyAccess_2;                           // 0x1071(0x1)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, RepNotify, Interp)
	enum class EMovementMode                     K2Node_PropertyAccess_1;                           // 0x1072(0x1)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference, Interp)
	uint8                                        Pad_4EFE[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               K2Node_PropertyAccess;                             // 0x1078(0x18)(BlueprintVisible, Net, DisableEditOnInstance, SubobjectReference)
	double                                       Override_World_Gravity_Z;                          // 0x1090(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         Swimming;                                          // 0x1098(0x1)(ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Pad_4EFF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	double                                       DefaultGravity;                                    // 0x10A0(0x8)(Edit, ExportObject, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       UnderwaterGravity;                                 // 0x10A8(0x8)(Edit, ConstParm, Net, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	double                                       Val;                                               // 0x10B0(0x8)(ConstParm, BlueprintVisible, ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               Noise;                                             // 0x10B8(0x18)(ConstParm, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference, SubobjectReference)
	double                                       GameTimeSeconds;                                   // 0x10D0(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               ExternalForce;                                     // 0x10D8(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class AShooterCharacter*                     As_Shooter_Character;                              // 0x10F0(0x8)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class UMaterialParameterCollection*          MaterialCollectionParameter;                       // 0x10F8(0x8)(Edit, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	struct FVector                               GlobalWindDirection;                               // 0x1100(0x18)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)
	float                                        GlobalWindIntensity;                               // 0x1118(0x4)(ConstParm, BlueprintVisible, Parm, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UHuman_M_Hair_Ponytail_AnimBP_C* GetDefaultObj();

	void AnimGraph(const struct FPoseLink& AnimGraph);
	float NoiseGen(double CallFunc_Multiply_DoubleFloat_ReturnValue, struct FVector* CallFunc_K2_MakePerlinNoiseVectorAndRemap_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, float* CallFunc_K2_MakePerlinNoiseVectorAndRemap_X_ImplicitCast, float* CallFunc_K2_MakePerlinNoiseVectorAndRemap_Y_ImplicitCast, float CallFunc_K2_MakePerlinNoiseVectorAndRemap_Z_ImplicitCast);
	struct FVector BlueprintThreadSafeUpdateAnimation(struct FVector* CallFunc_CalculateWind_Wind, double CallFunc_NoiseGen_DeltaTime_ImplicitCast, double* CallFunc_CalculateWind_GlobalWindIntensity_ImplicitCast);
	void BlueprintInitializeAnimation();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	class FName ExecuteUbergraph_Human_M_Hair_Ponytail_AnimBP(int32* EntryPoint, class AActor* CallFunc_GetOwningActor_ReturnValue, float* K2Node_Event_DeltaTimeX, class AShooterCharacter* K2Node_DynamicCast_AsShooter_Character, bool* K2Node_DynamicCast_bSuccess, struct FLinearColor* CallFunc_GetVectorParameterValue_ReturnValue, float* CallFunc_GetScalarParameterValue_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, double CallFunc_MakeVector_X_ImplicitCast, double CallFunc_MakeVector_Y_ImplicitCast);
};

}


