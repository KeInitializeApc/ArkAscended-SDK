#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EPortType : uint8
{
	Game                           = 0,
	Query                          = 1,
	Rcon                           = 2,
	EPortType_MAX                  = 3,
};

enum class EPlatform : uint8
{
	Unknown                        = 0,
	PC                             = 1,
	MAC                            = 2,
	XBOX                           = 3,
	PLAYSTATION                    = 4,
	SWITCH                         = 5,
	ANDROID                        = 6,
	IOS                            = 7,
	EPlatform_MAX                  = 8,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct NitradoGameServerQuery.PortInfo
struct FPortInfo
{
public:
	uint16                                       Port;                                              // 0x0(0x2)(Edit, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, SubobjectReference)
	enum class EPortType                         Type;                                              // 0x2(0x1)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Net, Transient, Config)
	uint8                                        Pad_1028[0x5];                                     // Fixing Size After Last Property  > TateDumper <
	class FString                                Address;                                           // 0x8(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, EditFixedSize, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NitradoGameServerQuery.ModState
struct FModState
{
public:
	class FString                                ModId;                                             // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor, ReturnParm, Transient, EditConst, SubobjectReference)
	class FString                                Version;                                           // 0x10(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct NitradoGameServerQuery.GameServerState
struct FGameServerState
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, GlobalConfig, SubobjectReference)
	class FString                                ServerName;                                        // 0x10(0x10)(Edit, BlueprintReadOnly, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                MapName;                                           // 0x20(0x10)(BlueprintVisible, ExportObject, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	class FString                                Version;                                           // 0x30(0x10)(Edit, ConstParm, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ZeroConstructor, ReturnParm, DisableEditOnInstance)
	TArray<struct FPortInfo>                     Ports;                                             // 0x40(0x10)(ExportObject, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	TArray<enum class EPlatform>                 Platforms;                                         // 0x50(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int16                                        PlayerCount;                                       // 0x60(0x2)(Edit, Net, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int16                                        PlayerMax;                                         // 0x62(0x2)(Edit, ConstParm, ExportObject, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int16                                        PlayerReserved;                                    // 0x64(0x2)(Edit, ConstParm, BlueprintReadOnly, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	int16                                        BotCount;                                          // 0x66(0x2)(ConstParm, BlueprintVisible, ExportObject, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	uint16                                       TicksPerSecond;                                    // 0x68(0x2)(ConstParm, BlueprintVisible, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Ready;                                             // 0x6A(0x1)(ConstParm, Parm, OutParm, Transient, Config, EditConst, GlobalConfig, SubobjectReference)
	bool                                         Password;                                          // 0x6B(0x1)(Net, EditFixedSize, ZeroConstructor, ReturnParm, Transient)
	uint8                                        Pad_1047[0x4];                                     // Fixing Size After Last Property  > TateDumper <
	TArray<struct FModState>                     Mods;                                              // 0x70(0x10)(Edit, BlueprintReadOnly, Net, Parm, ReturnParm, DisableEditOnTemplate, Transient, EditConst, SubobjectReference)
	TArray<class FString>                        Tags;                                              // 0x80(0x10)(Edit, ConstParm, BlueprintVisible, ExportObject, BlueprintReadOnly, OutParm, ZeroConstructor, Config)
};

}


