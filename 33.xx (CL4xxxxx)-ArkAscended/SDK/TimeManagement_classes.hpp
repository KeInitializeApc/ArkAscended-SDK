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
	bool                                         bUseForSynchronization;                            // 0x28(0x1)(Edit, OutParm, ReturnParm, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_10DC[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	int32                                        FrameOffset;                                       // 0x2C(0x4)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, InstancedReference, SubobjectReference)

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
	bool                                         bAutoDetectFormat;                                 // 0x28(0x1)(ExportObject, BlueprintReadOnly, EditFixedSize, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1118[0x7];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGenlockedCustomTimeStep* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class TimeManagement.GenlockedFixedRateCustomTimeStep
class UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep
{
public:
	struct FFrameRate                            FrameRate;                                         // 0x30(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
	bool                                         bShouldBlock;                                      // 0x38(0x1)(Edit, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, Config, GlobalConfig, SubobjectReference)
	bool                                         bForceSingleFrameDeltaTime;                        // 0x39(0x1)(ConstParm, Net, EditFixedSize, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1122[0x16];                                    // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGenlockedFixedRateCustomTimeStep* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class TimeManagement.GenlockedTimecodeProvider
class UGenlockedTimecodeProvider : public UTimecodeProvider
{
public:
	bool                                         bUseGenlockToCount;                                // 0x30(0x1)(BlueprintReadOnly, Net, EditFixedSize, Transient, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_1129[0x27];                                    // Fixing Size Of Struct > TateDumper <

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

	struct FFrameTime TransformTime(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& DestinationRate);
	struct FFrameNumber Subtract_FrameNumberInteger();
	struct FFrameNumber Subtract_FrameNumberFrameNumber();
	struct FFrameTime SnapFrameTimeToRate(const struct FFrameTime& SourceTime, const struct FFrameRate& SourceRate, const struct FFrameRate& SnapToRate);
	struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds);
	struct FFrameNumber Multiply_FrameNumberInteger();
	bool IsValid_MultipleOf(const struct FFrameRate& InFrameRate, const struct FFrameRate& OtherFramerate);
	bool IsValid_Framerate(const struct FFrameRate& InFrameRate);
	struct FFrameRate GetTimecodeFrameRate();
	struct FTimecode GetTimecode();
	struct FFrameNumber Divide_FrameNumberInteger();
	class FString Conv_TimecodeToString(const struct FTimecode& InTimecode, bool bForceSignDisplay);
	float Conv_QualifiedFrameTimeToSeconds(const struct FQualifiedFrameTime& InFrameTime);
	float Conv_FrameRateToSeconds(const struct FFrameRate& InFrameRate);
	int32 Conv_FrameNumberToInteger();
	struct FFrameNumber Add_FrameNumberInteger();
	struct FFrameNumber Add_FrameNumberFrameNumber();
};

}


