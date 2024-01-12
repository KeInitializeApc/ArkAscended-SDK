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
	class FString                                Username;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, GlobalConfig, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct SessionMessages.SessionServicePong
struct FSessionServicePong
{
public:
	bool                                         Authorized;                                        // 0x0(0x1)(Edit, ConstParm, BlueprintVisible, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3123[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                BuildDate;                                         // 0x8(0x10)(Edit, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	class FString                                DeviceName;                                        // 0x18(0x10)(EditFixedSize, Parm, ZeroConstructor, Transient, Config, InstancedReference, SubobjectReference)
	struct FGuid                                 InstanceId;                                        // 0x28(0x10)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	class FString                                InstanceName;                                      // 0x38(0x10)(BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ReturnParm, Transient, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                PlatformName;                                      // 0x48(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, DisableEditOnInstance, EditConst)
	struct FGuid                                 SessionId;                                         // 0x58(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, EditFixedSize, Parm, OutParm, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SessionName;                                       // 0x68(0x10)(Edit, ConstParm, ExportObject, Net, Transient, GlobalConfig, SubobjectReference)
	class FString                                SessionOwner;                                      // 0x78(0x10)(ConstParm, ExportObject, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	bool                                         Standalone;                                        // 0x88(0x1)(BlueprintVisible, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3126[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SessionMessages.SessionServiceLog
struct FSessionServiceLog
{
public:
	class FName                                  Category;                                          // 0x0(0x8)(ConstParm, BlueprintReadOnly, OutParm, Transient)
	class FString                                Data;                                              // 0x8(0x10)(ExportObject, Net, ZeroConstructor, DisableEditOnTemplate, Transient, DisableEditOnInstance, EditConst, SubobjectReference)
	struct FGuid                                 InstanceId;                                        // 0x18(0x10)(Edit, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, DisableEditOnInstance, EditConst, SubobjectReference)
	double                                       TimeSeconds;                                       // 0x28(0x8)(Edit, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, OutParm, ReturnParm, DisableEditOnTemplate, Transient, Config, GlobalConfig)
	uint8                                        Verbosity;                                         // 0x30(0x1)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Transient, Config, DisableEditOnInstance, InstancedReference, SubobjectReference)
	uint8                                        Pad_3128[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SessionMessages.SessionServiceLogSubscribe
struct FSessionServiceLogSubscribe
{
public:
	uint8                                        Pad_3129[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
struct FSessionServiceLogUnsubscribe
{
public:
	uint8                                        Pad_312A[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

}


