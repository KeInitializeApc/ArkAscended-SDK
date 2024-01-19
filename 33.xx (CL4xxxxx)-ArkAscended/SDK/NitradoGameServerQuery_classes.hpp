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
	uint8                                        Pad_191A[0xC0];                                    // Fixing Size After Last Property  > TateDumper <
	bool                                         bEnableReadyEndpoint;                              // 0xF0(0x1)(ConstParm, ExportObject, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	bool                                         bEnableQueryEndpoint;                              // 0xF1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, EditFixedSize, Parm, OutParm, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	uint16                                       QueryPort;                                         // 0xF2(0x2)(ZeroConstructor, ReturnParm, Transient, Config, EditConst, SubobjectReference)
	bool                                         bEnablePlugin;                                     // 0xF4(0x1)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ZeroConstructor, Transient, Config, EditConst, SubobjectReference)
	uint8                                        Pad_191C[0x3];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UGameServerQuerySubsystem* GetDefaultObj();

	void Start(bool ReturnValue);
	class FString SetVersion();
	class FString SetUniqueID();
	void SetTicksPerSecond(int32 TickCount);
	void SetServerName(class FString* Name);
	void SetReady(bool Ready);
	void SetPlayerMax(int32* Count);
	void SetPlayerCount(int32* Count);
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
	int32 AddListenPortInfo(const class FString& Address);
};

}


