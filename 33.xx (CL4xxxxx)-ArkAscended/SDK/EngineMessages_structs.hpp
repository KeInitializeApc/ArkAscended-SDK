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
	uint8                                        Pad_310E[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x50 (0x50 - 0x0)
// ScriptStruct EngineMessages.EngineServicePong
struct FEngineServicePong
{
public:
	class FString                                CurrentLevel;                                      // 0x0(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	int32                                        EngineVersion;                                     // 0x10(0x4)(Edit, ConstParm, BlueprintReadOnly, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	bool                                         HasBegunPlay;                                      // 0x14(0x1)(Edit, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, GlobalConfig)
	uint8                                        Pad_3110[0x3];                                     // Fixing Size After Last Property  > TateDumper <
	struct FGuid                                 InstanceId;                                        // 0x18(0x10)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                InstanceType;                                      // 0x28(0x10)(BlueprintVisible, ExportObject, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	struct FGuid                                 SessionId;                                         // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	float                                        WorldTimeSeconds;                                  // 0x48(0x4)(Edit, ConstParm, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
	uint8                                        Pad_3112[0x4];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x20 (0x20 - 0x0)
// ScriptStruct EngineMessages.EngineServiceAuthDeny
struct FEngineServiceAuthDeny
{
public:
	class FString                                Username;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class FString                                UserToDeny;                                        // 0x10(0x10)(ConstParm, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct EngineMessages.EngineServiceAuthGrant
struct FEngineServiceAuthGrant
{
public:
	class FString                                Username;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
	class FString                                UserToGrant;                                       // 0x10(0x10)(ExportObject, Net, EditFixedSize, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, InstancedReference, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct EngineMessages.EngineServiceExecuteCommand
struct FEngineServiceExecuteCommand
{
public:
	class FString                                Command;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                Username;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EngineMessages.EngineServiceTerminate
struct FEngineServiceTerminate
{
public:
	class FString                                Username;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EngineMessages.EngineServiceNotification
struct FEngineServiceNotification
{
public:
	class FString                                Text;                                              // 0x0(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, OutParm, ReturnParm, EditConst)
	double                                       TimeSeconds;                                       // 0x10(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig)
};

}


