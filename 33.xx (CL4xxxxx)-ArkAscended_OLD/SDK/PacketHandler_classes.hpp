#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class PacketHandler.HandlerComponentFactory
class UHandlerComponentFactory : public UObject
{
public:

	static class UClass* StaticClass();
	static class UHandlerComponentFactory* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class PacketHandler.PacketHandlerProfileConfig
class UPacketHandlerProfileConfig : public UObject
{
public:
	TArray<class FString>                        Components;                                        // 0x28(0x10)(BlueprintVisible, Net, EditFixedSize, Parm, ZeroConstructor)

	static class UClass* StaticClass();
	static class UPacketHandlerProfileConfig* GetDefaultObj();

};

}


