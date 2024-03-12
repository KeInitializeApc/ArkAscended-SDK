#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ImageWriteQueue.ImageWriteBlueprintLibrary
class UImageWriteBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UImageWriteBlueprintLibrary* GetDefaultObj();

	class FString ExportToDisk(const struct FImageWriteOptions& Options);
};

}


