#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x3C0 (0x550 - 0x190)
// Class HoverDrone.HoverDroneMovementComponent
class UHoverDroneMovementComponent : public USpectatorPawnMovement
{
public:
	uint8                                        Pad_1A16[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	int32                                        MaxAllowedSpeedIndex;                              // 0x1A8(0x4)(BlueprintVisible, ExportObject, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A18[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	FMulticastInlineDelegateProperty_            MaxAllowedSpeedUpdated;                            // 0x1B0(0x10)(Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A19[0x48];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        DirectRotationInputYawScale;                       // 0x208(0x4)(Edit, BlueprintReadOnly, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        DirectRotationInputPitchScale;                     // 0x20C(0x4)(Edit, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A1A[0x18];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        DirectRotationInputInterpSpeed;                    // 0x228(0x4)(Edit, BlueprintReadOnly, Net, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseFOVScaling;                                    // 0x22C(0x1)(Edit, ExportObject, Net, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A1B[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector2D                             CameraFovRange;                                    // 0x230(0x10)(Edit, Net, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector2D                             InputFovScaleRange;                                // 0x240(0x10)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        RotAcceleration;                                   // 0x250(0x4)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        RotDeceleration;                                   // 0x254(0x4)(Edit, BlueprintVisible, EditFixedSize, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxPitchRotSpeed;                                  // 0x258(0x4)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxYawRotSpeed;                                    // 0x25C(0x4)(BlueprintVisible, BlueprintReadOnly, Net, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        FullAirFrictionVelocity;                           // 0x260(0x4)(Edit, ConstParm, BlueprintVisible, Net, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A1D[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	struct FVector                               MovementAccelFactor;                               // 0x268(0x18)(BlueprintVisible, ExportObject, BlueprintReadOnly, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A1E[0x170];                                   // Fixing Size After Last Property  > TateDumper <
	TArray<struct FDroneSpeedParameters>         DroneSpeedParameters;                              // 0x3F0(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, ZeroConstructor, DisableEditOnTemplate, Transient, Config)
	TArray<struct FDroneSpeedParameters>         DroneSpeedParameters_NewModel;                     // 0x400(0x10)(BlueprintVisible, ExportObject, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        Acceleration_NewModel;                             // 0x410(0x4)(Config, EditConst, InstancedReference, SubobjectReference)
	float                                        Deceleration_NewModel;                             // 0x414(0x4)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxSpeed_NewModel;                                 // 0x418(0x4)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxYawRotSpeed_NewModel;                           // 0x41C(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxPitchRotSpeed_NewModel;                         // 0x420(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        RotAcceleration_NewModel;                          // 0x424(0x4)(ConstParm, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        RotDeceleration_NewModel;                          // 0x428(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bUseNewDroneFlightModel;                           // 0x42C(0x1)(ExportObject, Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A1F[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinAirFriction;                                    // 0x430(0x4)(Net, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	int32                                        DroneSpeedParamIndex;                              // 0x434(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A20[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinSpeedHeight;                                    // 0x43C(0x4)(Edit, BlueprintVisible, ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxSpeedHeight;                                    // 0x440(0x4)(Edit, BlueprintVisible, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxSpeedHeightMultiplier;                          // 0x444(0x4)(ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MinPitch;                                          // 0x448(0x4)(Edit, ConstParm, ExportObject, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaxPitch;                                          // 0x44C(0x4)(ConstParm, BlueprintVisible, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A22[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        DroneMaxAltitude;                                  // 0x454(0x4)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A24[0x8];                                     // Fixing Size After Last Property  > TateDumper <
	float                                        MinHoverHeight;                                    // 0x460(0x4)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaintainHoverHeightTolerance;                      // 0x464(0x4)(ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	float                                        MaintainHoverHeightPredictionTime;                 // 0x468(0x4)(ConstParm, BlueprintVisible, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A25[0x3C];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        ForceFacingInterpInTime;                           // 0x4A8(0x4)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bSimulateRotation : 1;                             // Mask: 0x1, PropSize: 0x10x4AC(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        bIgnoreDroneLimiters : 1;                          // Mask: 0x2, PropSize: 0x10x4AC(0x1)(BlueprintVisible, Net, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        BitPad_D9 : 6;                                     // Fixing Bit-Field Size  > TateDumper <
	uint8                                        Pad_1A26[0x33];                                    // Fixing Size After Last Property  > TateDumper <
	float                                        FollowedActorPositionInterpSpeed;                  // 0x4E0(0x4)(Edit, ConstParm, BlueprintReadOnly, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A27[0x6C];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoverDroneMovementComponent* GetDefaultObj();

	void StopForceFacing();
	float SetCurrentFOV();
	void ForceFacing(struct FVector* Location);
	struct FVector AddVelocity();
	struct FRotator AddRotationalVelocity();
};

// 0x8 (0x5B0 - 0x5A8)
// Class HoverDrone.HoverDronePawnBase
class AHoverDronePawnBase : public ADefaultPawn
{
public:
	class UCameraComponent*                      CameraComponent;                                   // 0x5A8(0x8)(Edit, EditFixedSize, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig)

	static class UClass* StaticClass();
	static class AHoverDronePawnBase* GetDefaultObj();

};

// 0xD0 (0x680 - 0x5B0)
// Class HoverDrone.HoverDronePawn
class AHoverDronePawn : public AHoverDronePawnBase
{
public:
	bool                                         bIsTiltingEnabled;                                 // 0x5B0(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bAllowSpeedChange;                                 // 0x5B1(0x1)(Edit, ExportObject, Net, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bConstrainMovementToXYPlane;                       // 0x5B2(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A49[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	struct FIIRInterpolatorRotator               DroneTiltInterpolator;                             // 0x5B8(0x78)(ConstParm, BlueprintVisible, ExportObject, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	struct FVector                               TiltUpVector;                                      // 0x630(0x18)(Edit, ConstParm, BlueprintVisible, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	bool                                         bEnableTiltLimits;                                 // 0x648(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A4B[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	struct FRotator                              TiltLimits;                                        // 0x650(0x18)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A4C[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AHoverDronePawn* GetDefaultObj();

	void TurnAccel(float Val);
	void SetToDefaultDroneSpeedIndex();
	void SetDroneSpeedIndex(int32 SpeedIndex);
	void SetAllowSpeedChange(bool bOnOff);
	void MoveUp(float Val);
	void LookUpAccel(float Val);
	void IsMaintainingConstantAltitude(bool* ReturnValue);
	float GetTiltedDroneRotation(struct FRotator* ReturnValue);
	void GetDroneSpeedIndex(int32* ReturnValue);
	void GetAltitude(float* ReturnValue);
	void EndLookat();
	void BeginLookat();
};

// 0x8 (0x520 - 0x518)
// Class HoverDrone.HoverDroneSpeedLimitBox
class AHoverDroneSpeedLimitBox : public AVolume
{
public:
	int32                                        MaxAllowedSpeedIndex;                              // 0x518(0x4)(BlueprintVisible, ExportObject, Net, Parm, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A55[0x4];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class AHoverDroneSpeedLimitBox* GetDefaultObj();

};

// 0xB8 (0xE8 - 0x30)
// Class HoverDrone.HoverDroneVolumeManager
class UHoverDroneVolumeManager : public UGameInstanceSubsystem
{
public:
	TSet<class AHoverDroneSpeedLimitBox*>        SpeedLimitBoxes;                                   // 0x30(0x50)(ConstParm, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	TSet<class ABlockingVolume*>                 BlockingVolumes;                                   // 0x80(0x50)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, Config, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_1A5B[0x18];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UHoverDroneVolumeManager* GetDefaultObj();

};

}

