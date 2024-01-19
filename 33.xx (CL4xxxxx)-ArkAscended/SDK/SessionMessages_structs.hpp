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

// 0x10 (0x10 - 0x0)
// ScriptStruct SessionMessages.SessionServicePing
struct FSessionServicePing
{
public:
	class FString                                Username;                                          // 0x0(0x10)(BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct SessionMessages.SessionServicePong
struct FSessionServicePong
{
public:
	bool                                         Authorized;                                        // 0x0(0x1)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_348C[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                BuildDate;                                         // 0x8(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                DeviceName;                                        // 0x18(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient, Config, InstancedReference, SubobjectReference)
	struct FGuid                                 InstanceId;                                        // 0x28(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                InstanceName;                                      // 0x38(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                PlatformName;                                      // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FGuid                                 SessionId;                                         // 0x58(0x10)(Edit, BlueprintReadOnly, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SessionName;                                       // 0x68(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, OutParm, ReturnParm, Transient, GlobalConfig, SubobjectReference)
	class FString                                SessionOwner;                                      // 0x78(0x10)(Edit, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         Standalone;                                        // 0x88(0x1)(Edit, ConstParm, ExportObject, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_348F[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SessionMessages.SessionServiceLog
struct FSessionServiceLog
{
public:
	class FName                                  Category;                                          // 0x0(0x8)(ConstParm, BlueprintReadOnly, OutParm, Transient)
	class FString                                Data;                                              // 0x8(0x10)(ExportObject, Net, EditFixedSize, Parm, ReturnParm, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FGuid                                 InstanceId;                                        // 0x18(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, Parm, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       TimeSeconds;                                       // 0x28(0x8)(ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, DisableEditOnInstance, SubobjectReference)
	uint8                                        Verbosity;                                         // 0x30(0x1)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3491[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SessionMessages.SessionServiceLogSubscribe
struct FSessionServiceLogSubscribe
{
public:
	uint8                                        Pad_3492[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
struct FSessionServiceLogUnsubscribe
{
public:
	uint8                                        Pad_3493[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

}


