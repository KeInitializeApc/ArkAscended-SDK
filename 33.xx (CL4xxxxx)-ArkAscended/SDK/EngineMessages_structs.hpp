#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct EngineMessages.EngineServicePing
struct FEngineServicePing
{
public:
	uint8                                        Pad_2577[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct EngineMessages.EngineServicePong
struct FEngineServicePong
{
public:
	class FString                                CurrentLevel;                                      // 0x0(0x10)(Edit, BlueprintVisible, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	int32                                        EngineVersion;                                     // 0x10(0x4)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         HasBegunPlay;                                      // 0x14(0x1)(Edit, ExportObject, Net, DisableEditOnTemplate, Config, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Pad_2579[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 InstanceId;                                        // 0x18(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FString                                InstanceType;                                      // 0x28(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 SessionId;                                         // 0x38(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	float                                        WorldTimeSeconds;                                  // 0x48(0x4)(Edit, BlueprintVisible, ExportObject, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_257A[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct EngineMessages.EngineServiceAuthDeny
struct FEngineServiceAuthDeny
{
public:
	class FString                                Username;                                          // 0x0(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                UserToDeny;                                        // 0x10(0x10)(BlueprintVisible, ExportObject, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct EngineMessages.EngineServiceAuthGrant
struct FEngineServiceAuthGrant
{
public:
	class FString                                Username;                                          // 0x0(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	class FString                                UserToGrant;                                       // 0x10(0x10)(ConstParm, BlueprintReadOnly, ReturnParm, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct EngineMessages.EngineServiceExecuteCommand
struct FEngineServiceExecuteCommand
{
public:
	class FString                                Command;                                           // 0x0(0x10)(Edit, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FString                                Username;                                          // 0x10(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EngineMessages.EngineServiceTerminate
struct FEngineServiceTerminate
{
public:
	class FString                                Username;                                          // 0x0(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EngineMessages.EngineServiceNotification
struct FEngineServiceNotification
{
public:
	class FString                                Text;                                              // 0x0(0x10)(Edit, Net, OutParm, DisableEditOnTemplate, EditConst)
	double                                       TimeSeconds;                                       // 0x10(0x8)(Edit, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
};

}


