#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xC8 (0xF8 - 0x30)
// Class NitradoGameServerQuery.GameServerQuerySubsystem
class UGameServerQuerySubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_FFF[0xC0];                                     // Fixing Size After Last Property  > TateDumper <
	bool                                         bEnableReadyEndpoint;                              // 0xF0(0x1)(ConstParm, ExportObject, BlueprintReadOnly, Net, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         bEnableQueryEndpoint;                              // 0xF1(0x1)(Edit, BlueprintVisible, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint16                                       QueryPort;                                         // 0xF2(0x2)(BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, ReturnParm, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	bool                                         bEnablePlugin;                                     // 0xF4(0x1)(Edit, ExportObject, EditFixedSize, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, SubobjectReference)
	uint8                                        Pad_1001[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameServerQuerySubsystem* GetDefaultObj();

	void Start(bool ReturnValue);
	class FString SetVersion();
	void SetUniqueID(const class FString& UniqueID);
	int32 SetTicksPerSecond();
	void SetServerName(class FString* Name);
	void SetReady(bool* Ready);
	int32 SetPlayerMax();
	int32 SetPlayerCount();
	bool SetPasswordProtected();
	void SetMapName(class FString* Name);
	void Reset();
	class FString RemoveTag();
	enum class EPlatform RemovePlatform();
	void IncrementPlayerCount();
	void DecrementPlayerCount();
	class FString AddTag();
	enum class EPlatform AddPlatform();
	class FString AddModInfo(class FString* ID);
	int32 AddListenPortInfo(enum class EPortType Type, class FString* Address);
};

}


