#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class Overlay.Overlays
class UOverlays : public UObject
{
public:

	static class UClass* StaticClass();
	static class UOverlays* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Overlay.BasicOverlays
class UBasicOverlays : public UOverlays
{
public:
	TArray<struct FOverlayItem>                  Overlays;                                          // 0x28(0x10)(Edit, ExportObject, BlueprintReadOnly, Net, OutParm, ZeroConstructor, DisableEditOnTemplate, Transient, Config, DisableEditOnInstance, GlobalConfig)

	static class UClass* StaticClass();
	static class UBasicOverlays* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class Overlay.LocalizedOverlays
class ULocalizedOverlays : public UOverlays
{
public:
	class UBasicOverlays*                        DefaultOverlays;                                   // 0x28(0x8)(Edit, ExportObject, BlueprintReadOnly, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)
	TMap<class FString, class UBasicOverlays*>   LocaleToOverlaysMap;                               // 0x30(0x50)(Edit, Net, EditFixedSize, ReturnParm, DisableEditOnTemplate, DisableEditOnInstance, GlobalConfig, InstancedReference, SubobjectReference)

	static class UClass* StaticClass();
	static class ULocalizedOverlays* GetDefaultObj();

};

}


