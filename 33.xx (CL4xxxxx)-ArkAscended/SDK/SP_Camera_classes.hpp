#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x128 (0x150 - 0x28)
// Class SP_Camera.SPCameraMode
class USPCameraMode : public UObject
{
public:
	class ASPPlayerCameraManager*                PlayerCamera;                                      // 0x28(0x8)(BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, Transient, DisableEditOnInstance, SubobjectReference)
	float                                        TransitionInTime;                                  // 0x30(0x4)(ExportObject, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FViewTargetTransitionParams           TransitionParams;                                  // 0x34(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        FOV;                                               // 0x44(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig, DuplicateTransient)
	bool                                         bUseViewTargetCameraComponent;                     // 0x48(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bUseCineCam;                                       // 0x49(0x1)(ExportObject, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bUseCineCamSettings;                               // 0x4A(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bOverrideFilmback;                                 // 0x4B(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FCameraFilmbackSettings               CineCam_FilmbackOverride;                          // 0x4C(0xC)(ConstParm, BlueprintVisible, Net, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        CineCam_CurrentFocalLength;                        // 0x58(0x4)(ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        CineCam_CurrentAperture;                           // 0x5C(0x4)(Edit, ConstParm, ExportObject, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        CineCam_FocusDistanceAdjustment;                   // 0x60(0x4)(ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        CineCam_DisplayOnly_FOV;                           // 0x64(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TArray<class AActor*>                        BlockingActors;                                    // 0x68(0x10)(Edit, BlueprintVisible, Net, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_11C2[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class UClass*                                CameraShakeClass;                                  // 0x80(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UCameraShakeBase*                      CameraShakeInstance;                               // 0x88(0x8)(Edit, BlueprintReadOnly, EditFixedSize, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bScaleShakeWithViewTargetVelocity;                 // 0x90(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_11C5[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             ShakeScaling_SpeedRange;                           // 0x98(0x10)(ConstParm, BlueprintReadOnly, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             ShakeScaling_ScaleRange;                           // 0xA8(0x10)(Edit, BlueprintVisible, Net, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FIIRInterpolatorFloat                 ShakeScaleInterpolator;                            // 0xB8(0x20)(Edit, ExportObject, BlueprintReadOnly, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugShake;                                   // 0xD8(0x1)(BlueprintReadOnly, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bUseCustomFocusDistance;                           // 0xD9(0x1)(Edit, ConstParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bOverrideViewPitchMinAndMax;                       // 0xDA(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_11CC[0x1];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        ViewPitchMinOverride;                              // 0xDC(0x4)(Edit, ExportObject, Net, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	float                                        ViewPitchMaxOverride;                              // 0xE0(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_11CD[0x6C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USPCameraMode* GetDefaultObj();

	void ResetToDefaultSettings();
	void GetCustomFocusDistance(class AActor** ViewTarget, struct FTransform* ViewToWorld, float ReturnValue);
};

// 0x370 (0x4C0 - 0x150)
// Class SP_Camera.SPCam_AttachedCamera
class USPCam_AttachedCamera : public USPCameraMode
{
public:
	struct FDoubleIIRInterpolatorVector          LocInterpolator;                                   // 0x150(0x108)(ConstParm, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FDoubleIIRInterpolatorRotator         RotInterpolator;                                   // 0x258(0x108)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bAllowPlayerRotationControl;                       // 0x360(0x1)(ConstParm, ExportObject, Net, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_11DD[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FDoubleIIRInterpolatorRotator         PlayerControlRotInterpolator;                      // 0x368(0x108)(Edit, ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FIIRInterpolatorFloat                 ExtraLocZInterpolator;                             // 0x470(0x20)(Edit, ConstParm, BlueprintVisible, ExportObject, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             PivotPitchLimits;                                  // 0x490(0x10)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             PivotYawLimits;                                    // 0x4A0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	class UCameraComponent*                      LastViewCameraComponent;                           // 0x4B0(0x8)(Edit, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_11E1[0x8];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USPCam_AttachedCamera* GetDefaultObj();

	void ChooseViewCameraComponent(class AActor** ViewTarget, class UCameraComponent* ReturnValue);
};

// 0x6F0 (0x840 - 0x150)
// Class SP_Camera.SPCam_ThirdPerson
class USPCam_ThirdPerson : public USPCameraMode
{
public:
	struct FTransform                            PivotToViewTarget;                                 // 0x150(0x60)(BlueprintVisible, ExportObject, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FDoubleIIRInterpolatorVector          PivotLocInterpolator;                              // 0x1B0(0x108)(Edit, Net, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FDoubleIIRInterpolatorRotator         PivotRotInterpolator;                              // 0x2B8(0x108)(ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FIIRInterpolatorFloat                 ExtraPivotLocZInterpolator;                        // 0x3C0(0x20)(ExportObject, OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             PivotPitchLimits;                                  // 0x3E0(0x10)(ConstParm, BlueprintVisible, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FVector2D                             PivotYawLimits;                                    // 0x3F0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FTransform                            CameraToPivot;                                     // 0x400(0x60)(OutParm, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FDoubleIIRInterpolatorVector          CameraToPivotTranslationInterpolator;              // 0x460(0x108)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	class UCurveVector*                          CameraToPivot_PitchAdjustmentCurve;                // 0x568(0x8)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        CameraToPivot_PitchAdjustmentCurveScale;           // 0x570(0x4)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_11ED[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	class UCurveVector*                          CameraToPivot_SpeedAdjustmentCurve;                // 0x578(0x8)(BlueprintVisible, BlueprintReadOnly, Net, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        CameraToPivot_SpeedAdjustmentCurveScale;           // 0x580(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_11EE[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CameraToPivot_SpeedAdjustment_SpeedRange;          // 0x588(0x10)(ConstParm, ExportObject, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	enum class ECameraAutoFollowMode             AutoFollowMode;                                    // 0x598(0x1)(ConstParm, Parm, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_11EF[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             LazyAutoFollowPitchLimits;                         // 0x5A0(0x10)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	bool                                         bAllowLazyAutoFollowPitchControl;                  // 0x5B0(0x1)(Edit, ConstParm, Net, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_11F1[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        LazyFollowGoalPitch;                               // 0x5B4(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        LazyFollowLaziness;                                // 0x5B8(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, ReturnParm, Config, InstancedReference, SubobjectReference)
	float                                        LazyFollowDelayAfterUserControl;                   // 0x5BC(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_11F4[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LookatOffsetLocal;                                 // 0x5C8(0x18)(Edit, ConstParm, BlueprintReadOnly, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
	struct FIIRInterpolatorVector                LookatWorldSpaceInterpolator;                      // 0x5E0(0x78)(BlueprintVisible, Net, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_11F5[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	uint8                                        bUseLookatPoint : 1;                               // Mask: 0x1, PropSize: 0x10x670(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        bDoPredictiveLookat : 1;                           // Mask: 0x2, PropSize: 0x10x670(0x1)(BlueprintReadOnly, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_A9 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_11F6[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PredictiveLookatTime;                              // 0x674(0x4)(Edit, BlueprintVisible, ReturnParm, Config, InstancedReference, SubobjectReference)
	TArray<struct FPenetrationAvoidanceRay>      CameraPenetrationAvoidanceRays;                    // 0x678(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	TArray<struct FPenetrationAvoidanceRay>      SafeLocPenetrationAvoidanceRays;                   // 0x688(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FVector                               SafeLocationOffset;                                // 0x698(0x18)(ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	struct FIIRInterpolatorVector                SafeLocationInterpolator;                          // 0x6B0(0x78)(Edit, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        bValidateSafeLoc : 1;                              // Mask: 0x1, PropSize: 0x10x728(0x1)(BlueprintVisible, EditFixedSize, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        bPreventCameraPenetration : 1;                     // Mask: 0x2, PropSize: 0x10x728(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        bDoPredictiveAvoidance : 1;                        // Mask: 0x4, PropSize: 0x10x728(0x1)(ConstParm, ExportObject, Net, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        BitPad_AA : 5;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_11F9[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        PenetrationBlendInTime;                            // 0x72C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        PenetrationBlendOutTime;                           // 0x730(0x4)(Edit, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_11FB[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               LastSafeLocationLocal;                             // 0x738(0x18)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	float                                        LastPenetrationBlockedPct;                         // 0x750(0x4)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_11FD[0xE4];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bDrawDebugPivot;                                   // 0x838(0x1)(ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugLookat;                                  // 0x839(0x1)(Edit, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugSafeLoc;                                 // 0x83A(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	bool                                         bDrawDebugPenetrationAvoidance;                    // 0x83B(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, OutParm, ZeroConstructor, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_11FE[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class USPCam_ThirdPerson* GetDefaultObj();

};

// 0x8D0 (0x42F0 - 0x3A20)
// Class SP_Camera.SPPlayerCameraManager
class ASPPlayerCameraManager : public APlayerCameraManager
{
public:
	float                                        BasePelvisRelativeZ;                               // 0x3A20(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	class FName                                  PelvisBoneName;                                    // 0x3A24(0x8)(BlueprintVisible, ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_122C[0xC];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                AltViewTarget;                                     // 0x3A38(0x8)(BlueprintVisible, Net, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_122E[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	class AActor*                                SavedMainViewTarget;                               // 0x3A48(0x8)(Edit, ExportObject, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	TArray<struct FActiveSPCamera>               CameraBlendStack;                                  // 0x3A50(0x10)(BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	TArray<struct FSPCameraModeInstance>         CameraModeInstances;                               // 0x3A60(0x10)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_1232[0x880];                                   // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class ASPPlayerCameraManager* GetDefaultObj();

	bool StopAmbientCameraShake();
	void StartAmbientCameraShake();
	void SkipNextInterpolation();
	void SkipBlends();
	float SetViewPitchLimits();
	bool SetUsingAlternateCamera();
	enum class EDebugCameraStyle SetDebugCameraStyle();
	void ResetViewPitchLimits();
	void IsUsingAlternateCamera(bool ReturnValue);
	void GetCurrentCameraMode(class USPCameraMode* ReturnValue);
	class AActor* GetCameraClassForCharacter(class UClass* ReturnValue);
	float ConfigureAlternateCamera();
	void ClearAlternateCamera();
};

}


