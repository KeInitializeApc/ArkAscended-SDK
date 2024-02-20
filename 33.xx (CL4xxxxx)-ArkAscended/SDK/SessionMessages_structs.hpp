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
	class FString                                Username;                                          // 0x0(0x10)(ConstParm, ExportObject, Net, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct SessionMessages.SessionServicePong
struct FSessionServicePong
{
public:
	bool                                         Authorized;                                        // 0x0(0x1)(ConstParm, BlueprintVisible, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_266F[0x7];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                BuildDate;                                         // 0x8(0x10)(OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	class FString                                DeviceName;                                        // 0x18(0x10)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	struct FGuid                                 InstanceId;                                        // 0x28(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	class FString                                InstanceName;                                      // 0x38(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, ZeroConstructor, ReturnParm, Transient, EditConst, GlobalConfig, SubobjectReference)
	class FString                                PlatformName;                                      // 0x48(0x10)(ConstParm, BlueprintVisible, DisableEditOnTemplate, DisableEditOnInstance, EditConst)
	struct FGuid                                 SessionId;                                         // 0x58(0x10)(ConstParm, BlueprintReadOnly, Net, ReturnParm, DisableEditOnTemplate, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                SessionName;                                       // 0x68(0x10)(BlueprintVisible, BlueprintReadOnly, Net, Config, EditConst, SubobjectReference)
	class FString                                SessionOwner;                                      // 0x78(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Standalone;                                        // 0x88(0x1)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2673[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x38 (0x38 - 0x0)
// ScriptStruct SessionMessages.SessionServiceLog
struct FSessionServiceLog
{
public:
	class FName                                  Category;                                          // 0x0(0x8)(ConstParm, BlueprintReadOnly, OutParm, Transient)
	class FString                                Data;                                              // 0x8(0x10)(ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, ZeroConstructor, DisableEditOnTemplate, Config, EditConst, SubobjectReference)
	struct FGuid                                 InstanceId;                                        // 0x18(0x10)(ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, SubobjectReference)
	double                                       TimeSeconds;                                       // 0x28(0x8)(Edit, Net, Parm, OutParm, DisableEditOnInstance, EditConst, GlobalConfig, InstancedReference, DuplicateTransient)
	uint8                                        Verbosity;                                         // 0x30(0x1)(BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, GlobalConfig, SubobjectReference)
	uint8                                        Pad_2678[0x7];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SessionMessages.SessionServiceLogSubscribe
struct FSessionServiceLogSubscribe
{
public:
	uint8                                        Pad_2679[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

// 0x1 (0x1 - 0x0)
// ScriptStruct SessionMessages.SessionServiceLogUnsubscribe
struct FSessionServiceLogUnsubscribe
{
public:
	uint8                                        Pad_267A[0x1];                                     // Fixing Size Of Struct > TateDumper <
};

}


