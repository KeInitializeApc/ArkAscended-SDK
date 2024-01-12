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
	bool                                         bUseForSynchronization;                            // 0x28(0x1)(ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_928[0x3];                                      // Fixing Size After Last Property  > TateDumper <
	int32                                        FrameOffset;                                       // 0x2C(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, Transient, DisableEditOnInstance, InstancedReference, SubobjectReference)

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
	bool                                         bAutoDetectFormat;                                 // 0x28(0x1)(ConstParm, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_92E[0x7];                                      // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGenlockedCustomTimeStep* GetDefaultObj();

};

// 0x20 (0x50 - 0x30)
// Class TimeManagement.GenlockedFixedRateCustomTimeStep
class UGenlockedFixedRateCustomTimeStep : public UGenlockedCustomTimeStep
{
public:
	struct FFrameRate                            FrameRate;                                         // 0x30(0x8)(ExportObject, BlueprintReadOnly, Net, OutParm, ReturnParm)
	bool                                         bShouldBlock;                                      // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Config, DisableEditOnInstance, GlobalConfig, SubobjectReference)
	bool                                         bForceSingleFrameDeltaTime;                        // 0x39(0x1)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_934[0x16];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGenlockedFixedRateCustomTimeStep* GetDefaultObj();

};

// 0x28 (0x58 - 0x30)
// Class TimeManagement.GenlockedTimecodeProvider
class UGenlockedTimecodeProvider : public UTimecodeProvider
{
public:
	bool                                         bUseGenlockToCount;                                // 0x30(0x1)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	uint8                                        Pad_936[0x27];                                     // Fixing Size Of Struct > TateDumper <

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

	struct FFrameTime TransformTime();
	struct FFrameNumber Subtract_FrameNumberInteger();
	struct FFrameNumber Subtract_FrameNumberFrameNumber();
	struct FFrameTime SnapFrameTimeToRate();
	struct FFrameTime Multiply_SecondsFrameRate(float TimeInSeconds);
	struct FFrameNumber Multiply_FrameNumberInteger();
	bool IsValid_MultipleOf();
	bool IsValid_Framerate();
	struct FFrameRate GetTimecodeFrameRate();
	struct FTimecode GetTimecode();
	struct FFrameNumber Divide_FrameNumberInteger();
	class FString Conv_TimecodeToString();
	float Conv_QualifiedFrameTimeToSeconds();
	float Conv_FrameRateToSeconds();
	int32 Conv_FrameNumberToInteger(const struct FFrameNumber& InFrameNumber);
	struct FFrameNumber Add_FrameNumberInteger();
	struct FFrameNumber Add_FrameNumberFrameNumber();
};

}


