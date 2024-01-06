#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class TimeManagement.TimeSynchronizationSource
class UTimeSynchronizationSource : public UObject
{
public:
	bool                                         bUseForSynchronization;                            // 0x28(0x1)(ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, EditConst, InstancedReference, SubobjectReference)
	uint8                                        Pad_6F9[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        FrameOffset;                                       // 0x2C(0x4)(BlueprintVisible, Net, OutParm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class UTimeSynchronizationSource* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TimeManagement.FixedFrameRateCustomTimeStep
class UFixedFrameRateCustomTimeStep : public UEngineCustomTimeStep
{
public:

	static class UClass* StaticClass();
	static class UFixedFrameRateCustomTimeStep* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class TimeManagement.GenlockedCustomTimeStep
class UGenlockedCustomTimeStep : public UFixedFrameRateCustomTimeStep
{
public:
	bool                                         bAutoDetectFormat;                                 // 0x28(0x1)(ConstParm, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_757[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGenlockedCustomTimeStep* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class TimeManagement.GenlockedFixedRateCustomTimeStep
class UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep
{
public:
	struct FFrameRate                            FrameRate;                                         // 0x30(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
	bool                                         bShouldBlock;                                      // 0x38(0x1)(Edit, ConstParm, BlueprintVisible, Parm, ReturnParm, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bForceSingleFrameDeltaTime;                        // 0x39(0x1)(BlueprintVisible, ExportObject, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_75F[0x16];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGenlockedFixedRateCustomTimeStep* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class TimeManagement.GenlockedTimecodeProvider
class UGenlockedTimecodeProvider : public UTimecodeProvider
{
public:
	bool                                         bUseGenlockToCount;                                // 0x30(0x1)(ConstParm, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_769[0x27];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGenlockedTimecodeProvider* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class TimeManagement.TimeManagementBlueprintLibrary
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UTimeManagementBlueprintLibrary* GetDefaultObj();

	void TransformTime(const struct FFrameTime& SourceTime, struct FFrameRate* SourceRate, struct FFrameRate* DestinationRate, struct FFrameTime* ReturnValue);
	int32 Subtract_FrameNumberInteger(struct FFrameNumber* ReturnValue);
	struct FFrameNumber Subtract_FrameNumberFrameNumber(struct FFrameNumber* ReturnValue);
	void SnapFrameTimeToRate(const struct FFrameTime& SourceTime, struct FFrameRate* SourceRate, struct FFrameRate* SnapToRate, struct FFrameTime* ReturnValue);
	struct FFrameRate Multiply_SecondsFrameRate(struct FFrameTime* ReturnValue);
	int32 Multiply_FrameNumberInteger(struct FFrameNumber* ReturnValue);
	void IsValid_MultipleOf(struct FFrameRate* InFrameRate, struct FFrameRate* OtherFramerate, bool* ReturnValue);
	void IsValid_Framerate(struct FFrameRate* InFrameRate, bool* ReturnValue);
	void GetTimecodeFrameRate(struct FFrameRate* ReturnValue);
	void GetTimecode(struct FTimecode* ReturnValue);
	int32 Divide_FrameNumberInteger(struct FFrameNumber* ReturnValue);
	void Conv_TimecodeToString(struct FTimecode* InTimecode, bool* bForceSignDisplay, class FString* ReturnValue);
	void Conv_QualifiedFrameTimeToSeconds(struct FQualifiedFrameTime* InFrameTime, float* ReturnValue);
	void Conv_FrameRateToSeconds(struct FFrameRate* InFrameRate, float* ReturnValue);
	void Conv_FrameNumberToInteger(struct FFrameNumber* InFrameNumber, int32* ReturnValue);
	int32 Add_FrameNumberInteger(struct FFrameNumber* ReturnValue);
	struct FFrameNumber Add_FrameNumberFrameNumber(struct FFrameNumber* ReturnValue);
};

}


