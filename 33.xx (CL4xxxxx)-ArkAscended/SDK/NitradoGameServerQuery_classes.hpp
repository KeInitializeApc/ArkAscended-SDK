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
	uint8                                        Pad_13DE[0xC0];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bEnableReadyEndpoint;                              // 0xF0(0x1)(Edit, BlueprintVisible, ExportObject, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
	bool                                         bEnableQueryEndpoint;                              // 0xF1(0x1)(ExportObject, BlueprintReadOnly, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
	uint16                                       QueryPort;                                         // 0xF2(0x2)(Edit, ConstParm, Net, OutParm, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, EditConst, InstancedReference)
	bool                                         bEnablePlugin;                                     // 0xF4(0x1)(Edit, ConstParm, BlueprintVisible, ExportObject, Net, DisableEditOnTemplate, Config, EditConst, InstancedReference)
	uint8                                        Pad_13E0[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameServerQuerySubsystem* GetDefaultObj();

	bool Start();
	class FString SetVersion();
	class FString SetUniqueID();
	void SetTicksPerSecond(int32* TickCount);
	void SetServerName(class FString* Name);
	bool SetReady();
	void SetPlayerMax(int32 Count);
	void SetPlayerCount(int32 Count);
	void SetPasswordProtected(bool* Enabled);
	void SetMapName(class FString* Name);
	void Reset();
	class FString RemoveTag();
	enum class EPlatform RemovePlatform();
	void IncrementPlayerCount();
	void DecrementPlayerCount();
	class FString AddTag();
	enum class EPlatform AddPlatform();
	class FString AddModInfo(class FString* ID);
	class FString AddListenPortInfo(enum class EPortType Type, int32* Port);
};

}


