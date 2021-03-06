#include "stdafx.h"
#include "TTexture.h"
#include "TD3DDevice.h"

TTexture::TTexture(TD3DDevice* device):Device(device),TextureView(0)
{
}

TTexture::~TTexture(void)
{
}

int TTexture::CreateTexture(const TCHAR* TextureFileName)
{
	HRESULT hr;
	hr=D3DX11CreateShaderResourceViewFromFile( Device->GetDevice(),
		TextureFileName,
		NULL,
		NULL, 
		&TextureView, 
		NULL );
	if( FAILED(hr))
	{
		return 0;
	}
	this->CreateSampler();
	return 1;
}

int TTexture::CreateSampler()
{
	D3D11_SAMPLER_DESC SampleDesc;
	ZeroMemory( &SampleDesc, sizeof(SampleDesc) );
	SampleDesc.Filter = D3D11_FILTER_MIN_MAG_MIP_LINEAR;
	SampleDesc.AddressU = D3D11_TEXTURE_ADDRESS_WRAP;
	SampleDesc.AddressV = D3D11_TEXTURE_ADDRESS_WRAP;
	SampleDesc.AddressW = D3D11_TEXTURE_ADDRESS_WRAP;
	SampleDesc.ComparisonFunc = D3D11_COMPARISON_NEVER;
	SampleDesc.MinLOD = 0;
	SampleDesc.MaxLOD = D3D11_FLOAT32_MAX;
	if( FAILED( Device->GetDevice()->CreateSamplerState(&SampleDesc,&Sampler) ) )
	{
		return 0;
	}
	return 1;
}

void TTexture::PostTexture()
{
	ID3D11DeviceContext* DeviceContext = Device->GetDeviceContext();
	DeviceContext->PSSetSamplers(0,1,&Sampler);
	DeviceContext->PSSetShaderResources(0,1,&TextureView);
}

void TTexture::Release()
{
	SAFE_RELEASE(TextureView);
	SAFE_RELEASE(Sampler);
}
