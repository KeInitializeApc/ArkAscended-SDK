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
	uint8                                        Pad_1DA4[0xC0];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bEnableReadyEndpoint;                              // 0xF0(0x1)(Edit, ConstParm, ExportObject, Net, ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bEnableQueryEndpoint;                              // 0xF1(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, Transient, DuplicateTransient)
	uint16                                       QueryPort;                                         // 0xF2(0x2)(Edit, EditFixedSize, ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bEnablePlugin;                                     // 0xF4(0x1)(BlueprintVisible, ExportObject, BlueprintReadOnly, EditFixedSize, Parm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, EditConst, GlobalConfig, InstancedReference)
	uint8                                        Pad_1DA6[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameServerQuerySubsystem* GetDefaultObj();

	bool Start();
	class FString SetVersion();
	void SetUniqueID(const class FString& UniqueID);
	int32 SetTicksPerSecond();
	void SetServerName(class FString* Name);
	bool SetReady();
	void SetPlayerMax(int32* Count);
	void SetPlayerCount(int32* Count);
	void SetPasswordProtected(bool* Enabled);
	void SetMapName(class FString* Name);
	void Reset();
	void RemoveTag(class FString* Tag);
	void RemovePlatform(enum class EPlatform Platform);
	void IncrementPlayerCount();
	void DecrementPlayerCount();
	void AddTag(class FString* Tag);
	void AddPlatform(enum class EPlatform Platform);
	class FString AddModInfo(class FString* ID);
	class FString AddListenPortInfo();
};

}


