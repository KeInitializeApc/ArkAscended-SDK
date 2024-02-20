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
	class UNiagaraSystem*                        Template;                                          // 0x30(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	class FName                                  SocketName;                                        // 0x38(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	struct FVector                               LocationOffset;                                    // 0x40(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              RotationOffset;                                    // 0x58(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         bDestroyAtEnd;                                     // 0x70(0x1)(BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_206[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAnimNotifyState_TimedNiagaraEffect* GetDefaultObj();

	class UMeshComponent* GetSpawnedEffect(class UFXSystemComponent* ReturnValue);
};

// 0x70 (0xE8 - 0x78)
// Class NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{
public:
	bool                                         bEnableNormalizedNotifyProgress;                   // 0x78(0x1)(Edit, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_20E[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  NotifyProgressUserParameter;                       // 0x7C(0x8)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_20F[0x4];                                      // Fixing Size After Last Property  > TateDumper <
	TArray<struct FCurveParameterPair>           AnimCurves;                                        // 0x88(0x10)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_210[0x50];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAnimNotifyState_TimedNiagaraEffectAdvanced* GetDefaultObj();

	class UMeshComponent* GetNotifyProgress(float ReturnValue);
};

// 0x90 (0xD0 - 0x40)
// Class NiagaraAnimNotifies.AnimNotify_PlayNiagaraEffect
class UAnimNotify_PlayNiagaraEffect : public UAnimNotify
{
public:
	class UNiagaraSystem*                        Template;                                          // 0x40(0x8)(ConstParm, ExportObject, Net, Parm, OutParm, ReturnParm, Transient, EditConst, SubobjectReference)
	struct FVector                               LocationOffset;                                    // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FRotator                              RotationOffset;                                    // 0x60(0x18)(ConstParm, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FVector                               Scale;                                             // 0x78(0x18)(Edit, ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config)
	bool                                         bAbsoluteScale;                                    // 0x90(0x1)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_216[0x2F];                                     // Fixing Size After Last Property  > TateDumper <
	uint8                                        Attached : 1;                                      // Mask: 0x1, PropSize: 0x10xC0(0x1)(ConstParm, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_15 : 7;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_218[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	class FName                                  SocketName;                                        // 0xC4(0x8)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	uint8                                        Pad_219[0x4];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UAnimNotify_PlayNiagaraEffect* GetDefaultObj();

	void GetSpawnedEffect(class UFXSystemComponent* ReturnValue);
};

}


