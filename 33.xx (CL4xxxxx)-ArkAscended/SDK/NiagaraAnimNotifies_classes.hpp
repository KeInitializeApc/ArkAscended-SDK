#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x78 - 0x30)
// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffect
class UAnimNotifyState_TimedNiagaraEffect : public UAnimNotifyState
{
public:
	class UNiagaraSystem*                        Template;                                          // 0x30(0x8)(Edit, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	class FName                                  SocketName;                                        // 0x38(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               LocationOffset;                                    // 0x40(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FRotator                              RotationOffset;                                    // 0x58(0x18)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	bool                                         bDestroyAtEnd;                                     // 0x70(0x1)(ConstParm, ExportObject, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_291[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAnimNotifyState_TimedNiagaraEffect* GetDefaultObj();

	void GetSpawnedEffect(class UMeshComponent** MeshComp, class UFXSystemComponent* ReturnValue);
};

// 0x70 (0xE8 - 0x78)
// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{
public:
	bool                                         bEnableNormalizedNotifyProgress;                   // 0x78(0x1)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_295[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  NotifyProgressUserParameter;                       // 0x7C(0x8)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_296[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCurveParameterPair>           AnimCurves;                                        // 0x88(0x10)(ConstParm, BlueprintReadOnly, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_297[0x50];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAnimNotifyState_TimedNiagaraEffectAdvanced* GetDefaultObj();

	void GetNotifyProgress(class UMeshComponent** MeshComp, float ReturnValue);
};

// 0x90 (0xD0 - 0x40)
// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{
public:
	class UNiagaraSystem*                        Template;                                          // 0x40(0x8)(Edit, BlueprintVisible, EditFixedSize, DisableEditOnTemplate, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FVector                               LocationOffset;                                    // 0x48(0x18)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FRotator                              RotationOffset;                                    // 0x60(0x18)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ReturnParm, Transient, InstancedReference, SubobjectReference)
	struct FVector                               Scale;                                             // 0x78(0x18)(Edit, ExportObject, Parm, ZeroConstructor, Transient, Config)
	bool                                         bAbsoluteScale;                                    // 0x90(0x1)(Edit, ConstParm, BlueprintVisible, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_29A[0x2F];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        Attached : 1;                                      // Mask: 0x1, PropSize: 0x10xC0(0x1)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        BitPad_1A : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_29B[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  SocketName;                                        // 0xC4(0x8)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_29C[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAnimNotify_PlayNiagaraEffect* GetDefaultObj();

	void GetSpawnedEffect(class UFXSystemComponent* ReturnValue);
};

}


