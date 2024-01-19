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
	bool                                         bUseForSynchronization;                            // 0x28(0x1)(Edit, BlueprintReadOnly, Parm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_701[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        FrameOffset;                                       // 0x2C(0x4)(BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
	bool                                         bAutoDetectFormat;                                 // 0x28(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_70E[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGenlockedCustomTimeStep* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class TimeManagement.GenlockedFixedRateCustomTimeStep
class UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep
{
public:
	struct FFrameRate                            FrameRate;                                         // 0x30(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
	bool                                         bShouldBlock;                                      // 0x38(0x1)(ExportObject, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bForceSingleFrameDeltaTime;                        // 0x39(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_715[0x16];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGenlockedFixedRateCustomTimeStep* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class TimeManagement.GenlockedTimecodeProvider
class UGenlockedTimecodeProvider : public UTimecodeProvider
{
public:
	bool                                         bUseGenlockToCount;                                // 0x30(0x1)(Edit, ConstParm, Net, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_71B[0x27];                                     // Fixing Size Of Struct > TateDumper <

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

	struct FFrameRate TransformTime(struct FFrameTime* SourceTime, const struct FFrameTime& ReturnValue);
	int32 Subtract_FrameNumberInteger(const struct FFrameNumber& ReturnValue);
	struct FFrameNumber Subtract_FrameNumberFrameNumber(const struct FFrameNumber& ReturnValue);
	struct FFrameRate SnapFrameTimeToRate(struct FFrameTime* SourceTime, const struct FFrameTime& ReturnValue);
	struct FFrameRate Multiply_SecondsFrameRate(const struct FFrameTime& ReturnValue);
	int32 Multiply_FrameNumberInteger(const struct FFrameNumber& ReturnValue);
	struct FFrameRate IsValid_MultipleOf(bool ReturnValue);
	struct FFrameRate IsValid_Framerate(bool ReturnValue);
	void GetTimecodeFrameRate(const struct FFrameRate& ReturnValue);
	void GetTimecode(const struct FTimecode& ReturnValue);
	int32 Divide_FrameNumberInteger(const struct FFrameNumber& ReturnValue);
	bool Conv_TimecodeToString(const class FString& ReturnValue);
	struct FQualifiedFrameTime Conv_QualifiedFrameTimeToSeconds(float ReturnValue);
	struct FFrameRate Conv_FrameRateToSeconds(float ReturnValue);
	void Conv_FrameNumberToInteger(struct FFrameNumber* InFrameNumber, int32 ReturnValue);
	int32 Add_FrameNumberInteger(const struct FFrameNumber& ReturnValue);
	struct FFrameNumber Add_FrameNumberFrameNumber(const struct FFrameNumber& ReturnValue);
};

}


