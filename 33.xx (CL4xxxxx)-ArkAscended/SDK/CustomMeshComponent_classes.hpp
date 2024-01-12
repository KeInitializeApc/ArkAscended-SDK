#pragma once

// Dumped with TateDumper!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x6F0 - 0x6D8)
// Class CustomMeshComponent.CustomMeshComponent
class UCustomMeshComponent : public UMeshComponent
{
public:
	uint8                                        Pad_482[0x18];                                     // Fixing Size Of Struct > TateDumper <

	static class UClass* StaticClass();
	static class UCustomMeshComponent* GetDefaultObj();

	bool SetCustomMeshTriangles();
	void ClearCustomMeshTriangles();
	TArray<struct FCustomMeshTriangle> AddCustomMeshTriangles();
};

}


